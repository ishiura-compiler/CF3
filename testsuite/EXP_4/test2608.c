
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

static int64_t x3 = 20556522330025324LL;
uint64_t x5 = UINT64_MAX;
static int16_t x6 = INT16_MAX;
static uint32_t x9 = 0U;
int16_t x11 = INT16_MIN;
static int8_t x14 = INT8_MAX;
volatile int64_t x19 = INT64_MIN;
static int32_t t5 = 12134;
volatile int32_t x25 = INT32_MIN;
static volatile uint64_t x28 = UINT64_MAX;
volatile int32_t t7 = 32;
uint16_t x37 = 441U;
static int32_t x46 = INT32_MIN;
int8_t x47 = 1;
static uint8_t x49 = UINT8_MAX;
int16_t x52 = INT16_MIN;
static int8_t x58 = INT8_MIN;
int8_t x60 = INT8_MAX;
static int64_t t14 = 24341207999434081LL;
int8_t x62 = -1;
int64_t x63 = -4245304815272LL;
static int32_t x64 = 428;
static volatile int64_t t15 = -1LL;
int32_t x68 = 4987;
int64_t x70 = -1484607LL;
int8_t x74 = -14;
uint32_t x75 = 15117U;
volatile uint64_t t19 = 65342785832888LLU;
int32_t x89 = INT32_MIN;
uint8_t x90 = 59U;
static uint32_t x94 = 1020807445U;
uint8_t x101 = UINT8_MAX;
uint32_t x102 = UINT32_MAX;
static volatile int8_t x108 = -2;
volatile int64_t x119 = INT64_MIN;
uint8_t x125 = UINT8_MAX;
volatile int8_t x133 = -1;
int32_t t30 = 765830;
int32_t x143 = INT32_MAX;
uint32_t t33 = 352U;
static volatile int64_t x155 = -1438981LL;
int8_t x156 = INT8_MIN;
static int64_t x159 = INT64_MIN;
int8_t x164 = INT8_MIN;
uint8_t x173 = 2U;
uint32_t x175 = 102509U;
uint8_t x178 = 5U;
int32_t x180 = -27;
volatile int32_t t40 = -43357;
uint32_t x186 = UINT32_MAX;
uint16_t x190 = 45U;
static volatile int64_t t43 = 733202767LL;
int16_t x193 = 12;
int32_t x195 = INT32_MAX;
int16_t x197 = 36;
uint8_t x206 = 21U;
uint8_t x207 = UINT8_MAX;
static int8_t x214 = 4;
volatile int8_t x238 = -1;
static volatile int16_t x240 = -119;
int16_t x247 = INT16_MAX;
static int16_t x252 = -1;
uint64_t x255 = UINT64_MAX;
volatile int16_t x256 = INT16_MIN;
int64_t x261 = 1423645456321522LL;
static uint64_t x262 = 1918864LLU;
int8_t x265 = 12;
volatile int64_t x267 = INT64_MIN;
volatile uint64_t t58 = 141860521403LLU;
uint32_t x274 = 3997101U;
static uint64_t x275 = UINT64_MAX;
int8_t x281 = INT8_MIN;
uint8_t x282 = 4U;
int64_t x289 = INT64_MAX;
static int8_t x301 = -1;
static uint8_t x309 = 41U;
int8_t x314 = INT8_MIN;
int16_t x318 = 12;
static int16_t x322 = -1;
static volatile int16_t x325 = -2259;
volatile uint64_t x327 = 8LLU;
int8_t x339 = INT8_MIN;
static int16_t x345 = INT16_MAX;
int8_t x349 = INT8_MIN;
volatile uint32_t x352 = 10658U;
uint32_t t76 = 53730U;
static volatile int8_t x354 = INT8_MIN;
volatile int16_t x365 = -1;
static int64_t x367 = INT64_MAX;
int32_t x372 = -754943006;
int32_t t81 = -58244529;
uint16_t x376 = 478U;
int32_t x380 = INT32_MAX;
static int64_t t85 = 1LL;
volatile int8_t x398 = INT8_MAX;
uint32_t x399 = 1U;
int32_t x403 = -664410;
int32_t x406 = -2383;
static volatile int32_t x410 = INT32_MIN;
int64_t t91 = -466525LL;
uint32_t t93 = 162613869U;
static int64_t x421 = 399777440LL;
volatile int8_t x429 = INT8_MIN;
static uint64_t x430 = 2464975377LLU;
int64_t t98 = -741337220802226LL;
volatile int16_t x445 = INT16_MAX;
uint64_t x450 = 6278784436903LLU;
int16_t x451 = 4067;
volatile uint64_t t100 = 15LLU;
int8_t x453 = 1;
int32_t x455 = INT32_MAX;
int8_t x458 = INT8_MIN;
volatile uint32_t t103 = 110768010U;
volatile int32_t x467 = INT32_MAX;
uint32_t t104 = 6871U;
uint16_t x471 = 38U;
int8_t x472 = -1;
int16_t x473 = INT16_MIN;
int16_t x474 = 1;
volatile uint64_t t106 = 2388LLU;
int8_t x480 = 57;
int8_t x488 = -24;
static uint32_t x490 = 2237740U;
volatile uint64_t t111 = 3698LLU;
static int8_t x502 = INT8_MIN;
uint16_t x503 = UINT16_MAX;
volatile uint8_t x511 = 44U;
uint16_t x518 = UINT16_MAX;
int64_t x520 = INT64_MIN;
volatile uint64_t t117 = 505LLU;
int32_t t119 = 0;
int32_t t120 = -1715327;
uint32_t x550 = 847050U;
uint32_t x553 = 55363568U;
volatile int32_t x568 = INT32_MIN;
int32_t x576 = -1;
uint64_t t129 = 61939136749607331LLU;
volatile int32_t t130 = 99367;
volatile int64_t t131 = 43418080307993LL;
int16_t x594 = -1;
volatile int32_t x595 = INT32_MAX;
volatile uint64_t t133 = 64693370LLU;
int32_t x600 = -1;
static int64_t x607 = INT64_MIN;
volatile int32_t t137 = 20;
int16_t x625 = -45;
int16_t x626 = -125;
uint16_t x627 = 21027U;
int16_t x628 = INT16_MIN;
volatile int32_t t141 = -2160;
volatile uint8_t x629 = 77U;
static int32_t x631 = INT32_MIN;
int16_t x636 = -55;
static uint64_t t143 = 337913352957LLU;
int64_t x638 = -13928684LL;
static volatile uint8_t x653 = UINT8_MAX;
static int64_t x655 = 62713770LL;
uint8_t x663 = 78U;
int8_t x665 = -1;
volatile int64_t x666 = 156LL;
static int16_t x671 = -71;
int16_t x672 = INT16_MAX;
int32_t x676 = 426624;
uint64_t x680 = 1040885052254439LLU;
volatile uint64_t x688 = UINT64_MAX;
uint8_t x689 = 1U;
static volatile int64_t x692 = -1LL;
int64_t x702 = INT64_MIN;
static uint32_t x703 = UINT32_MAX;
static uint64_t x708 = 0LLU;
int64_t t160 = -152LL;
static int8_t x725 = 24;
int64_t x728 = -31297765319225831LL;
int8_t x730 = INT8_MIN;
static int16_t x735 = INT16_MAX;
int32_t x741 = -52439;
int8_t x751 = 1;
static int64_t x754 = -10421195646183653LL;
volatile int64_t t170 = 252947823453LL;
int64_t t173 = -876917426LL;
uint64_t x774 = UINT64_MAX;
int8_t x775 = INT8_MAX;
uint32_t x776 = 1457U;
uint64_t x779 = UINT64_MAX;
int8_t x783 = INT8_MAX;
uint64_t x793 = UINT64_MAX;
int16_t x802 = -1;
int64_t x810 = INT64_MIN;
int64_t t182 = 6LL;
static volatile int64_t t186 = 1239450565784477348LL;
uint16_t x841 = 345U;
volatile uint64_t x843 = 4614987LLU;
int8_t x854 = INT8_MAX;
volatile int32_t x865 = INT32_MIN;
int8_t x885 = INT8_MIN;
int64_t x888 = INT64_MIN;
uint64_t x897 = UINT64_MAX;
int64_t x899 = -8525580469526LL;


