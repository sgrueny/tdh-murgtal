/**
This script requires jquery and jquery mobile
*/
function viewport(){
    var e = window;
    var a = 'inner';
    if (!('innerWidth' in window)){
        a = 'client';
        e = document.documentElement || document.body;
    }
    return { width : e[ a+'Width' ] , height : e[ a+'Height' ] }
}

var isMobile = {
    Android: function() {
        return navigator.userAgent.match(/Android/i);
    },
    BlackBerry: function() {
        return navigator.userAgent.match(/BlackBerry/i);
    },
    iOS: function() {
        return navigator.userAgent.match(/iPhone|iPad|iPod/i);
    },
    Opera: function() {
        return navigator.userAgent.match(/Opera Mini/i);
    },
    Windows: function() {
        return navigator.userAgent.match(/IEMobile/i);
    }
    ,
    any: function() {
        return (isMobile.Android() || isMobile.BlackBerry() || isMobile.iOS() || isMobile.Opera() || isMobile.Windows()) ;
    }
};
if(!awesomeboxconfig){
	var awesomeboxconfig = {
		mobilecss : "css/awesomebox_mobile.css",
		desktopcss: "css/awesomebox.css"
	}
}
var awesomeboxtemplate = undefined;
function awesomebox(selector) {
    'use strict';
    var self = this;    
    var frameid = "#awesomeboxframe";
    if (typeof jQuery === "undefined") {
        return;
    }
    if(typeof awesomeboxtemplate === "undefined"){
        awesomeboxtemplate = jQuery(frameid);
        awesomeboxtemplate.remove();
    }
    self.box = awesomeboxtemplate.clone().removeAttr("id").appendTo("body");
    self.elements = jQuery(selector);
    self.list = self.box.find(".itemlist");
    self.innerFrame = self.box.find('.innerframe');
    self.litmpl = self.box.find(".listitem").remove();
    self.currentcont = self.box.find(".currentitem");
    self.close = self.box.find(".close");
    self.listcontainer = self.box.find(".listcontainer");
    self.scrollbox = self.box.find('.scrollbox');
    self.scrollindex = 0;
    self.scrollleft = self.box.find('.scrollleft');
    self.scrollright = self.box.find('.scrollright');
    self.box.hide();
    this.changeCurrent = function (el){
        var oldcur = self.currentEl;
        self.currentEl = el;
        self.currentcont.children().remove();
        self.currentcont.append(el.clone().children()[0]);
        if(!navigator.userAgent.match(/MSIE/i)){
            self.list.find('.active').removeClass('active');
            el.addClass('active');
        }
        else{
            if(oldcur)
                oldcur.css({"opacity":".4"});
            el.css({"opacity":"1"});
        }
        if(isMobile.any()){
            var width = document.documentElement.clientWidth;
            var height = document.documentElement.clientHeight;
            this.currentcont.css({"width":width,"height":height});   
            var child = jQuery(this.currentcont.children()[0]);
            var childwidth = child.width()/width;
            var childheight = child.height()/height;
            self.imgLeft.css("line-height",document.documentElement.clientHeight+"px");
            self.imgRight.css("line-height",document.documentElement.clientHeight+"px");
            if(childwidth<childheight){
                child.css({"height":"100%"});
            }
            else {
                 child.css({"width":"100%"});
            }                
        }

    }
    this.show = function(){
        if(isMobile.any()){
            jQuery('body>*').hide();    
        }
        self.box.fadeIn(); 
        
        if(self.swipediv)
            self.swipediv.show();
        
        self.listContReSize();
        if(!isMobile.any()){
            if(self.box.width()>self.list.width()){
                self.box.find('.scrollleft').hide();
                self.box.find('.scrollright').hide();
            }
            else 
            {
                self.box.find('.scrollleft').show();
                self.box.find('.scrollright').show();
                         
            }
        }
        self.box.on('click',self.hide);
        self.innerFrame.on('click',function(e){
            e.stopPropagation();
        });
    }
    jQuery(document).keypress(function(e) { 
        if (e.keyCode == 27) { self.hide(); }  // esc   (does not work)
    });
    this.hide = function(){
        if(isMobile.any()){
            jQuery('body>*').show();    
        }
        if(self.swipediv)
            self.swipediv.hide();
        self.box.fadeOut();   

    }
    self.close.on('click',function(ev){
        ev.preventDefault();
        ev.stopPropagation();
        self.hide()
    });
    jQuery.each(self.elements,function(n,e){
        e = jQuery(e);
        var li = self.litmpl.clone().append(e.clone()).appendTo(self.list);
        li.on('click',function(ev){
            self.changeCurrent(li);
        });
        e.on('click',function(ev){
            self.show();
            li.click();
        });
    });
    this.listContReSize = function(){
        var lis = self.list.find('li');
        var width = 0;
        jQuery.each(lis,function(n,e){
            //jQuery(e).width(jQuery(e).firstChild().width());
            width += jQuery(e).outerWidth(true);
        });
        self.list.width(Math.ceil(width))
        self.scrollright.css({'line-height':self.list.height()+"px"});
        self.scrollleft.css({'line-height':self.list.height()+"px"});
        
        
    }
    this.scrollBy = function(vector){
        var newIndex = self.scrollindex +vector;
        var i = newIndex;
        var lis = self.list.children();
        var scrollDelta = 0;
        while(i != self.scrollindex){
            scrollDelta += jQuery(lis[i]).outerWidth(true);
            if(newIndex < self.scrollindex){
                i++;   
            }
            else 
            {
                i--;
            }
        }
        if(vector <0){
            scrollDelta = scrollDelta*-1;
        }
        //self.scrollbox.animate({"scrollLeft":self.scrollbox.scrollLeft()+scrollDelta});
	self.scrollbox.scrollLeft(self.scrollbox.scrollLeft()+scrollDelta);
        self.scrollindex = newIndex;
    }
    self.scrollbox.scrollLeft(0);
    self.scrollleft.on('click',function(ev){
        self.scrollBy(-1);
        ev.stopPropagation();
        ev.preventDefault();
    });
    self.scrollright.on('click',function(ev){
        self.scrollBy(1);
        ev.stopPropagation();
        ev.preventDefault();
    });
    if(isMobile.any()){
        self.swipediv = jQuery("<div class=\"swipediv\">").appendTo("body");
        self.swipediv.on('swipeleft',function(ev){
            ev.preventDefault();
            ev.stopPropagation();
            var e =   self.currentEl.next();
            if(e)
                e.click();
        });
        
        self.swipediv.on('swiperight',function(ev){
            ev.preventDefault();
            ev.stopPropagation();
            var e = self.currentEl.prev();
            if(e)
                e.click();
        });
        self.mobileBar = jQuery("<div class=\"mobilecontrolbar\">");
        self.swipediv.append(self.mobileBar);
        var height = document.documentElement.clientHeight/20;
        var width = document.documentElement.clientWidth;
        self.mobileBar.css({"width":width,"height":height});
        self.close.appendTo(self.mobileBar);
        self.close.html("");
        self.imgLeft = jQuery("<div class=\"imgLeft\">").appendTo(self.swipediv);
        self.imgRight = jQuery("<div class=\"imgRight\">").appendTo(self.swipediv);
        self.imgLeft.on("click",function(ev){
            ev.preventDefault();
            ev.stopPropagation();
            var e = self.currentEl.prev();
            if(e)
                e.click();
        });
        self.imgRight.on("click",function(ev){
            ev.preventDefault();
            ev.stopPropagation();
            var e = self.currentEl.next();
            if(e)
                e.click();
        });
        self.imgRight.html(self.scrollright.html());
        self.imgLeft.html(self.scrollleft.html());
        
    }
}


if(isMobile.any()){
    jQuery('head').append('<link rel="stylesheet" type="text/css" href="'+awesomeboxconfig.mobilecss+'">');
}
else
{
    jQuery('head').append('<link rel="stylesheet" type="text/css" href="'+awesomeboxconfig.desktopcss+'">');
}
