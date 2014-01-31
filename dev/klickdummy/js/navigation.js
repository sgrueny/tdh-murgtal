/* set currently viewed site as active */

var loc = $(location).attr("href").split("/");
loc = loc[loc.length - 1];
if (loc.indexOf("#") > -1) {
	loc = loc.substring(0, loc.indexOf("#"));
}
$("a").each(function () {
		var href = $(this).attr("href");
		$(this).removeClass("active");
		
		if (href == loc) {
			$(this).addClass("active");
			if($(this).parent().parent().parent().hasClass("submenu")) {
				$(this).parent().parent().parent().parent().children("a").addClass("active");
			}
		}
	}
);


/* navigation hightlighting */

var lastActive;
var lastActiveSub;

if(sessionStorage.getItem('lastActive') != null) {
	lastActive = parseInt(sessionStorage.getItem('lastActive'));
} else {
	lastActive = $("nav>ul>li:has(a.active)").index();
	sessionStorage.setItem('lastActive',lastActive);
}
$($("nav>ul>li").get(lastActive)).children("a").addClass("active");
$("nav>ul>li").each(function() 
	{
		if($(this).index() != lastActive) {
			$(this).children("a").removeClass("active");
		}
	
		$(this).click(function()
			{
				if(sessionStorage.getItem('lastActive') != null) {
					lastActive = parseInt(sessionStorage.getItem('lastActive'));
					
					if(lastActive != -1) {
						$($("nav>ul>li").get(lastActive)).children("a").removeClass("active");
					}
				}
				$(this).children("a").addClass("active");
				
				if(!$(this).children("div").hasClass("submenu")) {
					if($($("nav>ul>li").get(lastActive)).children("div").hasClass("submenu")) {
						$($(".submenu>ul>li").get(lastActiveSub)).children("a").removeClass("active");
					}
					lastActiveSub = -1;
					sessionStorage.setItem('lastActiveSub',lastActiveSub);
				}
				
				lastActive = $(this).index();
				sessionStorage.setItem('lastActive',lastActive);

			}
		);
	}
);

/* subnavigation highlighting */
if(sessionStorage.getItem('lastActiveSub') != null) {
	lastActiveSub = parseInt(sessionStorage.getItem('lastActiveSub'));
} else {
	lastActiveSub = $(".submenu>ul>li:has(a.active)").index();
	sessionStorage.setItem('lastActiveSub',lastActiveSub);
}
$($(".submenu>ul>li").get(lastActiveSub)).children("a").addClass("active");
$(".submenu>ul>li").each(function()
	{
		if($(this).index() != lastActiveSub) {
			$(this).children("a").removeClass("active");
		}
		
		$(this).click(function()
			{
				if(sessionStorage.getItem('lastActiveSub') != null) {
					lastActiveSub = parseInt(sessionStorage.getItem('lastActiveSub'));
					
					if(lastActiveSub != -1) {
						$($(".submenu>ul>li").get(lastActiveSub)).children("a").removeClass("active");
					}
				}
			
				$(this).children("a").addClass("active");
				lastActiveSub = $(this).index();
				sessionStorage.setItem('lastActiveSub',lastActiveSub);
			}	
		);
	}
);
