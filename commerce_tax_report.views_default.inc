<?php

/**
 * Implements hook_views_default_views().
 */
function commerce_tax_report_views_default_views() {
  $views = array();

  $view = new view;
  $view->name = 'commerce_tax_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_tax_report';
  $view->human_name = 'Commerce tax report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tax report overview';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer commerce tax reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Commerce Tax Report: Commerce order */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_tax_report';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['required'] = 1;
  /* Field: Commerce Tax Report: Tax title */
  $handler->display->display_options['fields']['display_title']['id'] = 'display_title';
  $handler->display->display_options['fields']['display_title']['table'] = 'commerce_tax_rate';
  $handler->display->display_options['fields']['display_title']['field'] = 'display_title';
  $handler->display->display_options['fields']['display_title']['label'] = 'Tax';
  $handler->display->display_options['fields']['display_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['display_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['display_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['display_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['display_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['display_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['display_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['display_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['display_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['display_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['display_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['display_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['display_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['display_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['display_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['display_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['display_title']['hide_alter_empty'] = 1;
  /* Field: Commerce Tax Report: Tax rate */
  $handler->display->display_options['fields']['tax_rate']['id'] = 'tax_rate';
  $handler->display->display_options['fields']['tax_rate']['table'] = 'commerce_tax_report';
  $handler->display->display_options['fields']['tax_rate']['field'] = 'tax_rate';
  $handler->display->display_options['fields']['tax_rate']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tax_rate']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tax_rate']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tax_rate']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tax_rate']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tax_rate']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tax_rate']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tax_rate']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tax_rate']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tax_rate']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tax_rate']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tax_rate']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tax_rate']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['tax_rate']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tax_rate']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tax_rate']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tax_rate']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['tax_rate']['set_precision'] = 0;
  $handler->display->display_options['fields']['tax_rate']['precision'] = '0';
  $handler->display->display_options['fields']['tax_rate']['format_plural'] = 0;
  /* Field: SUM(Commerce Tax Report: Taxable amount) */
  $handler->display->display_options['fields']['taxable_amount']['id'] = 'taxable_amount';
  $handler->display->display_options['fields']['taxable_amount']['table'] = 'commerce_tax_report';
  $handler->display->display_options['fields']['taxable_amount']['field'] = 'taxable_amount';
  $handler->display->display_options['fields']['taxable_amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['taxable_amount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['taxable_amount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['taxable_amount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['taxable_amount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['taxable_amount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['taxable_amount']['hide_alter_empty'] = 1;
  /* Field: SUM(Commerce Tax Report: Tax collected) */
  $handler->display->display_options['fields']['tax_collected']['id'] = 'tax_collected';
  $handler->display->display_options['fields']['tax_collected']['table'] = 'commerce_tax_report';
  $handler->display->display_options['fields']['tax_collected']['field'] = 'tax_collected';
  $handler->display->display_options['fields']['tax_collected']['group_type'] = 'sum';
  $handler->display->display_options['fields']['tax_collected']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tax_collected']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tax_collected']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tax_collected']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tax_collected']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tax_collected']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tax_collected']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tax_collected']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tax_collected']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tax_collected']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tax_collected']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tax_collected']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tax_collected']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['tax_collected']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tax_collected']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tax_collected']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tax_collected']['hide_alter_empty'] = 1;
  /* Filter criterion: Commerce Tax Report: Date created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'commerce_tax_report';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['multiple'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['state']['value'] = array(
    'pending' => 'pending',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['reduce'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/commerce/tax-report';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tax report overview';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  $views[$view->name] = $view;

  return $views;
}
