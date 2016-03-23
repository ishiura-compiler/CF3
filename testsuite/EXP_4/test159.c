
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

int8_t x2 = INT8_MIN;
int8_t x4 = 13;
static uint16_t x12 = 424U;
volatile int16_t x13 = INT16_MIN;
int8_t x35 = INT8_MAX;
uint64_t x36 = 5130638870323LLU;
int32_t x45 = 124437;
int8_t x51 = 33;
static volatile uint32_t t10 = 28400659U;
int16_t x60 = 1291;
int16_t x68 = -62;
volatile uint32_t t13 = 17338U;
int32_t t14 = -22983269;
uint64_t t15 = 2420859799393946LLU;
volatile int64_t x82 = -109564633147149409LL;
volatile int32_t x89 = -4;
volatile int32_t x93 = INT32_MAX;
int8_t x101 = 39;
int64_t t22 = -283682245809176331LL;
int16_t x109 = -3869;
int32_t x110 = INT32_MIN;
int16_t x112 = INT16_MAX;
int32_t x123 = -2036673;
int32_t t26 = -248;
int64_t x125 = -137116LL;
uint32_t x127 = 3212377U;
static int32_t x133 = INT32_MAX;
int64_t x137 = 1660427840946923601LL;
int8_t x139 = 1;
int64_t x140 = INT64_MIN;
int8_t x143 = INT8_MIN;
static int32_t x152 = -30625114;
int32_t t32 = -24168;
static uint8_t x157 = UINT8_MAX;
uint16_t x163 = UINT16_MAX;
volatile int8_t x164 = -2;
uint32_t x173 = UINT32_MAX;
int64_t x174 = -1LL;
int64_t x180 = -19825784774381LL;
int8_t x185 = -1;
uint64_t x187 = 29655695924LLU;
uint64_t t39 = 2LLU;
uint16_t x194 = 19U;
int16_t x195 = INT16_MIN;
int8_t x213 = -1;
int64_t t45 = 2435352LL;
volatile int32_t t46 = -14414711;
volatile uint8_t x226 = UINT8_MAX;
static int32_t x230 = -1;
uint64_t x231 = UINT64_MAX;
int8_t x232 = INT8_MIN;
uint8_t x237 = UINT8_MAX;
volatile int32_t t50 = 824;
static int16_t x242 = INT16_MAX;
int32_t x243 = 5097;
int64_t x245 = -1LL;
volatile uint16_t x250 = 19U;
uint16_t x252 = UINT16_MAX;
int16_t x269 = 1;
int8_t x271 = -1;
int32_t x274 = INT32_MIN;
int32_t x276 = INT32_MIN;
static int16_t x286 = -1;
volatile uint32_t t57 = 5U;
static int64_t t58 = 101901465627201LL;
int32_t x295 = 23369372;
uint64_t x303 = 1242LLU;
volatile int8_t x321 = INT8_MAX;
int8_t x323 = INT8_MIN;
volatile int8_t x327 = INT8_MIN;
uint8_t x328 = 4U;
int64_t t63 = 26103LL;
volatile int16_t x336 = INT16_MIN;
int16_t x339 = INT16_MIN;
static uint64_t x357 = 30964891714362LLU;
uint8_t x358 = UINT8_MAX;
uint64_t t69 = 574158329LLU;
volatile int16_t x363 = -197;
uint8_t x370 = 3U;
static uint32_t t72 = 4320U;
static int16_t x388 = INT16_MIN;
uint16_t x389 = UINT16_MAX;
uint32_t t75 = 4U;
int64_t x396 = INT64_MAX;
static int32_t x407 = 895741567;
volatile int32_t x449 = INT32_MIN;
int8_t x453 = -1;
int64_t x454 = -10635219194870744LL;
int64_t t87 = -204LL;
int16_t x461 = -39;
uint8_t x468 = 66U;
int16_t x470 = -48;
int16_t x490 = INT16_MIN;
uint32_t t93 = 3880348U;
static int16_t x494 = INT16_MAX;
int64_t x501 = INT64_MAX;
int16_t x502 = -23;
uint64_t t96 = 138476653277823755LLU;
volatile int8_t x505 = INT8_MIN;
static int64_t x506 = -1LL;
uint32_t x511 = 1050389469U;
uint32_t x519 = 3U;
static int32_t x526 = INT32_MAX;
uint64_t x534 = 188950LLU;
volatile int8_t x536 = INT8_MAX;
uint64_t t104 = 1507627165953LLU;
volatile int64_t t107 = 11669829401014986LL;
int8_t x555 = INT8_MIN;
int64_t t108 = 228499471445096LL;
uint16_t x557 = UINT16_MAX;
static volatile int64_t x558 = -15053900LL;
int32_t t110 = -3561963;
int8_t x571 = 1;
static uint64_t x578 = UINT64_MAX;
volatile uint32_t t115 = 14887U;
int32_t x591 = 83259;
int16_t x594 = 3223;
int64_t x595 = INT64_MIN;
int16_t x599 = INT16_MIN;
volatile int8_t x608 = INT8_MIN;
int64_t t119 = -480722LL;
static int64_t x635 = -1LL;
static int16_t x643 = INT16_MIN;
static uint16_t x647 = 39U;
uint16_t x650 = UINT16_MAX;
int8_t x659 = 2;
int8_t x660 = INT8_MAX;
static uint32_t x661 = 33042420U;
static uint8_t x667 = 4U;
volatile int16_t x668 = INT16_MIN;
volatile int8_t x676 = 0;
int16_t x684 = -1686;
uint8_t x695 = UINT8_MAX;
volatile int8_t x719 = INT8_MIN;
volatile int32_t x726 = 21408672;
static int64_t t141 = 222833603021636779LL;
int64_t x737 = INT64_MIN;
int16_t x743 = -18;
int16_t x749 = INT16_MIN;
static uint16_t x780 = UINT16_MAX;
uint32_t t149 = 434393U;
static volatile int64_t t150 = -6153852LL;
int64_t x793 = -1LL;
static int32_t x799 = INT32_MIN;
int8_t x802 = -1;
volatile int16_t x805 = 17;
int64_t t154 = -20427575LL;
static uint32_t x812 = UINT32_MAX;
volatile int32_t x814 = INT32_MAX;
volatile uint64_t t157 = 20801164104405LLU;
static int16_t x839 = -27;
volatile uint64_t t158 = 25800272LLU;
uint16_t x849 = UINT16_MAX;
int32_t x850 = 54042;
uint32_t x852 = 1717U;
volatile int32_t x863 = INT32_MIN;
uint32_t t163 = 2210U;
int8_t x865 = INT8_MIN;
uint64_t x866 = 567418071067LLU;
static uint16_t x873 = 373U;
static uint64_t t169 = 993851LLU;
static int16_t x910 = INT16_MIN;
uint16_t x920 = 639U;
int16_t x927 = -1595;
uint64_t t176 = 40281LLU;
int64_t x929 = INT64_MAX;
uint32_t x930 = 1793978452U;
volatile int64_t t177 = 131395LL;
volatile int32_t x935 = 0;
static uint64_t t178 = 164836LLU;
static uint32_t x938 = UINT32_MAX;
int64_t x942 = 253LL;
int16_t x948 = 0;
int32_t t183 = -3435;
volatile uint64_t x987 = 137518119996LLU;
uint32_t x991 = 23582U;
static int16_t x1008 = INT16_MIN;
static volatile uint64_t t187 = 1981067550LLU;
uint16_t x1013 = 786U;
int64_t x1021 = -150738LL;
uint64_t x1030 = 1560387184963133314LLU;
int64_t x1037 = -100809485787200015LL;
static uint16_t x1045 = 5111U;
static volatile uint64_t x1046 = 977357LLU;
uint64_t t193 = 3021036219LLU;
int8_t x1056 = 0;
uint8_t x1057 = 20U;
static uint16_t x1060 = UINT16_MAX;
uint64_t x1068 = UINT64_MAX;
int64_t x1078 = INT64_MAX;


