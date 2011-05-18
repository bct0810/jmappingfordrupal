(function ($) {
  Drupal.behaviors.jMapping =  {
    attach: function(context, settings) {
      $('#map').height(400).jMapping();
    }
  };
})(jQuery);