void f0(void) {
    	volatile int64_t x1 = 1872863147948778LL;
	int32_t x2 = INT32_MIN;
	uint8_t x4 = UINT8_MAX;
	volatile int64_t t0 = 26435764356636LL;

    t0 = (x1/(x2%(x3^x4)));

    if (t0 != -872119LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MIN;
	volatile uint64_t t1 = 236312291949LLU;

    t1 = (x5/(x6%(x7^x8)));

    if (t1 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 7;
	int8_t x12 = -1;
	volatile uint32_t t2 = 7U;

    t2 = (x9/(x10%(x11^x12)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = -1;
	uint8_t x15 = 0U;
	uint64_t x16 = 3921LLU;
	uint64_t t3 = 188214531LLU;

    t3 = (x13/(x14%(x15^x16)));

    if (t3 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = 126;
	volatile int64_t x18 = INT64_MIN;
	static int16_t x20 = INT16_MAX;
	int64_t t4 = -5LL;

    t4 = (x17/(x18%(x19^x20)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 29U;
	static volatile int8_t x22 = -1;
	int8_t x23 = INT8_MIN;
	static int32_t x24 = -269;

    t5 = (x21/(x22%(x23^x24)));

    if (t5 != -29) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = 419U;
	static int64_t x27 = INT64_MIN;
	uint64_t t6 = 1073104655119808506LLU;

    t6 = (x25/(x26%(x27^x28)));

    if (t6 != 44025642175565794LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -2921329;
	int32_t x30 = INT32_MIN;
	uint8_t x31 = 10U;
	int8_t x32 = 12;

    t7 = (x29/(x30%(x31^x32)));

    if (t7 != 1460664) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	volatile uint32_t x34 = 45U;
	uint32_t x35 = 379119U;
	static volatile int32_t x36 = -229;
	uint32_t t8 = 63U;

    t8 = (x33/(x34%(x35^x36)));

    if (t8 != 95443717U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x38 = 38484583U;
	int8_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	static volatile uint32_t t9 = 106U;

    t9 = (x37/(x38%(x39^x40)));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	uint32_t x42 = 1U;
	uint16_t x43 = 11731U;
	volatile int32_t x44 = INT32_MIN;
	static uint32_t t10 = UINT32_MAX;

    t10 = (x41/(x42%(x43^x44)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MAX;
	int64_t x48 = INT64_MIN;
	static int64_t t11 = -1938779LL;

    t11 = (x45/(x46%(x47^x48)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = INT32_MIN;
	int8_t x51 = -1;
	int32_t t12 = -10696932;

    t12 = (x49/(x50%(x51^x52)));

    if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	int32_t x54 = -1;
	volatile int8_t x55 = -1;
	uint32_t x56 = 913681U;
	volatile uint32_t t13 = 16697754U;

    t13 = (x53/(x54%(x55^x56)));

    if (t13 != 4700U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 20U;
	int64_t x59 = 488389590813414042LL;

    t14 = (x57/(x58%(x59^x60)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 194U;

    t15 = (x61/(x62%(x63^x64)));

    if (t15 != -194LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	int64_t x66 = INT64_MIN;
	volatile int64_t x67 = -410908968173838860LL;
	uint64_t t16 = 724980664724025LLU;

    t16 = (x65/(x66%(x67^x68)));

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 3985;
	static uint8_t x71 = 57U;
	int32_t x72 = 415798;
	volatile int64_t t17 = -4339643571368142LL;

    t17 = (x69/(x70%(x71^x72)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint32_t x76 = 0U;
	static volatile uint32_t t18 = 6942360U;

    t18 = (x73/(x74%(x75^x76)));

    if (t18 != 2596715U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x81 = INT64_MIN;
	static int8_t x82 = 11;
	uint16_t x83 = UINT16_MAX;
	uint64_t x84 = 6031816912LLU;

    t19 = (x81/(x82%(x83^x84)));

    if (t19 != 838488366986797800LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = 3;
	int64_t x86 = INT64_MAX;
	static int32_t x87 = -1;
	static uint32_t x88 = 175907U;
	volatile int64_t t20 = 15543158LL;

    t20 = (x85/(x86%(x87^x88)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x91 = INT32_MIN;
	volatile int8_t x92 = 1;
	int32_t t21 = -150;

    t21 = (x89/(x90%(x91^x92)));

    if (t21 != -36398027) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = 12628198346518LLU;
	static uint32_t x95 = UINT32_MAX;
	uint8_t x96 = UINT8_MAX;
	volatile uint64_t t22 = 3620396LLU;

    t22 = (x93/(x94%(x95^x96)));

    if (t22 != 12370LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x97 = 356;
	uint16_t x98 = UINT16_MAX;
	static int32_t x99 = INT32_MIN;
	static int8_t x100 = INT8_MIN;
	int32_t t23 = -25420401;

    t23 = (x97/(x98%(x99^x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x103 = 130470;
	int8_t x104 = -1;
	volatile uint32_t t24 = 63645U;

    t24 = (x101/(x102%(x103^x104)));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = INT16_MIN;
	int64_t x106 = 1548492501381LL;
	int64_t x107 = INT64_MAX;
	volatile int64_t t25 = -58993219LL;

    t25 = (x105/(x106%(x107^x108)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x109 = 5718U;
	static int16_t x110 = -1;
	int16_t x111 = 3932;
	int32_t x112 = INT32_MIN;
	static volatile int32_t t26 = -2383;

    t26 = (x109/(x110%(x111^x112)));

    if (t26 != -5718) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = -1;
	volatile uint16_t x118 = 368U;
	int16_t x120 = INT16_MIN;
	int64_t t27 = -3930586152001602LL;

    t27 = (x117/(x118%(x119^x120)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = 36LL;
	int16_t x122 = INT16_MIN;
	uint32_t x123 = 292862U;
	int16_t x124 = INT16_MAX;
	int64_t t28 = -232440371300248LL;

    t28 = (x121/(x122%(x123^x124)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x126 = INT32_MAX;
	volatile uint32_t x127 = 43U;
	int32_t x128 = -1;
	static uint32_t t29 = 723U;

    t29 = (x125/(x126%(x127^x128)));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x134 = INT8_MAX;
	volatile int16_t x135 = -1;
	int32_t x136 = INT32_MIN;

    t30 = (x133/(x134%(x135^x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = 11;
	int64_t x142 = 598312LL;
	int16_t x144 = INT16_MIN;
	int64_t t31 = 58LL;

    t31 = (x141/(x142%(x143^x144)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x145 = -1;
	int16_t x146 = INT16_MIN;
	volatile int16_t x147 = INT16_MIN;
	static volatile int16_t x148 = 164;
	int32_t t32 = -81;

    t32 = (x145/(x146%(x147^x148)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x149 = -70;
	uint8_t x150 = 47U;
	static uint32_t x151 = UINT32_MAX;
	uint32_t x152 = 274635526U;

    t33 = (x149/(x150%(x151^x152)));

    if (t33 != 91382281U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x153 = 83471U;
	int32_t x154 = -813;
	int64_t t34 = 3LL;

    t34 = (x153/(x154%(x155^x156)));

    if (t34 != -102LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x157 = INT32_MIN;
	int64_t x158 = -1LL;
	uint8_t x160 = 104U;
	volatile int64_t t35 = -8019LL;

    t35 = (x157/(x158%(x159^x160)));

    if (t35 != 2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	uint8_t x163 = UINT8_MAX;
	volatile uint64_t t36 = 185775777156376LLU;

    t36 = (x161/(x162%(x163^x164)));

    if (t36 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = -1;
	uint16_t x166 = 8601U;
	volatile int32_t x167 = 3565320;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t37 = -6038;

    t37 = (x165/(x166%(x167^x168)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x169 = INT8_MIN;
	static volatile uint16_t x170 = UINT16_MAX;
	static int64_t x171 = -1557373451603LL;
	int32_t x172 = INT32_MAX;
	int64_t t38 = 12749311470582943LL;

    t38 = (x169/(x170%(x171^x172)));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x174 = INT32_MAX;
	volatile int32_t x176 = 1;
	volatile uint32_t t39 = 119872374U;

    t39 = (x173/(x174%(x175^x176)));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x177 = 0;
	uint8_t x179 = UINT8_MAX;

    t40 = (x177/(x178%(x179^x180)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x181 = INT8_MAX;
	uint16_t x182 = 1U;
	int8_t x183 = INT8_MAX;
	static volatile uint64_t x184 = UINT64_MAX;
	static volatile uint64_t t41 = 14439177LLU;

    t41 = (x181/(x182%(x183^x184)));

    if (t41 != 127LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x185 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	static uint32_t x188 = 29999174U;
	static int64_t t42 = -34858037576239LL;

    t42 = (x185/(x186%(x187^x188)));

    if (t42 != -307454333034LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x189 = -30612;
	static int64_t x191 = INT64_MAX;
	int64_t x192 = 1363215LL;

    t43 = (x189/(x190%(x191^x192)));

    if (t43 != -680LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x194 = -1;
	volatile int8_t x196 = INT8_MIN;
	static int32_t t44 = 471;

    t44 = (x193/(x194%(x195^x196)));

    if (t44 != -12) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x198 = -62173070LL;
	int16_t x199 = INT16_MIN;
	uint8_t x200 = UINT8_MAX;
	int64_t t45 = -13293642588796367LL;

    t45 = (x197/(x198%(x199^x200)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x201 = -94857258;
	int8_t x202 = INT8_MIN;
	uint8_t x203 = 12U;
	volatile uint64_t x204 = UINT64_MAX;
	uint64_t t46 = 3LLU;

    t46 = (x201/(x202%(x203^x204)));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x205 = 73;
	int16_t x208 = -1;
	volatile int32_t t47 = 34224595;

    t47 = (x205/(x206%(x207^x208)));

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x213 = INT8_MIN;
	volatile int32_t x215 = 443114010;
	volatile int32_t x216 = INT32_MIN;
	int32_t t48 = -95;

    t48 = (x213/(x214%(x215^x216)));

    if (t48 != -32) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x217 = 5U;
	int8_t x218 = INT8_MIN;
	uint64_t x219 = UINT64_MAX;
	volatile int32_t x220 = INT32_MIN;
	static uint64_t t49 = 24715059487LLU;

    t49 = (x217/(x218%(x219^x220)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x225 = INT64_MIN;
	uint8_t x226 = 4U;
	volatile uint32_t x227 = 375579U;
	static int32_t x228 = -937;
	volatile int64_t t50 = -825472185312863122LL;

    t50 = (x225/(x226%(x227^x228)));

    if (t50 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x233 = UINT32_MAX;
	int16_t x234 = -1;
	static uint64_t x235 = 834563LLU;
	int16_t x236 = 0;
	uint64_t t51 = 5LLU;

    t51 = (x233/(x234%(x235^x236)));

    if (t51 != 9938LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x237 = -556359792LL;
	int32_t x239 = -1;
	int64_t t52 = 1589LL;

    t52 = (x237/(x238%(x239^x240)));

    if (t52 != 556359792LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x245 = INT64_MAX;
	int64_t x246 = -1LL;
	int64_t x248 = INT64_MAX;
	static volatile int64_t t53 = -3165LL;

    t53 = (x245/(x246%(x247^x248)));

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x249 = INT8_MIN;
	uint32_t x250 = 64197U;
	static uint64_t x251 = 325533LLU;
	uint64_t t54 = 402091527388303LLU;

    t54 = (x249/(x250%(x251^x252)));

    if (t54 != 287345889585331LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x253 = 0U;
	int16_t x254 = 1074;
	volatile uint64_t t55 = 15742825855303680LLU;

    t55 = (x253/(x254%(x255^x256)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x257 = -222630147;
	int16_t x258 = -6;
	int32_t x259 = INT32_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t56 = -1639;

    t56 = (x257/(x258%(x259^x260)));

    if (t56 != 37105024) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x263 = 3981463LL;
	static uint8_t x264 = UINT8_MAX;
	volatile uint64_t t57 = 44467993553LLU;

    t57 = (x261/(x262%(x263^x264)));

    if (t57 != 741920978LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x266 = 16411496977LLU;
	static uint16_t x268 = 1U;

    t58 = (x265/(x266%(x267^x268)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x269 = UINT8_MAX;
	uint32_t x270 = 9393893U;
	static int8_t x271 = 26;
	volatile uint32_t x272 = 24665U;
	volatile uint32_t t59 = 655453U;

    t59 = (x269/(x270%(x271^x272)));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x273 = -1LL;
	int64_t x276 = 93070LL;
	uint64_t t60 = 5LLU;

    t60 = (x273/(x274%(x275^x276)));

    if (t60 != 4615030761972LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MIN;
	static int32_t x279 = INT32_MIN;
	int64_t x280 = 958791140807043LL;
	int64_t t61 = -47728224992LL;

    t61 = (x277/(x278%(x279^x280)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x283 = INT32_MIN;
	int32_t x284 = -1;
	int32_t t62 = -24178;

    t62 = (x281/(x282%(x283^x284)));

    if (t62 != -32) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = INT16_MAX;
	int16_t x286 = 413;
	volatile int8_t x287 = 31;
	int64_t x288 = -1LL;
	volatile int64_t t63 = -2717651562277211482LL;

    t63 = (x285/(x286%(x287^x288)));

    if (t63 != 1129LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x290 = INT32_MAX;
	int16_t x291 = 11019;
	static int16_t x292 = -1;
	volatile int64_t t64 = 11600945351LL;

    t64 = (x289/(x290%(x291^x292)));

    if (t64 != 1764563236436727LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	int8_t x294 = INT8_MIN;
	volatile int16_t x295 = INT16_MIN;
	volatile int8_t x296 = INT8_MIN;
	uint64_t t65 = 487914705786LLU;

    t65 = (x293/(x294%(x295^x296)));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x297 = INT64_MIN;
	int16_t x298 = INT16_MIN;
	int64_t x299 = 683LL;
	int64_t x300 = -1LL;
	volatile int64_t t66 = 79123552818LL;

    t66 = (x297/(x298%(x299^x300)));

    if (t66 != 14876406511056090LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x302 = -3;
	int64_t x303 = INT64_MIN;
	static uint32_t x304 = 4431U;
	volatile int64_t t67 = -9492846LL;

    t67 = (x301/(x302%(x303^x304)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x305 = 8U;
	static volatile int16_t x306 = -7;
	int8_t x307 = INT8_MIN;
	static int32_t x308 = 521467663;
	volatile int32_t t68 = 47;

    t68 = (x305/(x306%(x307^x308)));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x310 = 5439;
	int64_t x311 = INT64_MIN;
	int32_t x312 = -6971889;
	volatile int64_t t69 = 38947106522503LL;

    t69 = (x309/(x310%(x311^x312)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x313 = 5U;
	static int64_t x315 = 224LL;
	int16_t x316 = 902;
	int64_t t70 = 1726996226142779LL;

    t70 = (x313/(x314%(x315^x316)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x317 = INT64_MIN;
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = INT64_MIN;
	volatile int64_t t71 = 2LL;

    t71 = (x317/(x318%(x319^x320)));

    if (t71 != -768614336404564650LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x321 = 25;
	static uint16_t x323 = 20716U;
	uint64_t x324 = 0LLU;
	volatile uint64_t t72 = 10441LLU;

    t72 = (x321/(x322%(x323^x324)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x326 = UINT16_MAX;
	volatile int64_t x328 = INT64_MIN;
	uint64_t t73 = 264761LLU;

    t73 = (x325/(x326%(x327^x328)));

    if (t73 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x337 = INT16_MAX;
	volatile int16_t x338 = 383;
	volatile int16_t x340 = -3727;
	int32_t t74 = 1170;

    t74 = (x337/(x338%(x339^x340)));

    if (t74 != 85) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x346 = 1LL;
	int64_t x347 = -180630LL;
	uint64_t x348 = 6162065978910LLU;
	volatile uint64_t t75 = 3686997361LLU;

    t75 = (x345/(x346%(x347^x348)));

    if (t75 != 32767LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x350 = 246U;
	static int32_t x351 = 23145389;

    t76 = (x349/(x350%(x351^x352)));

    if (t76 != 17459216U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x353 = -1006393190733898525LL;
	uint64_t x355 = 783632516840844183LLU;
	static volatile int64_t x356 = INT64_MAX;
	uint64_t t77 = 15LLU;

    t77 = (x353/(x354%(x355^x356)));

    if (t77 != 11LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x357 = 0;
	int64_t x358 = -1LL;
	volatile int16_t x359 = INT16_MIN;
	static uint64_t x360 = 925843098LLU;
	static volatile uint64_t t78 = 254LLU;

    t78 = (x357/(x358%(x359^x360)));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x361 = 11157LLU;
	int32_t x362 = -25482;
	uint16_t x363 = UINT16_MAX;
	int16_t x364 = -1;
	volatile uint64_t t79 = 9872645833LLU;

    t79 = (x361/(x362%(x363^x364)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x366 = INT16_MIN;
	int8_t x368 = -1;
	volatile int64_t t80 = -244682376164LL;

    t80 = (x365/(x366%(x367^x368)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x369 = INT16_MIN;
	int16_t x370 = 14;
	volatile int32_t x371 = -1;

    t81 = (x369/(x370%(x371^x372)));

    if (t81 != -2340) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x373 = INT16_MAX;
	static int16_t x374 = -1;
	volatile int32_t x375 = 1;
	volatile int32_t t82 = -7744;

    t82 = (x373/(x374%(x375^x376)));

    if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x377 = INT64_MAX;
	static int32_t x378 = INT32_MAX;
	int8_t x379 = INT8_MAX;
	int64_t t83 = 202766347837415LL;

    t83 = (x377/(x378%(x379^x380)));

    if (t83 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x381 = INT8_MIN;
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = 76023327560LLU;
	static volatile uint64_t t84 = 400082480898237LLU;

    t84 = (x381/(x382%(x383^x384)));

    if (t84 != 242645909LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MIN;
	uint32_t x387 = 7U;
	int16_t x388 = INT16_MIN;

    t85 = (x385/(x386%(x387^x388)));

    if (t85 != -282639415219402LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x389 = 109U;
	uint16_t x390 = 1U;
	static uint64_t x391 = 15LLU;
	volatile uint32_t x392 = 785274346U;
	static uint64_t t86 = 112642952LLU;

    t86 = (x389/(x390%(x391^x392)));

    if (t86 != 109LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x393 = INT16_MIN;
	static uint32_t x394 = UINT32_MAX;
	int64_t x395 = -1LL;
	int64_t x396 = INT64_MIN;
	int64_t t87 = -46LL;

    t87 = (x393/(x394%(x395^x396)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x397 = 118361988003LLU;
	uint16_t x400 = 12426U;
	static volatile uint64_t t88 = 62512216LLU;

    t88 = (x397/(x398%(x399^x400)));

    if (t88 != 931984157LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x401 = INT8_MIN;
	uint64_t x402 = UINT64_MAX;
	volatile int8_t x404 = INT8_MIN;
	uint64_t t89 = 123507616071LLU;

    t89 = (x401/(x402%(x403^x404)));

    if (t89 != 102021116146015LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x405 = 511;
	uint16_t x407 = UINT16_MAX;
	static int64_t x408 = INT64_MIN;
	volatile int64_t t90 = 222LL;

    t90 = (x405/(x406%(x407^x408)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x409 = -1;
	volatile int8_t x411 = 1;
	volatile int64_t x412 = -2074751136LL;

    t91 = (x409/(x410%(x411^x412)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x413 = INT32_MIN;
	uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MAX;
	uint64_t x416 = 137373321707LLU;
	static volatile uint64_t t92 = 7542692606482068563LLU;

    t92 = (x413/(x414%(x415^x416)));

    if (t92 != 591539247LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x417 = 12U;
	int16_t x418 = INT16_MIN;
	int16_t x419 = -351;
	static uint32_t x420 = 1010942U;

    t93 = (x417/(x418%(x419^x420)));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x422 = UINT16_MAX;
	uint32_t x423 = 26168U;
	volatile int64_t x424 = INT64_MAX;
	int64_t t94 = -38368965724LL;

    t94 = (x421/(x422%(x423^x424)));

    if (t94 != 6100LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x425 = INT8_MIN;
	uint16_t x426 = 4U;
	uint64_t x427 = 334827010283LLU;
	uint32_t x428 = 125308U;
	uint64_t t95 = 66474677547992631LLU;

    t95 = (x425/(x426%(x427^x428)));

    if (t95 != 4611686018427387872LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MIN;
	volatile uint64_t t96 = 1LLU;

    t96 = (x429/(x430%(x431^x432)));

    if (t96 != 58101471477LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x433 = 0U;
	int8_t x434 = INT8_MIN;
	int16_t x435 = -6295;
	static uint32_t x436 = 3U;
	volatile uint32_t t97 = 1U;

    t97 = (x433/(x434%(x435^x436)));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x437 = -14421;
	int8_t x438 = 1;
	static int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MAX;

    t98 = (x437/(x438%(x439^x440)));

    if (t98 != -14421LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x446 = INT8_MAX;
	static int8_t x447 = 4;
	uint8_t x448 = 14U;
	int32_t t99 = 14;

    t99 = (x445/(x446%(x447^x448)));

    if (t99 != 4681) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x449 = 22944U;
	uint32_t x452 = 53207U;

    t100 = (x449/(x450%(x451^x452)));

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x454 = UINT64_MAX;
	volatile int32_t x456 = -26379;
	uint64_t t101 = 207495667015LLU;

    t101 = (x453/(x454%(x455^x456)));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x457 = 1U;
	volatile int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t102 = 656;

    t102 = (x457/(x458%(x459^x460)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x461 = INT32_MAX;
	int16_t x462 = INT16_MIN;
	uint32_t x463 = 1943652U;
	static uint8_t x464 = 27U;

    t103 = (x461/(x462%(x463^x464)));

    if (t103 != 1593U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x465 = INT8_MIN;
	uint32_t x466 = 1427895U;
	int16_t x468 = INT16_MIN;

    t104 = (x465/(x466%(x467^x468)));

    if (t104 != 3007U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x469 = 0;
	uint32_t x470 = 5U;
	volatile uint32_t t105 = 94U;

    t105 = (x469/(x470%(x471^x472)));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x475 = INT32_MAX;
	uint64_t x476 = 880LLU;

    t106 = (x473/(x474%(x475^x476)));

    if (t106 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x477 = 43523533491LLU;
	int32_t x478 = -30;
	uint64_t x479 = 535774782534LLU;
	static volatile uint64_t t107 = 17643LLU;

    t107 = (x477/(x478%(x479^x480)));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x481 = 1011711LLU;
	int8_t x482 = INT8_MAX;
	int8_t x483 = INT8_MAX;
	int64_t x484 = INT64_MIN;
	uint64_t t108 = 6390663LLU;

    t108 = (x481/(x482%(x483^x484)));

    if (t108 != 7966LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x485 = 172219513U;
	volatile int32_t x486 = -3358525;
	int8_t x487 = INT8_MIN;
	volatile uint32_t t109 = 1118126664U;

    t109 = (x485/(x486%(x487^x488)));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x489 = -136407LL;
	int16_t x491 = INT16_MAX;
	volatile int64_t x492 = -1LL;
	volatile int64_t t110 = -23466714487540204LL;

    t110 = (x489/(x490%(x491^x492)));

    if (t110 != -14LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x493 = -1LL;
	static uint64_t x494 = 656778492943031769LLU;
	int32_t x495 = INT32_MIN;
	uint64_t x496 = UINT64_MAX;

    t111 = (x493/(x494%(x495^x496)));

    if (t111 != 13373601697LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x497 = INT32_MIN;
	static int8_t x498 = INT8_MIN;
	int16_t x499 = INT16_MAX;
	volatile int64_t x500 = INT64_MIN;
	volatile int64_t t112 = 91LL;

    t112 = (x497/(x498%(x499^x500)));

    if (t112 != 16777216LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x501 = -1;
	static int32_t x504 = -227986;
	static int32_t t113 = 172755;

    t113 = (x501/(x502%(x503^x504)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x505 = INT8_MIN;
	int64_t x506 = -1LL;
	static uint16_t x507 = UINT16_MAX;
	uint16_t x508 = 608U;
	volatile int64_t t114 = -10LL;

    t114 = (x505/(x506%(x507^x508)));

    if (t114 != 128LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x509 = 120656828;
	volatile uint32_t x510 = 229623450U;
	volatile uint32_t x512 = UINT32_MAX;
	uint32_t t115 = 1546U;

    t115 = (x509/(x510%(x511^x512)));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MIN;
	uint8_t x515 = 99U;
	int64_t x516 = INT64_MIN;
	int64_t t116 = -1LL;

    t116 = (x513/(x514%(x515^x516)));

    if (t116 != 256LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x517 = 126;
	static volatile uint64_t x519 = 471862425728004LLU;

    t117 = (x517/(x518%(x519^x520)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x521 = INT32_MIN;
	int64_t x522 = 29590288295709LL;
	volatile uint32_t x523 = 1U;
	int32_t x524 = INT32_MIN;
	int64_t t118 = -248363328LL;

    t118 = (x521/(x522%(x523^x524)));

    if (t118 != -19LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x525 = -1;
	int8_t x526 = -1;
	int32_t x527 = -1;
	int8_t x528 = INT8_MIN;

    t119 = (x525/(x526%(x527^x528)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x533 = -838;
	uint8_t x534 = UINT8_MAX;
	uint8_t x535 = 1U;
	uint8_t x536 = UINT8_MAX;

    t120 = (x533/(x534%(x535^x536)));

    if (t120 != -838) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x537 = 573U;
	uint16_t x538 = UINT16_MAX;
	volatile uint16_t x539 = 2564U;
	int8_t x540 = INT8_MIN;
	volatile uint32_t t121 = 13U;

    t121 = (x537/(x538%(x539^x540)));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x541 = -1;
	int64_t x542 = INT64_MIN;
	int16_t x543 = INT16_MAX;
	uint16_t x544 = 10U;
	volatile int64_t t122 = 6617073LL;

    t122 = (x541/(x542%(x543^x544)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x549 = INT32_MIN;
	int8_t x551 = INT8_MIN;
	volatile int32_t x552 = -7;
	static volatile uint32_t t123 = 115120U;

    t123 = (x549/(x550%(x551^x552)));

    if (t123 != 42949672U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x554 = INT16_MIN;
	volatile int64_t x555 = INT64_MIN;
	int32_t x556 = INT32_MIN;
	int64_t t124 = -15702242LL;

    t124 = (x553/(x554%(x555^x556)));

    if (t124 != -1689LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x561 = UINT8_MAX;
	uint8_t x562 = 11U;
	static uint64_t x563 = UINT64_MAX;
	static uint64_t x564 = 1873107471775556LLU;
	static uint64_t t125 = 6337LLU;

    t125 = (x561/(x562%(x563^x564)));

    if (t125 != 23LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x565 = -179;
	int64_t x566 = INT64_MAX;
	volatile uint32_t x567 = 93963827U;
	int64_t t126 = 17702688593987LL;

    t126 = (x565/(x566%(x567^x568)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x569 = INT64_MAX;
	int32_t x570 = INT32_MIN;
	static int16_t x571 = INT16_MIN;
	static uint8_t x572 = UINT8_MAX;
	int64_t t127 = 237884748LL;

    t127 = (x569/(x570%(x571^x572)));

    if (t127 != -283700041120075LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x573 = -1LL;
	int8_t x574 = -1;
	static int8_t x575 = INT8_MIN;
	volatile int64_t t128 = -49517960721LL;

    t128 = (x573/(x574%(x575^x576)));

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x577 = 7U;
	uint64_t x578 = 152605630418LLU;
	static int16_t x579 = INT16_MIN;
	int8_t x580 = INT8_MIN;

    t129 = (x577/(x578%(x579^x580)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x581 = INT16_MAX;
	static uint8_t x582 = 2U;
	int16_t x583 = 7942;
	uint16_t x584 = 11U;

    t130 = (x581/(x582%(x583^x584)));

    if (t130 != 16383) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x585 = -1;
	uint16_t x586 = 2U;
	int32_t x587 = 1398;
	int64_t x588 = -256806408916LL;

    t131 = (x585/(x586%(x587^x588)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x589 = 3775410;
	volatile uint64_t x590 = 2641071390LLU;
	int32_t x591 = INT32_MAX;
	int16_t x592 = -1;
	uint64_t t132 = 1570114625096LLU;

    t132 = (x589/(x590%(x591^x592)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x593 = INT8_MIN;
	uint64_t x596 = 9341LLU;

    t133 = (x593/(x594%(x595^x596)));

    if (t133 != 52842092445LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x597 = -1LL;
	uint32_t x598 = 13U;
	int64_t x599 = INT64_MAX;
	volatile int64_t t134 = 0LL;

    t134 = (x597/(x598%(x599^x600)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x601 = -1;
	volatile int32_t x602 = INT32_MAX;
	static uint8_t x603 = UINT8_MAX;
	int64_t x604 = INT64_MAX;
	int64_t t135 = -18178687031085060LL;

    t135 = (x601/(x602%(x603^x604)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x605 = -28;
	int32_t x606 = INT32_MAX;
	static volatile int64_t x608 = 22LL;
	volatile int64_t t136 = -98371446277031LL;

    t136 = (x605/(x606%(x607^x608)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x609 = -8;
	int16_t x610 = -1;
	uint16_t x611 = UINT16_MAX;
	int32_t x612 = INT32_MIN;

    t137 = (x609/(x610%(x611^x612)));

    if (t137 != 8) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x613 = 0U;
	uint16_t x614 = 4923U;
	int64_t x615 = INT64_MAX;
	static uint32_t x616 = UINT32_MAX;
	int64_t t138 = 2377458LL;

    t138 = (x613/(x614%(x615^x616)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x617 = INT8_MIN;
	int64_t x618 = INT64_MIN;
	int32_t x619 = 266;
	static int64_t x620 = INT64_MIN;
	volatile int64_t t139 = 4781167293LL;

    t139 = (x617/(x618%(x619^x620)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x621 = INT32_MIN;
	static uint16_t x622 = 5357U;
	static uint64_t x623 = 702667513453068LLU;
	int8_t x624 = -2;
	uint64_t t140 = 97508057298LLU;

    t140 = (x621/(x622%(x623^x624)));

    if (t140 != 3443484052932997LLU) { NG(); } else { ; }
	
}

void f141(void) {
    

    t141 = (x625/(x626%(x627^x628)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x630 = INT16_MAX;
	uint32_t x632 = UINT32_MAX;
	uint32_t t142 = 8870U;

    t142 = (x629/(x630%(x631^x632)));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x633 = INT16_MAX;
	int32_t x634 = -1;
	uint64_t x635 = UINT64_MAX;

    t143 = (x633/(x634%(x635^x636)));

    if (t143 != 642LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x637 = UINT32_MAX;
	uint32_t x639 = 235U;
	volatile int8_t x640 = INT8_MIN;
	static int64_t t144 = 5619453823LL;

    t144 = (x637/(x638%(x639^x640)));

    if (t144 != -308LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x641 = 2U;
	volatile int8_t x642 = -1;
	volatile uint32_t x643 = 368352U;
	uint64_t x644 = 0LLU;
	static uint64_t t145 = 8081899LLU;

    t145 = (x641/(x642%(x643^x644)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x645 = INT64_MIN;
	volatile int32_t x646 = 676403078;
	uint8_t x647 = 115U;
	int16_t x648 = 144;
	volatile int64_t t146 = -114LL;

    t146 = (x645/(x646%(x647^x648)));

    if (t146 != -167697673397359560LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x654 = -1;
	static int64_t x656 = INT64_MIN;
	int64_t t147 = 280957739272536LL;

    t147 = (x653/(x654%(x655^x656)));

    if (t147 != -255LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x657 = 5860074LL;
	int8_t x658 = 2;
	uint32_t x659 = UINT32_MAX;
	static volatile int16_t x660 = INT16_MIN;
	static volatile int64_t t148 = -184358635991001615LL;

    t148 = (x657/(x658%(x659^x660)));

    if (t148 != 2930037LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x661 = 23354923642LLU;
	static int16_t x662 = INT16_MIN;
	int64_t x664 = -1LL;
	volatile uint64_t t149 = 81185LLU;

    t149 = (x661/(x662%(x663^x664)));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x667 = UINT8_MAX;
	uint32_t x668 = UINT32_MAX;
	static int64_t t150 = 155616374515599LL;

    t150 = (x665/(x666%(x667^x668)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x669 = INT16_MIN;
	static int64_t x670 = -1LL;
	volatile int64_t t151 = 16856839412622LL;

    t151 = (x669/(x670%(x671^x672)));

    if (t151 != 32768LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x673 = UINT64_MAX;
	int8_t x674 = INT8_MIN;
	int64_t x675 = INT64_MIN;
	volatile uint64_t t152 = 680044548557575432LLU;

    t152 = (x673/(x674%(x675^x676)));

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x677 = 1;
	int16_t x678 = INT16_MIN;
	int8_t x679 = INT8_MIN;
	volatile uint64_t t153 = 542972095607LLU;

    t153 = (x677/(x678%(x679^x680)));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x685 = INT16_MIN;
	int64_t x686 = 93435149576LL;
	volatile uint16_t x687 = 21896U;
	volatile uint64_t t154 = 449461536100LLU;

    t154 = (x685/(x686%(x687^x688)));

    if (t154 != 197428314LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x690 = INT8_MIN;
	uint64_t x691 = 6446649646827528LLU;
	uint64_t t155 = 327LLU;

    t155 = (x689/(x690%(x691^x692)));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x693 = -1;
	volatile int16_t x694 = INT16_MAX;
	static int32_t x695 = 53;
	uint32_t x696 = 344U;
	volatile uint32_t t156 = 126506U;

    t156 = (x693/(x694%(x695^x696)));

    if (t156 != 15230380U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x697 = INT32_MIN;
	static uint16_t x698 = 11351U;
	int16_t x699 = -1;
	volatile int16_t x700 = INT16_MIN;
	int32_t t157 = -60;

    t157 = (x697/(x698%(x699^x700)));

    if (t157 != -189188) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x701 = -1924895182519LL;
	uint8_t x704 = UINT8_MAX;
	int64_t t158 = -4595317196LL;

    t158 = (x701/(x702%(x703^x704)));

    if (t158 != 58743139LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x705 = INT8_MIN;
	int64_t x706 = -1LL;
	static int16_t x707 = 4;
	volatile uint64_t t159 = 187102148LLU;

    t159 = (x705/(x706%(x707^x708)));

    if (t159 != 6148914691236517162LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x709 = INT32_MIN;
	int8_t x710 = -17;
	volatile int16_t x711 = INT16_MIN;
	volatile int64_t x712 = -5482538518LL;

    t160 = (x709/(x710%(x711^x712)));

    if (t160 != 126322567LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x713 = 2U;
	int32_t x714 = -1;
	int32_t x715 = -45220798;
	static uint64_t x716 = UINT64_MAX;
	uint64_t t161 = 11421LLU;

    t161 = (x713/(x714%(x715^x716)));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x717 = INT32_MIN;
	static uint32_t x718 = 8163U;
	volatile int64_t x719 = INT64_MIN;
	int16_t x720 = INT16_MIN;
	int64_t t162 = -1LL;

    t162 = (x717/(x718%(x719^x720)));

    if (t162 != -263075LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x721 = UINT8_MAX;
	int8_t x722 = 3;
	int16_t x723 = INT16_MAX;
	volatile int64_t x724 = INT64_MIN;
	int64_t t163 = 197816598975LL;

    t163 = (x721/(x722%(x723^x724)));

    if (t163 != 85LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x726 = INT64_MAX;
	volatile int8_t x727 = INT8_MIN;
	volatile int64_t t164 = 3LL;

    t164 = (x725/(x726%(x727^x728)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x729 = -1LL;
	int32_t x731 = -400846;
	int16_t x732 = 232;
	volatile int64_t t165 = 1775723130021LL;

    t165 = (x729/(x730%(x731^x732)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x733 = 0;
	volatile int32_t x734 = INT32_MIN;
	int64_t x736 = INT64_MIN;
	volatile int64_t t166 = 233280820870449137LL;

    t166 = (x733/(x734%(x735^x736)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x742 = 217377572;
	int16_t x743 = INT16_MIN;
	volatile uint64_t x744 = 125643340334614LLU;
	volatile uint64_t t167 = 1601584408LLU;

    t167 = (x741/(x742%(x743^x744)));

    if (t167 != 84860383267LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x745 = 780915LLU;
	static int8_t x746 = 3;
	static uint8_t x747 = UINT8_MAX;
	static int16_t x748 = -1;
	volatile uint64_t t168 = 94400360LLU;

    t168 = (x745/(x746%(x747^x748)));

    if (t168 != 260305LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x749 = INT16_MAX;
	int32_t x750 = -1;
	uint64_t x752 = 552174LLU;
	static uint64_t t169 = 17804021807391599LLU;

    t169 = (x749/(x750%(x751^x752)));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x753 = UINT16_MAX;
	int8_t x755 = INT8_MAX;
	int64_t x756 = INT64_MIN;

    t170 = (x753/(x754%(x755^x756)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x757 = INT32_MIN;
	volatile int8_t x758 = INT8_MIN;
	uint8_t x759 = 14U;
	int64_t x760 = -1508368612601548391LL;
	static int64_t t171 = -152LL;

    t171 = (x757/(x758%(x759^x760)));

    if (t171 != 16777216LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x761 = INT32_MIN;
	uint8_t x762 = 1U;
	int64_t x763 = INT64_MIN;
	static uint8_t x764 = UINT8_MAX;
	volatile int64_t t172 = -1216611224LL;

    t172 = (x761/(x762%(x763^x764)));

    if (t172 != -2147483648LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x765 = INT16_MIN;
	int32_t x766 = INT32_MAX;
	volatile int64_t x767 = -2LL;
	int16_t x768 = -11;

    t173 = (x765/(x766%(x767^x768)));

    if (t173 != -32768LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x769 = 1U;
	int64_t x770 = INT64_MAX;
	static uint16_t x771 = 7U;
	int16_t x772 = INT16_MIN;
	int64_t t174 = 353183961100073275LL;

    t174 = (x769/(x770%(x771^x772)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x773 = 125;
	uint64_t t175 = 320050645773LLU;

    t175 = (x773/(x774%(x775^x776)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x777 = INT64_MIN;
	uint8_t x778 = 26U;
	uint32_t x780 = 3U;
	uint64_t t176 = 2268184903LLU;

    t176 = (x777/(x778%(x779^x780)));

    if (t176 != 354745078340568300LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x781 = 4283;
	volatile int32_t x782 = INT32_MIN;
	int8_t x784 = 0;
	volatile int32_t t177 = -1;

    t177 = (x781/(x782%(x783^x784)));

    if (t177 != -535) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x789 = -39LL;
	int32_t x790 = 2;
	volatile int16_t x791 = INT16_MIN;
	int32_t x792 = INT32_MIN;
	static volatile int64_t t178 = 258696538114473LL;

    t178 = (x789/(x790%(x791^x792)));

    if (t178 != -19LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x794 = UINT32_MAX;
	int64_t x795 = INT64_MIN;
	uint64_t x796 = 1797347LLU;
	uint64_t t179 = 3LLU;

    t179 = (x793/(x794%(x795^x796)));

    if (t179 != 4294967297LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x803 = INT16_MIN;
	static uint32_t x804 = UINT32_MAX;
	static uint32_t t180 = 7U;

    t180 = (x801/(x802%(x803^x804)));

    if (t180 != 1431655722U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x805 = -1LL;
	volatile int32_t x806 = -147253814;
	static int32_t x807 = INT32_MAX;
	volatile int64_t x808 = -2030436LL;
	static int64_t t181 = 1LL;

    t181 = (x805/(x806%(x807^x808)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x809 = UINT16_MAX;
	int8_t x811 = -12;
	int16_t x812 = -1;

    t182 = (x809/(x810%(x811^x812)));

    if (t182 != -8191LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x813 = INT8_MIN;
	int8_t x814 = -1;
	int16_t x815 = -52;
	volatile int8_t x816 = 0;
	static volatile int32_t t183 = 91079;

    t183 = (x813/(x814%(x815^x816)));

    if (t183 != 128) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x817 = -1;
	static uint16_t x818 = 1U;
	int32_t x819 = INT32_MIN;
	volatile int64_t x820 = INT64_MIN;
	int64_t t184 = -29439632LL;

    t184 = (x817/(x818%(x819^x820)));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x821 = 21427U;
	int8_t x822 = INT8_MIN;
	int16_t x823 = 19;
	uint16_t x824 = 1U;
	static uint32_t t185 = 171059U;

    t185 = (x821/(x822%(x823^x824)));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x833 = 16U;
	int64_t x834 = -1LL;
	static int64_t x835 = INT64_MIN;
	int8_t x836 = INT8_MIN;

    t186 = (x833/(x834%(x835^x836)));

    if (t186 != -16LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x837 = 120U;
	int64_t x838 = INT64_MIN;
	uint64_t x839 = UINT64_MAX;
	volatile int32_t x840 = INT32_MIN;
	volatile uint64_t t187 = 22903LLU;

    t187 = (x837/(x838%(x839^x840)));

    if (t187 != 60LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x842 = 950585629187348LLU;
	static int8_t x844 = -1;
	uint64_t t188 = 79195636809871996LLU;

    t188 = (x841/(x842%(x843^x844)));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x845 = 14962088U;
	uint64_t x846 = UINT64_MAX;
	volatile int8_t x847 = -42;
	int32_t x848 = 368;
	volatile uint64_t t189 = 411208362615LLU;

    t189 = (x845/(x846%(x847^x848)));

    if (t189 != 43368LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x849 = INT16_MIN;
	uint8_t x850 = 1U;
	static int64_t x851 = 48467LL;
	int64_t x852 = INT64_MIN;
	int64_t t190 = 2545LL;

    t190 = (x849/(x850%(x851^x852)));

    if (t190 != -32768LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x853 = UINT32_MAX;
	uint64_t x855 = 48385196726619012LLU;
	uint16_t x856 = UINT16_MAX;
	volatile uint64_t t191 = 1061440150213LLU;

    t191 = (x853/(x854%(x855^x856)));

    if (t191 != 33818640LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x861 = 3787189U;
	uint8_t x862 = 8U;
	uint8_t x863 = UINT8_MAX;
	static int32_t x864 = 111345;
	uint32_t t192 = 2718U;

    t192 = (x861/(x862%(x863^x864)));

    if (t192 != 473398U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x866 = UINT64_MAX;
	static int64_t x867 = -61776145823LL;
	uint64_t x868 = 173860249767LLU;
	volatile uint64_t t193 = 7LLU;

    t193 = (x865/(x866%(x867^x868)));

    if (t193 != 112738363LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x877 = UINT8_MAX;
	int64_t x878 = -1LL;
	int64_t x879 = INT64_MAX;
	static int64_t x880 = -1LL;
	static volatile int64_t t194 = -767112946LL;

    t194 = (x877/(x878%(x879^x880)));

    if (t194 != -255LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x886 = 21;
	uint16_t x887 = 71U;
	int64_t t195 = 25465293299LL;

    t195 = (x885/(x886%(x887^x888)));

    if (t195 != -6LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x889 = 41U;
	volatile int64_t x890 = INT64_MIN;
	static int32_t x891 = INT32_MIN;
	int64_t x892 = -1LL;
	volatile int64_t t196 = 3177592LL;

    t196 = (x889/(x890%(x891^x892)));

    if (t196 != -20LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x893 = 61;
	uint8_t x894 = UINT8_MAX;
	int64_t x895 = 321675LL;
	int32_t x896 = INT32_MIN;
	static int64_t t197 = -1620257712878161LL;

    t197 = (x893/(x894%(x895^x896)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x898 = 2U;
	int32_t x900 = -1;
	static uint64_t t198 = 34022986539383977LLU;

    t198 = (x897/(x898%(x899^x900)));

    if (t198 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x901 = UINT16_MAX;
	static volatile int16_t x902 = -1;
	int16_t x903 = -1063;
	int16_t x904 = 29;
	volatile int32_t t199 = -6264;

    t199 = (x901/(x902%(x903^x904)));

    if (t199 != -65535) { NG(); } else { ; }
	
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