void f0(void) {
    	static uint32_t x1 = 9423U;
	int32_t x3 = INT32_MIN;
	uint32_t t0 = 2U;

    t0 = (x1%(x2&(x3+x4)));

    if (t0 != 9423U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MAX;
	int16_t x7 = 2;
	int32_t x8 = -11;
	static int32_t t1 = 6874788;

    t1 = (x5%(x6&(x7+x8)));

    if (t1 != -9) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	int32_t x10 = 33191764;
	volatile int64_t x11 = INT64_MIN;
	int64_t t2 = 16729542LL;

    t2 = (x9%(x10&(x11+x12)));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = -12445685070LL;
	int32_t x15 = INT32_MAX;
	static int16_t x16 = INT16_MIN;
	volatile int64_t t3 = 3LL;

    t3 = (x13%(x14&(x15+x16)));

    if (t3 != -32768LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 51491461U;
	int8_t x18 = -1;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = 49U;
	volatile uint32_t t4 = 936826U;

    t4 = (x17%(x18&(x19+x20)));

    if (t4 != 51491461U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 25U;
	int16_t x22 = INT16_MAX;
	static int8_t x23 = -40;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -3535;

    t5 = (x21%(x22&(x23+x24)));

    if (t5 != 25) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -5;
	uint64_t x26 = UINT64_MAX;
	int8_t x27 = -27;
	int8_t x28 = INT8_MAX;
	uint64_t t6 = 3956620545LLU;

    t6 = (x25%(x26&(x27+x28)));

    if (t6 != 11LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MAX;
	int16_t x31 = INT16_MIN;
	int8_t x32 = 4;
	int32_t t7 = -106;

    t7 = (x29%(x30&(x31+x32)));

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 2380;
	static uint8_t x34 = UINT8_MAX;
	uint64_t t8 = 6LLU;

    t8 = (x33%(x34&(x35+x36)));

    if (t8 != 66LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x46 = INT16_MAX;
	volatile int64_t x47 = -3801568393LL;
	int16_t x48 = INT16_MIN;
	int64_t t9 = 122LL;

    t9 = (x45%(x46&(x47+x48)));

    if (t9 != 2040LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = 1;
	uint32_t x50 = 654157585U;
	int16_t x52 = 0;

    t10 = (x49%(x50&(x51+x52)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x57 = INT8_MAX;
	static int32_t x58 = -1;
	volatile int64_t x59 = 11LL;
	volatile int64_t t11 = 2314092113990117999LL;

    t11 = (x57%(x58&(x59+x60)));

    if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x61 = 4924U;
	volatile int16_t x62 = -1;
	int16_t x63 = INT16_MAX;
	int32_t x64 = INT32_MIN;
	static int32_t t12 = 1070439447;

    t12 = (x61%(x62&(x63+x64)));

    if (t12 != 4924) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x65 = -1;
	uint16_t x66 = 7U;
	uint32_t x67 = 546U;

    t13 = (x65%(x66&(x67+x68)));

    if (t13 != 3U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = 76616;
	static int16_t x70 = INT16_MAX;
	static int8_t x71 = -8;
	uint8_t x72 = 0U;

    t14 = (x69%(x70&(x71+x72)));

    if (t14 != 11096) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x73 = -956553683332LL;
	volatile uint32_t x74 = 742578867U;
	uint64_t x75 = UINT64_MAX;
	static int8_t x76 = INT8_MIN;

    t15 = (x73%(x74&(x75+x76)));

    if (t15 != 418370085LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x77 = INT64_MAX;
	volatile int8_t x78 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	int16_t x80 = -1;
	volatile int64_t t16 = -26235083LL;

    t16 = (x77%(x78&(x79+x80)));

    if (t16 != 32767LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x81 = 116U;
	int32_t x83 = INT32_MAX;
	uint64_t x84 = 49436LLU;
	static uint64_t t17 = 0LLU;

    t17 = (x81%(x82&(x83+x84)));

    if (t17 != 116LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x85 = UINT16_MAX;
	int8_t x86 = INT8_MIN;
	uint64_t x87 = 36LLU;
	int64_t x88 = INT64_MIN;
	uint64_t t18 = 524950449LLU;

    t18 = (x85%(x86&(x87+x88)));

    if (t18 != 65535LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x90 = INT32_MAX;
	uint32_t x91 = UINT32_MAX;
	uint64_t x92 = 4207216204901LLU;
	static volatile uint64_t t19 = 62550552869295LLU;

    t19 = (x89%(x90&(x91+x92)));

    if (t19 != 269349500LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x94 = 31091126U;
	int8_t x95 = INT8_MIN;
	int64_t x96 = 171183782130332LL;
	volatile int64_t t20 = 466756818527540892LL;

    t20 = (x93%(x94&(x95+x96)));

    if (t20 != 2870371LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = -28371881582LL;
	static volatile int32_t x98 = INT32_MIN;
	static int64_t x99 = 1LL;
	int32_t x100 = INT32_MIN;
	int64_t t21 = -37287595907368LL;

    t21 = (x97%(x98&(x99+x100)));

    if (t21 != -454594158LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x102 = -1LL;
	volatile uint8_t x103 = 1U;
	uint16_t x104 = UINT16_MAX;

    t22 = (x101%(x102&(x103+x104)));

    if (t22 != 39LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x105 = UINT8_MAX;
	int32_t x106 = INT32_MIN;
	static int32_t x107 = -203;
	int8_t x108 = -1;
	int32_t t23 = -51721112;

    t23 = (x105%(x106&(x107+x108)));

    if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x111 = INT16_MIN;
	int32_t t24 = 11778860;

    t24 = (x109%(x110&(x111+x112)));

    if (t24 != -3869) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x113 = UINT32_MAX;
	int8_t x114 = INT8_MIN;
	int32_t x115 = -6322;
	int8_t x116 = INT8_MAX;
	volatile uint32_t t25 = 53761022U;

    t25 = (x113%(x114&(x115+x116)));

    if (t25 != 6271U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x121 = INT32_MIN;
	int8_t x122 = -1;
	static uint8_t x124 = 19U;

    t26 = (x121%(x122&(x123+x124)));

    if (t26 != -850332) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x126 = 386;
	int32_t x128 = 67;
	int64_t t27 = -18681386LL;

    t27 = (x125%(x126&(x127+x128)));

    if (t27 != -28LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = INT8_MIN;
	int64_t x130 = -26237140218728LL;
	uint32_t x131 = UINT32_MAX;
	int8_t x132 = 58;
	int64_t t28 = -23LL;

    t28 = (x129%(x130&(x131+x132)));

    if (t28 != -8LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x134 = UINT16_MAX;
	static int16_t x135 = 1;
	int32_t x136 = INT32_MIN;
	int32_t t29 = 143877301;

    t29 = (x133%(x134&(x135+x136)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x138 = 856401055LLU;
	static uint64_t t30 = 178557174LLU;

    t30 = (x137%(x138&(x139+x140)));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x141 = -104;
	uint8_t x142 = UINT8_MAX;
	volatile int32_t x144 = -1;
	static volatile int32_t t31 = -1304173;

    t31 = (x141%(x142&(x143+x144)));

    if (t31 != -104) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x149 = -1;
	volatile int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MAX;

    t32 = (x149%(x150&(x151+x152)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x153 = 12;
	volatile int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MAX;
	volatile int16_t x156 = INT16_MIN;
	volatile int32_t t33 = -2532;

    t33 = (x153%(x154&(x155+x156)));

    if (t33 != 12) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MAX;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t34 = 31789803844LLU;

    t34 = (x157%(x158&(x159+x160)));

    if (t34 != 255LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x161 = INT16_MIN;
	int16_t x162 = INT16_MIN;
	int32_t t35 = -2818;

    t35 = (x161%(x162&(x163+x164)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x169 = 638;
	int16_t x170 = -1;
	int64_t x171 = 849902190424313951LL;
	volatile uint8_t x172 = 10U;
	volatile int64_t t36 = -121704540253910LL;

    t36 = (x169%(x170&(x171+x172)));

    if (t36 != 638LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x175 = INT64_MAX;
	int64_t x176 = INT64_MIN;
	volatile int64_t t37 = -2055330678663LL;

    t37 = (x173%(x174&(x175+x176)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x177 = INT32_MIN;
	static int8_t x178 = 11;
	uint64_t x179 = 14533666165805958LLU;
	volatile uint64_t t38 = 1691924LLU;

    t38 = (x177%(x178&(x179+x180)));

    if (t38 != 5LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x186 = INT64_MAX;
	int32_t x188 = -2600518;

    t39 = (x185%(x186&(x187+x188)));

    if (t39 != 26906861381LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x189 = -39;
	uint64_t x190 = UINT64_MAX;
	static int64_t x191 = 57499368078LL;
	int16_t x192 = -1;
	volatile uint64_t t40 = 53LLU;

    t40 = (x189%(x190&(x191+x192)));

    if (t40 != 10013195695LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x193 = -25;
	static uint32_t x196 = UINT32_MAX;
	volatile uint32_t t41 = 470094U;

    t41 = (x193%(x194&(x195+x196)));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x205 = INT16_MAX;
	int64_t x206 = -1LL;
	int8_t x207 = 16;
	int32_t x208 = INT32_MIN;
	volatile int64_t t42 = -2302692818166LL;

    t42 = (x205%(x206&(x207+x208)));

    if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x209 = 9;
	volatile int32_t x210 = INT32_MIN;
	uint8_t x211 = UINT8_MAX;
	int64_t x212 = 57326841602LL;
	static int64_t t43 = -125009084422975947LL;

    t43 = (x209%(x210&(x211+x212)));

    if (t43 != 9LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x214 = -6193;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = -1;
	static volatile uint64_t t44 = 7LLU;

    t44 = (x213%(x214&(x215+x216)));

    if (t44 != 6193LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x217 = INT32_MIN;
	int16_t x218 = -13;
	uint32_t x219 = 31795164U;
	int64_t x220 = -2413840375422LL;

    t45 = (x217%(x218&(x219+x220)));

    if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = INT32_MIN;
	int16_t x222 = -1;
	static int32_t x223 = -292635;
	int32_t x224 = -1;

    t46 = (x221%(x222&(x223+x224)));

    if (t46 != -120680) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x225 = INT64_MAX;
	static uint16_t x227 = 96U;
	uint64_t x228 = UINT64_MAX;
	static uint64_t t47 = 2697LLU;

    t47 = (x225%(x226&(x227+x228)));

    if (t47 != 17LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x229 = -1;
	uint64_t t48 = 1576LLU;

    t48 = (x229%(x230&(x231+x232)));

    if (t48 != 128LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x233 = INT32_MAX;
	int64_t x234 = INT64_MIN;
	static int8_t x235 = -1;
	static int64_t x236 = -20LL;
	int64_t t49 = 3721868547791599068LL;

    t49 = (x233%(x234&(x235+x236)));

    if (t49 != 2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x238 = INT32_MAX;
	static uint16_t x239 = 2840U;
	static int8_t x240 = 3;

    t50 = (x237%(x238&(x239+x240)));

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x241 = 0;
	int8_t x244 = INT8_MIN;
	int32_t t51 = -53766400;

    t51 = (x241%(x242&(x243+x244)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x246 = 291196226855792LL;
	volatile int64_t x247 = -333LL;
	static uint8_t x248 = 8U;
	int64_t t52 = -149158923267LL;

    t52 = (x245%(x246&(x247+x248)));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x249 = -1;
	static int8_t x251 = INT8_MIN;
	static int32_t t53 = -18;

    t53 = (x249%(x250&(x251+x252)));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x270 = 15632U;
	uint32_t x272 = UINT32_MAX;
	volatile uint32_t t54 = 12U;

    t54 = (x269%(x270&(x271+x272)));

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x273 = 267;
	int16_t x275 = INT16_MAX;
	int32_t t55 = 321;

    t55 = (x273%(x274&(x275+x276)));

    if (t55 != 267) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x281 = UINT32_MAX;
	volatile int8_t x282 = INT8_MAX;
	volatile uint8_t x283 = 3U;
	static int32_t x284 = 164;
	uint32_t t56 = 2U;

    t56 = (x281%(x282&(x283+x284)));

    if (t56 != 21U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x285 = -3065;
	uint8_t x287 = 5U;
	static uint32_t x288 = 1864157952U;

    t57 = (x285%(x286&(x287+x288)));

    if (t57 != 566648317U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MIN;
	static int8_t x291 = INT8_MIN;
	int32_t x292 = -1;

    t58 = (x289%(x290&(x291+x292)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x293 = -2294;
	volatile uint32_t x294 = 1110765U;
	volatile int8_t x296 = 1;
	uint32_t t59 = 602U;

    t59 = (x293%(x294&(x295+x296)));

    if (t59 != 18842U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x301 = 1218U;
	static uint16_t x302 = 42U;
	static int64_t x304 = INT64_MIN;
	uint64_t t60 = 141799941342118299LLU;

    t60 = (x301%(x302&(x303+x304)));

    if (t60 != 8LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x313 = INT16_MIN;
	volatile int8_t x314 = -1;
	static int16_t x315 = 10;
	int64_t x316 = -26432LL;
	int64_t t61 = 4964401701204879LL;

    t61 = (x313%(x314&(x315+x316)));

    if (t61 != -6346LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x322 = 114U;
	int32_t x324 = -1;
	static int32_t t62 = 1468487;

    t62 = (x321%(x322&(x323+x324)));

    if (t62 != 13) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x325 = INT16_MIN;
	int64_t x326 = 10822304352LL;

    t63 = (x325%(x326&(x327+x328)));

    if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x329 = UINT16_MAX;
	volatile int8_t x330 = 5;
	int8_t x331 = INT8_MAX;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t64 = -376;

    t64 = (x329%(x330&(x331+x332)));

    if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x333 = -1LL;
	int64_t x334 = -38167951169438815LL;
	volatile uint64_t x335 = 74536LLU;
	static volatile uint64_t t65 = 331756LLU;

    t65 = (x333%(x334&(x335+x336)));

    if (t65 != 28095LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MAX;
	uint32_t x340 = 18933101U;
	volatile uint32_t t66 = 1381U;

    t66 = (x337%(x338&(x339+x340)));

    if (t66 != 4558937U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x349 = INT16_MIN;
	uint32_t x350 = 35907U;
	static volatile int16_t x351 = INT16_MIN;
	uint64_t x352 = 3684100LLU;
	uint64_t t67 = 33470993LLU;

    t67 = (x349%(x350&(x351+x352)));

    if (t67 != 17408LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x353 = 14U;
	static int16_t x354 = -314;
	static int16_t x355 = -1;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t68 = 477;

    t68 = (x353%(x354&(x355+x356)));

    if (t68 != 14) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x359 = -80132728983182730LL;
	volatile int16_t x360 = -1;

    t69 = (x357%(x358&(x359+x360)));

    if (t69 != 99LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x361 = 519017788U;
	int32_t x362 = INT32_MAX;
	int16_t x364 = INT16_MAX;
	uint32_t t70 = 320802805U;

    t70 = (x361%(x362&(x363+x364)));

    if (t70 != 14838U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MIN;
	volatile int64_t x367 = -3481LL;
	uint32_t x368 = 4U;
	volatile int64_t t71 = -289175071184LL;

    t71 = (x365%(x366&(x367+x368)));

    if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x369 = 3017951U;
	static volatile int16_t x371 = INT16_MAX;
	uint32_t x372 = UINT32_MAX;

    t72 = (x369%(x370&(x371+x372)));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x373 = 1U;
	static volatile int32_t x374 = INT32_MIN;
	int8_t x375 = -1;
	int64_t x376 = 89995185819LL;
	volatile int64_t t73 = 0LL;

    t73 = (x373%(x374&(x375+x376)));

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x385 = INT8_MIN;
	uint32_t x386 = 124523U;
	int64_t x387 = -1LL;
	static volatile int64_t t74 = 6494294LL;

    t74 = (x385%(x386&(x387+x388)));

    if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x390 = -1;
	static uint32_t x391 = 496459U;
	volatile uint16_t x392 = 0U;

    t75 = (x389%(x390&(x391+x392)));

    if (t75 != 65535U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x393 = -118029;
	volatile uint8_t x394 = 60U;
	int16_t x395 = -2;
	static int64_t t76 = 33560228089307LL;

    t76 = (x393%(x394&(x395+x396)));

    if (t76 != -9LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x397 = 27U;
	uint8_t x398 = 23U;
	static int32_t x399 = INT32_MIN;
	volatile int64_t x400 = 5087188LL;
	volatile int64_t t77 = -217LL;

    t77 = (x397%(x398&(x399+x400)));

    if (t77 != 7LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x401 = UINT32_MAX;
	static volatile uint16_t x402 = 4695U;
	uint32_t x403 = 2U;
	static int32_t x404 = -1;
	uint32_t t78 = 216765U;

    t78 = (x401%(x402&(x403+x404)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x405 = -1LL;
	uint64_t x406 = 66272894048LLU;
	static int8_t x408 = -7;
	volatile uint64_t t79 = 222868781888LLU;

    t79 = (x405%(x406&(x407+x408)));

    if (t79 != 465813087LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x413 = 2U;
	int16_t x414 = 1;
	static int8_t x415 = 0;
	static int32_t x416 = 3969;
	volatile int32_t t80 = -183447;

    t80 = (x413%(x414&(x415+x416)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x421 = INT8_MIN;
	volatile uint8_t x422 = 23U;
	int32_t x423 = INT32_MIN;
	volatile uint8_t x424 = 5U;
	volatile int32_t t81 = -8650959;

    t81 = (x421%(x422&(x423+x424)));

    if (t81 != -3) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x425 = INT8_MIN;
	static int16_t x426 = -1179;
	int8_t x427 = INT8_MIN;
	int8_t x428 = 0;
	volatile int32_t t82 = -14598901;

    t82 = (x425%(x426&(x427+x428)));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x429 = INT8_MIN;
	volatile int16_t x430 = INT16_MAX;
	uint32_t x431 = UINT32_MAX;
	static int32_t x432 = -1;
	uint32_t t83 = 2131347112U;

    t83 = (x429%(x430&(x431+x432)));

    if (t83 != 32654U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x433 = 0;
	int16_t x434 = -1;
	uint64_t x435 = 1LLU;
	uint32_t x436 = 4547180U;
	uint64_t t84 = 17686824LLU;

    t84 = (x433%(x434&(x435+x436)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x437 = 5884556791847LL;
	int8_t x438 = -1;
	int16_t x439 = -1;
	int32_t x440 = INT32_MAX;
	volatile int64_t t85 = 115571999213752LL;

    t85 = (x437%(x438&(x439+x440)));

    if (t85 != 451601807LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x450 = UINT64_MAX;
	int32_t x451 = -15;
	uint32_t x452 = UINT32_MAX;
	uint64_t t86 = 6396LLU;

    t86 = (x449%(x450&(x451+x452)));

    if (t86 != 2147483888LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x455 = INT8_MIN;
	volatile int32_t x456 = 127;

    t87 = (x453%(x454&(x455+x456)));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x462 = -1LL;
	uint16_t x463 = 17U;
	uint64_t x464 = 22328LLU;
	uint64_t t88 = 52441563744LLU;

    t88 = (x461%(x462&(x463+x464)));

    if (t88 != 16377LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x465 = -1;
	uint16_t x466 = UINT16_MAX;
	uint16_t x467 = 18702U;
	int32_t t89 = -46;

    t89 = (x465%(x466&(x467+x468)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x469 = INT32_MAX;
	int64_t x471 = INT64_MIN;
	uint16_t x472 = 17U;
	volatile int64_t t90 = 411809975491031LL;

    t90 = (x469%(x470&(x471+x472)));

    if (t90 != 2147483647LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x477 = 117U;
	int8_t x478 = INT8_MAX;
	uint8_t x479 = 30U;
	static uint16_t x480 = 101U;
	static int32_t t91 = 9;

    t91 = (x477%(x478&(x479+x480)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x481 = 81U;
	static volatile uint32_t x482 = 2034U;
	static uint16_t x483 = 7832U;
	uint8_t x484 = 6U;
	static uint32_t t92 = 405307601U;

    t92 = (x481%(x482&(x483+x484)));

    if (t92 != 81U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x489 = UINT32_MAX;
	uint16_t x491 = UINT16_MAX;
	int16_t x492 = INT16_MAX;

    t93 = (x489%(x490&(x491+x492)));

    if (t93 != 65535U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x493 = INT32_MIN;
	volatile int8_t x495 = -2;
	int8_t x496 = -1;
	static volatile int32_t t94 = 60966444;

    t94 = (x493%(x494&(x495+x496)));

    if (t94 != -18) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x497 = -121446409LL;
	int64_t x498 = INT64_MIN;
	int64_t x499 = INT64_MIN;
	int32_t x500 = INT32_MAX;
	int64_t t95 = 1LL;

    t95 = (x497%(x498&(x499+x500)));

    if (t95 != -121446409LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x503 = UINT64_MAX;
	uint8_t x504 = UINT8_MAX;

    t96 = (x501%(x502&(x503+x504)));

    if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x507 = INT32_MIN;
	volatile int64_t x508 = -1LL;
	int64_t t97 = -1132431348538988734LL;

    t97 = (x505%(x506&(x507+x508)));

    if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x509 = -1LL;
	int32_t x510 = 4094;
	int64_t x512 = -136301126LL;
	int64_t t98 = 2674LL;

    t98 = (x509%(x510&(x511+x512)));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x513 = -1;
	int16_t x514 = -1;
	volatile int16_t x515 = 4;
	int32_t x516 = INT32_MIN;
	volatile int32_t t99 = -29;

    t99 = (x513%(x514&(x515+x516)));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x517 = UINT32_MAX;
	uint8_t x518 = 13U;
	uint64_t x520 = 127452420LLU;
	uint64_t t100 = 165825663488728LLU;

    t100 = (x517%(x518&(x519+x520)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x521 = UINT64_MAX;
	static uint64_t x522 = UINT64_MAX;
	int8_t x523 = -1;
	static int64_t x524 = INT64_MAX;
	volatile uint64_t t101 = 17393346404LLU;

    t101 = (x521%(x522&(x523+x524)));

    if (t101 != 3LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x525 = 3U;
	int16_t x527 = INT16_MIN;
	uint16_t x528 = UINT16_MAX;
	static int32_t t102 = -3157159;

    t102 = (x525%(x526&(x527+x528)));

    if (t102 != 3) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x529 = INT64_MIN;
	volatile int32_t x530 = INT32_MAX;
	uint32_t x531 = 20U;
	int64_t x532 = -1LL;
	int64_t t103 = 122LL;

    t103 = (x529%(x530&(x531+x532)));

    if (t103 != -18LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x533 = UINT64_MAX;
	uint32_t x535 = 28U;

    t104 = (x533%(x534&(x535+x536)));

    if (t104 != 15LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x537 = 8;
	static int64_t x538 = INT64_MIN;
	int64_t x539 = -35853LL;
	uint8_t x540 = UINT8_MAX;
	static int64_t t105 = -539301319121496875LL;

    t105 = (x537%(x538&(x539+x540)));

    if (t105 != 8LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x545 = INT16_MIN;
	int16_t x546 = INT16_MIN;
	int32_t x547 = INT32_MIN;
	uint16_t x548 = 0U;
	static volatile int32_t t106 = 22607797;

    t106 = (x545%(x546&(x547+x548)));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x549 = INT8_MIN;
	int16_t x550 = INT16_MIN;
	volatile int32_t x551 = INT32_MAX;
	int64_t x552 = -25LL;

    t107 = (x549%(x550&(x551+x552)));

    if (t107 != -128LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x553 = -1;
	int16_t x554 = INT16_MIN;
	static int64_t x556 = 6995006003LL;

    t108 = (x553%(x554&(x555+x556)));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x559 = INT64_MIN;
	uint8_t x560 = 45U;
	int64_t t109 = 35LL;

    t109 = (x557%(x558&(x559+x560)));

    if (t109 != 65535LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x561 = 8U;
	static volatile uint8_t x562 = 1U;
	static int8_t x563 = 49;
	int16_t x564 = INT16_MIN;

    t110 = (x561%(x562&(x563+x564)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x569 = 2255U;
	volatile int8_t x570 = INT8_MIN;
	int8_t x572 = INT8_MIN;
	int32_t t111 = -4;

    t111 = (x569%(x570&(x571+x572)));

    if (t111 != 79) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x573 = INT8_MIN;
	static int8_t x574 = INT8_MAX;
	int32_t x575 = 15265061;
	int8_t x576 = INT8_MIN;
	int32_t t112 = 14;

    t112 = (x573%(x574&(x575+x576)));

    if (t112 != -17) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x577 = INT64_MAX;
	static int32_t x579 = INT32_MIN;
	uint64_t x580 = UINT64_MAX;
	static uint64_t t113 = 9427LLU;

    t113 = (x577%(x578&(x579+x580)));

    if (t113 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x581 = INT16_MAX;
	int32_t x582 = INT32_MIN;
	static volatile int64_t x583 = INT64_MIN;
	volatile uint32_t x584 = 6U;
	volatile int64_t t114 = -18586549529430187LL;

    t114 = (x581%(x582&(x583+x584)));

    if (t114 != 32767LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x585 = INT8_MIN;
	static volatile int16_t x586 = 3;
	static uint32_t x587 = 22338510U;
	int32_t x588 = INT32_MIN;

    t115 = (x585%(x586&(x587+x588)));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x589 = INT8_MIN;
	static uint64_t x590 = 38872413338234LLU;
	int64_t x592 = INT64_MIN;
	uint64_t t116 = 136271LLU;

    t116 = (x589%(x590&(x591+x592)));

    if (t116 != 15878LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x593 = 6;
	volatile uint64_t x596 = 227890081174126LLU;
	static uint64_t t117 = 17698024220LLU;

    t117 = (x593%(x594&(x595+x596)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x597 = 5U;
	int64_t x598 = INT64_MAX;
	int8_t x600 = INT8_MAX;
	volatile int64_t t118 = -5347866202439LL;

    t118 = (x597%(x598&(x599+x600)));

    if (t118 != 5LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x605 = INT16_MAX;
	volatile int64_t x606 = -1LL;
	volatile int32_t x607 = -1971697;

    t119 = (x605%(x606&(x607+x608)));

    if (t119 != 32767LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x613 = 71U;
	int8_t x614 = INT8_MIN;
	int8_t x615 = INT8_MIN;
	int64_t x616 = -45862481419129LL;
	int64_t t120 = 2202080130054793LL;

    t120 = (x613%(x614&(x615+x616)));

    if (t120 != 71LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x617 = INT32_MIN;
	volatile uint16_t x618 = 27U;
	static int16_t x619 = -6;
	int8_t x620 = -5;
	volatile int32_t t121 = -18445607;

    t121 = (x617%(x618&(x619+x620)));

    if (t121 != -9) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x621 = 7U;
	int8_t x622 = -51;
	static uint64_t x623 = 16LLU;
	static int8_t x624 = INT8_MIN;
	static volatile uint64_t t122 = 12736998747709621LLU;

    t122 = (x621%(x622&(x623+x624)));

    if (t122 != 7LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x633 = INT32_MIN;
	int64_t x634 = -1LL;
	static uint32_t x636 = UINT32_MAX;
	volatile int64_t t123 = 335216308836LL;

    t123 = (x633%(x634&(x635+x636)));

    if (t123 != -2147483648LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x637 = 2U;
	volatile int8_t x638 = INT8_MIN;
	uint16_t x639 = UINT16_MAX;
	int16_t x640 = 164;
	volatile int32_t t124 = -64787277;

    t124 = (x637%(x638&(x639+x640)));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x641 = -1LL;
	uint64_t x642 = UINT64_MAX;
	int16_t x644 = 1625;
	volatile uint64_t t125 = 27LLU;

    t125 = (x641%(x642&(x643+x644)));

    if (t125 != 31142LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x645 = INT16_MIN;
	uint16_t x646 = 709U;
	uint64_t x648 = 8934442720285221LLU;
	uint64_t t126 = 210499980253LLU;

    t126 = (x645%(x646&(x647+x648)));

    if (t126 != 548LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x649 = 1129432628984LL;
	volatile uint32_t x651 = UINT32_MAX;
	static int16_t x652 = -1;
	static int64_t t127 = 1LL;

    t127 = (x649%(x650&(x651+x652)));

    if (t127 != 12784LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x653 = 0;
	uint16_t x654 = 709U;
	int64_t x655 = -1LL;
	static int32_t x656 = INT32_MIN;
	volatile int64_t t128 = 2LL;

    t128 = (x653%(x654&(x655+x656)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x657 = UINT64_MAX;
	volatile int16_t x658 = -3;
	static uint64_t t129 = 41LLU;

    t129 = (x657%(x658&(x659+x660)));

    if (t129 != 126LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x662 = INT16_MAX;
	int8_t x663 = -14;
	static int16_t x664 = -1;
	uint32_t t130 = 1803U;

    t130 = (x661%(x662&(x663+x664)));

    if (t130 != 27396U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x665 = 3U;
	int8_t x666 = -5;
	int32_t t131 = 0;

    t131 = (x665%(x666&(x667+x668)));

    if (t131 != 3) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x673 = UINT8_MAX;
	static uint8_t x674 = UINT8_MAX;
	int64_t x675 = INT64_MAX;
	static volatile int64_t t132 = -191LL;

    t132 = (x673%(x674&(x675+x676)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x681 = -1LL;
	int16_t x682 = INT16_MIN;
	int8_t x683 = INT8_MIN;
	static int64_t t133 = -1101319875505013652LL;

    t133 = (x681%(x682&(x683+x684)));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x685 = 11309;
	volatile uint32_t x686 = 3646672U;
	int64_t x687 = INT64_MIN;
	static uint64_t x688 = UINT64_MAX;
	volatile uint64_t t134 = 497LLU;

    t134 = (x685%(x686&(x687+x688)));

    if (t134 != 11309LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x693 = 1;
	volatile int64_t x694 = -406335996209LL;
	uint64_t x696 = 47274LLU;
	uint64_t t135 = 2274677484976LLU;

    t135 = (x693%(x694&(x695+x696)));

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x697 = 1798345256006554LL;
	int32_t x698 = 1398693;
	static int16_t x699 = INT16_MIN;
	int16_t x700 = INT16_MIN;
	int64_t t136 = -3992LL;

    t136 = (x697%(x698&(x699+x700)));

    if (t136 != 652186LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x701 = -1LL;
	uint16_t x702 = 1U;
	int16_t x703 = INT16_MIN;
	int32_t x704 = INT32_MAX;
	int64_t t137 = -134467173170LL;

    t137 = (x701%(x702&(x703+x704)));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x705 = -1;
	uint16_t x706 = 1U;
	int64_t x707 = INT64_MIN;
	int32_t x708 = 374787;
	static volatile int64_t t138 = 2562648639470894LL;

    t138 = (x705%(x706&(x707+x708)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x717 = UINT64_MAX;
	volatile uint32_t x718 = 4345U;
	int64_t x720 = -1LL;
	uint64_t t139 = 3463LLU;

    t139 = (x717%(x718&(x719+x720)));

    if (t139 != 1202LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x725 = 98670220916LL;
	int16_t x727 = INT16_MIN;
	int8_t x728 = -1;
	int64_t t140 = 0LL;

    t140 = (x725%(x726&(x727+x728)));

    if (t140 != 20423956LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x729 = -1;
	int32_t x730 = -15819;
	volatile int32_t x731 = -183165244;
	int64_t x732 = INT64_MAX;

    t141 = (x729%(x730&(x731+x732)));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x733 = 4;
	int8_t x734 = -1;
	uint32_t x735 = 278618U;
	uint8_t x736 = 0U;
	uint32_t t142 = 129588U;

    t142 = (x733%(x734&(x735+x736)));

    if (t142 != 4U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x738 = UINT32_MAX;
	int16_t x739 = INT16_MIN;
	volatile int8_t x740 = INT8_MAX;
	volatile int64_t t143 = -65107624449841260LL;

    t143 = (x737%(x738&(x739+x740)));

    if (t143 != -2680184768LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x741 = 39890LLU;
	int32_t x742 = -1;
	uint8_t x744 = 5U;
	static volatile uint64_t t144 = 470957LLU;

    t144 = (x741%(x742&(x743+x744)));

    if (t144 != 39890LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x750 = INT16_MAX;
	volatile uint8_t x751 = 4U;
	int16_t x752 = INT16_MIN;
	int32_t t145 = -6297258;

    t145 = (x749%(x750&(x751+x752)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x769 = -5;
	static int16_t x770 = 445;
	uint8_t x771 = UINT8_MAX;
	int16_t x772 = -40;
	int32_t t146 = -1690485;

    t146 = (x769%(x770&(x771+x772)));

    if (t146 != -5) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x773 = 13U;
	volatile int16_t x774 = -1;
	volatile int16_t x775 = 1103;
	int8_t x776 = INT8_MIN;
	volatile int32_t t147 = 1;

    t147 = (x773%(x774&(x775+x776)));

    if (t147 != 13) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x777 = INT8_MIN;
	int8_t x778 = INT8_MIN;
	uint16_t x779 = 0U;
	volatile int32_t t148 = 883;

    t148 = (x777%(x778&(x779+x780)));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x781 = 7U;
	int32_t x782 = INT32_MIN;
	uint32_t x783 = 5U;
	int16_t x784 = INT16_MIN;

    t149 = (x781%(x782&(x783+x784)));

    if (t149 != 7U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x785 = INT64_MIN;
	uint8_t x786 = 2U;
	int64_t x787 = -1LL;
	static int64_t x788 = -157004179537638257LL;

    t150 = (x785%(x786&(x787+x788)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x794 = -34782LL;
	int8_t x795 = -1;
	uint16_t x796 = 754U;
	volatile int64_t t151 = 10573172233692320LL;

    t151 = (x793%(x794&(x795+x796)));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x797 = 109LLU;
	static int32_t x798 = -8200516;
	static int64_t x800 = -265904491LL;
	static volatile uint64_t t152 = 17162329877LLU;

    t152 = (x797%(x798&(x799+x800)));

    if (t152 != 109LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x801 = 71U;
	uint8_t x803 = UINT8_MAX;
	volatile uint64_t x804 = 941279324134628LLU;
	static uint64_t t153 = 121815LLU;

    t153 = (x801%(x802&(x803+x804)));

    if (t153 != 71LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x806 = 79U;
	int8_t x807 = INT8_MIN;
	static int64_t x808 = -17352985693LL;

    t154 = (x805%(x806&(x807+x808)));

    if (t154 != 2LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x809 = INT8_MIN;
	uint64_t x810 = 3975095259LLU;
	volatile int32_t x811 = INT32_MAX;
	volatile uint64_t t155 = 13118910057LLU;

    t155 = (x809%(x810&(x811+x812)));

    if (t155 != 873474908LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x813 = -1;
	volatile int8_t x815 = 2;
	volatile int16_t x816 = -1;
	int32_t t156 = 518;

    t156 = (x813%(x814&(x815+x816)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x825 = 142371858730609043LL;
	uint64_t x826 = UINT64_MAX;
	uint32_t x827 = 469U;
	int16_t x828 = -1;

    t157 = (x825%(x826&(x827+x828)));

    if (t157 != 107LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x837 = 151050263;
	int64_t x838 = -345LL;
	uint64_t x840 = 6186LLU;

    t158 = (x837%(x838&(x839+x840)));

    if (t158 != 156LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x841 = 19;
	uint8_t x842 = UINT8_MAX;
	int16_t x843 = 63;
	int64_t x844 = INT64_MIN;
	int64_t t159 = -338404272377991662LL;

    t159 = (x841%(x842&(x843+x844)));

    if (t159 != 19LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x845 = UINT8_MAX;
	int64_t x846 = INT64_MIN;
	uint8_t x847 = 25U;
	static int16_t x848 = -1342;
	volatile int64_t t160 = -2298383800977LL;

    t160 = (x845%(x846&(x847+x848)));

    if (t160 != 255LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x851 = INT16_MIN;
	uint32_t t161 = 5782U;

    t161 = (x849%(x850&(x851+x852)));

    if (t161 != 32239U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x853 = INT8_MIN;
	int32_t x854 = 2901;
	int64_t x855 = INT64_MIN;
	int32_t x856 = 73;
	int64_t t162 = -26188LL;

    t162 = (x853%(x854&(x855+x856)));

    if (t162 != -63LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x861 = 533728723U;
	int16_t x862 = INT16_MAX;
	uint32_t x864 = 6U;

    t163 = (x861%(x862&(x863+x864)));

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x867 = INT8_MAX;
	uint32_t x868 = UINT32_MAX;
	volatile uint64_t t164 = 195154028LLU;

    t164 = (x865%(x866&(x867+x868)));

    if (t164 != 18LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x869 = INT8_MIN;
	int8_t x870 = -1;
	static int16_t x871 = INT16_MAX;
	int8_t x872 = INT8_MIN;
	volatile int32_t t165 = 5073;

    t165 = (x869%(x870&(x871+x872)));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x874 = -1LL;
	volatile uint32_t x875 = 6982376U;
	int32_t x876 = INT32_MIN;
	static int64_t t166 = 1LL;

    t166 = (x873%(x874&(x875+x876)));

    if (t166 != 373LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x881 = -1LL;
	uint16_t x882 = 20498U;
	int32_t x883 = INT32_MIN;
	volatile int64_t x884 = -1LL;
	int64_t t167 = 1LL;

    t167 = (x881%(x882&(x883+x884)));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x885 = 1803613LL;
	int16_t x886 = INT16_MIN;
	int8_t x887 = 0;
	static int32_t x888 = -1;
	int64_t t168 = -14694004LL;

    t168 = (x885%(x886&(x887+x888)));

    if (t168 != 1373LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x893 = -63;
	int8_t x894 = INT8_MIN;
	int16_t x895 = -1;
	uint64_t x896 = 319LLU;

    t169 = (x893%(x894&(x895+x896)));

    if (t169 != 193LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x897 = 1;
	volatile uint32_t x898 = 461U;
	int16_t x899 = INT16_MIN;
	static int32_t x900 = 170784;
	static volatile uint32_t t170 = 9173U;

    t170 = (x897%(x898&(x899+x900)));

    if (t170 != 1U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x901 = INT64_MIN;
	int32_t x902 = INT32_MIN;
	static int16_t x903 = -661;
	static int64_t x904 = -47771793798745313LL;
	volatile int64_t t171 = 890801LL;

    t171 = (x901%(x902&(x903+x904)));

    if (t171 != -3415832587665408LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x909 = UINT16_MAX;
	int32_t x911 = -41717433;
	volatile uint16_t x912 = 14U;
	int32_t t172 = 1;

    t172 = (x909%(x910&(x911+x912)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x913 = INT32_MAX;
	static int32_t x914 = 134298973;
	uint8_t x915 = 5U;
	static uint16_t x916 = 205U;
	volatile int32_t t173 = 16220284;

    t173 = (x913%(x914&(x915+x916)));

    if (t173 != 47) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x917 = 63U;
	uint32_t x918 = 61595715U;
	volatile int16_t x919 = -38;
	volatile uint32_t t174 = 3753084U;

    t174 = (x917%(x918&(x919+x920)));

    if (t174 != 63U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x921 = 37U;
	volatile int8_t x922 = INT8_MIN;
	volatile int8_t x923 = 22;
	int32_t x924 = -110;
	volatile int32_t t175 = -34495760;

    t175 = (x921%(x922&(x923+x924)));

    if (t175 != 37) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x925 = INT64_MIN;
	uint64_t x926 = 2436860052LLU;
	static uint32_t x928 = 1151U;

    t176 = (x925%(x926&(x927+x928)));

    if (t176 != 2212147736LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x931 = -1;
	volatile int16_t x932 = INT16_MIN;

    t177 = (x929%(x930&(x931+x932)));

    if (t177 != 1014427319LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x933 = UINT64_MAX;
	uint64_t x934 = UINT64_MAX;
	static volatile int64_t x936 = -1LL;

    t178 = (x933%(x934&(x935+x936)));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x937 = UINT8_MAX;
	int32_t x939 = INT32_MIN;
	volatile uint64_t x940 = 1621552236057LLU;
	uint64_t t179 = 1873LLU;

    t179 = (x937%(x938&(x939+x940)));

    if (t179 != 255LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x941 = UINT64_MAX;
	static int64_t x943 = INT64_MIN;
	volatile uint8_t x944 = 32U;
	volatile uint64_t t180 = 29883073620743089LLU;

    t180 = (x941%(x942&(x943+x944)));

    if (t180 != 31LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x945 = 17LLU;
	volatile int16_t x946 = -1;
	int8_t x947 = INT8_MIN;
	volatile uint64_t t181 = 281849773270213483LLU;

    t181 = (x945%(x946&(x947+x948)));

    if (t181 != 17LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x973 = INT16_MAX;
	int8_t x974 = INT8_MIN;
	volatile int64_t x975 = -60LL;
	int64_t x976 = 3966392784LL;
	int64_t t182 = 12314244643956LL;

    t182 = (x973%(x974&(x975+x976)));

    if (t182 != 32767LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x981 = 54U;
	int8_t x982 = INT8_MAX;
	volatile int16_t x983 = -2141;
	int32_t x984 = 7419;

    t183 = (x981%(x982&(x983+x984)));

    if (t183 != 24) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x985 = 3U;
	uint8_t x986 = 44U;
	volatile int16_t x988 = -1;
	volatile uint64_t t184 = 102LLU;

    t184 = (x985%(x986&(x987+x988)));

    if (t184 != 3LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x989 = INT16_MIN;
	static volatile int64_t x990 = -38575367205655LL;
	static volatile int64_t x992 = -1LL;
	int64_t t185 = 254584773254LL;

    t185 = (x989%(x990&(x991+x992)));

    if (t185 != -13303LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x993 = INT8_MIN;
	static uint32_t x994 = UINT32_MAX;
	uint8_t x995 = 60U;
	uint64_t x996 = 3235148592403LLU;
	static volatile uint64_t t186 = 5650857175254784LLU;

    t186 = (x993%(x994&(x995+x996)));

    if (t186 != 157761688LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x1005 = UINT16_MAX;
	volatile uint64_t x1006 = 31903884769LLU;
	static uint32_t x1007 = 1914U;

    t187 = (x1005%(x1006&(x1007+x1008)));

    if (t187 != 65535LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x1014 = 4U;
	int64_t x1015 = INT64_MAX;
	int64_t x1016 = INT64_MIN;
	static int64_t t188 = -226243899LL;

    t188 = (x1013%(x1014&(x1015+x1016)));

    if (t188 != 2LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x1017 = INT8_MIN;
	int32_t x1018 = -4;
	uint8_t x1019 = UINT8_MAX;
	uint32_t x1020 = 510863U;
	volatile uint32_t t189 = 180U;

    t189 = (x1017%(x1018&(x1019+x1020)));

    if (t189 != 59420U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1022 = 101;
	static volatile int8_t x1023 = INT8_MAX;
	uint8_t x1024 = UINT8_MAX;
	int64_t t190 = -972657777451LL;

    t190 = (x1021%(x1022&(x1023+x1024)));

    if (t190 != -38LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x1029 = UINT16_MAX;
	uint64_t x1031 = UINT64_MAX;
	int16_t x1032 = INT16_MAX;
	uint64_t t191 = 1578110908797676679LLU;

    t191 = (x1029%(x1030&(x1031+x1032)));

    if (t191 != 1007LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1038 = 1U;
	int32_t x1039 = -1265499;
	uint16_t x1040 = 5606U;
	volatile int64_t t192 = 5861786772LL;

    t192 = (x1037%(x1038&(x1039+x1040)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1047 = 21;
	int64_t x1048 = INT64_MIN;

    t193 = (x1045%(x1046&(x1047+x1048)));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1053 = INT64_MAX;
	int64_t x1054 = -1LL;
	volatile int64_t x1055 = INT64_MIN;
	volatile int64_t t194 = INT64_MAX;

    t194 = (x1053%(x1054&(x1055+x1056)));

    if (t194 != INT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1058 = UINT64_MAX;
	int32_t x1059 = 5;
	static uint64_t t195 = 14171LLU;

    t195 = (x1057%(x1058&(x1059+x1060)));

    if (t195 != 20LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1061 = 3307330LL;
	int64_t x1062 = -1LL;
	int16_t x1063 = INT16_MIN;
	uint8_t x1064 = 97U;
	volatile int64_t t196 = -1908118337796577LL;

    t196 = (x1061%(x1062&(x1063+x1064)));

    if (t196 != 7559LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1065 = -1;
	int8_t x1066 = INT8_MAX;
	int16_t x1067 = INT16_MAX;
	uint64_t t197 = 225704020LLU;

    t197 = (x1065%(x1066&(x1067+x1068)));

    if (t197 != 15LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1073 = INT64_MAX;
	int8_t x1074 = INT8_MIN;
	int32_t x1075 = INT32_MAX;
	uint32_t x1076 = 10U;
	int64_t t198 = 62696LL;

    t198 = (x1073%(x1074&(x1075+x1076)));

    if (t198 != 2147483647LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1077 = INT32_MAX;
	static int8_t x1079 = INT8_MIN;
	uint8_t x1080 = 13U;
	int64_t t199 = 295LL;

    t199 = (x1077%(x1078&(x1079+x1080)));

    if (t199 != 2147483647LL) { NG(); } else { ; }
	
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

