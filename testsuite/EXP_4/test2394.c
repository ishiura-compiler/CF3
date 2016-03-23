
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

static uint32_t x8 = UINT32_MAX;
uint32_t t0 = 43969431U;
uint64_t x11 = UINT64_MAX;
static volatile int16_t x12 = -3409;
volatile int8_t x19 = -1;
static uint8_t x33 = UINT8_MAX;
int32_t x34 = -228861;
static uint64_t x42 = 932026903LLU;
uint16_t x43 = 24933U;
volatile int64_t x46 = 61371089LL;
volatile uint32_t x48 = UINT32_MAX;
int16_t x49 = INT16_MAX;
uint64_t x61 = UINT64_MAX;
static volatile int16_t x67 = INT16_MIN;
int8_t x77 = INT8_MIN;
static int32_t x79 = -1;
int32_t x83 = -55205;
static volatile int8_t x87 = INT8_MIN;
int16_t x91 = 9;
int8_t x92 = INT8_MIN;
static volatile int32_t t18 = 2466701;
uint16_t x94 = UINT16_MAX;
uint64_t x114 = 1384548162681139716LLU;
int64_t x120 = -1LL;
int64_t t23 = -126977LL;
int32_t x123 = INT32_MAX;
int32_t x129 = INT32_MAX;
uint32_t x141 = 12273U;
int32_t x142 = -1;
int64_t x144 = INT64_MIN;
int64_t t28 = -418250555215LL;
int64_t x156 = INT64_MIN;
static volatile int64_t x159 = -1LL;
uint64_t x164 = 77069235305LLU;
volatile uint64_t t31 = 1407412575LLU;
int8_t x165 = INT8_MIN;
int32_t x169 = INT32_MIN;
int32_t x176 = INT32_MIN;
static int64_t t34 = 28035228599LL;
uint32_t x179 = 56U;
volatile int64_t t35 = -62015951480885326LL;
volatile int64_t x181 = -1LL;
int32_t x183 = -1;
int64_t t36 = -9374890714LL;
int64_t x187 = -37649345LL;
uint32_t x199 = 3U;
volatile uint32_t t40 = 6U;
static uint64_t x204 = 383276825748492924LLU;
uint32_t x212 = 258662215U;
int16_t x230 = -1;
static int16_t x243 = INT16_MIN;
uint64_t x252 = UINT64_MAX;
volatile uint64_t t46 = 14LLU;
int32_t x255 = 24496593;
volatile int64_t t47 = 4277799795635713LL;
int16_t x261 = -1483;
int32_t x271 = -1;
volatile int16_t x275 = INT16_MIN;
uint32_t x276 = 118584U;
int64_t x294 = -1LL;
static int32_t x295 = -190449944;
uint16_t x300 = 2428U;
static int32_t x309 = INT32_MAX;
int32_t t57 = -3622165;
int16_t x318 = -1;
static uint64_t x319 = UINT64_MAX;
uint32_t x330 = 10348749U;
static volatile int32_t t62 = 48;
int8_t x337 = INT8_MIN;
volatile uint16_t x344 = 4022U;
uint64_t t64 = 253198675LLU;
static uint64_t x352 = UINT64_MAX;
static int64_t x374 = 460722962LL;
int64_t t69 = -6506724820948LL;
int8_t x388 = INT8_MIN;
int32_t x392 = INT32_MIN;
int8_t x398 = INT8_MIN;
uint32_t x402 = UINT32_MAX;
uint64_t x409 = UINT64_MAX;
int8_t x410 = INT8_MIN;
static volatile uint64_t t77 = 43245855LLU;
uint64_t x413 = 1743477087252786LLU;
volatile int32_t x414 = -1;
uint64_t t78 = 430LLU;
static volatile int8_t x418 = INT8_MIN;
volatile uint32_t t80 = 835570479U;
int64_t x425 = -1LL;
static int8_t x426 = -1;
uint16_t x434 = UINT16_MAX;
static int8_t x436 = -1;
volatile int64_t t83 = 35398163LL;
static int64_t x437 = INT64_MIN;
int64_t x446 = -49653818566069LL;
uint32_t x466 = UINT32_MAX;
int8_t x470 = -7;
int32_t x474 = 442;
static uint8_t x479 = 34U;
static uint64_t x483 = 95LLU;
int64_t x491 = -1LL;
int64_t x507 = -1LL;
uint8_t x521 = 8U;
uint64_t t101 = 983852LLU;
int16_t x529 = INT16_MIN;
static int16_t x537 = -4104;
int8_t x539 = 41;
volatile int16_t x544 = INT16_MIN;
uint64_t t106 = 127504LLU;
uint32_t x546 = UINT32_MAX;
static int32_t x548 = 189184;
int16_t x554 = INT16_MIN;
static uint32_t x556 = 108U;
int8_t x559 = INT8_MAX;
static volatile uint32_t t110 = 8460148U;
int64_t t115 = -1096119LL;
static int16_t x592 = INT16_MIN;
volatile int32_t t116 = -40;
volatile uint8_t x602 = UINT8_MAX;
uint32_t t120 = 460U;
static int8_t x617 = 1;
static int64_t x621 = INT64_MIN;
volatile uint64_t t122 = 148269716520LLU;
static int16_t x625 = INT16_MIN;
int32_t x631 = -1;
volatile int16_t x632 = -1;
int8_t x633 = 3;
uint16_t x642 = 972U;
int64_t x659 = INT64_MIN;
uint64_t x661 = 434635367951026896LLU;
static int32_t x663 = -1039403;
static volatile uint64_t t131 = 9136796994LLU;
int16_t x669 = 2;
static uint64_t x674 = 44616182053133682LLU;
volatile uint16_t x676 = 67U;
uint8_t x682 = 2U;
static int64_t x685 = -1LL;
volatile int32_t x688 = -1;
int8_t x689 = 2;
int8_t x694 = -1;
volatile int32_t x696 = INT32_MIN;
uint64_t x705 = UINT64_MAX;
uint32_t x706 = 30368196U;
int8_t x707 = -1;
uint64_t t140 = 11533436815547LLU;
volatile uint16_t x713 = 120U;
static int8_t x716 = -1;
volatile int32_t x745 = INT32_MAX;
volatile int32_t t148 = -58175617;
uint8_t x753 = 0U;
int32_t t150 = 14;
volatile uint64_t t153 = 6431180484437683503LLU;
uint32_t x789 = 229798U;
static int32_t x790 = 0;
int64_t x794 = 45923658LL;
static int32_t x801 = -1;
static volatile int8_t x806 = INT8_MIN;
uint64_t t160 = 10LLU;
static uint32_t x831 = 7506U;
int32_t x832 = INT32_MIN;
volatile int8_t x848 = INT8_MIN;
int32_t x851 = INT32_MIN;
volatile int16_t x852 = -42;
volatile int16_t x859 = -1;
uint64_t x862 = UINT64_MAX;
int16_t x867 = INT16_MIN;
uint64_t x871 = 25229013135586222LLU;
uint32_t x872 = UINT32_MAX;
uint64_t t171 = 4482022971451354LLU;
int32_t x878 = -1;
int16_t x882 = INT16_MIN;
uint32_t t174 = 16943177U;
int16_t x889 = 11465;
static int32_t x891 = INT32_MIN;
int32_t x902 = -853494826;
uint16_t x905 = 32U;
int64_t x906 = 1176LL;
static volatile int32_t x909 = 1;
uint16_t x910 = 21U;
static int64_t x913 = 951451429207085LL;
int8_t x916 = -3;
uint64_t x917 = 1501451692177025263LLU;
uint8_t x919 = UINT8_MAX;
int16_t x920 = INT16_MIN;
static uint64_t x923 = 23104632LLU;
uint64_t t182 = 9035615869822060LLU;
int16_t x926 = -349;
int32_t x928 = 396266;
int64_t x931 = -909445298142LL;
uint8_t x934 = 17U;
volatile uint8_t x942 = 90U;
static uint8_t x969 = UINT8_MAX;
static int32_t x982 = INT32_MIN;
volatile int32_t x983 = INT32_MIN;
static volatile int8_t x985 = INT8_MAX;
uint16_t x998 = 23U;
int16_t x1007 = 9132;
int8_t x1011 = 8;
volatile uint64_t t196 = 3575274106708964061LLU;
int64_t x1014 = 817276562186217887LL;
uint32_t x1020 = 410U;
volatile int8_t x1024 = 0;
uint64_t t199 = 26LLU;


