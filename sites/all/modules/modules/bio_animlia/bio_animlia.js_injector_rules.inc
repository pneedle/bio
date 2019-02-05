<?php
/**
 * @file
 * bio_animlia.js_injector_rules.inc
 */

/**
 * Implements hook_js_injector_rule().
 */
function bio_animlia_js_injector_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'expand collapse';
  $rule->admin_description = 'Expand-Collapse';
  $rule->js = '(function ($) {  

$(document).ready(function() {
    // Configure/customize these variables.
    var showChar = 0; // How many characters are shown by default
    var ellipsestext = "additional information";
    var moretext = "Click to expand";
    var lesstext = "Click to collapse";


    $(\'.more\').each(function() {
        var content = $(this).html();

        if(content.length > showChar) {

            var c = content.substr(0, showChar);
            var h = content.substr(showChar, content.length - showChar);

            var html = c + \'<span class="moreellipses">\' + ellipsestext+ \'&nbsp;</span><span class="morecontent"><span>\' + h + \'</span>&nbsp;&nbsp;<a href="" class="morelink">\' + moretext + \'</a></span>\';

            $(this).html(html);
        }

    });

    $(".morelink").click(function(){
        if($(this).hasClass("less")) {
            $(this).removeClass("less");
            $(this).html(moretext);
        } else {
            $(this).addClass("less");
            $(this).html(lesstext);
        }
        $(this).parent().prev().toggle();
        $(this).prev().toggle();
        return false;
    });
$(".morecontent span").css("display", "none");
$(".morelink").css("display", "block");
})
})(jQuery);';
  $rule->position = 'header';
  $rule->preprocess = 0;
  $rule->inline = 1;
  $rule->page_visibility = 0;
  $rule->page_visibility_pages = '';
  $export['expand collapse'] = $rule;

  return $export;
}
