<?php
/**
 * @file
 * Country page template
 *
 * The Landportal landbook
 *
 * Original work by: WESO (http://www.weso.es/)
 * Drupal refactoring: Jules <jules@ker.bz>
 */


?>

<input type="hidden" id="entity-id" value="<?php echo $data['entity-id']; ?>" />
<input type="hidden" id="path" value="" />
<input type="hidden" id="continent-id" value="<?php echo $data['info']['region']['un_code']; ?>" />
<input type="hidden" id="continent-name" value="<?php echo $data['info']['region']['name']; ?>" />
<input type="hidden" id="country-name" value="<?php echo $data['info']['name']; ?>" />
<input type="hidden" id="un-code" value="<?php echo $data['info']['iso3']; ?>" />
<input type="hidden" id="starred-indicators" value="<?php $si=''; foreach($data['starred']['indicators'] as $indicators): $si .= ($si? ',':'').$indicators['id']; endforeach; echo $si; ?>" />
<div class="content main-content container">
	<div class="row">
		<div class="col-sm-12">
			<h1 class="country-name"><span class="country-name no-margin flag"><img id="flag" class="flag" src="/<?php echo drupal_get_path('theme', 'landportal'); ?>/images/flags/<?php echo $data['info']['iso3']; ?>.png" /><?php echo $data['info']['name']; ?></span></h1>
		</div>
	</div>
	<div class="row">


  <!-- Left / First Sidebar -->
  <div class="col-sm-3">


    <div id="world-map" class="world-map"></div>
    <h2 class="section"><span><?php echo t('Country map'); ?></span></h2>
    <div id="country-map" class="country-map"></div>
    <h2 class="section"><span><?php echo t('Main Index rankings'); ?></span></h2>
    <div id="main-index-rankings" class="graph">
<?php foreach ($data['charts']['spider'] as $c): ?>
      <div class="source-graph chart-content">
        {{>table}}
<?php if (!$c): ?>
        <div class="text-center text-muted"><?php echo t('No data available'); ?></div>
<?php endif; ?>
      </div>
<?php endforeach; /* charts */ ?>

      <ul class="spider-legend">
<?php foreach ($data['charts']['spider']['observations'] as $o): ?>
        <li>
          <span class="spider-legen-id"><?php echo $o['indicator']['id']; ?></span>: <?php echo $o['indicator']['name']; ?>
        </li>
      </ul>
<?php endforeach; /* charts/spider/observations */ ?>
    </div>

    <h2 class="section"><span><?php echo t('Gender issues'); ?></span></h2>
      <table class="traffic">
<?php foreach ($data['charts']['trafficLights'] as $c): ?>
        <tr class="{{^light}}text-muted{{/light}}">
          <td class="issue"><?php echo $c['indicator']; ?></td>
          <td><div class="circle"><div class="{{light}}"></div></div></td>
        </tr>
<?php endforeach; /* charts/trafficLights */ ?>
      </table>


			<div class="row traffic-legend">
				<div class="col-xs-6">
					<div class="circle"><div class="none"></div></div>
                          <span><?php echo t('No data'); ?></span>
				</div>
				<div class="col-xs-6">
					<div class="circle"><div class="bad"></div></div>
                          <span><?php echo t('High inequality'); ?></span>
				</div>
				<div class="col-xs-6">
					<div class="circle"><div class="same"></div></div>
                          <span><?php echo t('Mid inequality'); ?></span>
				</div>
				<div class="col-xs-6">
					<div class="circle"><div class="good"></div></div>
                          <span><?php echo t('Low inequality'); ?></span>
				</div>
			</div>

                          <h2 class="section"><span><?php t('Rural development'); ?></span></h2>
		  <div class="row">
<?php foreach ($data['charts']['gaugeIndicators'] as $c): ?>
					<div class="col-xs-4">
					  <div id="rural-development-<?php echo $c['index']; ?>" class="graph-small text-center no-signature">
			        <div class="source-graph chart-content">
				        {{>table}}
			        </div>
						</div>
                                <p class="percentage"><?php echo $c['value']; ?>%</p>
                                <p class="indicator-name"><?php echo $c['indicator']; ?></p>
					</div>
<?php endforeach; /* charts/gaugeIndicators */ ?>
	  	</div>


			<div class="row">
				<div class="col-xs-12">
					<p class="chart-source text-right">
                          <?php echo t('Source'); ?>: <a href="/book/sources/fao">FAO</a>
					</p>
				</div>
			</div>


		</div>
	  <div class="col-sm-6 graph-section">
                          <h2 class="section"><span><?php echo t('Socio-economic values'); ?></span></h2>
          <div class="socioeconomic-values chart-content">
<?php foreach ($data['charts']['tableIndicators'] as $c): ?>

                    {{>table}}
