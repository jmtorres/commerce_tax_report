<?php

/**
* Implements hook_entity_property_info().
*/
function commerce_tax_report_entity_property_info() {
  $info = array();
  $properties = &$info['commerce_tax_report']['properties'];

  $properties['tax_report_id'] = array(
    'label' => t('Tax report id'),
    'type' => 'integer',
    'description' => t('The identifier for the tax report.'),
    'schema field' => 'tax_report_id',
  );
  $properties['order_id'] = array(
    'label' => t('Commerce order'),
    'type' => 'commerce_order',
    'description' => t('The Commerce order associated with the tax report.'),
    'schema field' => 'order_id',
  );
  $properties['type'] = array(
    'label' => t('Tax report type'),
    'type' => 'token',
    'description' => t('The tax report type.'),
    'schema field' => 'type',
  );
  $properties['created'] = array(
    'label' => t('Date created'),
    'type' => 'date',
    'description' => t('The date the tax report was created.'),
    'schema field' => 'created',
  );
  $properties['currency_code'] = array(
    'label' => t('Currency code'),
    'type' => 'text',
    'description' => t('The currency code.'),
    'schema field' => 'currency_code',
    'required' => TRUE,
  );
  $properties['tax_rate'] = array(
    'label' => t('Tax rate'),
    'type' => 'decimal',
    'description' => t('The tax rate expressed as a decimal fraction.'),
    'schema field' => 'tax_rate',
    'required' => TRUE,
  );
  $properties['taxable_amount'] = array(
    'label' => t('Taxable amount'),
    'type' => 'integer',
    'description' => t('The taxable amount.'),
    'schema field' => 'taxable_amount',
    'required' => TRUE,
  );
  $properties['tax_collected'] = array(
    'label' => t('Tax collected'),
    'type' => 'integer',
    'description' => t('The tax collected.'),
    'schema field' => 'tax_collected',
    'required' => TRUE,
  );

  return $info;
}
