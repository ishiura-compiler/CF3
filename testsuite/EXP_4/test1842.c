
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x16 = UINT32_MAX;
static volatile int64_t x27 = INT64_MIN;
int32_t x42 = 4157;
uint16_t x45 = 6225U;
int64_t x47 = -54566071LL;
int32_t t5 = 1733;
int32_t t9 = 355949;
uint8_t x80 = UINT8_MAX;
int64_t x81 = INT64_MIN;
int32_t t12 = -55537380;
int64_t x85 = 2034988LL;
uint8_t x88 = 2U;
static uint8_t x91 = 127U;
int64_t x93 = INT64_MAX;
volatile int64_t x104 = 50LL;
uint8_t x108 = 2U;
int64_t x109 = INT64_MAX;
int64_t x120 = INT64_MIN;
volatile int8_t x122 = INT8_MAX;
int32_t x123 = INT32_MAX;
uint64_t x141 = 459504927524500640LLU;
uint64_t x152 = 3988LLU;
static int64_t x167 = INT64_MIN;
static int32_t x179 = -9243;
static volatile int32_t t25 = -1605;
uint8_t x194 = 7U;
uint32_t x202 = UINT32_MAX;
uint64_t x203 = UINT64_MAX;
uint64_t x220 = 1359LLU;
volatile int64_t x231 = -2LL;
int32_t x251 = INT32_MIN;
volatile int32_t t36 = -9;
uint32_t x267 = UINT32_MAX;
static uint32_t x274 = 8U;
static int64_t x294 = 487151827442008LL;
volatile int64_t x304 = INT64_MAX;
volatile int16_t x321 = -6921;
volatile uint64_t x324 = 282435945277LLU;
volatile int32_t t43 = 1;
volatile uint8_t x330 = 33U;
uint32_t x341 = 1556950U;
volatile int8_t x347 = 2;
int16_t x348 = INT16_MIN;
uint64_t x358 = 7693LLU;
int8_t x359 = -1;
int32_t x367 = INT32_MAX;
volatile int32_t x377 = -1;
volatile int32_t t49 = 44829;
volatile int32_t t57 = -39661120;
volatile int32_t x429 = -1343903;
int32_t t59 = -293840337;
int16_t x447 = -3;
uint16_t x448 = 60U;
int32_t t60 = -4743409;
static uint32_t x456 = 763518U;
volatile int8_t x457 = 6;
static uint8_t x458 = 1U;
int16_t x474 = 4564;
int8_t x479 = 11;
volatile int32_t x480 = -1;
int64_t x489 = -1LL;
int64_t x493 = INT64_MIN;
int16_t x508 = INT16_MIN;
uint64_t x533 = UINT64_MAX;
uint32_t x541 = UINT32_MAX;
volatile int32_t t74 = 0;
int8_t x559 = INT8_MAX;
int32_t x588 = INT32_MIN;
int64_t x597 = -1LL;
uint16_t x606 = 4U;
static int8_t x616 = -1;
int64_t x650 = 3824847LL;
int64_t x652 = INT64_MIN;
int32_t x664 = INT32_MIN;
uint16_t x667 = 800U;
volatile int32_t x672 = 1;
int32_t t87 = 15;
uint16_t x677 = 77U;
int32_t t89 = -2;
int16_t x684 = INT16_MIN;
uint64_t x694 = UINT64_MAX;
int64_t x701 = INT64_MIN;
int8_t x714 = 25;
static int32_t t93 = 22843;
uint16_t x723 = UINT16_MAX;
int32_t t95 = -56;
static int32_t x751 = -33001807;
uint64_t x761 = 30LLU;
int8_t x765 = -1;
uint16_t x766 = 0U;
uint64_t x768 = 133452429789LLU;
volatile int32_t t100 = 777949;
uint16_t x790 = 15U;
int8_t x797 = INT8_MAX;
uint16_t x800 = UINT16_MAX;
volatile uint64_t x840 = UINT64_MAX;
volatile uint64_t x841 = 15795573723785379LLU;
uint16_t x842 = 0U;
int8_t x846 = INT8_MAX;
uint8_t x849 = UINT8_MAX;
uint64_t x863 = 161581LLU;
static int8_t x879 = INT8_MIN;
uint64_t x890 = 13LLU;
volatile int32_t t113 = -102623;
int16_t x904 = -1;
uint8_t x923 = 109U;
int16_t x950 = 48;
static volatile int32_t t119 = -13839;
volatile int32_t t120 = -1618261;
uint8_t x979 = 4U;
volatile int32_t t126 = 7239778;
uint64_t x1012 = 713LLU;
int32_t x1017 = -1;
int32_t x1019 = -498127050;
int16_t x1023 = INT16_MAX;
uint32_t x1024 = 2U;
int32_t x1025 = INT32_MIN;
int16_t x1026 = INT16_MAX;
int16_t x1049 = -344;
uint64_t x1065 = 136256LLU;
volatile uint32_t x1075 = UINT32_MAX;
volatile int16_t x1086 = INT16_MAX;
static int32_t x1105 = INT32_MIN;
uint32_t x1106 = 113890U;
int32_t t139 = 0;
static volatile int64_t x1114 = 15LL;
uint64_t x1116 = UINT64_MAX;
uint64_t x1175 = 5652LLU;
int32_t t144 = 3;
volatile int8_t x1179 = -24;
volatile int32_t t145 = 0;
static volatile uint64_t x1194 = 81LLU;
uint64_t x1197 = 8909969449982787324LLU;
int32_t t147 = -3161;
volatile uint32_t x1206 = 831509125U;
volatile int32_t x1207 = INT32_MIN;
volatile uint16_t x1213 = UINT16_MAX;
static int32_t x1215 = INT32_MAX;
static volatile int32_t t150 = 0;
uint32_t x1217 = 63664327U;
volatile int16_t x1221 = INT16_MAX;
int8_t x1234 = INT8_MAX;
int8_t x1264 = INT8_MIN;
volatile int16_t x1293 = INT16_MIN;
volatile uint8_t x1294 = 105U;
volatile uint32_t x1311 = 8982040U;
int64_t x1312 = INT64_MAX;
uint64_t x1319 = 865260529557LLU;
int64_t x1320 = -1LL;
int32_t t162 = 1073085825;
int32_t x1323 = INT32_MAX;
volatile int32_t t163 = -116;
uint8_t x1351 = 92U;
static int16_t x1352 = INT16_MIN;
uint64_t x1356 = 279517316822509735LLU;
volatile uint64_t x1359 = 566LLU;
volatile int64_t x1379 = INT64_MIN;
int32_t t169 = -89339;
uint16_t x1387 = 3265U;
uint16_t x1392 = UINT16_MAX;
int32_t t171 = -577;
int16_t x1397 = INT16_MIN;
uint16_t x1398 = UINT16_MAX;
volatile int32_t t172 = -4330;
volatile uint64_t x1413 = UINT64_MAX;
volatile uint64_t x1416 = UINT64_MAX;
volatile uint8_t x1438 = 8U;
int16_t x1439 = -52;
static volatile int64_t x1449 = INT64_MIN;
static uint8_t x1450 = UINT8_MAX;
uint32_t x1457 = 3890U;
volatile int32_t x1461 = INT32_MAX;
int32_t x1469 = -6636589;
int8_t x1472 = INT8_MAX;
volatile int64_t x1477 = INT64_MAX;
uint64_t x1484 = 23378366641LLU;
uint32_t x1506 = 10048346U;
int64_t x1543 = INT64_MAX;
int8_t x1556 = -2;
int32_t x1558 = 3;
int16_t x1563 = -1;
int16_t x1582 = 446;
static uint32_t x1584 = 26810U;
uint8_t x1595 = UINT8_MAX;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int32_t x2 = 1;
	int32_t x3 = -35443634;
	int16_t x4 = -15992;
	int32_t t0 = 32948457;

    t0 = (x1==(x2<<(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x9 = 123U;
	uint8_t x10 = 24U;
	int8_t x11 = INT8_MIN;
	static uint16_t x12 = 244U;
	volatile int32_t t1 = 864674369;

    t1 = (x9==(x10<<(x11<=x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = -252362497;
	int32_t x14 = 2478638;
	uint64_t x15 = 1006022LLU;
	static int32_t t2 = -3;

    t2 = (x13==(x14<<(x15<=x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x25 = -1;
	int8_t x26 = 35;
	int32_t x28 = INT32_MIN;
	volatile int32_t t3 = 363;

    t3 = (x25==(x26<<(x27<=x28)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x41 = UINT8_MAX;
	static int32_t x43 = 1420804;
	static volatile int32_t x44 = 0;
	int32_t t4 = -13850479;

    t4 = (x41==(x42<<(x43<=x44)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x46 = 1LLU;
	int16_t x48 = INT16_MIN;

    t5 = (x45==(x46<<(x47<=x48)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x49 = UINT32_MAX;
	uint8_t x50 = UINT8_MAX;
	int32_t x51 = -1;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t6 = 3829349;

    t6 = (x49==(x50<<(x51<=x52)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x53 = 4068U;
	int32_t x54 = INT32_MAX;
	int64_t x55 = INT64_MIN;
	static uint64_t x56 = 6455002167180673LLU;
	volatile int32_t t7 = 118;

    t7 = (x53==(x54<<(x55<=x56)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x57 = INT32_MAX;
	uint16_t x58 = 24941U;
	volatile int32_t x59 = INT32_MAX;
	uint64_t x60 = 6111646LLU;
	int32_t t8 = 8803312;

    t8 = (x57==(x58<<(x59<=x60)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x69 = -1;
	int8_t x70 = 9;
	static int16_t x71 = 1;
	int8_t x72 = INT8_MIN;

    t9 = (x69==(x70<<(x71<=x72)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x73 = 961LLU;
	int8_t x74 = INT8_MAX;
	volatile int32_t x75 = -252;
	uint64_t x76 = 847413746LLU;
	volatile int32_t t10 = 241549;

    t10 = (x73==(x74<<(x75<=x76)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x77 = 850;
	int32_t x78 = 1;
	int16_t x79 = -2;
	static volatile int32_t t11 = -46139;

    t11 = (x77==(x78<<(x79<=x80)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x82 = 1U;
	int16_t x83 = -1;
	static volatile uint8_t x84 = 4U;

    t12 = (x81==(x82<<(x83<=x84)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x86 = UINT32_MAX;
	static int16_t x87 = INT16_MIN;
	volatile int32_t t13 = -9135223;

    t13 = (x85==(x86<<(x87<=x88)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x89 = -7077127;
	volatile uint32_t x90 = 62478U;
	static int64_t x92 = -1LL;
	static int32_t t14 = 400953;

    t14 = (x89==(x90<<(x91<=x92)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x94 = INT64_MAX;
	volatile uint32_t x95 = UINT32_MAX;
	uint16_t x96 = 3U;
	static volatile int32_t t15 = -6608;

    t15 = (x93==(x94<<(x95<=x96)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x101 = 2;
	int32_t x102 = INT32_MAX;
	static uint8_t x103 = UINT8_MAX;
	volatile int32_t t16 = -13267184;

    t16 = (x101==(x102<<(x103<=x104)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x105 = INT64_MAX;
	uint32_t x106 = 601726U;
	volatile uint64_t x107 = 15999441035701LLU;
	int32_t t17 = 977;

    t17 = (x105==(x106<<(x107<=x108)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x110 = INT16_MAX;
	int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MIN;
	int32_t t18 = -18;

    t18 = (x109==(x110<<(x111<=x112)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x117 = 0;
	static int8_t x118 = INT8_MAX;
	static int32_t x119 = INT32_MIN;
	int32_t t19 = 62446;

    t19 = (x117==(x118<<(x119<=x120)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x121 = INT8_MAX;
	uint32_t x124 = UINT32_MAX;
	int32_t t20 = 113975;

    t20 = (x121==(x122<<(x123<=x124)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x142 = 4504;
	int64_t x143 = INT64_MIN;
	static int16_t x144 = -1;
	int32_t t21 = -5725360;

    t21 = (x141==(x142<<(x143<=x144)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x149 = 169718198461675LL;
	volatile int8_t x150 = 7;
	volatile int32_t x151 = -1;
	volatile int32_t t22 = -570512;

    t22 = (x149==(x150<<(x151<=x152)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x157 = -1LL;
	uint64_t x158 = UINT64_MAX;
	uint32_t x159 = UINT32_MAX;
	static int64_t x160 = INT64_MAX;
	static volatile int32_t t23 = 7;

    t23 = (x157==(x158<<(x159<=x160)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x165 = 79606947LLU;
	uint64_t x166 = 7980706336549438890LLU;
	int16_t x168 = INT16_MIN;
	int32_t t24 = -1;

    t24 = (x165==(x166<<(x167<=x168)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x177 = 893924LLU;
	uint8_t x178 = 1U;
	int8_t x180 = -13;

    t25 = (x177==(x178<<(x179<=x180)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x193 = -1;
	int8_t x195 = 0;
	volatile uint64_t x196 = 125729440721LLU;
	static int32_t t26 = -1;

    t26 = (x193==(x194<<(x195<=x196)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x197 = 17139U;
	int8_t x198 = 1;
	int64_t x199 = INT64_MIN;
	int16_t x200 = INT16_MAX;
	volatile int32_t t27 = 44699;

    t27 = (x197==(x198<<(x199<=x200)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x201 = 796268LL;
	static int8_t x204 = 3;
	int32_t t28 = 27;

    t28 = (x201==(x202<<(x203<=x204)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x205 = -14;
	volatile int16_t x206 = 151;
	int64_t x207 = -1LL;
	uint64_t x208 = 8802301808514727LLU;
	static volatile int32_t t29 = -434099;

    t29 = (x205==(x206<<(x207<=x208)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x209 = -1;
	int32_t x210 = 611;
	int8_t x211 = 1;
	int32_t x212 = 225196589;
	int32_t t30 = 840890553;

    t30 = (x209==(x210<<(x211<=x212)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x213 = INT64_MIN;
	volatile int8_t x214 = INT8_MAX;
	int16_t x215 = 1986;
	uint8_t x216 = 6U;
	int32_t t31 = 24135420;

    t31 = (x213==(x214<<(x215<=x216)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x217 = 6156528868143LLU;
	int8_t x218 = 51;
	volatile uint32_t x219 = 61444U;
	int32_t t32 = 60245252;

    t32 = (x217==(x218<<(x219<=x220)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x221 = 9981341U;
	uint64_t x222 = 815LLU;
	volatile int8_t x223 = -1;
	volatile int64_t x224 = -918043101809928LL;
	static int32_t t33 = 472;

    t33 = (x221==(x222<<(x223<=x224)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x229 = INT8_MIN;
	uint32_t x230 = 7470922U;
	int8_t x232 = -1;
	volatile int32_t t34 = 24;

    t34 = (x229==(x230<<(x231<=x232)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x233 = 4225748282391072LLU;
	static volatile uint8_t x234 = 41U;
	int8_t x235 = -1;
	static int64_t x236 = 39673339962669LL;
	int32_t t35 = -21;

    t35 = (x233==(x234<<(x235<=x236)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x249 = INT8_MIN;
	int64_t x250 = 1234LL;
	int8_t x252 = INT8_MIN;

    t36 = (x249==(x250<<(x251<=x252)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x265 = UINT64_MAX;
	static int16_t x266 = 95;
	static int8_t x268 = 1;
	int32_t t37 = -34;

    t37 = (x265==(x266<<(x267<=x268)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x273 = INT32_MAX;
	int32_t x275 = INT32_MAX;
	volatile uint8_t x276 = 28U;
	volatile int32_t t38 = -384384;

    t38 = (x273==(x274<<(x275<=x276)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x281 = -2;
	static volatile uint16_t x282 = 18U;
	int64_t x283 = -56LL;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t39 = -47733;

    t39 = (x281==(x282<<(x283<=x284)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MAX;
	int64_t x287 = INT64_MAX;
	static int64_t x288 = -10637LL;
	int32_t t40 = 39055108;

    t40 = (x285==(x286<<(x287<=x288)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x293 = -3;
	int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MIN;
	volatile int32_t t41 = 1275904;

    t41 = (x293==(x294<<(x295<=x296)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x301 = -30524;
	static uint32_t x302 = UINT32_MAX;
	int16_t x303 = -1;
	volatile int32_t t42 = 0;

    t42 = (x301==(x302<<(x303<=x304)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x322 = 58U;
	int8_t x323 = INT8_MIN;

    t43 = (x321==(x322<<(x323<=x324)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x329 = INT8_MAX;
	uint64_t x331 = 259651611952797LLU;
	uint16_t x332 = UINT16_MAX;
	int32_t t44 = 6047;

    t44 = (x329==(x330<<(x331<=x332)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x342 = UINT32_MAX;
	int16_t x343 = -1;
	static int64_t x344 = -56026520LL;
	int32_t t45 = 134;

    t45 = (x341==(x342<<(x343<=x344)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x345 = -1LL;
	volatile uint16_t x346 = UINT16_MAX;
	int32_t t46 = -13;

    t46 = (x345==(x346<<(x347<=x348)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x357 = 5385036676342072LLU;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t47 = -325025;

    t47 = (x357==(x358<<(x359<=x360)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x365 = INT32_MIN;
	uint16_t x366 = 12835U;
	static int32_t x368 = -14;
	static int32_t t48 = 1663982;

    t48 = (x365==(x366<<(x367<=x368)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x378 = UINT8_MAX;
	int64_t x379 = INT64_MAX;
	static uint64_t x380 = 502747LLU;

    t49 = (x377==(x378<<(x379<=x380)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x381 = 645399755LL;
	static uint16_t x382 = 857U;
	int8_t x383 = INT8_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t50 = 0;

    t50 = (x381==(x382<<(x383<=x384)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x389 = -37;
	uint64_t x390 = 13218LLU;
	int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t51 = 69;

    t51 = (x389==(x390<<(x391<=x392)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x397 = 3U;
	static uint8_t x398 = 99U;
	volatile uint16_t x399 = 13495U;
	int16_t x400 = -24;
	volatile int32_t t52 = 16243;

    t52 = (x397==(x398<<(x399<=x400)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MAX;
	int16_t x403 = 160;
	uint16_t x404 = 0U;
	int32_t t53 = 1;

    t53 = (x401==(x402<<(x403<=x404)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x413 = INT64_MIN;
	static uint64_t x414 = 1786984549806LLU;
	uint8_t x415 = UINT8_MAX;
	volatile int64_t x416 = INT64_MAX;
	int32_t t54 = 753952391;

    t54 = (x413==(x414<<(x415<=x416)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x417 = 13389U;
	int16_t x418 = INT16_MAX;
	uint32_t x419 = 2U;
	int64_t x420 = 12995454488442675LL;
	int32_t t55 = 3;

    t55 = (x417==(x418<<(x419<=x420)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x421 = 1;
	static volatile uint16_t x422 = 11U;
	volatile uint8_t x423 = 8U;
	uint64_t x424 = 138752956LLU;
	int32_t t56 = -515108843;

    t56 = (x421==(x422<<(x423<=x424)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x425 = 2LL;
	int32_t x426 = 3359297;
	uint32_t x427 = UINT32_MAX;
	int8_t x428 = INT8_MAX;

    t57 = (x425==(x426<<(x427<=x428)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x430 = 1057413285637983LLU;
	volatile uint64_t x431 = 1504403358LLU;
	int8_t x432 = -1;
	volatile int32_t t58 = 173;

    t58 = (x429==(x430<<(x431<=x432)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MAX;
	int8_t x443 = INT8_MIN;
	int64_t x444 = -176366LL;

    t59 = (x441==(x442<<(x443<=x444)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x445 = 868LLU;
	static uint16_t x446 = 22U;

    t60 = (x445==(x446<<(x447<=x448)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x449 = -1;
	volatile uint8_t x450 = UINT8_MAX;
	static int16_t x451 = INT16_MIN;
	int32_t x452 = INT32_MAX;
	volatile int32_t t61 = -6559579;

    t61 = (x449==(x450<<(x451<=x452)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x453 = -1;
	uint64_t x454 = 1038804115133675LLU;
	volatile int16_t x455 = INT16_MIN;
	static int32_t t62 = -671226401;

    t62 = (x453==(x454<<(x455<=x456)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x459 = INT64_MAX;
	int64_t x460 = 450778LL;
	int32_t t63 = -1;

    t63 = (x457==(x458<<(x459<=x460)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x461 = 14U;
	volatile uint8_t x462 = UINT8_MAX;
	int16_t x463 = INT16_MIN;
	int8_t x464 = -5;
	int32_t t64 = -3990938;

    t64 = (x461==(x462<<(x463<=x464)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x465 = 82;
	int32_t x466 = INT32_MAX;
	uint8_t x467 = 40U;
	int64_t x468 = -4004314LL;
	volatile int32_t t65 = 1;

    t65 = (x465==(x466<<(x467<=x468)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x469 = 0;
	uint32_t x470 = 52587406U;
	uint16_t x471 = UINT16_MAX;
	static int32_t x472 = -1;
	volatile int32_t t66 = 27;

    t66 = (x469==(x470<<(x471<=x472)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x473 = INT32_MIN;
	volatile uint8_t x475 = 1U;
	uint8_t x476 = 29U;
	int32_t t67 = -6835383;

    t67 = (x473==(x474<<(x475<=x476)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x477 = UINT16_MAX;
	uint32_t x478 = 186403U;
	volatile int32_t t68 = -289703;

    t68 = (x477==(x478<<(x479<=x480)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x481 = INT32_MIN;
	static uint16_t x482 = 48U;
	volatile uint8_t x483 = 119U;
	static uint64_t x484 = 13455LLU;
	volatile int32_t t69 = -32493244;

    t69 = (x481==(x482<<(x483<=x484)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x490 = 267775054856929579LL;
	static int64_t x491 = -6LL;
	static volatile int16_t x492 = 7835;
	static volatile int32_t t70 = -882107169;

    t70 = (x489==(x490<<(x491<=x492)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x494 = 2841U;
	int16_t x495 = INT16_MIN;
	static uint64_t x496 = 464613LLU;
	int32_t t71 = 137451;

    t71 = (x493==(x494<<(x495<=x496)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MAX;
	int64_t x507 = INT64_MIN;
	int32_t t72 = -184872;

    t72 = (x505==(x506<<(x507<=x508)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x534 = 220556617439LLU;
	static volatile int64_t x535 = 838652LL;
	static volatile uint64_t x536 = 241612LLU;
	int32_t t73 = -102764;

    t73 = (x533==(x534<<(x535<=x536)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x542 = UINT32_MAX;
	volatile int8_t x543 = INT8_MAX;
	int16_t x544 = INT16_MIN;

    t74 = (x541==(x542<<(x543<=x544)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x557 = INT8_MIN;
	static volatile uint8_t x558 = UINT8_MAX;
	volatile uint32_t x560 = UINT32_MAX;
	volatile int32_t t75 = -27402005;

    t75 = (x557==(x558<<(x559<=x560)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x573 = INT32_MIN;
	uint64_t x574 = UINT64_MAX;
	int16_t x575 = INT16_MAX;
	int16_t x576 = -1;
	int32_t t76 = 47115;

    t76 = (x573==(x574<<(x575<=x576)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x585 = INT8_MIN;
	int16_t x586 = 25;
	int16_t x587 = INT16_MAX;
	int32_t t77 = -62337;

    t77 = (x585==(x586<<(x587<=x588)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x598 = 2U;
	int32_t x599 = 101203;
	static int8_t x600 = 1;
	int32_t t78 = 14483;

    t78 = (x597==(x598<<(x599<=x600)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x605 = 592748967LLU;
	static int16_t x607 = 4908;
	int8_t x608 = INT8_MAX;
	int32_t t79 = 1062013893;

    t79 = (x605==(x606<<(x607<=x608)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x613 = 883LLU;
	int32_t x614 = 2243231;
	int64_t x615 = INT64_MIN;
	static int32_t t80 = -82;

    t80 = (x613==(x614<<(x615<=x616)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x633 = 17768LLU;
	volatile uint8_t x634 = 94U;
	int16_t x635 = INT16_MIN;
	volatile uint32_t x636 = UINT32_MAX;
	volatile int32_t t81 = -35878606;

    t81 = (x633==(x634<<(x635<=x636)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x649 = INT8_MAX;
	uint64_t x651 = UINT64_MAX;
	volatile int32_t t82 = -80591004;

    t82 = (x649==(x650<<(x651<=x652)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x653 = -8;
	volatile int16_t x654 = INT16_MAX;
	uint32_t x655 = 57654U;
	uint32_t x656 = 43U;
	volatile int32_t t83 = -1062165329;

    t83 = (x653==(x654<<(x655<=x656)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x657 = UINT16_MAX;
	uint16_t x658 = UINT16_MAX;
	uint64_t x659 = 184944479LLU;
	int8_t x660 = INT8_MAX;
	int32_t t84 = 2004817;

    t84 = (x657==(x658<<(x659<=x660)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x661 = 6470316456LL;
	volatile uint8_t x662 = 21U;
	uint64_t x663 = 16261338LLU;
	volatile int32_t t85 = 1;

    t85 = (x661==(x662<<(x663<=x664)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x665 = -16;
	int32_t x666 = 6;
	uint64_t x668 = 29884LLU;
	volatile int32_t t86 = 6813918;

    t86 = (x665==(x666<<(x667<=x668)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x669 = INT64_MAX;
	static volatile int32_t x670 = INT32_MAX;
	uint16_t x671 = 10420U;

    t87 = (x669==(x670<<(x671<=x672)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x673 = 0U;
	uint16_t x674 = 19935U;
	static int16_t x675 = 0;
	volatile int8_t x676 = INT8_MAX;
	volatile int32_t t88 = 526340151;

    t88 = (x673==(x674<<(x675<=x676)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x678 = 1U;
	int32_t x679 = -1;
	int32_t x680 = -1;

    t89 = (x677==(x678<<(x679<=x680)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x681 = -7;
	uint64_t x682 = 11240867LLU;
	int16_t x683 = INT16_MIN;
	int32_t t90 = 30813110;

    t90 = (x681==(x682<<(x683<=x684)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x693 = -1;
	volatile int16_t x695 = -2886;
	int32_t x696 = INT32_MIN;
	int32_t t91 = -1086;

    t91 = (x693==(x694<<(x695<=x696)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x702 = 155659U;
	static int16_t x703 = INT16_MIN;
	int16_t x704 = INT16_MIN;
	volatile int32_t t92 = 2052;

    t92 = (x701==(x702<<(x703<=x704)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x713 = -1793;
	int64_t x715 = INT64_MIN;
	int16_t x716 = -1;

    t93 = (x713==(x714<<(x715<=x716)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x717 = -1;
	static uint8_t x718 = UINT8_MAX;
	int16_t x719 = -4;
	int8_t x720 = -1;
	static int32_t t94 = 1;

    t94 = (x717==(x718<<(x719<=x720)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x721 = INT64_MIN;
	static int16_t x722 = 301;
	int16_t x724 = 83;

    t95 = (x721==(x722<<(x723<=x724)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x737 = -3;
	uint8_t x738 = 60U;
	int8_t x739 = 1;
	int32_t x740 = -1;
	volatile int32_t t96 = 1067315330;

    t96 = (x737==(x738<<(x739<=x740)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x745 = 4U;
	uint64_t x746 = 469531269491919LLU;
	volatile int32_t x747 = -366;
	int16_t x748 = INT16_MIN;
	int32_t t97 = -86;

    t97 = (x745==(x746<<(x747<=x748)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x749 = 93U;
	volatile uint8_t x750 = 2U;
	volatile int8_t x752 = INT8_MIN;
	int32_t t98 = 1;

    t98 = (x749==(x750<<(x751<=x752)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x762 = 13;
	int16_t x763 = -1;
	int8_t x764 = INT8_MIN;
	static volatile int32_t t99 = 1;

    t99 = (x761==(x762<<(x763<=x764)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x767 = 18LL;

    t100 = (x765==(x766<<(x767<=x768)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x773 = -1;
	int16_t x774 = 1;
	volatile int32_t x775 = -28033945;
	volatile int8_t x776 = -1;
	volatile int32_t t101 = 1577024;

    t101 = (x773==(x774<<(x775<=x776)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x789 = INT32_MAX;
	volatile uint8_t x791 = 1U;
	uint32_t x792 = 1703827U;
	volatile int32_t t102 = -163303;

    t102 = (x789==(x790<<(x791<=x792)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x798 = 9LL;
	volatile int8_t x799 = INT8_MIN;
	int32_t t103 = -1998;

    t103 = (x797==(x798<<(x799<=x800)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x813 = 135LL;
	static uint64_t x814 = 5210987518LLU;
	static uint16_t x815 = UINT16_MAX;
	static uint32_t x816 = 107009U;
	static int32_t t104 = 86784;

    t104 = (x813==(x814<<(x815<=x816)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x817 = INT16_MIN;
	int8_t x818 = INT8_MAX;
	int8_t x819 = -1;
	volatile int16_t x820 = -1;
	volatile int32_t t105 = -11387;

    t105 = (x817==(x818<<(x819<=x820)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x837 = INT8_MIN;
	uint32_t x838 = 1223U;
	volatile int64_t x839 = -1LL;
	volatile int32_t t106 = -3718;

    t106 = (x837==(x838<<(x839<=x840)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x843 = -1LL;
	int8_t x844 = INT8_MAX;
	int32_t t107 = -85;

    t107 = (x841==(x842<<(x843<=x844)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x845 = -1;
	static volatile int32_t x847 = -1;
	int16_t x848 = INT16_MIN;
	int32_t t108 = -306;

    t108 = (x845==(x846<<(x847<=x848)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x850 = UINT8_MAX;
	volatile int64_t x851 = INT64_MIN;
	int8_t x852 = INT8_MIN;
	int32_t t109 = -806789;

    t109 = (x849==(x850<<(x851<=x852)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x861 = INT64_MIN;
	int16_t x862 = 470;
	int32_t x864 = INT32_MIN;
	volatile int32_t t110 = 4;

    t110 = (x861==(x862<<(x863<=x864)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x877 = 220U;
	uint64_t x878 = UINT64_MAX;
	int16_t x880 = INT16_MIN;
	static int32_t t111 = 1319;

    t111 = (x877==(x878<<(x879<=x880)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x881 = -1LL;
	uint64_t x882 = 89843959234569LLU;
	volatile int64_t x883 = INT64_MAX;
	int32_t x884 = INT32_MIN;
	volatile int32_t t112 = -855;

    t112 = (x881==(x882<<(x883<=x884)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x889 = -4839;
	volatile int32_t x891 = 8;
	uint16_t x892 = 63U;

    t113 = (x889==(x890<<(x891<=x892)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x897 = 543968562LLU;
	static int8_t x898 = 3;
	static int32_t x899 = INT32_MAX;
	static int8_t x900 = -1;
	int32_t t114 = 222;

    t114 = (x897==(x898<<(x899<=x900)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x901 = INT64_MIN;
	volatile uint32_t x902 = UINT32_MAX;
	volatile int64_t x903 = INT64_MIN;
	volatile int32_t t115 = 46;

    t115 = (x901==(x902<<(x903<=x904)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x921 = INT32_MIN;
	uint16_t x922 = UINT16_MAX;
	int16_t x924 = -8;
	volatile int32_t t116 = -17;

    t116 = (x921==(x922<<(x923<=x924)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x925 = INT16_MAX;
	volatile uint64_t x926 = 11048376084LLU;
	int64_t x927 = 751943858966234LL;
	int32_t x928 = INT32_MIN;
	volatile int32_t t117 = 1473316;

    t117 = (x925==(x926<<(x927<=x928)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x945 = 790719990U;
	static uint8_t x946 = 49U;
	volatile uint16_t x947 = UINT16_MAX;
	uint64_t x948 = 28785439481793785LLU;
	int32_t t118 = -42;

    t118 = (x945==(x946<<(x947<=x948)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x949 = INT8_MIN;
	int32_t x951 = INT32_MAX;
	int16_t x952 = INT16_MAX;

    t119 = (x949==(x950<<(x951<=x952)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x953 = UINT8_MAX;
	volatile uint32_t x954 = 22649U;
	static int64_t x955 = -1LL;
	int32_t x956 = 8;

    t120 = (x953==(x954<<(x955<=x956)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x957 = INT32_MIN;
	static uint8_t x958 = 3U;
	uint16_t x959 = UINT16_MAX;
	volatile uint32_t x960 = UINT32_MAX;
	int32_t t121 = -636841;

    t121 = (x957==(x958<<(x959<=x960)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x961 = -1;
	static uint8_t x962 = 0U;
	volatile int64_t x963 = INT64_MAX;
	int64_t x964 = -1LL;
	static volatile int32_t t122 = 9849419;

    t122 = (x961==(x962<<(x963<=x964)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x977 = -1626;
	uint64_t x978 = 3LLU;
	uint8_t x980 = 9U;
	static volatile int32_t t123 = 470864691;

    t123 = (x977==(x978<<(x979<=x980)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x989 = INT64_MAX;
	uint64_t x990 = 208173793639LLU;
	uint64_t x991 = UINT64_MAX;
	static volatile uint64_t x992 = UINT64_MAX;
	int32_t t124 = -8;

    t124 = (x989==(x990<<(x991<=x992)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x993 = 365443LLU;
	uint32_t x994 = 14446330U;
	int16_t x995 = -1;
	static uint8_t x996 = 9U;
	volatile int32_t t125 = -31031358;

    t125 = (x993==(x994<<(x995<=x996)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x1005 = 14912590LLU;
	uint16_t x1006 = 10240U;
	volatile int32_t x1007 = INT32_MIN;
	static volatile uint32_t x1008 = UINT32_MAX;

    t126 = (x1005==(x1006<<(x1007<=x1008)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x1009 = 0;
	uint64_t x1010 = 16303LLU;
	int8_t x1011 = INT8_MIN;
	volatile int32_t t127 = 6;

    t127 = (x1009==(x1010<<(x1011<=x1012)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x1018 = UINT64_MAX;
	int16_t x1020 = -1;
	volatile int32_t t128 = -60598;

    t128 = (x1017==(x1018<<(x1019<=x1020)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x1021 = -1;
	static uint16_t x1022 = UINT16_MAX;
	volatile int32_t t129 = 1970408;

    t129 = (x1021==(x1022<<(x1023<=x1024)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1027 = -16177;
	volatile int8_t x1028 = -1;
	int32_t t130 = -3690;

    t130 = (x1025==(x1026<<(x1027<=x1028)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x1041 = 546LLU;
	static int32_t x1042 = 8319525;
	uint32_t x1043 = 198U;
	volatile uint8_t x1044 = UINT8_MAX;
	static int32_t t131 = 61896;

    t131 = (x1041==(x1042<<(x1043<=x1044)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1050 = INT8_MAX;
	uint32_t x1051 = 113939U;
	static int8_t x1052 = 2;
	static int32_t t132 = -209;

    t132 = (x1049==(x1050<<(x1051<=x1052)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x1061 = -1LL;
	volatile uint64_t x1062 = 1716116937682024184LLU;
	int64_t x1063 = 8LL;
	int8_t x1064 = -40;
	volatile int32_t t133 = -329555671;

    t133 = (x1061==(x1062<<(x1063<=x1064)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x1066 = 5;
	uint32_t x1067 = 3713153U;
	static uint32_t x1068 = UINT32_MAX;
	static int32_t t134 = 13;

    t134 = (x1065==(x1066<<(x1067<=x1068)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x1069 = INT32_MIN;
	volatile uint16_t x1070 = UINT16_MAX;
	static int8_t x1071 = INT8_MIN;
	volatile uint32_t x1072 = 5609U;
	int32_t t135 = 2169626;

    t135 = (x1069==(x1070<<(x1071<=x1072)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1073 = -1;
	uint8_t x1074 = 27U;
	int16_t x1076 = 3666;
	int32_t t136 = 824;

    t136 = (x1073==(x1074<<(x1075<=x1076)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x1085 = UINT8_MAX;
	int8_t x1087 = -6;
	volatile int16_t x1088 = INT16_MIN;
	volatile int32_t t137 = 8338736;

    t137 = (x1085==(x1086<<(x1087<=x1088)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x1101 = INT16_MIN;
	volatile uint32_t x1102 = 0U;
	volatile uint16_t x1103 = UINT16_MAX;
	int64_t x1104 = INT64_MIN;
	int32_t t138 = 95753476;

    t138 = (x1101==(x1102<<(x1103<=x1104)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1107 = 26U;
	uint64_t x1108 = 96984405521LLU;

    t139 = (x1105==(x1106<<(x1107<=x1108)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x1113 = UINT16_MAX;
	int16_t x1115 = -1;
	volatile int32_t t140 = -246;

    t140 = (x1113==(x1114<<(x1115<=x1116)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1129 = -1LL;
	uint8_t x1130 = 12U;
	uint16_t x1131 = 0U;
	uint32_t x1132 = UINT32_MAX;
	volatile int32_t t141 = 361;

    t141 = (x1129==(x1130<<(x1131<=x1132)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x1149 = 5;
	volatile int32_t x1150 = 0;
	uint16_t x1151 = UINT16_MAX;
	static int16_t x1152 = INT16_MIN;
	static int32_t t142 = -171097873;

    t142 = (x1149==(x1150<<(x1151<=x1152)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x1157 = 37U;
	int64_t x1158 = 388343464878LL;
	uint16_t x1159 = 83U;
	int32_t x1160 = INT32_MIN;
	int32_t t143 = -457185786;

    t143 = (x1157==(x1158<<(x1159<=x1160)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint8_t x1173 = 0U;
	static uint32_t x1174 = UINT32_MAX;
	uint8_t x1176 = 89U;

    t144 = (x1173==(x1174<<(x1175<=x1176)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1177 = -2;
	uint8_t x1178 = UINT8_MAX;
	int16_t x1180 = INT16_MIN;

    t145 = (x1177==(x1178<<(x1179<=x1180)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x1193 = 1;
	volatile int16_t x1195 = -2804;
	int16_t x1196 = INT16_MIN;
	int32_t t146 = 1831;

    t146 = (x1193==(x1194<<(x1195<=x1196)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1198 = 32U;
	static volatile int32_t x1199 = -1;
	int8_t x1200 = INT8_MAX;

    t147 = (x1197==(x1198<<(x1199<=x1200)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1205 = 115U;
	uint32_t x1208 = 1U;
	volatile int32_t t148 = 2692;

    t148 = (x1205==(x1206<<(x1207<=x1208)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x1209 = -1;
	volatile uint64_t x1210 = 1306579LLU;
	int64_t x1211 = INT64_MIN;
	int16_t x1212 = 8;
	int32_t t149 = -395;

    t149 = (x1209==(x1210<<(x1211<=x1212)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1214 = 1703893U;
	static int8_t x1216 = 3;

    t150 = (x1213==(x1214<<(x1215<=x1216)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x1218 = INT16_MAX;
	volatile int16_t x1219 = INT16_MIN;
	volatile int64_t x1220 = -17547808808LL;
	int32_t t151 = -465;

    t151 = (x1217==(x1218<<(x1219<=x1220)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x1222 = 21215003601348582LL;
	uint64_t x1223 = UINT64_MAX;
	uint16_t x1224 = 841U;
	int32_t t152 = -7;

    t152 = (x1221==(x1222<<(x1223<=x1224)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1225 = INT8_MIN;
	int64_t x1226 = INT64_MAX;
	int64_t x1227 = INT64_MAX;
	uint8_t x1228 = 1U;
	static volatile int32_t t153 = -2453;

    t153 = (x1225==(x1226<<(x1227<=x1228)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1233 = 913400LLU;
	int8_t x1235 = INT8_MAX;
	volatile int8_t x1236 = -1;
	int32_t t154 = -263956358;

    t154 = (x1233==(x1234<<(x1235<=x1236)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x1249 = UINT64_MAX;
	int32_t x1250 = INT32_MAX;
	uint64_t x1251 = UINT64_MAX;
	static uint64_t x1252 = 195050701345LLU;
	int32_t t155 = 6;

    t155 = (x1249==(x1250<<(x1251<=x1252)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x1253 = INT8_MIN;
	volatile int8_t x1254 = INT8_MAX;
	static int64_t x1255 = 16077030123616139LL;
	static volatile int8_t x1256 = 3;
	int32_t t156 = 9334459;

    t156 = (x1253==(x1254<<(x1255<=x1256)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x1261 = INT8_MIN;
	int64_t x1262 = 4LL;
	static uint64_t x1263 = UINT64_MAX;
	static int32_t t157 = 1987;

    t157 = (x1261==(x1262<<(x1263<=x1264)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x1265 = INT64_MIN;
	uint8_t x1266 = 1U;
	uint32_t x1267 = 5U;
	int64_t x1268 = 873506430492463114LL;
	int32_t t158 = 14892382;

    t158 = (x1265==(x1266<<(x1267<=x1268)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1269 = -1;
	int16_t x1270 = INT16_MAX;
	int64_t x1271 = -427348LL;
	int32_t x1272 = INT32_MIN;
	volatile int32_t t159 = -293472;

    t159 = (x1269==(x1270<<(x1271<=x1272)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1295 = 0U;
	int16_t x1296 = 1;
	int32_t t160 = -1;

    t160 = (x1293==(x1294<<(x1295<=x1296)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x1309 = INT64_MIN;
	int32_t x1310 = 6451;
	volatile int32_t t161 = 0;

    t161 = (x1309==(x1310<<(x1311<=x1312)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x1317 = UINT16_MAX;
	uint8_t x1318 = UINT8_MAX;

    t162 = (x1317==(x1318<<(x1319<=x1320)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1321 = INT32_MAX;
	int32_t x1322 = 28771678;
	uint8_t x1324 = 25U;

    t163 = (x1321==(x1322<<(x1323<=x1324)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x1329 = INT8_MAX;
	uint8_t x1330 = 46U;
	int8_t x1331 = INT8_MAX;
	static uint64_t x1332 = 7LLU;
	volatile int32_t t164 = -424503803;

    t164 = (x1329==(x1330<<(x1331<=x1332)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1349 = 2115U;
	static volatile int32_t x1350 = INT32_MAX;
	static volatile int32_t t165 = 55;

    t165 = (x1349==(x1350<<(x1351<=x1352)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1353 = 11898LL;
	static uint64_t x1354 = UINT64_MAX;
	int32_t x1355 = -1965970;
	volatile int32_t t166 = -49673;

    t166 = (x1353==(x1354<<(x1355<=x1356)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x1357 = 0U;
	uint8_t x1358 = UINT8_MAX;
	static int8_t x1360 = INT8_MAX;
	static int32_t t167 = 1596955;

    t167 = (x1357==(x1358<<(x1359<=x1360)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1377 = INT64_MAX;
	volatile uint16_t x1378 = 14915U;
	static uint16_t x1380 = 22120U;
	volatile int32_t t168 = -141729;

    t168 = (x1377==(x1378<<(x1379<=x1380)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1381 = -1;
	uint64_t x1382 = UINT64_MAX;
	uint8_t x1383 = 82U;
	static uint8_t x1384 = UINT8_MAX;

    t169 = (x1381==(x1382<<(x1383<=x1384)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1385 = INT8_MAX;
	volatile uint64_t x1386 = UINT64_MAX;
	int8_t x1388 = -4;
	int32_t t170 = -1930058;

    t170 = (x1385==(x1386<<(x1387<=x1388)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1389 = 46470U;
	volatile int16_t x1390 = INT16_MAX;
	int16_t x1391 = INT16_MIN;

    t171 = (x1389==(x1390<<(x1391<=x1392)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1399 = INT32_MIN;
	uint8_t x1400 = 3U;

    t172 = (x1397==(x1398<<(x1399<=x1400)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x1401 = 39;
	uint64_t x1402 = UINT64_MAX;
	int32_t x1403 = INT32_MAX;
	volatile int32_t x1404 = INT32_MAX;
	int32_t t173 = -1;

    t173 = (x1401==(x1402<<(x1403<=x1404)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x1414 = 423310U;
	int8_t x1415 = 0;
	int32_t t174 = -17543;

    t174 = (x1413==(x1414<<(x1415<=x1416)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x1429 = INT16_MIN;
	uint64_t x1430 = 98116LLU;
	static int8_t x1431 = 63;
	int16_t x1432 = INT16_MAX;
	volatile int32_t t175 = -139048931;

    t175 = (x1429==(x1430<<(x1431<=x1432)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x1437 = 15U;
	int32_t x1440 = -1;
	int32_t t176 = 23968;

    t176 = (x1437==(x1438<<(x1439<=x1440)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x1445 = 235706U;
	uint16_t x1446 = UINT16_MAX;
	static uint16_t x1447 = UINT16_MAX;
	static volatile int16_t x1448 = -7;
	int32_t t177 = 308085821;

    t177 = (x1445==(x1446<<(x1447<=x1448)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1451 = 7068831313LL;
	volatile int64_t x1452 = INT64_MIN;
	int32_t t178 = 6;

    t178 = (x1449==(x1450<<(x1451<=x1452)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1458 = 0;
	int16_t x1459 = 0;
	uint16_t x1460 = 252U;
	int32_t t179 = -1295718;

    t179 = (x1457==(x1458<<(x1459<=x1460)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x1462 = 5;
	int16_t x1463 = 2;
	int16_t x1464 = INT16_MIN;
	volatile int32_t t180 = -24;

    t180 = (x1461==(x1462<<(x1463<=x1464)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1465 = 1;
	uint8_t x1466 = 0U;
	uint64_t x1467 = 362LLU;
	volatile int16_t x1468 = INT16_MIN;
	static int32_t t181 = -778;

    t181 = (x1465==(x1466<<(x1467<=x1468)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1470 = 149687171LLU;
	static uint8_t x1471 = UINT8_MAX;
	static int32_t t182 = -1945;

    t182 = (x1469==(x1470<<(x1471<=x1472)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1473 = 6U;
	uint64_t x1474 = UINT64_MAX;
	int32_t x1475 = -8;
	int8_t x1476 = -3;
	volatile int32_t t183 = 5861790;

    t183 = (x1473==(x1474<<(x1475<=x1476)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1478 = INT16_MAX;
	uint64_t x1479 = 64193386387LLU;
	volatile int8_t x1480 = INT8_MIN;
	volatile int32_t t184 = -10;

    t184 = (x1477==(x1478<<(x1479<=x1480)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1481 = UINT8_MAX;
	uint8_t x1482 = 0U;
	int16_t x1483 = INT16_MIN;
	volatile int32_t t185 = 40634033;

    t185 = (x1481==(x1482<<(x1483<=x1484)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1493 = 1;
	uint8_t x1494 = 110U;
	static uint32_t x1495 = UINT32_MAX;
	int8_t x1496 = -1;
	int32_t t186 = 10757;

    t186 = (x1493==(x1494<<(x1495<=x1496)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1501 = -3094;
	uint16_t x1502 = 19U;
	int8_t x1503 = -6;
	int8_t x1504 = INT8_MIN;
	int32_t t187 = -1421664;

    t187 = (x1501==(x1502<<(x1503<=x1504)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1505 = INT32_MAX;
	uint8_t x1507 = 80U;
	uint64_t x1508 = UINT64_MAX;
	int32_t t188 = 0;

    t188 = (x1505==(x1506<<(x1507<=x1508)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1517 = 20508152;
	uint64_t x1518 = UINT64_MAX;
	volatile int8_t x1519 = 1;
	static volatile int64_t x1520 = INT64_MIN;
	volatile int32_t t189 = -3574734;

    t189 = (x1517==(x1518<<(x1519<=x1520)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1521 = 92557541U;
	volatile uint64_t x1522 = UINT64_MAX;
	static int32_t x1523 = INT32_MIN;
	volatile int8_t x1524 = INT8_MIN;
	volatile int32_t t190 = 97159523;

    t190 = (x1521==(x1522<<(x1523<=x1524)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1525 = -44;
	volatile int64_t x1526 = INT64_MAX;
	uint32_t x1527 = UINT32_MAX;
	volatile int16_t x1528 = INT16_MIN;
	int32_t t191 = -1804186;

    t191 = (x1525==(x1526<<(x1527<=x1528)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1533 = 3LLU;
	int16_t x1534 = 13;
	uint16_t x1535 = UINT16_MAX;
	int32_t x1536 = INT32_MIN;
	static int32_t t192 = 20;

    t192 = (x1533==(x1534<<(x1535<=x1536)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x1541 = -1;
	uint8_t x1542 = UINT8_MAX;
	uint32_t x1544 = 6344639U;
	static int32_t t193 = -186041;

    t193 = (x1541==(x1542<<(x1543<=x1544)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1553 = -6;
	int32_t x1554 = INT32_MAX;
	int32_t x1555 = 16;
	static int32_t t194 = -5046521;

    t194 = (x1553==(x1554<<(x1555<=x1556)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1557 = -1448;
	int16_t x1559 = INT16_MAX;
	volatile int64_t x1560 = -1250778303992691620LL;
	static int32_t t195 = -8;

    t195 = (x1557==(x1558<<(x1559<=x1560)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1561 = 34U;
	int8_t x1562 = INT8_MAX;
	int16_t x1564 = 2;
	volatile int32_t t196 = 181281;

    t196 = (x1561==(x1562<<(x1563<=x1564)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1573 = INT64_MIN;
	volatile uint32_t x1574 = 6U;
	int8_t x1575 = INT8_MAX;
	uint8_t x1576 = 28U;
	volatile int32_t t197 = -371547;

    t197 = (x1573==(x1574<<(x1575<=x1576)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1581 = UINT64_MAX;
	int64_t x1583 = -170LL;
	volatile int32_t t198 = -545096466;

    t198 = (x1581==(x1582<<(x1583<=x1584)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1593 = 10724;
	int8_t x1594 = INT8_MAX;
	uint16_t x1596 = UINT16_MAX;
	int32_t t199 = 69743;

    t199 = (x1593==(x1594<<(x1595<=x1596)));

    if (t199 != 0) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

