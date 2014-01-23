$('.menu').on('click', '.has-subnav .topic', function(e) {
		//e.preventDefault();
		if ($(this).next('ul').is(':visible')) {
			$(this).next('ul').slideUp('fast');
			$(this).removeClass('active');
		} else {
			$(this).closest('ul').find('.active').next('ul').slideUp('fast');
			$(this).closest('ul').find('.active').removeClass('active');
			$(this).next().slideToggle('fast');
			$(this).addClass('active');
		}
});