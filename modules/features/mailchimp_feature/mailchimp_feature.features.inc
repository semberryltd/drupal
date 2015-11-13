<?php
/**
 * @file
 * mailchimp_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mailchimp_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_list().
 */
function mailchimp_feature_default_mailchimp_list() {
  $items = array();
  $items['legend_bulletin'] = entity_import('mailchimp_list', '{
    "name" : "legend_bulletin",
    "mc_list_id" : "9f6554a879",
    "label" : "LEGEND Bulletin",
    "description" : "",
    "settings" : {
      "roles" : {
        "2" : 2,
        "111731461" : 111731461,
        "25521343" : 25521343,
        "111903910" : 111903910,
        "30037204" : 30037204,
        "1" : 1
      },
      "mergefields" : {
        "EMAIL" : "mail",
        "FNAME" : "field-firstname",
        "LNAME" : "field-lastname"
      },
      "mergefields_display" : { "EMAIL" : true, "FNAME" : 1, "LNAME" : 1 },
      "doublein" : 1,
      "show_register_form" : 1,
      "default_register_form_optin" : 1,
      "show_account_form" : 1,
      "form_label" : "LEGEND Bulletin",
      "submit_label" : "Subscribe",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 1,
      "required" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