<?php endforeach; /* charts/tableIndicators */ ?>

						<p class="chart-source text-right">
              <?php echo t('Source'); ?>: <a href="/book/sources/worldbank"><?php echo t('World bank'); ?></a>
						</p>
        </div>


  <!-- main content (central) -->
              <h2 class="section section-name"><span class="indicator-name"></span><span> </span><span><?php echo t('For countries'); ?></span></h2>
		  <div id="mapDiv" class="map-medium indicator-map"></div>
		  <div id="chart-region-bar-comparison" class="graph-medium"></div>
              <h2 class="section section-name"><span class="indicator-name"></span><span> </span><span><?php echo t('Across time'); ?></span><span> </span><span class="country-name"><?php echo $data['info']['name']; ?></span></h2>
		  <div class="row">
              <div class="col-xs-4"><?php echo t('Compare with'); ?></div>
			<div class="col-xs-8 compare-bar">
			  <select id="country-comparing-select" class="form-control">
<?php foreach ($data['selectors']['countries'] as $c): ?>
                            <option value="<?php echo $c['iso3']; ?>" data-region="<?php echo $c['region']; ?>"
  <?php if (!$c['data']) { echo ' disabled="disabled"'; } ?>><?php echo $c['name']; ?></option>
<?php endforeach; /* selectors/countries */ ?>
			  </select>
			</div>
		  </div>

			<div class="row compare-legend">
				<div class="col-xs-6">
					<div id="compare-legend-circle-1" class="circle"></div>
					<span id="compare-legend-text-1"></span>
				</div>
				<div class="col-xs-6">
					<div id="compare-legend-circle-2" class="circle"></div>
					<span id="compare-legend-text-2"></span>
				</div>
			</div>
		  <div id="chart-timeline-comparison" class="graph">

            {{#charts}}
            	<div class="source-graph chart-content">
	                {{#employment-timeline}}
	                    {{>table}}
	                {{/employment-timeline}}
            	</div>
            {{/charts}}
          </div>
          <h2 class="section section-wide"><span><strong><?php echo t('tendencies'); ?></strong></span></h2>
<?php foreach ($data['starred']['topics'] as $c): ?>
          <h2 class="section"><span><?php echo $c['name']; ?></span></h2>
          <div class="row evolutions">
  <?php foreach ($c['indicators'] as $i): ?>
            <div class="col-xs-6 col-md-3 no-signature">
              <div id="starred_<?php echo $i['id']; ?>" class="graph-small"></div>
              <p class="indicator-name"><?php echo $i['name']; ?></p>
            </div>
  <?php endforeach; ?>
          </div>
<?php endforeach; /* starred/topics */ ?>

        </div>


              <!-- Right / second Sidebar -->
	  <div class="col-sm-3">



<?php /* SAME SNIPET IN country & regions.tpl.php */ ?>
<h2 class="section"><span><?php echo t('Data sources'); ?></span></h2>
<select id="source-select" multiple="multiple" class="data-sources">
<?php foreach ($data['selectors']['data-sources'] as $d): ?>
    <option value="<?php echo $d['id']; ?>" title="<?php echo $d['name']; ?>"><?php echo $d['name']; ?></option>
<?php endforeach; ?>
  </select>



<?php /* SAME SNIPET IN country & regions.tpl.php */ ?>
<h2 class="section"><span><?php echo t('Indicators'); ?></span></h2>
<div>
<?php foreach ($data['selectors']['data-sources'] as $d): ?>
  <select data-source="<?php echo $d['id']; ?>" class="form-control topic-indicator-select data-sources hidden" multiple="multiple">
<?php foreach ($d['indicators'] as $i): ?>
    <option value="<?php echo $i['id']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
  </select>
<?php endforeach; ?>
</div>
<select id="indicator-select" multiple="multiple" class="form-control data-sources"></select>



			<a href="/book/countries/<?php echo $data['entity-id']; ?>/details">
			  <button id="full-data-button" class="btn data-button">
                                  <?php echo t('Full data'); ?> <span class="country-name"><?php echo $data['info']['name']; ?></span>
				</button>
			</a>
                                  <a href="/book/indicators" class="more-info"><?php echo t('More about the indicators');?></a>
                                  <h2 class="section"><span><?php echo t('Specific country'); ?></span></h2>
		  <select id="country-select" class="form-control">
                                  <option disabled="disabled" selected="true"><?php echo t('Select a country'); ?></option>
<?php foreach ($data['selectors']['countries'] as $i): ?>
  <option value="<?php echo $i['iso3']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
		  </select>
		  <a href="/book/countries" class="more-info"><?php echo t('More about areas and countries'); ?></a>
			<a href="http://legacy.landportal.info/area/<?php echo $data['info']['name']; ?>" target="_blank">
		  <button class="btn data-button-dark">
                          <?php echo t('Consult the landlibrary (new version coming soon)'); ?>
		  </button></a>
		  <a href="/search/site/<?php echo $data['info']['name']; ?>">
                          <button class="btn data-button-dark"><?php echo t('Debate with others'); ?></button>
			</a>
	  </div>
	</div>
</div>