void f0(void) {
    	uint8_t x5 = 1U;
	uint8_t x6 = 0U;
	static int16_t x7 = -1;

    t0 = (x5^(x6*(x7|x8)));

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x9 = 24;
	volatile int64_t x10 = INT64_MIN;
	static volatile uint64_t t1 = 5LLU;

    t1 = (x9^(x10*(x11|x12)));

    if (t1 != 9223372036854775832LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	volatile int16_t x14 = -1;
	uint16_t x15 = UINT16_MAX;
	int64_t x16 = INT64_MAX;
	static int64_t t2 = 353015244945805984LL;

    t2 = (x13^(x14*(x15|x16)));

    if (t2 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x17 = 150U;
	static int32_t x18 = INT32_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t3 = -4;

    t3 = (x17^(x18*(x19|x20)));

    if (t3 != -2147483497) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = -338072;
	uint8_t x22 = 1U;
	int16_t x23 = -1;
	int64_t x24 = 12688792249850LL;
	int64_t t4 = 1849733LL;

    t4 = (x21^(x22*(x23|x24)));

    if (t4 != 338071LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x29 = 63U;
	int64_t x30 = -1LL;
	static volatile int8_t x31 = INT8_MAX;
	int32_t x32 = -2272;
	int64_t t5 = 23446LL;

    t5 = (x29^(x30*(x31|x32)));

    if (t5 != 2238LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x35 = INT32_MAX;
	int16_t x36 = INT16_MIN;
	int32_t t6 = 218;

    t6 = (x33^(x34*(x35|x36)));

    if (t6 != 228610) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x41 = -1LL;
	uint64_t x44 = 749648803620721LLU;
	volatile uint64_t t7 = 4315554692931257LLU;

    t7 = (x41^(x42*(x43|x44)));

    if (t7 != 14472503617178194556LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x45 = 1255U;
	volatile int64_t x47 = 21879558461LL;
	int64_t t8 = 29612688613965397LL;

    t8 = (x45^(x46*(x47|x48)));

    if (t8 != 1581520920988060104LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x50 = INT8_MAX;
	static uint32_t x51 = UINT32_MAX;
	static volatile int8_t x52 = 10;
	static uint32_t t9 = 13U;

    t9 = (x49^(x50*(x51|x52)));

    if (t9 != 4294934654U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = INT32_MIN;
	static int8_t x54 = INT8_MAX;
	uint64_t x55 = UINT64_MAX;
	static uint32_t x56 = UINT32_MAX;
	uint64_t t10 = 46826529846571665LLU;

    t10 = (x53^(x54*(x55|x56)));

    if (t10 != 2147483521LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x62 = -1;
	static int16_t x63 = INT16_MAX;
	static volatile uint8_t x64 = 10U;
	volatile uint64_t t11 = 85264LLU;

    t11 = (x61^(x62*(x63|x64)));

    if (t11 != 32766LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x65 = 210U;
	int32_t x66 = INT32_MAX;
	int64_t x68 = INT64_MIN;
	volatile int64_t t12 = 434LL;

    t12 = (x65^(x66*(x67|x68)));

    if (t12 != -70368744144686LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x69 = 47005775395548234LLU;
	int8_t x70 = INT8_MIN;
	uint8_t x71 = 1U;
	int8_t x72 = -1;
	volatile uint64_t t13 = 4349869037402676LLU;

    t13 = (x69^(x70*(x71|x72)));

    if (t13 != 47005775395548362LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x73 = INT8_MIN;
	volatile uint8_t x74 = 23U;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = 27369061334033LLU;
	uint64_t t14 = 5479472385575245LLU;

    t14 = (x73^(x74*(x75|x76)));

    if (t14 != 9222742548444092935LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x78 = 2U;
	int64_t x80 = INT64_MIN;
	int64_t t15 = 545109880LL;

    t15 = (x77^(x78*(x79|x80)));

    if (t15 != 126LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x81 = UINT8_MAX;
	static int8_t x82 = INT8_MAX;
	volatile int64_t x84 = 3641346LL;
	static int64_t t16 = 62961117831323313LL;

    t16 = (x81^(x82*(x83|x84)));

    if (t16 != -2329126LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = 14180;
	volatile int8_t x86 = -1;
	static uint8_t x88 = UINT8_MAX;
	int32_t t17 = 430517;

    t17 = (x85^(x86*(x87|x88)));

    if (t17 != 14181) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = -1;
	volatile uint16_t x90 = 87U;

    t18 = (x89^(x90*(x91|x92)));

    if (t18 != 10352) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x93 = INT32_MIN;
	static uint16_t x95 = 55U;
	static int32_t x96 = 25016;
	static volatile int32_t t19 = -1;

    t19 = (x93^(x94*(x95|x96)));

    if (t19 != -507601343) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = -1LL;
	uint16_t x98 = 5015U;
	static int32_t x99 = INT32_MIN;
	volatile int64_t x100 = -1LL;
	int64_t t20 = 17873466993LL;

    t20 = (x97^(x98*(x99|x100)));

    if (t20 != 5014LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x101 = UINT64_MAX;
	uint16_t x102 = UINT16_MAX;
	uint64_t x103 = 4LLU;
	uint16_t x104 = UINT16_MAX;
	uint64_t t21 = 250739LLU;

    t21 = (x101^(x102*(x103|x104)));

    if (t21 != 18446744069414715390LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x113 = -7291;
	int16_t x115 = 6846;
	static uint8_t x116 = 10U;
	volatile uint64_t t22 = 9101642479161690430LLU;

    t22 = (x113^(x114*(x115|x116)));

    if (t22 != 3009732171627029885LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x117 = -23;
	int8_t x118 = INT8_MIN;
	uint32_t x119 = 1U;

    t23 = (x117^(x118*(x119|x120)));

    if (t23 != -151LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x121 = INT16_MIN;
	int16_t x122 = 1;
	uint8_t x124 = UINT8_MAX;
	static int32_t t24 = 209838;

    t24 = (x121^(x122*(x123|x124)));

    if (t24 != -2147450881) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x125 = -124244506;
	int8_t x126 = INT8_MIN;
	static uint64_t x127 = 203412594LLU;
	volatile int32_t x128 = INT32_MIN;
	uint64_t t25 = 8891483075474762LLU;

    t25 = (x125^(x126*(x127|x128)));

    if (t25 != 18446743824744966886LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x130 = 16U;
	volatile int16_t x131 = INT16_MAX;
	uint16_t x132 = UINT16_MAX;
	uint32_t t26 = 2U;

    t26 = (x129^(x130*(x131|x132)));

    if (t26 != 2146435087U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x137 = UINT16_MAX;
	uint64_t x138 = 608860348527840492LLU;
	volatile int16_t x139 = -523;
	int16_t x140 = INT16_MIN;
	uint64_t t27 = 8LLU;

    t27 = (x137^(x138*(x139|x140)));

    if (t27 != 13607431046711404067LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x143 = 85;

    t28 = (x141^(x142*(x143|x144)));

    if (t28 != 9223372036854763610LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x153 = 0;
	int64_t x154 = -1LL;
	int16_t x155 = INT16_MIN;
	int64_t t29 = 41527673LL;

    t29 = (x153^(x154*(x155|x156)));

    if (t29 != 32768LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x157 = UINT64_MAX;
	int16_t x158 = -2356;
	uint8_t x160 = UINT8_MAX;
	uint64_t t30 = 3LLU;

    t30 = (x157^(x158*(x159|x160)));

    if (t30 != 18446744073709549259LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x161 = 3U;
	static volatile uint16_t x162 = 23217U;
	int32_t x163 = INT32_MIN;

    t31 = (x161^(x162*(x163|x164)));

    if (t31 != 18446738497542825626LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x166 = -1;
	volatile int32_t x167 = -1;
	volatile int16_t x168 = -2442;
	int32_t t32 = -34390550;

    t32 = (x165^(x166*(x167|x168)));

    if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x170 = INT8_MIN;
	volatile uint64_t x171 = 263061066592742959LLU;
	uint16_t x172 = 25236U;
	uint64_t t33 = 175592657LLU;

    t33 = (x169^(x170*(x171|x172)));

    if (t33 != 15225072450179473536LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x173 = 7U;
	volatile int64_t x174 = 26893754011LL;
	int16_t x175 = -1;

    t34 = (x173^(x174*(x175|x176)));

    if (t34 != -26893754014LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x177 = 44208802314561778LL;
	volatile int16_t x178 = 5514;
	int8_t x180 = 1;

    t35 = (x177^(x178*(x179|x180)));

    if (t35 != 44208802314281800LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x182 = 47U;
	int64_t x184 = INT64_MIN;

    t36 = (x181^(x182*(x183|x184)));

    if (t36 != 46LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x185 = -1;
	static volatile uint32_t x186 = UINT32_MAX;
	static uint32_t x188 = 4U;
	int64_t t37 = 125856513961479857LL;

    t37 = (x185^(x186*(x187|x188)));

    if (t37 != 161702705453171774LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x189 = -1;
	int16_t x190 = INT16_MIN;
	int16_t x191 = INT16_MAX;
	uint32_t x192 = UINT32_MAX;
	uint32_t t38 = 0U;

    t38 = (x189^(x190*(x191|x192)));

    if (t38 != 4294934527U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x193 = INT16_MAX;
	int16_t x194 = INT16_MIN;
	static uint64_t x195 = UINT64_MAX;
	uint8_t x196 = UINT8_MAX;
	uint64_t t39 = 1081322034LLU;

    t39 = (x193^(x194*(x195|x196)));

    if (t39 != 65535LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x197 = UINT8_MAX;
	uint16_t x198 = 2386U;
	uint32_t x200 = 12919999U;

    t40 = (x197^(x198*(x199|x200)));

    if (t40 != 762346705U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	uint32_t x203 = 199715U;
	static volatile uint64_t t41 = 4244721348222479LLU;

    t41 = (x201^(x202*(x203|x204)));

    if (t41 != 6280798526971527039LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x209 = INT32_MAX;
	volatile uint32_t x210 = 3U;
	int16_t x211 = -1;
	volatile uint32_t t42 = 97U;

    t42 = (x209^(x210*(x211|x212)));

    if (t42 != 2147483650U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x229 = 336U;
	int16_t x231 = -1;
	int32_t x232 = INT32_MIN;
	volatile int32_t t43 = -584824;

    t43 = (x229^(x230*(x231|x232)));

    if (t43 != 337) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MAX;
	uint16_t x235 = 8U;
	volatile uint32_t x236 = 125U;
	uint32_t t44 = 4796437U;

    t44 = (x233^(x234*(x235|x236)));

    if (t44 != 4294951299U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x241 = INT64_MIN;
	uint8_t x242 = UINT8_MAX;
	int32_t x244 = -5;
	static int64_t t45 = 1150524979738LL;

    t45 = (x241^(x242*(x243|x244)));

    if (t45 != 9223372036854774533LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x249 = INT32_MIN;
	int32_t x250 = INT32_MIN;
	static uint32_t x251 = 42U;

    t46 = (x249^(x250*(x251|x252)));

    if (t46 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x253 = -1LL;
	int32_t x254 = -20158202;
	int32_t x256 = -1;

    t47 = (x253^(x254*(x255|x256)));

    if (t47 != -20158203LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x257 = 15LL;
	volatile uint16_t x258 = 2582U;
	int32_t x259 = -1;
	uint64_t x260 = 766798386LLU;
	uint64_t t48 = 7428406LLU;

    t48 = (x257^(x258*(x259|x260)));

    if (t48 != 18446744073709549029LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x262 = -1LL;
	uint64_t x263 = 495955314726LLU;
	int32_t x264 = INT32_MIN;
	static uint64_t t49 = 17434215143097LLU;

    t49 = (x261^(x262*(x263|x264)));

    if (t49 != 18446744073596145135LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x269 = INT8_MAX;
	uint8_t x270 = 1U;
	uint32_t x272 = UINT32_MAX;
	volatile uint32_t t50 = 36U;

    t50 = (x269^(x270*(x271|x272)));

    if (t50 != 4294967168U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x273 = 0;
	uint32_t x274 = UINT32_MAX;
	uint32_t t51 = 2U;

    t51 = (x273^(x274*(x275|x276)));

    if (t51 != 12488U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x277 = 3;
	uint64_t x278 = UINT64_MAX;
	uint8_t x279 = 1U;
	static int8_t x280 = -1;
	uint64_t t52 = 160123678705LLU;

    t52 = (x277^(x278*(x279|x280)));

    if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x281 = 102U;
	volatile uint64_t x282 = 136650206022947LLU;
	static volatile int64_t x283 = -474LL;
	int16_t x284 = INT16_MAX;
	uint64_t t53 = 328133449250LLU;

    t53 = (x281^(x282*(x283|x284)));

    if (t53 != 18446607423503528635LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x285 = INT64_MAX;
	int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 0;
	volatile int64_t t54 = 1482645LL;

    t54 = (x285^(x286*(x287|x288)));

    if (t54 != 9223372036850581503LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x293 = -1LL;
	int8_t x296 = INT8_MAX;
	int64_t t55 = 46356786286LL;

    t55 = (x293^(x294*(x295|x296)));

    if (t55 != -190449922LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x297 = INT8_MIN;
	uint16_t x298 = 32U;
	int8_t x299 = -2;
	static volatile int32_t t56 = 59;

    t56 = (x297^(x298*(x299|x300)));

    if (t56 != 64) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x310 = INT8_MAX;
	static int16_t x311 = -3408;
	int32_t x312 = -2765500;

    t57 = (x309^(x310*(x311|x312)));

    if (t57 != -2147482125) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x313 = INT8_MIN;
	volatile int8_t x314 = INT8_MAX;
	uint64_t x315 = 26LLU;
	volatile int8_t x316 = 1;
	uint64_t t58 = 6570263LLU;

    t58 = (x313^(x314*(x315|x316)));

    if (t58 != 18446744073709548261LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x317 = -45769222075LL;
	int64_t x320 = 82513486399LL;
	static volatile uint64_t t59 = 314LLU;

    t59 = (x317^(x318*(x319|x320)));

    if (t59 != 18446744027940329540LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x325 = INT64_MIN;
	volatile int32_t x326 = 10696;
	static uint64_t x327 = 143261411LLU;
	static uint8_t x328 = UINT8_MAX;
	uint64_t t60 = 271839161980LLU;

    t60 = (x325^(x326*(x327|x328)));

    if (t60 != 9223373569179127352LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x329 = INT64_MIN;
	int64_t x331 = 7592LL;
	int32_t x332 = 1;
	static volatile int64_t t61 = 3LL;

    t61 = (x329^(x330*(x331|x332)));

    if (t61 != -9223371958276724651LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x333 = 145U;
	static int8_t x334 = INT8_MIN;
	uint16_t x335 = UINT16_MAX;
	int16_t x336 = 0;

    t62 = (x333^(x334*(x335|x336)));

    if (t62 != -8388591) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x338 = 0U;
	volatile int32_t x339 = 9845;
	uint16_t x340 = 0U;
	int32_t t63 = 59187;

    t63 = (x337^(x338*(x339|x340)));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x341 = INT32_MIN;
	uint64_t x342 = 130877LLU;
	static volatile int64_t x343 = -1633452919213249LL;

    t64 = (x341^(x342*(x343|x344)));

    if (t64 != 10867232898253287811LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x349 = UINT64_MAX;
	uint8_t x350 = 46U;
	static volatile int32_t x351 = 0;
	uint64_t t65 = 76LLU;

    t65 = (x349^(x350*(x351|x352)));

    if (t65 != 45LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x357 = -2701LL;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MIN;
	static int64_t x360 = INT64_MIN;
	volatile int64_t t66 = -1671563430518397LL;

    t66 = (x357^(x358*(x359|x360)));

    if (t66 != -1073744525LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x361 = -60;
	int64_t x362 = -12120468265173487LL;
	volatile uint64_t x363 = UINT64_MAX;
	static uint64_t x364 = UINT64_MAX;
	static uint64_t t67 = 14521038951206362LLU;

    t67 = (x361^(x362*(x363|x364)));

    if (t67 != 18434623605444378155LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x365 = -980559;
	static uint32_t x366 = UINT32_MAX;
	static uint8_t x367 = UINT8_MAX;
	int16_t x368 = INT16_MAX;
	volatile uint32_t t68 = 36U;

    t68 = (x365^(x366*(x367|x368)));

    if (t68 != 952752U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x373 = 1;
	static int64_t x375 = 29042659LL;
	int16_t x376 = 0;

    t69 = (x373^(x374*(x375|x376)));

    if (t69 != 13380619878835959LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x381 = 95U;
	int32_t x382 = -1;
	int64_t x383 = 28481058LL;
	int8_t x384 = INT8_MIN;
	volatile int64_t t70 = 471156522923LL;

    t70 = (x381^(x382*(x383|x384)));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x385 = 8845211831383605LLU;
	static volatile int16_t x386 = -1;
	volatile int8_t x387 = -1;
	static uint64_t t71 = 69LLU;

    t71 = (x385^(x386*(x387|x388)));

    if (t71 != 8845211831383604LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x389 = UINT64_MAX;
	static int64_t x390 = -1LL;
	int16_t x391 = 114;
	volatile uint64_t t72 = 16428209265475353LLU;

    t72 = (x389^(x390*(x391|x392)));

    if (t72 != 18446744071562068081LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x393 = -1;
	volatile int16_t x394 = INT16_MIN;
	int8_t x395 = -1;
	static uint64_t x396 = UINT64_MAX;
	volatile uint64_t t73 = 147274LLU;

    t73 = (x393^(x394*(x395|x396)));

    if (t73 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x397 = 2U;
	uint8_t x399 = 3U;
	uint64_t x400 = 2378315LLU;
	uint64_t t74 = 1307689256970LLU;

    t74 = (x397^(x398*(x399|x400)));

    if (t74 != 18446744073405127298LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x401 = UINT16_MAX;
	static int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MIN;
	volatile int64_t t75 = 3853450713LL;

    t75 = (x401^(x402*(x403|x404)));

    if (t75 != -9223372034707226625LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x405 = INT16_MIN;
	int64_t x406 = -176102779LL;
	int16_t x407 = INT16_MIN;
	volatile int32_t x408 = -1539;
	volatile int64_t t76 = -11LL;

    t76 = (x405^(x406*(x407|x408)));

    if (t76 != -271022179727LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x411 = INT16_MIN;
	uint8_t x412 = 10U;

    t77 = (x409^(x410*(x411|x412)));

    if (t77 != 18446744073705358591LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x415 = INT32_MIN;
	uint16_t x416 = 3U;

    t78 = (x413^(x414*(x415|x416)));

    if (t78 != 1743475863867087LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x417 = INT64_MIN;
	uint8_t x419 = 66U;
	volatile int8_t x420 = 0;
	static int64_t t79 = 1129LL;

    t79 = (x417^(x418*(x419|x420)));

    if (t79 != 9223372036854767360LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x421 = INT32_MIN;
	static uint32_t x422 = 336U;
	int16_t x423 = -1;
	int32_t x424 = 5;

    t80 = (x421^(x422*(x423|x424)));

    if (t80 != 2147483312U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x427 = INT64_MIN;
	volatile int16_t x428 = INT16_MIN;
	static volatile int64_t t81 = 449LL;

    t81 = (x425^(x426*(x427|x428)));

    if (t81 != -32769LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x429 = 23U;
	int16_t x430 = INT16_MIN;
	uint64_t x431 = UINT64_MAX;
	volatile int32_t x432 = 7876;
	volatile uint64_t t82 = 4LLU;

    t82 = (x429^(x430*(x431|x432)));

    if (t82 != 32791LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x433 = INT64_MIN;
	int16_t x435 = -1;

    t83 = (x433^(x434*(x435|x436)));

    if (t83 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x438 = INT32_MAX;
	int64_t x439 = 315LL;
	int16_t x440 = -2424;
	static volatile int64_t t84 = 119340LL;

    t84 = (x437^(x438*(x439|x440)));

    if (t84 != 9223367490631895109LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x441 = INT32_MIN;
	int8_t x442 = 1;
	int8_t x443 = INT8_MIN;
	volatile int32_t x444 = INT32_MIN;
	int32_t t85 = 21377;

    t85 = (x441^(x442*(x443|x444)));

    if (t85 != 2147483520) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x445 = -1;
	int32_t x447 = INT32_MIN;
	volatile uint64_t x448 = UINT64_MAX;
	static volatile uint64_t t86 = 5705099339LLU;

    t86 = (x445^(x446*(x447|x448)));

    if (t86 != 18446694419890985546LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = -1LL;
	static uint16_t x455 = 961U;
	int16_t x456 = -1;
	int64_t t87 = -19LL;

    t87 = (x453^(x454*(x455|x456)));

    if (t87 != -32767LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x465 = INT64_MIN;
	int32_t x467 = INT32_MIN;
	int8_t x468 = 0;
	int64_t t88 = 186165353022825LL;

    t88 = (x465^(x466*(x467|x468)));

    if (t88 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x469 = -26;
	int16_t x471 = INT16_MIN;
	volatile uint64_t x472 = 45LLU;
	static volatile uint64_t t89 = 1039710597446309452LLU;

    t89 = (x469^(x470*(x471|x472)));

    if (t89 != 18446744073709322531LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x473 = 6U;
	int32_t x475 = 304633934;
	static int16_t x476 = INT16_MIN;
	static uint32_t t90 = 9U;

    t90 = (x473^(x474*(x475|x476)));

    if (t90 != 4290475690U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x477 = 19U;
	static int32_t x478 = -1;
	uint16_t x480 = 3470U;
	uint32_t t91 = 1101658506U;

    t91 = (x477^(x478*(x479|x480)));

    if (t91 != 4294963777U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x481 = 33781541252318056LL;
	static int64_t x482 = INT64_MIN;
	int32_t x484 = 6280003;
	volatile uint64_t t92 = 39524LLU;

    t92 = (x481^(x482*(x483|x484)));

    if (t92 != 9257153578107093864LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x485 = INT32_MAX;
	static uint64_t x486 = 79674LLU;
	static volatile int16_t x487 = INT16_MIN;
	volatile uint8_t x488 = 2U;
	uint64_t t93 = 1864980LLU;

    t93 = (x485^(x486*(x487|x488)));

    if (t93 != 18446744069877698955LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x489 = 890LLU;
	int8_t x490 = INT8_MIN;
	volatile int16_t x492 = -19;
	volatile uint64_t t94 = 1473938127823994214LLU;

    t94 = (x489^(x490*(x491|x492)));

    if (t94 != 1018LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x493 = INT8_MAX;
	int32_t x494 = 41266461;
	int8_t x495 = INT8_MIN;
	uint16_t x496 = UINT16_MAX;
	int32_t t95 = -15;

    t95 = (x493^(x494*(x495|x496)));

    if (t95 != -41266532) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x501 = 903U;
	uint8_t x502 = 44U;
	static int8_t x503 = INT8_MAX;
	uint8_t x504 = 34U;
	int32_t t96 = -66753913;

    t96 = (x501^(x502*(x503|x504)));

    if (t96 != 5715) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x505 = 76U;
	static int64_t x506 = INT64_MIN;
	uint64_t x508 = UINT64_MAX;
	uint64_t t97 = 107LLU;

    t97 = (x505^(x506*(x507|x508)));

    if (t97 != 9223372036854775884LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x509 = INT16_MIN;
	int32_t x510 = -1;
	static int64_t x511 = -1LL;
	int8_t x512 = INT8_MIN;
	volatile int64_t t98 = -8790308520LL;

    t98 = (x509^(x510*(x511|x512)));

    if (t98 != -32767LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x513 = UINT16_MAX;
	static int64_t x514 = -3959LL;
	uint32_t x515 = 5293299U;
	uint32_t x516 = 1U;
	int64_t t99 = 47272075LL;

    t99 = (x513^(x514*(x515|x516)));

    if (t99 != -20956132876LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x517 = INT8_MAX;
	static uint32_t x518 = 110U;
	int64_t x519 = 236606241965LL;
	uint8_t x520 = UINT8_MAX;
	int64_t t100 = -7213219131297424LL;

    t100 = (x517^(x518*(x519|x520)));

    if (t100 != 26026686625261LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x522 = 18LLU;
	int64_t x523 = INT64_MAX;
	int32_t x524 = -1;

    t101 = (x521^(x522*(x523|x524)));

    if (t101 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x525 = -63LL;
	volatile uint16_t x526 = 27033U;
	static int64_t x527 = -1LL;
	int16_t x528 = INT16_MAX;
	int64_t t102 = -1500115928287547LL;

    t102 = (x525^(x526*(x527|x528)));

    if (t102 != 27046LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x530 = 0U;
	static uint16_t x531 = UINT16_MAX;
	int64_t x532 = INT64_MIN;
	static int64_t t103 = 569008419968804334LL;

    t103 = (x529^(x530*(x531|x532)));

    if (t103 != -32768LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x533 = UINT32_MAX;
	volatile uint16_t x534 = 22159U;
	uint8_t x535 = UINT8_MAX;
	volatile int8_t x536 = INT8_MAX;
	uint32_t t104 = 1U;

    t104 = (x533^(x534*(x535|x536)));

    if (t104 != 4289316750U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x538 = 1U;
	int32_t x540 = 1290;
	int32_t t105 = 63051;

    t105 = (x537^(x538*(x539|x540)));

    if (t105 != -5421) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x541 = 0;
	uint64_t x542 = UINT64_MAX;
	int64_t x543 = 2208LL;

    t106 = (x541^(x542*(x543|x544)));

    if (t106 != 30560LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x545 = -1;
	int8_t x547 = -41;
	uint32_t t107 = 69907851U;

    t107 = (x545^(x546*(x547|x548)));

    if (t107 != 4294967254U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x549 = 1773632875U;
	int8_t x550 = -1;
	volatile uint64_t x551 = UINT64_MAX;
	volatile uint8_t x552 = 8U;
	volatile uint64_t t108 = 5926500864LLU;

    t108 = (x549^(x550*(x551|x552)));

    if (t108 != 1773632874LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x553 = 56U;
	uint64_t x555 = 156LLU;
	uint64_t t109 = 5LLU;

    t109 = (x553^(x554*(x555|x556)));

    if (t109 != 18446744073701294136LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x557 = -1;
	uint32_t x558 = 5U;
	int8_t x560 = -1;

    t110 = (x557^(x558*(x559|x560)));

    if (t110 != 4U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x561 = -1;
	int64_t x562 = -1LL;
	uint16_t x563 = UINT16_MAX;
	int8_t x564 = INT8_MIN;
	volatile int64_t t111 = 12364250537868513LL;

    t111 = (x561^(x562*(x563|x564)));

    if (t111 != -2LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x573 = 3995519508039816LLU;
	volatile int16_t x574 = -1;
	uint32_t x575 = UINT32_MAX;
	uint8_t x576 = 35U;
	volatile uint64_t t112 = 202627231LLU;

    t112 = (x573^(x574*(x575|x576)));

    if (t112 != 3995519508039817LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x577 = INT8_MIN;
	uint64_t x578 = UINT64_MAX;
	static uint8_t x579 = 21U;
	int8_t x580 = INT8_MAX;
	volatile uint64_t t113 = 77178821LLU;

    t113 = (x577^(x578*(x579|x580)));

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x581 = 60;
	int8_t x582 = -1;
	int64_t x583 = -661LL;
	int8_t x584 = INT8_MAX;
	volatile int64_t t114 = 1LL;

    t114 = (x581^(x582*(x583|x584)));

    if (t114 != 701LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x585 = -125669561LL;
	static int8_t x586 = -1;
	int32_t x587 = INT32_MAX;
	static uint16_t x588 = 1034U;

    t115 = (x585^(x586*(x587|x588)));

    if (t115 != 2021814086LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = 2;
	uint8_t x591 = UINT8_MAX;

    t116 = (x589^(x590*(x591|x592)));

    if (t116 != 2147418622) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x597 = -1;
	int64_t x598 = -1LL;
	int64_t x599 = -652623613558804822LL;
	uint64_t x600 = UINT64_MAX;
	uint64_t t117 = 44493918LLU;

    t117 = (x597^(x598*(x599|x600)));

    if (t117 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x601 = 5;
	uint8_t x603 = 96U;
	volatile uint64_t x604 = 48LLU;
	static uint64_t t118 = 0LLU;

    t118 = (x601^(x602*(x603|x604)));

    if (t118 != 28565LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x609 = 1U;
	uint64_t x610 = 0LLU;
	volatile uint64_t x611 = 5336529443LLU;
	static int16_t x612 = INT16_MIN;
	volatile uint64_t t119 = 26714LLU;

    t119 = (x609^(x610*(x611|x612)));

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x613 = 6674U;
	uint8_t x614 = 5U;
	int16_t x615 = -1396;
	uint8_t x616 = 3U;

    t120 = (x613^(x614*(x615|x616)));

    if (t120 != 4294967001U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x618 = 2U;
	static uint32_t x619 = 645885877U;
	static int8_t x620 = INT8_MAX;
	uint32_t t121 = 1914615U;

    t121 = (x617^(x618*(x619|x620)));

    if (t121 != 1291771903U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x622 = 2662U;
	static uint64_t x623 = 821553975138487LLU;
	uint8_t x624 = UINT8_MAX;

    t122 = (x621^(x622*(x623|x624)));

    if (t122 != 11410348718673619866LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x626 = UINT32_MAX;
	uint64_t x627 = 191431990004979LLU;
	uint32_t x628 = 350U;
	volatile uint64_t t123 = 57320035406751LLU;

    t123 = (x625^(x626*(x627|x628)));

    if (t123 != 14140564079391224321LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x629 = INT8_MIN;
	volatile uint8_t x630 = 76U;
	int32_t t124 = 122889;

    t124 = (x629^(x630*(x631|x632)));

    if (t124 != 52) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x634 = 15932U;
	uint32_t x635 = UINT32_MAX;
	static int8_t x636 = INT8_MAX;
	uint32_t t125 = 229U;

    t125 = (x633^(x634*(x635|x636)));

    if (t125 != 4294951367U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x641 = UINT64_MAX;
	volatile int32_t x643 = INT32_MIN;
	volatile int16_t x644 = -1;
	uint64_t t126 = 16321LLU;

    t126 = (x641^(x642*(x643|x644)));

    if (t126 != 971LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x645 = 479U;
	int16_t x646 = -54;
	static int32_t x647 = INT32_MIN;
	int8_t x648 = INT8_MIN;
	int32_t t127 = -434;

    t127 = (x645^(x646*(x647|x648)));

    if (t127 != 6879) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x649 = -1;
	uint8_t x650 = 34U;
	int16_t x651 = -22;
	uint32_t x652 = 508748U;
	uint32_t t128 = 65706U;

    t128 = (x649^(x650*(x651|x652)));

    if (t128 != 611U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x653 = UINT64_MAX;
	uint64_t x654 = UINT64_MAX;
	int64_t x655 = INT64_MAX;
	static int64_t x656 = 15LL;
	volatile uint64_t t129 = 121232820LLU;

    t129 = (x653^(x654*(x655|x656)));

    if (t129 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x657 = -1;
	static volatile int64_t x658 = -1LL;
	int32_t x660 = -1;
	volatile int64_t t130 = 29017351759LL;

    t130 = (x657^(x658*(x659|x660)));

    if (t130 != -2LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x662 = -1LL;
	int8_t x664 = -1;

    t131 = (x661^(x662*(x663|x664)));

    if (t131 != 434635367951026897LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x670 = -1LL;
	int8_t x671 = 0;
	uint16_t x672 = 354U;
	volatile int64_t t132 = 1LL;

    t132 = (x669^(x670*(x671|x672)));

    if (t132 != -356LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x673 = INT8_MIN;
	static int64_t x675 = -1LL;
	volatile uint64_t t133 = 39LLU;

    t133 = (x673^(x674*(x675|x676)));

    if (t133 != 44616182053133582LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x677 = INT8_MIN;
	static int8_t x678 = 2;
	volatile uint16_t x679 = 10U;
	uint32_t x680 = 15U;
	volatile uint32_t t134 = 2694247U;

    t134 = (x677^(x678*(x679|x680)));

    if (t134 != 4294967198U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x681 = -3161;
	volatile int64_t x683 = 535609935934LL;
	int8_t x684 = -1;
	volatile int64_t t135 = 15LL;

    t135 = (x681^(x682*(x683|x684)));

    if (t135 != 3161LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x686 = 635822803;
	uint64_t x687 = 832116924LLU;
	volatile uint64_t t136 = 454373521173LLU;

    t136 = (x685^(x686*(x687|x688)));

    if (t136 != 635822802LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x690 = INT8_MIN;
	uint16_t x691 = UINT16_MAX;
	int8_t x692 = INT8_MIN;
	volatile int32_t t137 = 1;

    t137 = (x689^(x690*(x691|x692)));

    if (t137 != 130) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x693 = -1;
	int16_t x695 = -1;
	static volatile int32_t t138 = -6091;

    t138 = (x693^(x694*(x695|x696)));

    if (t138 != -2) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x708 = INT32_MAX;
	volatile uint64_t t139 = 4LLU;

    t139 = (x705^(x706*(x707|x708)));

    if (t139 != 18446744069444952515LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x709 = INT64_MIN;
	int16_t x710 = -1;
	int32_t x711 = INT32_MAX;
	uint64_t x712 = 8618058455431LLU;

    t140 = (x709^(x710*(x711|x712)));

    if (t140 != 9223363416855412737LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x714 = 43330U;
	int32_t x715 = -16057;
	static uint32_t t141 = 699U;

    t141 = (x713^(x714*(x715|x716)));

    if (t141 != 4294923974U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x721 = 28;
	volatile int8_t x722 = -7;
	uint64_t x723 = 29513159508435LLU;
	int64_t x724 = -1LL;
	volatile uint64_t t142 = 9942LLU;

    t142 = (x721^(x722*(x723|x724)));

    if (t142 != 27LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x725 = 0U;
	int64_t x726 = -1LL;
	int16_t x727 = INT16_MIN;
	uint64_t x728 = 631663298988LLU;
	uint64_t t143 = 796766LLU;

    t143 = (x725^(x726*(x727|x728)));

    if (t143 != 30292LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x729 = INT16_MIN;
	volatile int8_t x730 = INT8_MIN;
	uint32_t x731 = 1562705U;
	int32_t x732 = INT32_MAX;
	uint32_t t144 = 45168529U;

    t144 = (x729^(x730*(x731|x732)));

    if (t144 != 4294934656U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	static volatile int16_t x734 = INT16_MAX;
	volatile uint64_t x735 = 110990086549055LLU;
	static int32_t x736 = INT32_MIN;
	uint64_t t145 = 468LLU;

    t145 = (x733^(x734*(x735|x736)));

    if (t145 != 18446729056128913726LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x737 = -1;
	volatile uint64_t x738 = 10623672441LLU;
	static volatile uint16_t x739 = 9U;
	uint16_t x740 = UINT16_MAX;
	uint64_t t146 = 188223LLU;

    t146 = (x737^(x738*(x739|x740)));

    if (t146 != 18446047851336130680LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x746 = -6287;
	int32_t x747 = -1;
	uint64_t x748 = 79787342531504LLU;
	static volatile uint64_t t147 = 593134835757LLU;

    t147 = (x745^(x746*(x747|x748)));

    if (t147 != 2147477360LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x749 = INT8_MAX;
	static int32_t x750 = -1;
	int32_t x751 = 1587301;
	int16_t x752 = -237;

    t148 = (x749^(x750*(x751|x752)));

    if (t148 != 246) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x754 = 33756170U;
	uint16_t x755 = UINT16_MAX;
	int8_t x756 = -1;
	uint32_t t149 = 1219U;

    t149 = (x753^(x754*(x755|x756)));

    if (t149 != 4261211126U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x761 = UINT8_MAX;
	volatile int8_t x762 = INT8_MIN;
	volatile int16_t x763 = INT16_MAX;
	int32_t x764 = 0;

    t150 = (x761^(x762*(x763|x764)));

    if (t150 != -4194177) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x765 = 263859564U;
	int64_t x766 = INT64_MAX;
	int64_t x767 = INT64_MIN;
	volatile int32_t x768 = -1;
	volatile int64_t t151 = 1469114794105243337LL;

    t151 = (x765^(x766*(x767|x768)));

    if (t151 != -9223372036590916243LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x769 = UINT64_MAX;
	uint8_t x770 = 2U;
	uint16_t x771 = 1U;
	int8_t x772 = INT8_MIN;
	volatile uint64_t t152 = 244LLU;

    t152 = (x769^(x770*(x771|x772)));

    if (t152 != 253LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x781 = 40U;
	int32_t x782 = 3;
	uint64_t x783 = 15866710LLU;
	static volatile uint32_t x784 = UINT32_MAX;

    t153 = (x781^(x782*(x783|x784)));

    if (t153 != 12884901845LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x785 = INT64_MIN;
	uint32_t x786 = 1292190450U;
	int32_t x787 = INT32_MIN;
	uint64_t x788 = UINT64_MAX;
	static volatile uint64_t t154 = 3724805686071055LLU;

    t154 = (x785^(x786*(x787|x788)));

    if (t154 != 9223372035562585358LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x791 = 62850U;
	int16_t x792 = INT16_MIN;
	uint32_t t155 = 134U;

    t155 = (x789^(x790*(x791|x792)));

    if (t155 != 229798U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x793 = 4265145LL;
	static uint64_t x795 = 863342043782793678LLU;
	volatile int16_t x796 = 12;
	uint64_t t156 = 0LLU;

    t156 = (x793^(x794*(x795|x796)));

    if (t156 != 16357149219346022197LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x802 = 2;
	int32_t x803 = 235892575;
	int32_t x804 = -22442626;
	static volatile int32_t t157 = -939;

    t157 = (x801^(x802*(x803|x804)));

    if (t157 != 44048641) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x805 = 32U;
	int32_t x807 = -1;
	int16_t x808 = INT16_MAX;
	static volatile int32_t t158 = -14;

    t158 = (x805^(x806*(x807|x808)));

    if (t158 != 160) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x813 = INT16_MIN;
	uint16_t x814 = 0U;
	uint32_t x815 = 1105041719U;
	uint32_t x816 = UINT32_MAX;
	volatile uint32_t t159 = 225210835U;

    t159 = (x813^(x814*(x815|x816)));

    if (t159 != 4294934528U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x821 = 0;
	uint64_t x822 = 20529524100LLU;
	int8_t x823 = INT8_MIN;
	int32_t x824 = 579599;

    t160 = (x821^(x822*(x823|x824)));

    if (t160 != 18446741753873328316LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x825 = -1;
	uint32_t x826 = 347739294U;
	int64_t x827 = -1LL;
	int32_t x828 = -1;
	int64_t t161 = 77994LL;

    t161 = (x825^(x826*(x827|x828)));

    if (t161 != 347739293LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x829 = 0U;
	volatile uint8_t x830 = 65U;
	static uint32_t t162 = 2615874U;

    t162 = (x829^(x830*(x831|x832)));

    if (t162 != 2147971538U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x833 = UINT16_MAX;
	int32_t x834 = -247669;
	int32_t x835 = INT32_MIN;
	static volatile int16_t x836 = -145;
	volatile int32_t t163 = 66167616;

    t163 = (x833^(x834*(x835|x836)));

    if (t163 != 35849914) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x837 = INT32_MIN;
	volatile int64_t x838 = -104LL;
	uint64_t x839 = 15874280198607LLU;
	int8_t x840 = -1;
	static volatile uint64_t t164 = 4817738853573LLU;

    t164 = (x837^(x838*(x839|x840)));

    if (t164 != 18446744071562068072LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x845 = 3;
	uint32_t x846 = UINT32_MAX;
	static int64_t x847 = 1377536601LL;
	volatile int64_t t165 = -343280LL;

    t165 = (x845^(x846*(x847|x848)));

    if (t165 != -167503724508LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x849 = 1;
	int16_t x850 = INT16_MIN;
	int32_t t166 = 21080336;

    t166 = (x849^(x850*(x851|x852)));

    if (t166 != 1376257) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x857 = -29;
	uint16_t x858 = UINT16_MAX;
	static volatile int32_t x860 = INT32_MIN;
	volatile int32_t t167 = 703732;

    t167 = (x857^(x858*(x859|x860)));

    if (t167 != 65506) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x861 = UINT32_MAX;
	volatile int16_t x863 = INT16_MAX;
	static int64_t x864 = INT64_MIN;
	uint64_t t168 = 24462LLU;

    t168 = (x861^(x862*(x863|x864)));

    if (t168 != 9223372032559841278LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x865 = -6991456647367LL;
	volatile int8_t x866 = 2;
	int16_t x868 = INT16_MIN;
	volatile int64_t t169 = 5053702LL;

    t169 = (x865^(x866*(x867|x868)));

    if (t169 != 6991456683833LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x869 = -28;
	int32_t x870 = -1;
	static uint64_t t170 = 66544156496738406LLU;

    t170 = (x869^(x870*(x871|x872)));

    if (t170 != 25229015853826021LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x873 = 101791670196100LLU;
	int32_t x874 = -30669;
	volatile int32_t x875 = -62488;
	int64_t x876 = INT64_MAX;

    t171 = (x873^(x874*(x875|x876)));

    if (t171 != 101791670181961LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x877 = 2438125465LLU;
	int16_t x879 = INT16_MIN;
	volatile int32_t x880 = -1;
	static uint64_t t172 = 117966707203LLU;

    t172 = (x877^(x878*(x879|x880)));

    if (t172 != 2438125464LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x881 = INT16_MIN;
	uint8_t x883 = 11U;
	volatile uint32_t x884 = UINT32_MAX;
	volatile uint32_t t173 = 36U;

    t173 = (x881^(x882*(x883|x884)));

    if (t173 != 4294901760U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint16_t x885 = UINT16_MAX;
	int8_t x886 = 4;
	static int32_t x887 = INT32_MIN;
	static uint32_t x888 = UINT32_MAX;

    t174 = (x885^(x886*(x887|x888)));

    if (t174 != 4294901763U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x890 = INT16_MAX;
	static int64_t x892 = INT64_MIN;
	int64_t t175 = 3016007LL;

    t175 = (x889^(x890*(x891|x892)));

    if (t175 != -70366596682551LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x897 = INT64_MIN;
	uint32_t x898 = 45U;
	int32_t x899 = INT32_MIN;
	uint8_t x900 = UINT8_MAX;
	volatile int64_t t176 = -453003602075LL;

    t176 = (x897^(x898*(x899|x900)));

    if (t176 != -9223372034707280685LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x901 = 1;
	static uint64_t x903 = 428211LLU;
	volatile int64_t x904 = -1LL;
	uint64_t t177 = 3027574435884383483LLU;

    t177 = (x901^(x902*(x903|x904)));

    if (t177 != 853494827LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x907 = INT8_MAX;
	uint8_t x908 = 4U;
	volatile int64_t t178 = 44540264021995LL;

    t178 = (x905^(x906*(x907|x908)));

    if (t178 != 149320LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x911 = 943165342808LLU;
	int8_t x912 = INT8_MIN;
	uint64_t t179 = 8827278096069691498LLU;

    t179 = (x909^(x910*(x911|x912)));

    if (t179 != 18446744073709550777LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x914 = INT64_MAX;
	volatile uint64_t x915 = 1872084LLU;
	uint64_t t180 = 224LLU;

    t180 = (x913^(x914*(x915|x916)));

    if (t180 != 9224323488283982894LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint8_t x918 = 1U;
	uint64_t t181 = 31486LLU;

    t181 = (x917^(x918*(x919|x920)));

    if (t181 != 16945292381532547088LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x921 = -1;
	int16_t x922 = INT16_MAX;
	uint32_t x924 = 21965U;

    t182 = (x921^(x922*(x923|x924)));

    if (t182 != 18446743315956260348LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x925 = INT64_MIN;
	uint16_t x927 = UINT16_MAX;
	volatile int64_t t183 = -489825515187042LL;

    t183 = (x925^(x926*(x927|x928)));

    if (t183 != 9223372036694671709LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x929 = 66485848U;
	volatile int32_t x930 = -1;
	int64_t x932 = 14LL;
	volatile int64_t t184 = 10LL;

    t184 = (x929^(x930*(x931|x932)));

    if (t184 != 909406865802LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x933 = 20;
	int16_t x935 = 10334;
	volatile int16_t x936 = -42;
	int32_t t185 = 116;

    t185 = (x933^(x934*(x935|x936)));

    if (t185 != -598) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x941 = INT8_MIN;
	uint8_t x943 = 0U;
	static int8_t x944 = -1;
	volatile int32_t t186 = 17303;

    t186 = (x941^(x942*(x943|x944)));

    if (t186 != 38) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x957 = 29U;
	uint32_t x958 = 18U;
	volatile int32_t x959 = INT32_MIN;
	uint64_t x960 = UINT64_MAX;
	static uint64_t t187 = 1145836641LLU;

    t187 = (x957^(x958*(x959|x960)));

    if (t187 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x970 = UINT64_MAX;
	int8_t x971 = 0;
	static int16_t x972 = INT16_MIN;
	volatile uint64_t t188 = 2003683240LLU;

    t188 = (x969^(x970*(x971|x972)));

    if (t188 != 33023LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x973 = UINT16_MAX;
	int16_t x974 = -1;
	uint16_t x975 = UINT16_MAX;
	int8_t x976 = INT8_MIN;
	volatile int32_t t189 = 1076970;

    t189 = (x973^(x974*(x975|x976)));

    if (t189 != 65534) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x981 = INT8_MIN;
	uint64_t x984 = 1818910753627025LLU;
	uint64_t t190 = 1286577LLU;

    t190 = (x981^(x982*(x983|x984)));

    if (t190 != 15324779524315414400LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x986 = 770380055718038465LLU;
	uint8_t x987 = 1U;
	volatile uint16_t x988 = 37U;
	static volatile uint64_t t191 = 45623891LLU;

    t191 = (x985^(x986*(x987|x988)));

    if (t191 != 10057317987857871514LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x993 = UINT8_MAX;
	uint32_t x994 = UINT32_MAX;
	int16_t x995 = -1;
	int64_t x996 = 15754073719347LL;
	volatile int64_t t192 = -1874LL;

    t192 = (x993^(x994*(x995|x996)));

    if (t192 != -4294967042LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x997 = UINT32_MAX;
	int16_t x999 = -1;
	static volatile int16_t x1000 = -1;
	volatile uint32_t t193 = 56625U;

    t193 = (x997^(x998*(x999|x1000)));

    if (t193 != 22U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1001 = -1;
	static uint8_t x1002 = 4U;
	volatile int64_t x1003 = 11785980LL;
	uint8_t x1004 = 1U;
	static volatile int64_t t194 = 767618233276821LL;

    t194 = (x1001^(x1002*(x1003|x1004)));

    if (t194 != -47143925LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1005 = 154156760601202342LL;
	int16_t x1006 = INT16_MIN;
	int16_t x1008 = INT16_MIN;
	int64_t t195 = -7161000LL;

    t195 = (x1005^(x1006*(x1007|x1008)));

    if (t195 != 154156761039113894LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x1009 = 661434U;
	volatile uint64_t x1010 = 52593064617488LLU;
	static int16_t x1012 = INT16_MIN;

    t196 = (x1009^(x1010*(x1011|x1012)));

    if (t196 != 16723795276841297722LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1013 = -1;
	volatile uint64_t x1015 = 22441966160436LLU;
	int8_t x1016 = INT8_MIN;
	uint64_t t197 = 4207LLU;

    t197 = (x1013^(x1014*(x1015|x1016)));

    if (t197 != 6772786505023904563LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1017 = INT8_MIN;
	uint32_t x1018 = 88114360U;
	int32_t x1019 = INT32_MIN;
	uint32_t t198 = 11U;

    t198 = (x1017^(x1018*(x1019|x1020)));

    if (t198 != 2527818032U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1021 = UINT16_MAX;
	uint16_t x1022 = UINT16_MAX;
	uint64_t x1023 = 313521907854LLU;

    t199 = (x1021^(x1022*(x1023|x1024)));

    if (t199 != 20546658231232653LLU) { NG(); } else { ; }
	
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

