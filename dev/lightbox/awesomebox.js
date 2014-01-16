/**
This script requires jquery
*/
jQuery('head').append('<link rel="stylesheet" type="text/css" href="../awesomebox.css">');
function awesomebox(selector) {
    'use strict';
    if (typeof jQuery === "undefined") {
        return;
    }
    var frame = jQuery("<div id=\"awesomeboxframe\"></div>");
    frame.appendTo(jQuery("body"));

    frame.hide();
    var elements = jQuery(selector);
    frame.click(function(ev){
        jQuery(frame.children()[0]).animate({'max-width':'0','max-height':'0'},function(){
            frame.fadeOut();
            frame.children().remove();

        });
        //frame.css("display","none");
    });
    jQuery.each(elements,
        function (n, e) {
            jQuery(e).click(function (ev) {
                e = jQuery(e);
                var img = e.clone();
                img.appendTo(frame);
                img.addClass('awesomebox-big');
                frame.fadeIn(400,function(){
                    img.animate({'max-width':'85%','max-height':'85%'});
                });
                //frame.css("display","block");
            });
        }
        );
}