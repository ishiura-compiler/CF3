
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

static volatile uint16_t x3 = UINT16_MAX;
uint64_t x7 = 2915228372921808LLU;
int32_t x10 = 20295;
int64_t x12 = INT64_MIN;
static volatile int16_t x15 = INT16_MIN;
volatile uint16_t x19 = 1U;
static volatile uint64_t x22 = 1929628LLU;
int32_t x23 = INT32_MIN;
int32_t x25 = INT32_MIN;
static volatile int64_t t6 = -8295LL;
uint64_t x29 = 1350672301801754285LLU;
volatile uint16_t x31 = UINT16_MAX;
int16_t x32 = INT16_MIN;
int16_t x39 = INT16_MIN;
int64_t t10 = -56751181375LL;
uint32_t x53 = 1295838427U;
volatile int32_t t13 = INT32_MIN;
static int32_t x58 = INT32_MIN;
int32_t x63 = -4;
uint32_t x64 = 774347343U;
static int64_t x71 = -1LL;
volatile int64_t t17 = 64LL;
int64_t x75 = -1LL;
int32_t x81 = -1;
volatile uint64_t t20 = 1287370131889087LLU;
static uint32_t x86 = 281U;
uint16_t x90 = 8U;
int32_t x91 = INT32_MIN;
int16_t x93 = INT16_MAX;
volatile int32_t x102 = INT32_MIN;
int64_t t25 = -38412053LL;
int32_t x106 = -1;
int32_t x107 = 69631;
volatile int32_t t26 = -188723;
int32_t x110 = INT32_MIN;
int8_t x111 = INT8_MIN;
uint16_t x120 = UINT16_MAX;
int64_t t29 = 49873260886LL;
int32_t t30 = -509;
uint32_t t31 = 1U;
static int16_t x132 = INT16_MIN;
uint8_t x133 = 126U;
static uint16_t x144 = UINT16_MAX;
int32_t t35 = 27;
int16_t x146 = -1;
volatile int64_t t36 = 236612LL;
static uint64_t x149 = 956047LLU;
volatile uint16_t x153 = UINT16_MAX;
int64_t t39 = 195618292457LL;
int16_t x161 = -219;
int64_t x167 = -116907675791963890LL;
volatile int64_t x169 = -21864122242141LL;
static int32_t x177 = INT32_MIN;
int64_t x179 = -221112565040LL;
static volatile int32_t x185 = 3790469;
uint32_t x189 = 3086U;
int64_t x198 = -15332307951759LL;
uint64_t t50 = 3995296238787446791LLU;
static int32_t x205 = 1950571;
int32_t x208 = INT32_MAX;
int32_t t51 = -411360382;
static int8_t x215 = -1;
volatile int32_t t53 = -4;
uint8_t x217 = UINT8_MAX;
int16_t x218 = -8143;
int16_t x219 = -1;
static volatile int8_t x220 = -1;
static int32_t x228 = 10840;
static uint8_t x229 = 16U;
static int64_t x234 = -43457735171194948LL;
int64_t x237 = INT64_MIN;
uint8_t x245 = 29U;
int64_t x246 = INT64_MIN;
static volatile uint32_t t61 = 2U;
uint64_t x250 = UINT64_MAX;
uint8_t x257 = UINT8_MAX;
uint64_t x262 = 17090385753LLU;
static uint64_t t66 = 2779LLU;
uint16_t x270 = 516U;
volatile uint64_t t67 = 293510490630234494LLU;
uint16_t x274 = 0U;
volatile int32_t x277 = -1;
int64_t x286 = INT64_MAX;
static uint32_t x287 = 210858U;
uint32_t t71 = 396979551U;
volatile int8_t x296 = INT8_MIN;
int32_t x297 = INT32_MIN;
static uint64_t x303 = 1LLU;
uint64_t t75 = 453217LLU;
static uint8_t x305 = UINT8_MAX;
uint64_t x316 = 15454146079LLU;
static int16_t x324 = INT16_MIN;
volatile int64_t t81 = 65151964884599913LL;
int64_t x333 = 529695LL;
uint16_t x338 = UINT16_MAX;
int32_t x342 = INT32_MIN;
uint8_t x344 = UINT8_MAX;
int8_t x346 = INT8_MAX;
uint32_t x355 = 185806U;
static int16_t x371 = -1;
static int8_t x373 = -1;
uint32_t x380 = 28718482U;
volatile int32_t x383 = INT32_MIN;
int8_t x385 = INT8_MAX;
uint64_t x386 = 10153873LLU;
volatile int32_t t96 = -61936;
static int8_t x394 = -19;
static int64_t x411 = INT64_MIN;
int32_t x412 = 37564838;
static uint32_t x415 = 299592U;
uint16_t x418 = 61U;
volatile int64_t x420 = 26381LL;
int64_t t104 = -28314597171LL;
volatile int64_t x424 = -1LL;
uint64_t x427 = 1012932LLU;
static volatile uint64_t t106 = 43623LLU;
static uint8_t x429 = 124U;
static int32_t t107 = 5;
static uint16_t x440 = UINT16_MAX;
int8_t x441 = 43;
uint32_t x453 = 6U;
uint8_t x455 = 0U;
int32_t x459 = INT32_MAX;
volatile int64_t t115 = 5LL;
volatile int64_t t116 = 25722806312080LL;
volatile int16_t x471 = -6112;
uint8_t x476 = 1U;
int32_t t118 = -15653954;
int32_t x477 = 2;
uint32_t t119 = UINT32_MAX;
uint64_t x489 = 25LLU;
volatile int16_t x494 = -399;
int32_t t124 = 3;
int8_t x501 = INT8_MIN;
volatile uint32_t t126 = 214958U;
volatile int64_t t127 = 1LL;
uint64_t x513 = 115538309679535541LLU;
static volatile int16_t x522 = INT16_MIN;
int16_t x523 = -1;
static int16_t x531 = -1;
uint32_t t133 = 142058173U;
uint16_t x539 = UINT16_MAX;
int8_t x541 = INT8_MIN;
int32_t x552 = -5;
volatile int64_t x557 = INT64_MAX;
uint64_t t139 = 59058859399487LLU;
volatile int8_t x561 = INT8_MIN;
uint32_t x563 = 74398987U;
volatile uint64_t x568 = 130062406439LLU;
int8_t x576 = INT8_MIN;
int32_t x585 = INT32_MIN;
int8_t x596 = INT8_MIN;
volatile uint64_t t148 = 389LLU;
int32_t x597 = -1;
static int64_t x599 = INT64_MIN;
int16_t x601 = -1;
volatile uint64_t x602 = 206304754473LLU;
uint64_t t151 = 5771897348804429LLU;
static volatile int64_t x621 = -1LL;
volatile uint64_t x629 = 6LLU;
volatile uint16_t x632 = UINT16_MAX;
static uint16_t x636 = UINT16_MAX;
volatile int32_t t158 = -843716;
int8_t x640 = -1;
uint16_t x641 = UINT16_MAX;
int32_t x646 = INT32_MAX;
static volatile uint32_t x654 = 4172349U;
volatile uint16_t x659 = 4U;
int16_t x670 = INT16_MAX;
int32_t x674 = INT32_MAX;
static int8_t x680 = -1;
int32_t x681 = INT32_MIN;
int64_t x682 = INT64_MIN;
volatile int64_t t170 = 7553670662LL;
int16_t x691 = -15411;
static volatile uint64_t t172 = 1418346550504406LLU;
uint64_t x694 = UINT64_MAX;
static int32_t t173 = -1;
int8_t x697 = INT8_MAX;
static uint32_t x703 = 29U;
volatile int8_t x706 = 2;
uint16_t x710 = 1920U;
int16_t x713 = INT16_MIN;
static int64_t x716 = 2154700710763LL;
volatile int16_t x723 = INT16_MAX;
volatile int64_t x728 = -121763421234736LL;
int8_t x733 = INT8_MAX;
uint32_t x735 = UINT32_MAX;
static uint64_t x742 = 7302424LLU;
int8_t x744 = -1;
int64_t x750 = 20987LL;
volatile uint16_t x761 = 2U;
uint8_t x763 = UINT8_MAX;
int16_t x766 = INT16_MIN;
int8_t x770 = -1;
int16_t x772 = INT16_MAX;
volatile int32_t t195 = 1408;
static int64_t x785 = INT64_MIN;
volatile uint64_t x786 = 1374LLU;
uint8_t x788 = 1U;
volatile int32_t t196 = -179156;
volatile uint32_t x789 = UINT32_MAX;
uint32_t x794 = 11526U;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	uint64_t x2 = UINT64_MAX;
	int8_t x4 = -1;
	volatile int32_t t0 = 31638641;

    t0 = (((x1==x2)+x3)&x4);

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -699;
	int32_t x6 = -1;
	static uint8_t x8 = 1U;
	uint64_t t1 = 99809399192885052LLU;

    t1 = (((x5==x6)+x7)&x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int8_t x11 = INT8_MAX;
	static int64_t t2 = 885479LL;

    t2 = (((x9==x10)+x11)&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;
	static uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 1373105787333802275LLU;

    t3 = (((x13==x14)+x15)&x16);

    if (t3 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint64_t x18 = UINT64_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -30675;

    t4 = (((x17==x18)+x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	volatile int64_t x24 = INT64_MIN;
	volatile int64_t t5 = INT64_MIN;

    t5 = (((x21==x22)+x23)&x24);

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x26 = INT64_MIN;
	int32_t x27 = -1;
	int64_t x28 = 815867580LL;

    t6 = (((x25==x26)+x27)&x28);

    if (t6 != 815867580LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = UINT16_MAX;
	static volatile int32_t t7 = 2019571;

    t7 = (((x29==x30)+x31)&x32);

    if (t7 != 32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	static int16_t x35 = 57;
	int32_t x36 = 19025;
	volatile int32_t t8 = -175758;

    t8 = (((x33==x34)+x35)&x36);

    if (t8 != 17) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MAX;
	int64_t x38 = INT64_MIN;
	static int32_t x40 = INT32_MIN;
	static volatile int32_t t9 = INT32_MIN;

    t9 = (((x37==x38)+x39)&x40);

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = -1;
	volatile uint8_t x42 = 9U;
	static int64_t x43 = INT64_MAX;
	int8_t x44 = INT8_MIN;

    t10 = (((x41==x42)+x43)&x44);

    if (t10 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int16_t x46 = INT16_MAX;
	static volatile int16_t x47 = INT16_MAX;
	volatile int16_t x48 = 1;
	int32_t t11 = -2498847;

    t11 = (((x45==x46)+x47)&x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	int64_t x50 = -667166048LL;
	int16_t x51 = INT16_MIN;
	uint64_t x52 = UINT64_MAX;
	static volatile uint64_t t12 = 63386745826LLU;

    t12 = (((x49==x50)+x51)&x52);

    if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = UINT8_MAX;
	volatile int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;

    t13 = (((x53==x54)+x55)&x56);

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 5202U;
	volatile uint8_t x59 = UINT8_MAX;
	static uint16_t x60 = 6U;
	volatile int32_t t14 = 4698;

    t14 = (((x57==x58)+x59)&x60);

    if (t14 != 6) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	uint16_t x62 = UINT16_MAX;
	uint32_t t15 = 367U;

    t15 = (((x61==x62)+x63)&x64);

    if (t15 != 774347340U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -4;
	uint16_t x66 = 0U;
	int8_t x67 = 7;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = 500;

    t16 = (((x65==x66)+x67)&x68);

    if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MAX;
	uint16_t x70 = 7840U;
	uint32_t x72 = UINT32_MAX;

    t17 = (((x69==x70)+x71)&x72);

    if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	volatile int64_t x74 = INT64_MIN;
	int64_t x76 = -1LL;
	static volatile int64_t t18 = 52LL;

    t18 = (((x73==x74)+x75)&x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 494U;
	int32_t x78 = INT32_MIN;
	volatile int32_t x79 = 19911104;
	int8_t x80 = 42;
	static volatile int32_t t19 = -7;

    t19 = (((x77==x78)+x79)&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MIN;
	uint64_t x84 = UINT64_MAX;

    t20 = (((x81==x82)+x83)&x84);

    if (t20 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 82415LLU;
	int16_t x87 = INT16_MIN;
	int32_t x88 = -44578;
	int32_t t21 = 1157;

    t21 = (((x85==x86)+x87)&x88);

    if (t21 != -65536) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	uint64_t x92 = 3208535LLU;
	uint64_t t22 = 67LLU;

    t22 = (((x89==x90)+x91)&x92);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = UINT16_MAX;
	volatile uint16_t x95 = 98U;
	static int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = 361190;

    t23 = (((x93==x94)+x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 74U;
	static int16_t x98 = 7787;
	static uint32_t x99 = 25U;
	volatile int32_t x100 = -120451314;
	static volatile uint32_t t24 = 1172882U;

    t24 = (((x97==x98)+x99)&x100);

    if (t24 != 8U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x101 = 371U;
	int64_t x103 = -1LL;
	int8_t x104 = -36;

    t25 = (((x101==x102)+x103)&x104);

    if (t25 != -36LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	static int16_t x108 = 225;

    t26 = (((x105==x106)+x107)&x108);

    if (t26 != 225) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -100576403LL;
	int8_t x112 = 0;
	int32_t t27 = -1192458;

    t27 = (((x109==x110)+x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x113 = 218298U;
	volatile int64_t x114 = INT64_MIN;
	uint64_t x115 = 6LLU;
	static uint8_t x116 = 1U;
	static volatile uint64_t t28 = 535060502913437LLU;

    t28 = (((x113==x114)+x115)&x116);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = 1471383406560718337LLU;
	int64_t x118 = INT64_MAX;
	int64_t x119 = -1LL;

    t29 = (((x117==x118)+x119)&x120);

    if (t29 != 65535LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x121 = -1;
	int64_t x122 = INT64_MIN;
	volatile int32_t x123 = 62312;
	volatile int16_t x124 = -1;

    t30 = (((x121==x122)+x123)&x124);

    if (t30 != 62312) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int8_t x126 = -1;
	int16_t x127 = INT16_MIN;
	uint32_t x128 = 823954965U;

    t31 = (((x125==x126)+x127)&x128);

    if (t31 != 823951360U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	uint64_t x131 = 15705602411387541LLU;
	uint64_t t32 = 463583222LLU;

    t32 = (((x129==x130)+x131)&x132);

    if (t32 != 15705602411364352LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = INT32_MAX;
	static volatile int8_t x135 = INT8_MIN;
	int32_t x136 = -1;
	volatile int32_t t33 = -82557906;

    t33 = (((x133==x134)+x135)&x136);

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -658555293;
	int32_t x138 = -1;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MAX;
	int32_t t34 = -19210;

    t34 = (((x137==x138)+x139)&x140);

    if (t34 != 32640) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	volatile uint16_t x142 = 6242U;
	int32_t x143 = INT32_MAX;

    t35 = (((x141==x142)+x143)&x144);

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = 89153310458550903LLU;
	static int64_t x147 = INT64_MAX;
	uint8_t x148 = 92U;

    t36 = (((x145==x146)+x147)&x148);

    if (t36 != 92LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x150 = 4;
	uint16_t x151 = 8U;
	int64_t x152 = INT64_MAX;
	int64_t t37 = -6241707198390949LL;

    t37 = (((x149==x150)+x151)&x152);

    if (t37 != 8LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = INT32_MIN;
	int8_t x155 = 0;
	volatile uint16_t x156 = 313U;
	volatile int32_t t38 = -514;

    t38 = (((x153==x154)+x155)&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	uint64_t x158 = 19490102128LLU;
	int64_t x159 = INT64_MAX;
	int8_t x160 = 14;

    t39 = (((x157==x158)+x159)&x160);

    if (t39 != 14LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x162 = -1;
	uint16_t x163 = 7857U;
	uint64_t x164 = 163LLU;
	volatile uint64_t t40 = 196654LLU;

    t40 = (((x161==x162)+x163)&x164);

    if (t40 != 161LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	static uint64_t x166 = 25576704121917LLU;
	uint64_t x168 = 8159528203903697LLU;
	volatile uint64_t t41 = 88112567LLU;

    t41 = (((x165==x166)+x167)&x168);

    if (t41 != 185834915512320LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x170 = INT8_MIN;
	uint8_t x171 = 6U;
	uint8_t x172 = 111U;
	volatile int32_t t42 = -101;

    t42 = (((x169==x170)+x171)&x172);

    if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 585394145126182732LLU;
	int64_t x174 = 4129LL;
	uint32_t x175 = 12135209U;
	int16_t x176 = -14;
	volatile uint32_t t43 = 145112U;

    t43 = (((x173==x174)+x175)&x176);

    if (t43 != 12135200U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x178 = INT16_MIN;
	int8_t x180 = 1;
	volatile int64_t t44 = 3LL;

    t44 = (((x177==x178)+x179)&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -407460647388619984LL;
	volatile int8_t x182 = INT8_MIN;
	int32_t x183 = 781778228;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 0;

    t45 = (((x181==x182)+x183)&x184);

    if (t45 != 64820) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = 3192283168LLU;
	static int64_t x187 = INT64_MAX;
	uint32_t x188 = UINT32_MAX;
	volatile int64_t t46 = -7432699986264LL;

    t46 = (((x185==x186)+x187)&x188);

    if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = -27212125LL;
	int64_t x191 = -1LL;
	int32_t x192 = 32564270;
	static volatile int64_t t47 = 241562036LL;

    t47 = (((x189==x190)+x191)&x192);

    if (t47 != 32564270LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 407;
	int32_t x194 = -1;
	uint16_t x195 = 98U;
	static int32_t x196 = -1;
	volatile int32_t t48 = -81008908;

    t48 = (((x193==x194)+x195)&x196);

    if (t48 != 98) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	volatile int64_t x199 = 1003530251LL;
	int8_t x200 = INT8_MIN;
	int64_t t49 = 1963645470054602LL;

    t49 = (((x197==x198)+x199)&x200);

    if (t49 != 1003530240LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = UINT8_MAX;
	static int16_t x202 = -1;
	uint64_t x203 = UINT64_MAX;
	volatile int32_t x204 = 28;

    t50 = (((x201==x202)+x203)&x204);

    if (t50 != 28LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x206 = INT16_MIN;
	int32_t x207 = INT32_MIN;

    t51 = (((x205==x206)+x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 33462050U;
	static int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	static volatile uint64_t x212 = 554284536647662350LLU;
	volatile uint64_t t52 = 303LLU;

    t52 = (((x209==x210)+x211)&x212);

    if (t52 != 554284534779084800LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 4U;
	volatile int16_t x214 = -1;
	int8_t x216 = INT8_MIN;

    t53 = (((x213==x214)+x215)&x216);

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t t54 = -15;

    t54 = (((x217==x218)+x219)&x220);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MIN;
	static uint64_t x222 = 67LLU;
	int32_t x223 = 140;
	static int32_t x224 = 55557;
	int32_t t55 = -70642;

    t55 = (((x221==x222)+x223)&x224);

    if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	uint16_t x226 = 210U;
	static int8_t x227 = INT8_MIN;
	int32_t t56 = -51;

    t56 = (((x225==x226)+x227)&x228);

    if (t56 != 10752) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x230 = 0;
	int32_t x231 = INT32_MAX;
	int16_t x232 = -1;
	int32_t t57 = INT32_MAX;

    t57 = (((x229==x230)+x231)&x232);

    if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = 3692883;
	int16_t x235 = -1;
	static int32_t x236 = -1;
	volatile int32_t t58 = -106;

    t58 = (((x233==x234)+x235)&x236);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = 4;
	uint8_t x239 = UINT8_MAX;
	uint8_t x240 = UINT8_MAX;
	int32_t t59 = -5347;

    t59 = (((x237==x238)+x239)&x240);

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = INT32_MIN;
	uint32_t x242 = UINT32_MAX;
	volatile uint64_t x243 = UINT64_MAX;
	int32_t x244 = -3767;
	volatile uint64_t t60 = 1488647LLU;

    t60 = (((x241==x242)+x243)&x244);

    if (t60 != 18446744073709547849LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x247 = 1883849U;
	int32_t x248 = INT32_MAX;

    t61 = (((x245==x246)+x247)&x248);

    if (t61 != 1883849U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 3607U;
	uint32_t x251 = 19U;
	int8_t x252 = -1;
	static volatile uint32_t t62 = 1341U;

    t62 = (((x249==x250)+x251)&x252);

    if (t62 != 19U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	static int16_t x254 = INT16_MIN;
	int16_t x255 = 7;
	volatile uint16_t x256 = UINT16_MAX;
	static volatile int32_t t63 = -1721;

    t63 = (((x253==x254)+x255)&x256);

    if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x258 = -1;
	int16_t x259 = INT16_MAX;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -1;

    t64 = (((x257==x258)+x259)&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = -1;
	volatile uint32_t x263 = UINT32_MAX;
	uint8_t x264 = 1U;
	uint32_t t65 = 226982210U;

    t65 = (((x261==x262)+x263)&x264);

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = 1;
	int64_t x266 = -112265721LL;
	static uint64_t x267 = 763293027LLU;
	int8_t x268 = -1;

    t66 = (((x265==x266)+x267)&x268);

    if (t66 != 763293027LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 6902U;
	uint64_t x271 = 9346735LLU;
	int16_t x272 = INT16_MAX;

    t67 = (((x269==x270)+x271)&x272);

    if (t67 != 7855LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	int32_t x275 = -1;
	int16_t x276 = -1;
	volatile int32_t t68 = 0;

    t68 = (((x273==x274)+x275)&x276);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x278 = -6075102;
	int8_t x279 = -24;
	uint16_t x280 = 187U;
	static volatile int32_t t69 = 961135;

    t69 = (((x277==x278)+x279)&x280);

    if (t69 != 168) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MAX;
	uint16_t x283 = UINT16_MAX;
	volatile int8_t x284 = INT8_MAX;
	int32_t t70 = -1;

    t70 = (((x281==x282)+x283)&x284);

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x285 = 18728869U;
	int32_t x288 = -1;

    t71 = (((x285==x286)+x287)&x288);

    if (t71 != 210858U) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x289 = -1;
	uint32_t x290 = 1083U;
	int32_t x291 = INT32_MIN;
	int16_t x292 = -1;
	volatile int32_t t72 = INT32_MIN;

    t72 = (((x289==x290)+x291)&x292);

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x293 = 470U;
	static int32_t x294 = -48;
	static volatile uint16_t x295 = 3U;
	int32_t t73 = -1347976;

    t73 = (((x293==x294)+x295)&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x298 = 16545741608LL;
	int32_t x299 = INT32_MIN;
	static volatile int64_t x300 = -1LL;
	static volatile int64_t t74 = -15297496LL;

    t74 = (((x297==x298)+x299)&x300);

    if (t74 != -2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	static int8_t x302 = -12;
	int8_t x304 = -2;

    t75 = (((x301==x302)+x303)&x304);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x306 = 486U;
	int16_t x307 = INT16_MIN;
	static uint64_t x308 = 8905LLU;
	uint64_t t76 = 24LLU;

    t76 = (((x305==x306)+x307)&x308);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x309 = 126U;
	static int8_t x310 = INT8_MAX;
	volatile uint8_t x311 = 0U;
	uint8_t x312 = 104U;
	volatile int32_t t77 = -6;

    t77 = (((x309==x310)+x311)&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x313 = UINT32_MAX;
	int64_t x314 = INT64_MAX;
	static int64_t x315 = 27065809706359930LL;
	uint64_t t78 = 38LLU;

    t78 = (((x313==x314)+x315)&x316);

    if (t78 != 6459427866LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	uint64_t x318 = UINT64_MAX;
	uint16_t x319 = 88U;
	int8_t x320 = -1;
	volatile int32_t t79 = 3766;

    t79 = (((x317==x318)+x319)&x320);

    if (t79 != 88) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 8U;
	volatile uint64_t x322 = UINT64_MAX;
	int64_t x323 = -1LL;
	volatile int64_t t80 = -13LL;

    t80 = (((x321==x322)+x323)&x324);

    if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = -1;
	uint32_t x326 = 156U;
	static int8_t x327 = 1;
	static int64_t x328 = INT64_MIN;

    t81 = (((x325==x326)+x327)&x328);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = 1;
	int8_t x330 = -1;
	int16_t x331 = INT16_MAX;
	volatile uint16_t x332 = 565U;
	volatile int32_t t82 = 27;

    t82 = (((x329==x330)+x331)&x332);

    if (t82 != 565) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x334 = INT8_MAX;
	int64_t x335 = -1LL;
	static int8_t x336 = INT8_MAX;
	volatile int64_t t83 = -11640697LL;

    t83 = (((x333==x334)+x335)&x336);

    if (t83 != 127LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x337 = 31U;
	int8_t x339 = -1;
	volatile int32_t x340 = -1;
	static int32_t t84 = 559976;

    t84 = (((x337==x338)+x339)&x340);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = -1;
	uint64_t x343 = 1363205LLU;
	volatile uint64_t t85 = 1915681043060020311LLU;

    t85 = (((x341==x342)+x343)&x344);

    if (t85 != 5LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = 75;
	static int32_t x347 = -101978;
	static volatile int8_t x348 = INT8_MAX;
	int32_t t86 = -388064524;

    t86 = (((x345==x346)+x347)&x348);

    if (t86 != 38) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -1LL;
	static volatile int64_t x350 = 0LL;
	int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 130780;

    t87 = (((x349==x350)+x351)&x352);

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MIN;
	int32_t x356 = INT32_MAX;
	volatile uint32_t t88 = 234U;

    t88 = (((x353==x354)+x355)&x356);

    if (t88 != 185806U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	uint64_t x358 = 345868975801609LLU;
	uint32_t x359 = 63U;
	uint8_t x360 = UINT8_MAX;
	uint32_t t89 = 766U;

    t89 = (((x357==x358)+x359)&x360);

    if (t89 != 63U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 26783U;
	int32_t x362 = -208;
	volatile uint32_t x363 = 3758U;
	static volatile int32_t x364 = -1;
	static volatile uint32_t t90 = 36044U;

    t90 = (((x361==x362)+x363)&x364);

    if (t90 != 3758U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 2U;
	int16_t x366 = 49;
	static int32_t x367 = -1;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -13409;

    t91 = (((x365==x366)+x367)&x368);

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = -6024133;
	uint8_t x370 = 7U;
	static int32_t x372 = 86132;
	int32_t t92 = -65331;

    t92 = (((x369==x370)+x371)&x372);

    if (t92 != 86132) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MIN;
	static volatile int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MAX;
	int32_t t93 = 3177549;

    t93 = (((x373==x374)+x375)&x376);

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 468348449387349070LLU;
	uint64_t x378 = 150649775LLU;
	static volatile int16_t x379 = INT16_MAX;
	uint32_t t94 = 2977909U;

    t94 = (((x377==x378)+x379)&x380);

    if (t94 != 13714U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x381 = 4;
	int16_t x382 = -1;
	volatile uint16_t x384 = 2U;
	static int32_t t95 = 67727;

    t95 = (((x381==x382)+x383)&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x387 = -1;
	static volatile int32_t x388 = -1;

    t96 = (((x385==x386)+x387)&x388);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x389 = -947526215315178351LL;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = 644;
	volatile int64_t x392 = -1LL;
	int64_t t97 = -8614834880469LL;

    t97 = (((x389==x390)+x391)&x392);

    if (t97 != 644LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 1U;
	static uint16_t x395 = 24U;
	static volatile uint32_t x396 = 0U;
	uint32_t t98 = 1258966U;

    t98 = (((x393==x394)+x395)&x396);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 239U;
	int8_t x398 = INT8_MAX;
	volatile int32_t x399 = -1;
	int16_t x400 = 369;
	volatile int32_t t99 = -18849;

    t99 = (((x397==x398)+x399)&x400);

    if (t99 != 369) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = INT64_MIN;
	int64_t x402 = -1LL;
	uint64_t x403 = UINT64_MAX;
	static uint16_t x404 = 44U;
	static uint64_t t100 = 70050882938358231LLU;

    t100 = (((x401==x402)+x403)&x404);

    if (t100 != 44LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	uint8_t x406 = 1U;
	uint32_t x407 = 166634959U;
	int32_t x408 = INT32_MIN;
	volatile uint32_t t101 = 5758615U;

    t101 = (((x405==x406)+x407)&x408);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = 95917;
	volatile uint32_t x410 = 63U;
	volatile int64_t t102 = -1LL;

    t102 = (((x409==x410)+x411)&x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x413 = 1U;
	int8_t x414 = 11;
	int64_t x416 = INT64_MIN;
	volatile int64_t t103 = 27LL;

    t103 = (((x413==x414)+x415)&x416);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int8_t x419 = INT8_MIN;

    t104 = (((x417==x418)+x419)&x420);

    if (t104 != 26368LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 197;
	int32_t x422 = INT32_MIN;
	volatile int16_t x423 = -1;
	volatile int64_t t105 = 15231804546450894LL;

    t105 = (((x421==x422)+x423)&x424);

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = -1LL;
	uint64_t x426 = 7637413152LLU;
	uint64_t x428 = 1056770927LLU;

    t106 = (((x425==x426)+x427)&x428);

    if (t106 != 852036LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x430 = INT64_MAX;
	int8_t x431 = -1;
	int32_t x432 = -86;

    t107 = (((x429==x430)+x431)&x432);

    if (t107 != -86) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 25551;
	static int64_t x434 = -688LL;
	volatile uint8_t x435 = 10U;
	int8_t x436 = INT8_MIN;
	volatile int32_t t108 = -134;

    t108 = (((x433==x434)+x435)&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x437 = INT16_MAX;
	int8_t x438 = INT8_MIN;
	int8_t x439 = 0;
	static volatile int32_t t109 = 0;

    t109 = (((x437==x438)+x439)&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MIN;
	static int8_t x443 = INT8_MIN;
	static uint8_t x444 = 63U;
	int32_t t110 = -14486278;

    t110 = (((x441==x442)+x443)&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x445 = 6;
	uint64_t x446 = 56136899LLU;
	uint16_t x447 = 197U;
	static volatile int32_t x448 = -1;
	static int32_t t111 = 282000526;

    t111 = (((x445==x446)+x447)&x448);

    if (t111 != 197) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MIN;
	volatile uint8_t x451 = 37U;
	volatile int16_t x452 = INT16_MIN;
	int32_t t112 = 1180283;

    t112 = (((x449==x450)+x451)&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x454 = UINT16_MAX;
	int64_t x456 = INT64_MAX;
	static int64_t t113 = -27051882047716003LL;

    t113 = (((x453==x454)+x455)&x456);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	uint64_t x458 = 26664LLU;
	static int16_t x460 = INT16_MIN;
	int32_t t114 = 122;

    t114 = (((x457==x458)+x459)&x460);

    if (t114 != 2147450880) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	uint32_t x462 = UINT32_MAX;
	uint16_t x463 = 0U;
	int64_t x464 = INT64_MAX;

    t115 = (((x461==x462)+x463)&x464);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = INT16_MIN;
	int8_t x466 = 1;
	int64_t x467 = INT64_MAX;
	int8_t x468 = INT8_MAX;

    t116 = (((x465==x466)+x467)&x468);

    if (t116 != 127LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = INT8_MIN;
	int8_t x470 = 6;
	int32_t x472 = INT32_MAX;
	static int32_t t117 = 0;

    t117 = (((x469==x470)+x471)&x472);

    if (t117 != 2147477536) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -13;
	int8_t x474 = -1;
	int16_t x475 = INT16_MIN;

    t118 = (((x473==x474)+x475)&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x478 = 14U;
	volatile int16_t x479 = -1;
	uint32_t x480 = UINT32_MAX;

    t119 = (((x477==x478)+x479)&x480);

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 106361321267907350LLU;
	volatile int32_t x482 = INT32_MIN;
	uint64_t x483 = 524932108540864LLU;
	int8_t x484 = -3;
	static volatile uint64_t t120 = 402656LLU;

    t120 = (((x481==x482)+x483)&x484);

    if (t120 != 524932108540864LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -2705686LL;
	uint16_t x486 = 0U;
	static volatile int8_t x487 = INT8_MIN;
	uint8_t x488 = UINT8_MAX;
	static int32_t t121 = -63962;

    t121 = (((x485==x486)+x487)&x488);

    if (t121 != 128) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x490 = 0U;
	int32_t x491 = INT32_MIN;
	uint8_t x492 = 0U;
	int32_t t122 = 3364356;

    t122 = (((x489==x490)+x491)&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -17;
	int64_t x495 = INT64_MIN;
	int64_t x496 = 63354LL;
	volatile int64_t t123 = -5662LL;

    t123 = (((x493==x494)+x495)&x496);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = 13049450;
	volatile int8_t x498 = INT8_MIN;
	int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;

    t124 = (((x497==x498)+x499)&x500);

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x502 = INT64_MIN;
	int64_t x503 = -3524529842837LL;
	int64_t x504 = -25731235088231LL;
	int64_t t125 = -892549653329875LL;

    t125 = (((x501==x502)+x503)&x504);

    if (t125 != -25802544115703LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = INT8_MIN;
	uint16_t x506 = UINT16_MAX;
	uint32_t x507 = 6U;
	uint8_t x508 = 4U;

    t126 = (((x505==x506)+x507)&x508);

    if (t126 != 4U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -1LL;
	int16_t x510 = 108;
	int64_t x511 = INT64_MAX;
	static volatile int64_t x512 = INT64_MIN;

    t127 = (((x509==x510)+x511)&x512);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x514 = 1;
	volatile int16_t x515 = -2;
	uint64_t x516 = 239940016725029LLU;
	uint64_t t128 = 50871LLU;

    t128 = (((x513==x514)+x515)&x516);

    if (t128 != 239940016725028LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 334U;
	int64_t x518 = 140132444081485LL;
	uint16_t x519 = UINT16_MAX;
	int16_t x520 = -1;
	static int32_t t129 = 12;

    t129 = (((x517==x518)+x519)&x520);

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	int64_t x524 = INT64_MIN;
	int64_t t130 = INT64_MIN;

    t130 = (((x521==x522)+x523)&x524);

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 3927425245468793LL;
	uint32_t x526 = 98U;
	static int8_t x527 = -1;
	static int8_t x528 = INT8_MAX;
	volatile int32_t t131 = 4;

    t131 = (((x525==x526)+x527)&x528);

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MAX;
	static int8_t x530 = INT8_MIN;
	int32_t x532 = -16629237;
	static volatile int32_t t132 = 711794;

    t132 = (((x529==x530)+x531)&x532);

    if (t132 != -16629237) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	uint16_t x534 = 17U;
	static uint32_t x535 = 220U;
	volatile int8_t x536 = INT8_MIN;

    t133 = (((x533==x534)+x535)&x536);

    if (t133 != 128U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = -1;
	int16_t x538 = -1;
	static int32_t x540 = -3;
	int32_t t134 = 399575574;

    t134 = (((x537==x538)+x539)&x540);

    if (t134 != 65536) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x542 = INT64_MAX;
	int32_t x543 = -5958;
	static uint32_t x544 = 9822790U;
	static uint32_t t135 = 51968U;

    t135 = (((x541==x542)+x543)&x544);

    if (t135 != 9822210U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	static int64_t x546 = INT64_MIN;
	static int8_t x547 = -1;
	int16_t x548 = INT16_MIN;
	int32_t t136 = 110;

    t136 = (((x545==x546)+x547)&x548);

    if (t136 != -32768) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = UINT16_MAX;
	int8_t x550 = 28;
	int8_t x551 = -1;
	static volatile int32_t t137 = -2;

    t137 = (((x549==x550)+x551)&x552);

    if (t137 != -5) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -1471755405997573650LL;
	static int32_t x554 = -1;
	int8_t x555 = 1;
	uint8_t x556 = 8U;
	int32_t t138 = 1059;

    t138 = (((x553==x554)+x555)&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x558 = -1LL;
	uint64_t x559 = 84690792816637384LLU;
	static uint64_t x560 = 1897997638053789LLU;

    t139 = (((x557==x558)+x559)&x560);

    if (t139 != 1301890503550344LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = -5595669;
	volatile uint16_t x564 = UINT16_MAX;
	volatile uint32_t t140 = 2U;

    t140 = (((x561==x562)+x563)&x564);

    if (t140 != 15627U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	int16_t x566 = -51;
	uint64_t x567 = 1279LLU;
	uint64_t t141 = 1935LLU;

    t141 = (((x565==x566)+x567)&x568);

    if (t141 != 39LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = -579;
	uint8_t x570 = UINT8_MAX;
	static int16_t x571 = INT16_MAX;
	int16_t x572 = INT16_MAX;
	int32_t t142 = 0;

    t142 = (((x569==x570)+x571)&x572);

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	volatile uint32_t x574 = 20483628U;
	static int16_t x575 = INT16_MAX;
	int32_t t143 = -171151;

    t143 = (((x573==x574)+x575)&x576);

    if (t143 != 32640) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x577 = 331171504U;
	volatile int64_t x578 = -1LL;
	uint16_t x579 = UINT16_MAX;
	static uint32_t x580 = UINT32_MAX;
	static uint32_t t144 = 754U;

    t144 = (((x577==x578)+x579)&x580);

    if (t144 != 65535U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -5266;
	uint32_t x582 = UINT32_MAX;
	uint32_t x583 = 215053U;
	static int64_t x584 = INT64_MIN;
	volatile int64_t t145 = 89LL;

    t145 = (((x581==x582)+x583)&x584);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x586 = UINT16_MAX;
	static volatile int8_t x587 = 26;
	static int8_t x588 = INT8_MIN;
	static volatile int32_t t146 = 127;

    t146 = (((x585==x586)+x587)&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = INT64_MIN;
	uint8_t x590 = UINT8_MAX;
	volatile int64_t x591 = INT64_MAX;
	int8_t x592 = -1;
	volatile int64_t t147 = INT64_MAX;

    t147 = (((x589==x590)+x591)&x592);

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = 235;
	static int8_t x594 = -1;
	uint64_t x595 = 720111536469LLU;

    t148 = (((x593==x594)+x595)&x596);

    if (t148 != 720111536384LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x598 = 148190408746973LLU;
	int32_t x600 = INT32_MIN;
	volatile int64_t t149 = INT64_MIN;

    t149 = (((x597==x598)+x599)&x600);

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x603 = -1;
	int64_t x604 = INT64_MIN;
	volatile int64_t t150 = INT64_MIN;

    t150 = (((x601==x602)+x603)&x604);

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 190823640U;
	uint8_t x606 = UINT8_MAX;
	uint64_t x607 = 55563493LLU;
	int16_t x608 = INT16_MIN;

    t151 = (((x605==x606)+x607)&x608);

    if (t151 != 55541760LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int16_t x610 = 5343;
	uint32_t x611 = UINT32_MAX;
	uint8_t x612 = 3U;
	static volatile uint32_t t152 = 2379349U;

    t152 = (((x609==x610)+x611)&x612);

    if (t152 != 3U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = 5;
	volatile int32_t x614 = -13903638;
	int8_t x615 = -1;
	static int8_t x616 = INT8_MAX;
	int32_t t153 = -485063;

    t153 = (((x613==x614)+x615)&x616);

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	static uint32_t x618 = 2611065U;
	int64_t x619 = INT64_MIN;
	int64_t x620 = -1LL;
	volatile int64_t t154 = INT64_MIN;

    t154 = (((x617==x618)+x619)&x620);

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x622 = 40U;
	volatile int32_t x623 = -185910;
	int64_t x624 = INT64_MAX;
	int64_t t155 = -324593LL;

    t155 = (((x621==x622)+x623)&x624);

    if (t155 != 9223372036854589898LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x625 = 12234U;
	uint32_t x626 = 356420947U;
	static int64_t x627 = INT64_MIN;
	uint16_t x628 = UINT16_MAX;
	volatile int64_t t156 = 1LL;

    t156 = (((x625==x626)+x627)&x628);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = 0;
	int8_t x631 = 0;
	int32_t t157 = 57;

    t157 = (((x629==x630)+x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 30270869393110596LLU;
	static volatile uint8_t x634 = 13U;
	static int8_t x635 = -5;

    t158 = (((x633==x634)+x635)&x636);

    if (t158 != 65531) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 12042U;
	int64_t x638 = -56176LL;
	int16_t x639 = INT16_MIN;
	int32_t t159 = -1875663;

    t159 = (((x637==x638)+x639)&x640);

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = INT8_MIN;
	volatile uint32_t x643 = UINT32_MAX;
	volatile int64_t x644 = -161LL;
	int64_t t160 = -1LL;

    t160 = (((x641==x642)+x643)&x644);

    if (t160 != 4294967135LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x645 = INT8_MIN;
	uint8_t x647 = 101U;
	int8_t x648 = 0;
	static volatile int32_t t161 = -9305500;

    t161 = (((x645==x646)+x647)&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = INT8_MIN;
	uint32_t x650 = 1260701U;
	int16_t x651 = INT16_MIN;
	static int16_t x652 = INT16_MAX;
	volatile int32_t t162 = -457;

    t162 = (((x649==x650)+x651)&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -3;
	int16_t x655 = -1;
	uint64_t x656 = 3123288612341LLU;
	uint64_t t163 = 3257564211846146791LLU;

    t163 = (((x653==x654)+x655)&x656);

    if (t163 != 3123288612341LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x657 = INT8_MAX;
	int32_t x658 = -158;
	static volatile uint8_t x660 = 2U;
	volatile int32_t t164 = 2460;

    t164 = (((x657==x658)+x659)&x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x661 = 13582013816LLU;
	uint16_t x662 = 0U;
	volatile int16_t x663 = -1;
	int64_t x664 = INT64_MIN;
	int64_t t165 = INT64_MIN;

    t165 = (((x661==x662)+x663)&x664);

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 3080467585371503LLU;
	int64_t x666 = -1LL;
	volatile int64_t x667 = INT64_MIN;
	uint16_t x668 = UINT16_MAX;
	int64_t t166 = 54249792LL;

    t166 = (((x665==x666)+x667)&x668);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	uint8_t x671 = UINT8_MAX;
	uint32_t x672 = 126646U;
	static volatile uint32_t t167 = 52331U;

    t167 = (((x669==x670)+x671)&x672);

    if (t167 != 182U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MAX;
	uint16_t x675 = UINT16_MAX;
	uint32_t x676 = 3119U;
	volatile uint32_t t168 = 4U;

    t168 = (((x673==x674)+x675)&x676);

    if (t168 != 3119U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = 1565600715911524880LL;
	static uint64_t x678 = UINT64_MAX;
	static uint8_t x679 = UINT8_MAX;
	volatile int32_t t169 = 1;

    t169 = (((x677==x678)+x679)&x680);

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x683 = 168U;
	int64_t x684 = INT64_MIN;

    t170 = (((x681==x682)+x683)&x684);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 20U;
	volatile int16_t x686 = INT16_MAX;
	int32_t x687 = -1;
	int64_t x688 = -1LL;
	volatile int64_t t171 = -19038LL;

    t171 = (((x685==x686)+x687)&x688);

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 2U;
	int64_t x690 = INT64_MAX;
	static uint64_t x692 = 2LLU;

    t172 = (((x689==x690)+x691)&x692);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 31985U;
	int16_t x695 = INT16_MAX;
	int16_t x696 = -1;

    t173 = (((x693==x694)+x695)&x696);

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x698 = INT16_MAX;
	int32_t x699 = INT32_MIN;
	int32_t x700 = INT32_MIN;
	int32_t t174 = INT32_MIN;

    t174 = (((x697==x698)+x699)&x700);

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int16_t x702 = INT16_MIN;
	static int16_t x704 = 149;
	uint32_t t175 = 36685U;

    t175 = (((x701==x702)+x703)&x704);

    if (t175 != 20U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -1;
	int8_t x707 = -1;
	int16_t x708 = 4;
	int32_t t176 = 3;

    t176 = (((x705==x706)+x707)&x708);

    if (t176 != 4) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x709 = 300235574U;
	int32_t x711 = INT32_MAX;
	static volatile int16_t x712 = INT16_MAX;
	volatile int32_t t177 = 27250;

    t177 = (((x709==x710)+x711)&x712);

    if (t177 != 32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = 2234856832880053LL;
	int32_t x715 = INT32_MIN;
	static volatile int64_t t178 = 5310877110699LL;

    t178 = (((x713==x714)+x715)&x716);

    if (t178 != 2153926098944LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x717 = 8U;
	int8_t x718 = -1;
	int16_t x719 = -1;
	volatile int32_t x720 = INT32_MIN;
	int32_t t179 = INT32_MIN;

    t179 = (((x717==x718)+x719)&x720);

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	static int16_t x722 = INT16_MAX;
	static volatile uint8_t x724 = 25U;
	static volatile int32_t t180 = 7;

    t180 = (((x721==x722)+x723)&x724);

    if (t180 != 25) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = UINT32_MAX;
	int16_t x726 = -31;
	static int64_t x727 = INT64_MAX;
	int64_t t181 = -79584153364359LL;

    t181 = (((x725==x726)+x727)&x728);

    if (t181 != 9223250273433541072LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	int32_t x730 = INT32_MAX;
	volatile uint8_t x731 = 2U;
	int16_t x732 = -9;
	volatile int32_t t182 = 1;

    t182 = (((x729==x730)+x731)&x732);

    if (t182 != 2) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = INT32_MIN;
	static uint64_t x736 = 1310LLU;
	uint64_t t183 = 127100142365LLU;

    t183 = (((x733==x734)+x735)&x736);

    if (t183 != 1310LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = INT32_MIN;
	static int8_t x738 = -1;
	int8_t x739 = -1;
	volatile int8_t x740 = INT8_MAX;
	static int32_t t184 = 2774535;

    t184 = (((x737==x738)+x739)&x740);

    if (t184 != 127) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MIN;
	int8_t x743 = INT8_MIN;
	static volatile int32_t t185 = 7575;

    t185 = (((x741==x742)+x743)&x744);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MIN;
	int8_t x746 = -1;
	int64_t x747 = INT64_MIN;
	uint64_t x748 = UINT64_MAX;
	uint64_t t186 = 2109421236117LLU;

    t186 = (((x745==x746)+x747)&x748);

    if (t186 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x749 = INT8_MIN;
	uint64_t x751 = 297926LLU;
	static int8_t x752 = INT8_MIN;
	volatile uint64_t t187 = 508155281473LLU;

    t187 = (((x749==x750)+x751)&x752);

    if (t187 != 297856LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	uint8_t x754 = 30U;
	int8_t x755 = -2;
	int64_t x756 = 367315LL;
	volatile int64_t t188 = 447696113312428624LL;

    t188 = (((x753==x754)+x755)&x756);

    if (t188 != 367314LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 14226U;
	int64_t x758 = 536311634086921644LL;
	int64_t x759 = -2048281LL;
	static volatile int64_t x760 = -1LL;
	volatile int64_t t189 = 38401LL;

    t189 = (((x757==x758)+x759)&x760);

    if (t189 != -2048281LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = INT8_MIN;
	static volatile int64_t x764 = INT64_MIN;
	int64_t t190 = -6337457845123484LL;

    t190 = (((x761==x762)+x763)&x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = 0;
	int64_t x767 = INT64_MIN;
	int32_t x768 = INT32_MIN;
	int64_t t191 = INT64_MIN;

    t191 = (((x765==x766)+x767)&x768);

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 134737952462LLU;
	int8_t x771 = INT8_MAX;
	volatile int32_t t192 = -117936099;

    t192 = (((x769==x770)+x771)&x772);

    if (t192 != 127) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	int8_t x774 = 1;
	volatile int16_t x775 = INT16_MIN;
	int64_t x776 = -52876276236779LL;
	volatile int64_t t193 = 466381443LL;

    t193 = (((x773==x774)+x775)&x776);

    if (t193 != -52876276269056LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x777 = INT16_MIN;
	uint64_t x778 = UINT64_MAX;
	int16_t x779 = -1;
	static volatile int32_t x780 = 2205806;
	static int32_t t194 = -1;

    t194 = (((x777==x778)+x779)&x780);

    if (t194 != 2205806) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 9U;
	uint32_t x782 = UINT32_MAX;
	volatile int32_t x783 = INT32_MAX;
	int8_t x784 = INT8_MIN;

    t195 = (((x781==x782)+x783)&x784);

    if (t195 != 2147483520) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x787 = -1;

    t196 = (((x785==x786)+x787)&x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x790 = INT16_MIN;
	volatile int8_t x791 = 9;
	int8_t x792 = -1;
	static volatile int32_t t197 = 41220;

    t197 = (((x789==x790)+x791)&x792);

    if (t197 != 9) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = UINT32_MAX;
	int16_t x795 = INT16_MIN;
	int32_t x796 = -84115;
	volatile int32_t t198 = -5;

    t198 = (((x793==x794)+x795)&x796);

    if (t198 != -98304) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x797 = -1;
	uint8_t x798 = UINT8_MAX;
	uint8_t x799 = UINT8_MAX;
	int8_t x800 = INT8_MIN;
	volatile int32_t t199 = 3272865;

    t199 = (((x797==x798)+x799)&x800);

    if (t199 != 128) { NG(); } else { ; }
	
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

