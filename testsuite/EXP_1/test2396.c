
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

static volatile int16_t x4 = 1;
volatile int32_t t2 = 1;
static int16_t x17 = INT16_MIN;
volatile int16_t x28 = 193;
int64_t x31 = INT64_MAX;
static int64_t x33 = INT64_MIN;
static uint16_t x37 = 1178U;
int64_t t8 = -476086416297888025LL;
uint16_t x48 = UINT16_MAX;
int32_t t10 = 311851;
int16_t x59 = -2;
volatile int8_t x64 = 0;
static volatile int32_t t12 = -2;
int16_t x65 = 2344;
static int16_t x70 = -1;
volatile uint32_t x71 = 12466U;
int32_t x72 = -413;
volatile uint32_t t14 = 56303247U;
uint8_t x77 = UINT8_MAX;
int8_t x85 = INT8_MAX;
static int16_t x94 = -1;
static uint32_t t18 = 54724U;
static int64_t x101 = INT64_MIN;
int64_t t21 = -12LL;
volatile int16_t x111 = -1;
int64_t t23 = 1762091900732LL;
volatile uint32_t x121 = 812U;
int32_t x122 = INT32_MIN;
int16_t x123 = -15;
uint32_t t25 = 299957U;
uint64_t x126 = 813599508LLU;
static volatile int8_t x128 = -1;
int64_t x134 = 2827486283757509LL;
int16_t x138 = 49;
int32_t x140 = INT32_MIN;
volatile int32_t t29 = -107866;
int32_t x147 = -1;
int8_t x148 = 0;
static volatile int64_t t31 = -42614380LL;
static volatile int16_t x160 = -1;
int64_t t33 = 83751742LL;
int32_t x164 = INT32_MIN;
int32_t x165 = INT32_MIN;
int64_t t37 = -1LL;
uint8_t x177 = 85U;
static uint32_t x193 = 15367786U;
static int8_t x194 = INT8_MIN;
int16_t x196 = INT16_MIN;
volatile uint64_t x197 = UINT64_MAX;
static int32_t x198 = INT32_MIN;
static volatile int64_t t43 = -7224769787LL;
int64_t t47 = 335151282LL;
static uint8_t x224 = 1U;
int64_t t48 = -1137LL;
int64_t x225 = 15005328155LL;
int8_t x227 = INT8_MIN;
static int16_t x239 = -1;
int64_t x241 = INT64_MIN;
int16_t x244 = 16;
static int32_t x249 = INT32_MIN;
static int8_t x252 = -1;
int64_t t55 = 85LL;
int32_t t56 = 263055;
static int8_t x272 = INT8_MIN;
int16_t x274 = -1;
uint32_t t58 = 60U;
int64_t x280 = -3300919440624504LL;
int32_t x281 = -1;
int32_t x286 = INT32_MIN;
int8_t x290 = -1;
uint32_t t63 = 16224068U;
volatile int8_t x303 = -1;
int8_t x304 = INT8_MIN;
int64_t x307 = INT64_MAX;
int64_t t66 = 12705415767LL;
int32_t x315 = 15819;
uint64_t t68 = 483LLU;
static int32_t x317 = INT32_MAX;
int64_t x319 = 523945LL;
int16_t x320 = 1789;
int64_t x326 = INT64_MAX;
volatile int64_t t70 = 20878LL;
int64_t x331 = INT64_MIN;
volatile int8_t x332 = 1;
volatile uint16_t x344 = 16089U;
uint16_t x351 = UINT16_MAX;
uint32_t t76 = 11574U;
int8_t x355 = 1;
int64_t x356 = INT64_MIN;
volatile int16_t x368 = INT16_MAX;
uint64_t x371 = UINT64_MAX;
int32_t x374 = INT32_MIN;
volatile uint64_t t83 = 1612089179LLU;
static volatile int64_t x382 = -469245380605041941LL;
int8_t x394 = -1;
uint8_t x395 = 44U;
uint16_t x396 = 13666U;
volatile int32_t t85 = -1;
uint16_t x399 = 4U;
volatile uint64_t x403 = 33675467620LLU;
volatile int32_t t88 = -86;
static uint32_t x428 = 138978U;
volatile uint8_t x430 = UINT8_MAX;
static uint8_t x431 = UINT8_MAX;
uint32_t x432 = 211U;
int32_t x435 = INT32_MIN;
int64_t t94 = -121870689660LL;
volatile uint64_t t96 = 4371LLU;
volatile int32_t x445 = 129377;
uint64_t x448 = 4665LLU;
volatile int64_t t98 = 2931LL;
int32_t x454 = INT32_MAX;
uint32_t x455 = UINT32_MAX;
volatile int64_t t100 = 142968387LL;
int16_t x469 = -788;
int32_t x481 = -1;
int64_t x483 = -1LL;
int8_t x485 = INT8_MIN;
int16_t x487 = -11;
int8_t x488 = INT8_MIN;
volatile uint16_t x493 = 14U;
int16_t x503 = INT16_MIN;
int64_t x504 = INT64_MIN;
int64_t t114 = -60996LL;
int64_t x520 = -1LL;
uint16_t x523 = 4U;
int32_t x525 = -1;
volatile int64_t t117 = -759123537817867LL;
volatile uint64_t t118 = 8333019LLU;
int32_t x542 = 193;
static uint64_t x544 = UINT64_MAX;
uint16_t x553 = 3U;
uint8_t x560 = 11U;
static uint16_t x568 = 23631U;
int8_t x572 = 1;
volatile uint64_t t128 = 1413LLU;
volatile uint64_t x580 = UINT64_MAX;
int64_t t131 = -19LL;
volatile int32_t t133 = -355872;
uint64_t x597 = UINT64_MAX;
uint8_t x601 = UINT8_MAX;
int32_t x604 = INT32_MIN;
uint64_t t136 = 3183285431646732294LLU;
int64_t x615 = INT64_MAX;
int64_t t138 = -16340LL;
int16_t x620 = INT16_MIN;
int16_t x623 = INT16_MIN;
volatile int16_t x628 = 4;
static int8_t x635 = INT8_MIN;
volatile uint64_t t144 = 287218055224483383LLU;
volatile uint32_t x643 = 4609U;
int8_t x646 = INT8_MIN;
static volatile uint64_t t146 = 30LLU;
int16_t x649 = -1;
static volatile int64_t t147 = 6051LL;
static int64_t t148 = -89180586547LL;
static uint8_t x661 = UINT8_MAX;
int64_t x664 = 30LL;
uint8_t x667 = UINT8_MAX;
uint32_t x669 = 31353U;
int8_t x673 = INT8_MIN;
int16_t x679 = 6273;
static int32_t x683 = -1;
static int8_t x686 = INT8_MIN;
static uint8_t x687 = UINT8_MAX;
uint16_t x689 = UINT16_MAX;
volatile int16_t x713 = INT16_MIN;
volatile int32_t x723 = -7252;
int64_t x724 = INT64_MIN;
volatile uint64_t t164 = 984465609541447762LLU;
uint64_t x726 = UINT64_MAX;
uint64_t x729 = UINT64_MAX;
volatile int32_t x734 = INT32_MIN;
uint32_t x741 = 4939500U;
int16_t x748 = INT16_MIN;
static volatile int32_t x749 = INT32_MAX;
int16_t x751 = 8568;
int16_t x764 = -1;
volatile uint8_t x766 = UINT8_MAX;
int8_t x767 = INT8_MIN;
int32_t x768 = INT32_MIN;
volatile int64_t t174 = -705195726864283LL;
volatile uint16_t x772 = 20113U;
int8_t x778 = INT8_MAX;
static int16_t x783 = -384;
static int64_t t179 = -89LL;
uint32_t x790 = UINT32_MAX;
int8_t x791 = INT8_MIN;
uint8_t x797 = 7U;
int16_t x799 = INT16_MIN;
int8_t x806 = 1;
uint64_t x813 = UINT64_MAX;
uint64_t t185 = 219391504872LLU;
static volatile uint32_t t188 = 6586U;
uint16_t x839 = 121U;
int8_t x849 = -1;
static int32_t x850 = INT32_MIN;
volatile int32_t x852 = INT32_MAX;
volatile uint16_t x860 = UINT16_MAX;
int32_t x871 = -1420;
int8_t x878 = -1;


void f0(void) {
    	int8_t x1 = 0;
	volatile int8_t x2 = 1;
	volatile uint64_t x3 = 444LLU;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = (((x1|x2)/x3)-x4);

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MAX;
	uint32_t x10 = 1839874817U;
	uint16_t x11 = 5U;
	uint16_t x12 = 7U;
	volatile uint32_t t1 = 266152864U;

    t1 = (((x9|x10)/x11)-x12);

    if (t1 != 367978079U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = INT32_MIN;
	int8_t x14 = 1;
	int8_t x15 = 3;
	int32_t x16 = -12;

    t2 = (((x13|x14)/x15)-x16);

    if (t2 != -715827870) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x18 = INT16_MIN;
	int32_t x19 = 61;
	volatile int64_t x20 = INT64_MIN;
	volatile int64_t t3 = 13430329000160LL;

    t3 = (((x17|x18)/x19)-x20);

    if (t3 != 9223372036854775271LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x25 = 102U;
	int8_t x26 = INT8_MAX;
	static int16_t x27 = INT16_MAX;
	volatile int32_t t4 = -16402;

    t4 = (((x25|x26)/x27)-x28);

    if (t4 != -193) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -37962854231998038LL;
	volatile uint32_t x30 = UINT32_MAX;
	int32_t x32 = INT32_MIN;
	static volatile int64_t t5 = 2131209873191LL;

    t5 = (((x29|x30)/x31)-x32);

    if (t5 != 2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MAX;
	volatile int16_t x36 = -1;
	int64_t t6 = 7335650100844LL;

    t6 = (((x33|x34)/x35)-x36);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x38 = 1U;
	volatile uint64_t x39 = UINT64_MAX;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t7 = 12647427032LLU;

    t7 = (((x37|x38)/x39)-x40);

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -93399310;
	static int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MAX;

    t8 = (((x41|x42)/x43)-x44);

    if (t8 != 729555LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x45 = 14688133507249LL;
	static int32_t x46 = INT32_MIN;
	int16_t x47 = 7575;
	volatile int64_t t9 = 409634353LL;

    t9 = (((x45|x46)/x47)-x48);

    if (t9 != -151956LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = 27;
	int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;

    t10 = (((x49|x50)/x51)-x52);

    if (t10 != -2130706432) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x57 = -4200301LL;
	volatile uint64_t x58 = 652019LLU;
	uint16_t x60 = 6U;
	volatile uint64_t t11 = 60624268535LLU;

    t11 = (((x57|x58)/x59)-x60);

    if (t11 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MIN;
	uint16_t x63 = 3490U;

    t12 = (((x61|x62)/x63)-x64);

    if (t12 != -9) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x66 = INT8_MAX;
	int16_t x67 = 7874;
	int16_t x68 = INT16_MIN;
	volatile int32_t t13 = -2617040;

    t13 = (((x65|x66)/x67)-x68);

    if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = INT8_MIN;

    t14 = (((x69|x70)/x71)-x72);

    if (t14 != 344947U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	static int8_t x75 = -1;
	int16_t x76 = 0;
	static int32_t t15 = -25354;

    t15 = (((x73|x74)/x75)-x76);

    if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x78 = INT16_MAX;
	int64_t x79 = -7061076928LL;
	volatile int32_t x80 = INT32_MIN;
	volatile int64_t t16 = -14166794683LL;

    t16 = (((x77|x78)/x79)-x80);

    if (t16 != 2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x86 = UINT32_MAX;
	uint32_t x87 = 420U;
	int32_t x88 = INT32_MIN;
	uint32_t t17 = 131885686U;

    t17 = (((x85|x86)/x87)-x88);

    if (t17 != 2157709760U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x93 = 23891U;
	int8_t x95 = -1;
	static uint32_t x96 = 1442U;

    t18 = (((x93|x94)/x95)-x96);

    if (t18 != 4294965855U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MIN;
	volatile uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;
	int64_t t19 = 13LL;

    t19 = (((x97|x98)/x99)-x100);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x102 = INT8_MIN;
	static uint32_t x103 = 111U;
	int16_t x104 = 13660;
	int64_t t20 = -1387814160839305622LL;

    t20 = (((x101|x102)/x103)-x104);

    if (t20 != -13661LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = -1;
	int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MAX;
	int8_t x108 = 0;

    t21 = (((x105|x106)/x107)-x108);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x109 = INT32_MIN;
	int64_t x110 = -1LL;
	int16_t x112 = -1;
	int64_t t22 = 2LL;

    t22 = (((x109|x110)/x111)-x112);

    if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x113 = INT64_MIN;
	static int16_t x114 = 94;
	int64_t x115 = -349152147873303625LL;
	static int16_t x116 = INT16_MIN;

    t23 = (((x113|x114)/x115)-x116);

    if (t23 != 32794LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x117 = 234615LL;
	int16_t x118 = INT16_MIN;
	volatile uint16_t x119 = 27U;
	volatile int16_t x120 = INT16_MIN;
	static volatile int64_t t24 = -627399LL;

    t24 = (((x117|x118)/x119)-x120);

    if (t24 != 31749LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x124 = 9;

    t25 = (((x121|x122)/x123)-x124);

    if (t25 != 4294967287U) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x125 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	static uint64_t t26 = 7728465091322609LLU;

    t26 = (((x125|x126)/x127)-x128);

    if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x129 = 1052;
	int8_t x130 = -1;
	uint32_t x131 = 1173U;
	uint16_t x132 = UINT16_MAX;
	uint32_t t27 = 15763996U;

    t27 = (((x129|x130)/x131)-x132);

    if (t27 != 3595988U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x133 = -1;
	uint64_t x135 = 2130780955913LLU;
	int64_t x136 = 113093LL;
	uint64_t t28 = 1999983193911323LLU;

    t28 = (((x133|x134)/x135)-x136);

    if (t28 != 8544176LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = INT16_MAX;
	static volatile int8_t x139 = -1;

    t29 = (((x137|x138)/x139)-x140);

    if (t29 != 2147450881) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x145 = INT16_MIN;
	uint64_t x146 = 2818747825168LLU;
	volatile uint64_t t30 = 41408540LLU;

    t30 = (((x145|x146)/x147)-x148);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x149 = UINT32_MAX;
	uint8_t x150 = UINT8_MAX;
	uint16_t x151 = 1452U;
	static int64_t x152 = INT64_MAX;

    t31 = (((x149|x150)/x151)-x152);

    if (t31 != -9223372036851817841LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x153 = -1LL;
	static volatile int32_t x154 = INT32_MIN;
	int32_t x155 = -1782977;
	int32_t x156 = -1;
	volatile int64_t t32 = 172LL;

    t32 = (((x153|x154)/x155)-x156);

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x157 = 0;
	volatile int8_t x158 = -1;
	static volatile int64_t x159 = 4046713716819384000LL;

    t33 = (((x157|x158)/x159)-x160);

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MIN;
	int8_t x163 = -1;
	volatile int64_t t34 = 0LL;

    t34 = (((x161|x162)/x163)-x164);

    if (t34 != 4294967296LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x166 = -9;
	static int8_t x167 = -43;
	volatile uint64_t x168 = 48198945LLU;
	volatile uint64_t t35 = 4866632630410LLU;

    t35 = (((x165|x166)/x167)-x168);

    if (t35 != 18446744073661352671LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x169 = INT32_MIN;
	volatile int32_t x170 = INT32_MIN;
	int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	int64_t t36 = -16LL;

    t36 = (((x169|x170)/x171)-x172);

    if (t36 != 32768LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x173 = UINT8_MAX;
	static uint8_t x174 = 2U;
	int16_t x175 = -619;
	static int64_t x176 = -407466734LL;

    t37 = (((x173|x174)/x175)-x176);

    if (t37 != 407466734LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x178 = INT16_MIN;
	int8_t x179 = -25;
	volatile int16_t x180 = 1536;
	volatile int32_t t38 = 1000081;

    t38 = (((x177|x178)/x179)-x180);

    if (t38 != -229) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x185 = 47U;
	volatile int64_t x186 = 1LL;
	int8_t x187 = INT8_MIN;
	volatile uint32_t x188 = UINT32_MAX;
	static volatile int64_t t39 = 78512567LL;

    t39 = (((x185|x186)/x187)-x188);

    if (t39 != -4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x189 = 2308095U;
	uint8_t x190 = UINT8_MAX;
	int8_t x191 = -1;
	static volatile int16_t x192 = 11002;
	uint32_t t40 = 3320U;

    t40 = (((x189|x190)/x191)-x192);

    if (t40 != 4294956294U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x195 = INT32_MIN;
	volatile uint32_t t41 = 2102052037U;

    t41 = (((x193|x194)/x195)-x196);

    if (t41 != 32769U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x199 = 3U;
	static int8_t x200 = INT8_MIN;
	static uint64_t t42 = 389886786343LLU;

    t42 = (((x197|x198)/x199)-x200);

    if (t42 != 6148914691236517333LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x201 = INT64_MAX;
	static int8_t x202 = INT8_MIN;
	volatile int64_t x203 = -8146961447582153LL;
	volatile int32_t x204 = -867323;

    t43 = (((x201|x202)/x203)-x204);

    if (t43 != 867323LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x205 = INT64_MAX;
	int8_t x206 = 12;
	int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MIN;
	int64_t t44 = 128518973338LL;

    t44 = (((x205|x206)/x207)-x208);

    if (t44 != 128LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x209 = 1093635058545742405LLU;
	int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MAX;
	uint16_t x212 = UINT16_MAX;
	volatile uint64_t t45 = 167841806867LLU;

    t45 = (((x209|x210)/x211)-x212);

    if (t45 != 81236276341670828LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = 11499;
	int32_t x214 = 13550797;
	int64_t x215 = -1LL;
	uint8_t x216 = 0U;
	int64_t t46 = 1518808589LL;

    t46 = (((x213|x214)/x215)-x216);

    if (t46 != -13561071LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x217 = UINT16_MAX;
	int64_t x218 = INT64_MAX;
	static volatile int16_t x219 = -1;
	static int64_t x220 = -11LL;

    t47 = (((x217|x218)/x219)-x220);

    if (t47 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x221 = 23;
	static int64_t x222 = -1LL;
	static int32_t x223 = 1;

    t48 = (((x221|x222)/x223)-x224);

    if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x226 = INT8_MIN;
	static int8_t x228 = 1;
	volatile int64_t t49 = -5167105677894LL;

    t49 = (((x225|x226)/x227)-x228);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x229 = 24U;
	int16_t x230 = -1;
	uint16_t x231 = 502U;
	static int8_t x232 = -15;
	volatile int32_t t50 = -629607;

    t50 = (((x229|x230)/x231)-x232);

    if (t50 != 15) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x233 = INT32_MIN;
	uint16_t x234 = 2969U;
	static uint32_t x235 = UINT32_MAX;
	volatile uint8_t x236 = UINT8_MAX;
	volatile uint32_t t51 = 79U;

    t51 = (((x233|x234)/x235)-x236);

    if (t51 != 4294967041U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x237 = 46U;
	int32_t x238 = 5238;
	volatile int32_t x240 = INT32_MIN;
	uint32_t t52 = 27989174U;

    t52 = (((x237|x238)/x239)-x240);

    if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MAX;
	static int64_t t53 = -3431574405917286LL;

    t53 = (((x241|x242)/x243)-x244);

    if (t53 != -16LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x250 = INT32_MIN;
	int16_t x251 = -136;
	volatile int32_t t54 = 785037;

    t54 = (((x249|x250)/x251)-x252);

    if (t54 != 15790321) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x261 = INT64_MIN;
	int32_t x262 = INT32_MIN;
	int32_t x263 = INT32_MIN;
	volatile int16_t x264 = INT16_MAX;

    t55 = (((x261|x262)/x263)-x264);

    if (t55 != -32766LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x265 = INT8_MAX;
	int16_t x266 = 38;
	int32_t x267 = INT32_MAX;
	int8_t x268 = 2;

    t56 = (((x265|x266)/x267)-x268);

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x269 = 8713542LLU;
	int8_t x270 = -1;
	volatile int32_t x271 = INT32_MAX;
	uint64_t t57 = 289LLU;

    t57 = (((x269|x270)/x271)-x272);

    if (t57 != 8589934724LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x273 = UINT32_MAX;
	uint8_t x275 = 20U;
	volatile int32_t x276 = INT32_MIN;

    t58 = (((x273|x274)/x275)-x276);

    if (t58 != 2362232012U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x277 = -1LL;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	volatile int64_t t59 = -514130957717176LL;

    t59 = (((x277|x278)/x279)-x280);

    if (t59 != 3300919440624504LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x282 = -1;
	int32_t x283 = INT32_MIN;
	static uint32_t x284 = UINT32_MAX;
	uint32_t t60 = 57U;

    t60 = (((x281|x282)/x283)-x284);

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x285 = 4031LL;
	uint32_t x287 = 248008U;
	int16_t x288 = INT16_MAX;
	volatile int64_t t61 = -60273499138065681LL;

    t61 = (((x285|x286)/x287)-x288);

    if (t61 != -41425LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x289 = -401169069;
	int64_t x291 = -39561LL;
	int16_t x292 = INT16_MIN;
	int64_t t62 = 2336370774792229771LL;

    t62 = (((x289|x290)/x291)-x292);

    if (t62 != 32768LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x293 = 102U;
	volatile int32_t x294 = -1;
	uint16_t x295 = 3U;
	static volatile uint8_t x296 = 3U;

    t63 = (((x293|x294)/x295)-x296);

    if (t63 != 1431655762U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MAX;
	int8_t x299 = INT8_MIN;
	uint32_t x300 = UINT32_MAX;
	uint32_t t64 = 7711813U;

    t64 = (((x297|x298)/x299)-x300);

    if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x301 = 9U;
	uint64_t x302 = 50512931662LLU;
	uint64_t t65 = 102LLU;

    t65 = (((x301|x302)/x303)-x304);

    if (t65 != 128LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x305 = -1830775;
	static int16_t x306 = INT16_MIN;
	static uint8_t x308 = 7U;

    t66 = (((x305|x306)/x307)-x308);

    if (t66 != -7LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x309 = INT64_MAX;
	static int16_t x310 = -2;
	int64_t x311 = -16LL;
	int16_t x312 = INT16_MIN;
	int64_t t67 = 206724927389834826LL;

    t67 = (((x309|x310)/x311)-x312);

    if (t67 != 32768LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x313 = 24450LLU;
	volatile uint32_t x314 = 413879675U;
	volatile uint16_t x316 = UINT16_MAX;

    t68 = (((x313|x314)/x315)-x316);

    if (t68 != 18446744073709512244LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x318 = 0;
	volatile int64_t t69 = -28LL;

    t69 = (((x317|x318)/x319)-x320);

    if (t69 != 2309LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x325 = INT64_MIN;
	int8_t x327 = -1;
	uint16_t x328 = 10445U;

    t70 = (((x325|x326)/x327)-x328);

    if (t70 != -10444LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x329 = -1;
	uint8_t x330 = 1U;
	volatile int64_t t71 = 0LL;

    t71 = (((x329|x330)/x331)-x332);

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x333 = INT64_MIN;
	uint8_t x334 = 38U;
	static int64_t x335 = INT64_MIN;
	static int8_t x336 = -1;
	int64_t t72 = 23LL;

    t72 = (((x333|x334)/x335)-x336);

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x337 = 244574632064757076LL;
	int8_t x338 = -1;
	volatile uint8_t x339 = 8U;
	static int8_t x340 = INT8_MIN;
	volatile int64_t t73 = 5LL;

    t73 = (((x337|x338)/x339)-x340);

    if (t73 != 128LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x341 = 4;
	int64_t x342 = INT64_MAX;
	int16_t x343 = 4;
	volatile int64_t t74 = -16543007LL;

    t74 = (((x341|x342)/x343)-x344);

    if (t74 != 2305843009213677862LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x345 = -1657;
	int16_t x346 = 26;
	uint8_t x347 = 11U;
	static uint8_t x348 = 7U;
	static int32_t t75 = -32465564;

    t75 = (((x345|x346)/x347)-x348);

    if (t75 != -155) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x349 = -33;
	static int32_t x350 = INT32_MAX;
	uint32_t x352 = UINT32_MAX;

    t76 = (((x349|x350)/x351)-x352);

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x353 = INT16_MIN;
	volatile uint16_t x354 = UINT16_MAX;
	int64_t t77 = INT64_MAX;

    t77 = (((x353|x354)/x355)-x356);

    if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x357 = 24005U;
	int32_t x358 = INT32_MIN;
	int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MAX;
	int64_t t78 = 29LL;

    t78 = (((x357|x358)/x359)-x360);

    if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x361 = INT64_MAX;
	int64_t x362 = INT64_MIN;
	uint32_t x363 = 737495U;
	int8_t x364 = INT8_MAX;
	static int64_t t79 = -385308925830LL;

    t79 = (((x361|x362)/x363)-x364);

    if (t79 != -127LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x365 = 20;
	int64_t x366 = -1LL;
	static int8_t x367 = -1;
	int64_t t80 = 12942705580789216LL;

    t80 = (((x365|x366)/x367)-x368);

    if (t80 != -32766LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x369 = 409U;
	static int8_t x370 = -1;
	int32_t x372 = -1;
	volatile uint64_t t81 = 45LLU;

    t81 = (((x369|x370)/x371)-x372);

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x373 = INT8_MAX;
	uint64_t x375 = UINT64_MAX;
	uint16_t x376 = UINT16_MAX;
	volatile uint64_t t82 = 7106124425534060LLU;

    t82 = (((x373|x374)/x375)-x376);

    if (t82 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x377 = 4978U;
	int8_t x378 = INT8_MIN;
	volatile uint64_t x379 = 388953008783LLU;
	int16_t x380 = INT16_MAX;

    t83 = (((x377|x378)/x379)-x380);

    if (t83 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x381 = 0;
	volatile uint16_t x383 = 5U;
	uint16_t x384 = UINT16_MAX;
	static volatile int64_t t84 = 774598027LL;

    t84 = (((x381|x382)/x383)-x384);

    if (t84 != -93849076121073923LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x393 = UINT16_MAX;

    t85 = (((x393|x394)/x395)-x396);

    if (t85 != -13666) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x397 = -1;
	int16_t x398 = INT16_MIN;
	int16_t x400 = -127;
	static int32_t t86 = 21449712;

    t86 = (((x397|x398)/x399)-x400);

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x401 = 794707063;
	uint32_t x402 = 343284244U;
	uint64_t x404 = 882972676628647931LLU;
	uint64_t t87 = 18479185963LLU;

    t87 = (((x401|x402)/x403)-x404);

    if (t87 != 17563771397080903685LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x405 = -1;
	static uint16_t x406 = 18851U;
	int16_t x407 = INT16_MIN;
	static int32_t x408 = 909942057;

    t88 = (((x405|x406)/x407)-x408);

    if (t88 != -909942057) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x409 = INT16_MIN;
	uint32_t x410 = 388523673U;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MAX;
	volatile uint32_t t89 = 1899U;

    t89 = (((x409|x410)/x411)-x412);

    if (t89 != 65409U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x413 = -1;
	int16_t x414 = INT16_MIN;
	static int16_t x415 = -122;
	uint64_t x416 = 368812488LLU;
	uint64_t t90 = 58LLU;

    t90 = (((x413|x414)/x415)-x416);

    if (t90 != 18446744073340739128LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x417 = UINT64_MAX;
	volatile int16_t x418 = INT16_MIN;
	int64_t x419 = INT64_MIN;
	volatile int64_t x420 = INT64_MAX;
	uint64_t t91 = 1106974807286849215LLU;

    t91 = (((x417|x418)/x419)-x420);

    if (t91 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x425 = UINT32_MAX;
	uint8_t x426 = UINT8_MAX;
	int8_t x427 = INT8_MIN;
	uint32_t t92 = 122614254U;

    t92 = (((x425|x426)/x427)-x428);

    if (t92 != 4294828319U) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int32_t x429 = INT32_MAX;
	uint32_t t93 = 30660U;

    t93 = (((x429|x430)/x431)-x432);

    if (t93 != 8421293U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x433 = 5U;
	int64_t x434 = INT64_MIN;
	static uint32_t x436 = 170U;

    t94 = (((x433|x434)/x435)-x436);

    if (t94 != 4294967125LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x437 = INT64_MAX;
	volatile int16_t x438 = INT16_MIN;
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = -1;
	static uint64_t t95 = 3440667909754948270LLU;

    t95 = (((x437|x438)/x439)-x440);

    if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x441 = INT32_MIN;
	volatile uint64_t x442 = UINT64_MAX;
	int8_t x443 = -1;
	int64_t x444 = 7040887145417882LL;

    t96 = (((x441|x442)/x443)-x444);

    if (t96 != 18439703186564133735LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x446 = INT32_MAX;
	int64_t x447 = INT64_MIN;
	uint64_t t97 = 100599365632LLU;

    t97 = (((x445|x446)/x447)-x448);

    if (t97 != 18446744073709546951LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x449 = 1949;
	int64_t x450 = INT64_MIN;
	int16_t x451 = INT16_MIN;
	volatile int8_t x452 = 0;

    t98 = (((x449|x450)/x451)-x452);

    if (t98 != 281474976710655LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x453 = UINT8_MAX;
	volatile int64_t x456 = INT64_MAX;
	volatile int64_t t99 = 172251883554286187LL;

    t99 = (((x453|x454)/x455)-x456);

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x457 = 1U;
	static int32_t x458 = INT32_MAX;
	uint8_t x459 = 1U;
	volatile int64_t x460 = 1203099723664561LL;

    t100 = (((x457|x458)/x459)-x460);

    if (t100 != -1203097576180914LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x461 = 972404323LL;
	uint64_t x462 = 46LLU;
	int32_t x463 = INT32_MAX;
	static volatile uint16_t x464 = 2U;
	static uint64_t t101 = 5LLU;

    t101 = (((x461|x462)/x463)-x464);

    if (t101 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x465 = 7977U;
	int64_t x466 = INT64_MIN;
	int64_t x467 = INT64_MIN;
	uint64_t x468 = 265613LLU;
	static uint64_t t102 = 86LLU;

    t102 = (((x465|x466)/x467)-x468);

    if (t102 != 18446744073709286003LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x470 = INT32_MAX;
	volatile uint32_t x471 = 348U;
	int16_t x472 = INT16_MIN;
	static volatile uint32_t t103 = 8317U;

    t103 = (((x469|x470)/x471)-x472);

    if (t103 != 12374628U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x473 = 195U;
	static int32_t x474 = INT32_MIN;
	int8_t x475 = -62;
	static int16_t x476 = INT16_MAX;
	volatile uint32_t t104 = 1U;

    t104 = (((x473|x474)/x475)-x476);

    if (t104 != 4294934529U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x477 = 2135U;
	int64_t x478 = INT64_MIN;
	uint8_t x479 = 1U;
	uint8_t x480 = 0U;
	int64_t t105 = 57861146401LL;

    t105 = (((x477|x478)/x479)-x480);

    if (t105 != -9223372036854773673LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x482 = 6550U;
	static uint64_t x484 = 257909LLU;
	uint64_t t106 = 360147862LLU;

    t106 = (((x481|x482)/x483)-x484);

    if (t106 != 18446744073709293708LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x486 = INT16_MAX;
	volatile int32_t t107 = 545900067;

    t107 = (((x485|x486)/x487)-x488);

    if (t107 != 128) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x489 = INT16_MAX;
	int8_t x490 = INT8_MIN;
	uint64_t x491 = UINT64_MAX;
	int32_t x492 = INT32_MIN;
	static volatile uint64_t t108 = 128450LLU;

    t108 = (((x489|x490)/x491)-x492);

    if (t108 != 2147483649LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x494 = -1;
	int16_t x495 = INT16_MIN;
	uint8_t x496 = 23U;
	volatile int32_t t109 = 2000;

    t109 = (((x493|x494)/x495)-x496);

    if (t109 != -23) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x497 = 1;
	uint32_t x498 = UINT32_MAX;
	static int64_t x499 = INT64_MIN;
	uint16_t x500 = 48U;
	static int64_t t110 = 15LL;

    t110 = (((x497|x498)/x499)-x500);

    if (t110 != -48LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x501 = 290;
	int64_t x502 = INT64_MAX;
	volatile int64_t t111 = 4186902LL;

    t111 = (((x501|x502)/x503)-x504);

    if (t111 != 9223090561878065153LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x505 = 4679315508LLU;
	int64_t x506 = -1759419168216LL;
	int8_t x507 = INT8_MAX;
	int8_t x508 = -1;
	static volatile uint64_t t112 = 2423LLU;

    t112 = (((x505|x506)/x507)-x508);

    if (t112 != 145249939517019036LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x509 = 3936U;
	uint8_t x510 = 7U;
	static volatile uint16_t x511 = UINT16_MAX;
	int64_t x512 = INT64_MAX;
	volatile int64_t t113 = -32458415386679LL;

    t113 = (((x509|x510)/x511)-x512);

    if (t113 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x513 = 1502;
	int64_t x514 = -113LL;
	uint8_t x515 = 88U;
	volatile int8_t x516 = INT8_MAX;

    t114 = (((x513|x514)/x515)-x516);

    if (t114 != -127LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x517 = INT16_MAX;
	int64_t x518 = INT64_MIN;
	int16_t x519 = INT16_MIN;
	int64_t t115 = -7775138LL;

    t115 = (((x517|x518)/x519)-x520);

    if (t115 != 281474976710656LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x521 = INT16_MIN;
	uint16_t x522 = 148U;
	int16_t x524 = -366;
	int32_t t116 = -262;

    t116 = (((x521|x522)/x523)-x524);

    if (t116 != -7789) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x526 = INT64_MAX;
	volatile int64_t x527 = INT64_MAX;
	int16_t x528 = INT16_MIN;

    t117 = (((x525|x526)/x527)-x528);

    if (t117 != 32768LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x529 = UINT32_MAX;
	int32_t x530 = -1;
	static int8_t x531 = INT8_MIN;
	uint64_t x532 = 136262357LLU;

    t118 = (((x529|x530)/x531)-x532);

    if (t118 != 18446744073573289260LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x533 = INT32_MIN;
	volatile int16_t x534 = INT16_MIN;
	volatile int32_t x535 = INT32_MAX;
	int8_t x536 = 0;
	int32_t t119 = -134027;

    t119 = (((x533|x534)/x535)-x536);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x537 = -247996LL;
	int64_t x538 = INT64_MAX;
	volatile uint32_t x539 = UINT32_MAX;
	uint64_t x540 = UINT64_MAX;
	static uint64_t t120 = 6467960118367738LLU;

    t120 = (((x537|x538)/x539)-x540);

    if (t120 != 1LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x541 = UINT64_MAX;
	int64_t x543 = -1LL;
	uint64_t t121 = 193810LLU;

    t121 = (((x541|x542)/x543)-x544);

    if (t121 != 2LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x549 = 15457;
	static int8_t x550 = INT8_MIN;
	int64_t x551 = INT64_MAX;
	uint16_t x552 = UINT16_MAX;
	volatile int64_t t122 = 119LL;

    t122 = (((x549|x550)/x551)-x552);

    if (t122 != -65535LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x554 = UINT16_MAX;
	static uint8_t x555 = UINT8_MAX;
	uint16_t x556 = 425U;
	static volatile int32_t t123 = -152389;

    t123 = (((x553|x554)/x555)-x556);

    if (t123 != -168) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x557 = INT64_MAX;
	int8_t x558 = -49;
	uint32_t x559 = 17469057U;
	int64_t t124 = 188LL;

    t124 = (((x557|x558)/x559)-x560);

    if (t124 != -11LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x561 = -1LL;
	int16_t x562 = -360;
	static uint32_t x563 = UINT32_MAX;
	int8_t x564 = INT8_MAX;
	static volatile int64_t t125 = 9440579680638LL;

    t125 = (((x561|x562)/x563)-x564);

    if (t125 != -127LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x565 = 35U;
	uint8_t x566 = 1U;
	int16_t x567 = INT16_MIN;
	volatile uint32_t t126 = 5485U;

    t126 = (((x565|x566)/x567)-x568);

    if (t126 != 4294943665U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x569 = 301941482LL;
	static int8_t x570 = -1;
	int32_t x571 = -1;
	int64_t t127 = -1881LL;

    t127 = (((x569|x570)/x571)-x572);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x573 = INT8_MIN;
	uint64_t x574 = 350646424913537618LLU;
	uint64_t x575 = 75810658016LLU;
	static int8_t x576 = INT8_MIN;

    t128 = (((x573|x574)/x575)-x576);

    if (t128 != 243326654LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x577 = UINT64_MAX;
	volatile int16_t x578 = -1;
	int16_t x579 = -2521;
	volatile uint64_t t129 = 2248921LLU;

    t129 = (((x577|x578)/x579)-x580);

    if (t129 != 2LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x581 = INT32_MIN;
	volatile uint16_t x582 = 0U;
	static int16_t x583 = INT16_MIN;
	int16_t x584 = INT16_MIN;
	volatile int32_t t130 = -3;

    t130 = (((x581|x582)/x583)-x584);

    if (t130 != 98304) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x585 = 2015;
	static uint16_t x586 = 8701U;
	int64_t x587 = 7LL;
	uint32_t x588 = 2U;

    t131 = (((x585|x586)/x587)-x588);

    if (t131 != 1460LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x589 = UINT32_MAX;
	int32_t x590 = -1;
	int8_t x591 = 61;
	int8_t x592 = 27;
	uint32_t t132 = 628469697U;

    t132 = (((x589|x590)/x591)-x592);

    if (t132 != 70409272U) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x593 = INT8_MIN;
	uint16_t x594 = 282U;
	uint8_t x595 = UINT8_MAX;
	static volatile uint16_t x596 = 1355U;

    t133 = (((x593|x594)/x595)-x596);

    if (t133 != -1355) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x598 = INT8_MAX;
	int8_t x599 = INT8_MIN;
	static int16_t x600 = INT16_MAX;
	volatile uint64_t t134 = 0LLU;

    t134 = (((x597|x598)/x599)-x600);

    if (t134 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x602 = INT64_MAX;
	static volatile uint16_t x603 = 52U;
	static volatile int64_t t135 = 15387459438LL;

    t135 = (((x601|x602)/x603)-x604);

    if (t135 != 177372541317767798LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x605 = UINT64_MAX;
	static int16_t x606 = INT16_MIN;
	uint32_t x607 = UINT32_MAX;
	static volatile uint64_t x608 = UINT64_MAX;

    t136 = (((x605|x606)/x607)-x608);

    if (t136 != 4294967298LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x609 = 1U;
	int16_t x610 = INT16_MIN;
	uint64_t x611 = 4262979244467287LLU;
	int8_t x612 = INT8_MIN;
	volatile uint64_t t137 = 1195841075LLU;

    t137 = (((x609|x610)/x611)-x612);

    if (t137 != 4455LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x613 = 2U;
	uint32_t x614 = 10U;
	volatile int16_t x616 = -1;

    t138 = (((x613|x614)/x615)-x616);

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x617 = INT16_MIN;
	uint32_t x618 = UINT32_MAX;
	uint8_t x619 = UINT8_MAX;
	uint32_t t139 = 29969783U;

    t139 = (((x617|x618)/x619)-x620);

    if (t139 != 16875777U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x621 = 0;
	uint8_t x622 = UINT8_MAX;
	uint64_t x624 = UINT64_MAX;
	volatile uint64_t t140 = 53996599380LLU;

    t140 = (((x621|x622)/x623)-x624);

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x625 = UINT64_MAX;
	volatile int16_t x626 = INT16_MAX;
	uint8_t x627 = 6U;
	uint64_t t141 = 6833LLU;

    t141 = (((x625|x626)/x627)-x628);

    if (t141 != 3074457345618258598LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x629 = INT32_MIN;
	static volatile int16_t x630 = INT16_MAX;
	static int8_t x631 = INT8_MAX;
	uint64_t x632 = 1435LLU;
	volatile uint64_t t142 = 189282LLU;

    t142 = (((x629|x630)/x631)-x632);

    if (t142 != 18446744073692641119LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x633 = UINT8_MAX;
	volatile int16_t x634 = 1;
	int8_t x636 = INT8_MIN;
	int32_t t143 = -37677329;

    t143 = (((x633|x634)/x635)-x636);

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x637 = 2662LLU;
	uint64_t x638 = 114189603LLU;
	uint16_t x639 = UINT16_MAX;
	static int64_t x640 = INT64_MAX;

    t144 = (((x637|x638)/x639)-x640);

    if (t144 != 9223372036854777551LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x641 = 19;
	static int64_t x642 = -1LL;
	volatile int8_t x644 = -1;
	int64_t t145 = -2LL;

    t145 = (((x641|x642)/x643)-x644);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x645 = UINT16_MAX;
	static volatile uint64_t x647 = 56491005253310LLU;
	int16_t x648 = 4;

    t146 = (((x645|x646)/x647)-x648);

    if (t146 != 326539LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x650 = -1LL;
	static volatile uint32_t x651 = 538U;
	int32_t x652 = -1;

    t147 = (((x649|x650)/x651)-x652);

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x657 = UINT8_MAX;
	static uint16_t x658 = UINT16_MAX;
	int8_t x659 = -1;
	int64_t x660 = -1LL;

    t148 = (((x657|x658)/x659)-x660);

    if (t148 != -65534LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x662 = INT8_MAX;
	static uint32_t x663 = 3586U;
	volatile int64_t t149 = 1018280LL;

    t149 = (((x661|x662)/x663)-x664);

    if (t149 != -30LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x665 = 306;
	int16_t x666 = INT16_MAX;
	int64_t x668 = INT64_MAX;
	volatile int64_t t150 = 42LL;

    t150 = (((x665|x666)/x667)-x668);

    if (t150 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x670 = UINT8_MAX;
	int16_t x671 = -1;
	uint8_t x672 = 12U;
	uint32_t t151 = 2269U;

    t151 = (((x669|x670)/x671)-x672);

    if (t151 != 4294967284U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x674 = 0;
	int16_t x675 = INT16_MAX;
	static int8_t x676 = INT8_MAX;
	int32_t t152 = 821;

    t152 = (((x673|x674)/x675)-x676);

    if (t152 != -127) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x677 = UINT32_MAX;
	uint32_t x678 = 1718797U;
	int16_t x680 = INT16_MIN;
	volatile uint32_t t153 = 0U;

    t153 = (((x677|x678)/x679)-x680);

    if (t153 != 717443U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x681 = 2;
	static int32_t x682 = 0;
	volatile int64_t x684 = -1LL;
	int64_t t154 = -204028339394903125LL;

    t154 = (((x681|x682)/x683)-x684);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x685 = INT8_MIN;
	volatile int64_t x688 = -3886LL;
	volatile int64_t t155 = -63LL;

    t155 = (((x685|x686)/x687)-x688);

    if (t155 != 3886LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x690 = -188302;
	int32_t x691 = INT32_MIN;
	static uint16_t x692 = 2U;
	int32_t t156 = 1737861;

    t156 = (((x689|x690)/x691)-x692);

    if (t156 != -2) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x693 = 85683763LLU;
	uint64_t x694 = 2727LLU;
	volatile uint16_t x695 = 12U;
	volatile int32_t x696 = INT32_MIN;
	uint64_t t157 = 109662696LLU;

    t157 = (((x693|x694)/x695)-x696);

    if (t157 != 2154623972LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x697 = INT16_MAX;
	static int8_t x698 = INT8_MAX;
	int32_t x699 = -685218932;
	int32_t x700 = INT32_MAX;
	int32_t t158 = -1909569;

    t158 = (((x697|x698)/x699)-x700);

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x701 = 432006061LL;
	int32_t x702 = INT32_MIN;
	static int64_t x703 = -1LL;
	uint64_t x704 = 25438LLU;
	static volatile uint64_t t159 = 16308506010LLU;

    t159 = (((x701|x702)/x703)-x704);

    if (t159 != 1715452149LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x705 = -1;
	volatile uint16_t x706 = 90U;
	uint16_t x707 = UINT16_MAX;
	int32_t x708 = 3517;
	static int32_t t160 = -1;

    t160 = (((x705|x706)/x707)-x708);

    if (t160 != -3517) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x709 = -1;
	int8_t x710 = 1;
	int64_t x711 = -1LL;
	volatile uint8_t x712 = UINT8_MAX;
	volatile int64_t t161 = -115294LL;

    t161 = (((x709|x710)/x711)-x712);

    if (t161 != -254LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x714 = -1;
	int16_t x715 = INT16_MIN;
	volatile int64_t x716 = 27335616708160LL;
	static int64_t t162 = 7499134LL;

    t162 = (((x713|x714)/x715)-x716);

    if (t162 != -27335616708160LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x717 = INT16_MIN;
	int32_t x718 = INT32_MIN;
	int16_t x719 = INT16_MIN;
	int8_t x720 = 30;
	int32_t t163 = 0;

    t163 = (((x717|x718)/x719)-x720);

    if (t163 != -29) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x721 = -1;
	static volatile uint64_t x722 = 425LLU;

    t164 = (((x721|x722)/x723)-x724);

    if (t164 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x725 = INT64_MAX;
	int32_t x727 = INT32_MIN;
	static int16_t x728 = INT16_MAX;
	static volatile uint64_t t165 = 364032LLU;

    t165 = (((x725|x726)/x727)-x728);

    if (t165 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x730 = -99;
	uint32_t x731 = UINT32_MAX;
	volatile int32_t x732 = -1;
	uint64_t t166 = 29LLU;

    t166 = (((x729|x730)/x731)-x732);

    if (t166 != 4294967298LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x733 = 1U;
	volatile int16_t x735 = INT16_MIN;
	volatile int32_t x736 = 23207;
	volatile int32_t t167 = 3032472;

    t167 = (((x733|x734)/x735)-x736);

    if (t167 != 42328) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x737 = UINT8_MAX;
	int64_t x738 = INT64_MIN;
	uint64_t x739 = 167914853012852LLU;
	uint32_t x740 = 612589578U;
	static volatile uint64_t t168 = 19401LLU;

    t168 = (((x737|x738)/x739)-x740);

    if (t168 != 18446744073097016966LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x742 = 0;
	int16_t x743 = INT16_MIN;
	static uint64_t x744 = 2573452LLU;
	uint64_t t169 = 39099193LLU;

    t169 = (((x741|x742)/x743)-x744);

    if (t169 != 18446744073706978164LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x745 = 5U;
	volatile int64_t x746 = -1LL;
	uint64_t x747 = 247956711LLU;
	uint64_t t170 = 25731668137399LLU;

    t170 = (((x745|x746)/x747)-x748);

    if (t170 != 74395051153LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x750 = INT64_MIN;
	static int32_t x752 = -1;
	volatile int64_t t171 = 889722LL;

    t171 = (((x749|x750)/x751)-x752);

    if (t171 != -1076490666982642LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x753 = INT16_MIN;
	uint8_t x754 = UINT8_MAX;
	int32_t x755 = -1;
	static uint32_t x756 = UINT32_MAX;
	volatile uint32_t t172 = 11708U;

    t172 = (((x753|x754)/x755)-x756);

    if (t172 != 32514U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x761 = 2U;
	uint8_t x762 = UINT8_MAX;
	int32_t x763 = -1;
	int32_t t173 = -1959368;

    t173 = (((x761|x762)/x763)-x764);

    if (t173 != -254) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x765 = -25374438242LL;

    t174 = (((x765|x766)/x767)-x768);

    if (t174 != 2345721446LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x769 = 2LLU;
	static int64_t x770 = INT64_MIN;
	int8_t x771 = INT8_MIN;
	static volatile uint64_t t175 = 40475509929LLU;

    t175 = (((x769|x770)/x771)-x772);

    if (t175 != 18446744073709531503LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x773 = INT8_MIN;
	int8_t x774 = INT8_MAX;
	static volatile uint64_t x775 = 568802055666882148LLU;
	int8_t x776 = INT8_MIN;
	uint64_t t176 = 743164376620513LLU;

    t176 = (((x773|x774)/x775)-x776);

    if (t176 != 160LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x777 = -1;
	uint16_t x779 = UINT16_MAX;
	uint16_t x780 = UINT16_MAX;
	static int32_t t177 = 7537554;

    t177 = (((x777|x778)/x779)-x780);

    if (t177 != -65535) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x781 = -1;
	int32_t x782 = 0;
	volatile uint16_t x784 = 2U;
	volatile int32_t t178 = 687122805;

    t178 = (((x781|x782)/x783)-x784);

    if (t178 != -2) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x785 = UINT8_MAX;
	int64_t x786 = -1LL;
	static uint16_t x787 = 356U;
	volatile int32_t x788 = INT32_MIN;

    t179 = (((x785|x786)/x787)-x788);

    if (t179 != 2147483648LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x789 = -1;
	static int32_t x792 = INT32_MAX;
	volatile uint32_t t180 = 92034729U;

    t180 = (((x789|x790)/x791)-x792);

    if (t180 != 2147483650U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x793 = -506;
	volatile int16_t x794 = -1;
	static uint16_t x795 = 7U;
	int16_t x796 = -1;
	int32_t t181 = 904552;

    t181 = (((x793|x794)/x795)-x796);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x798 = INT16_MIN;
	uint64_t x800 = UINT64_MAX;
	static uint64_t t182 = 27718255781LLU;

    t182 = (((x797|x798)/x799)-x800);

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x805 = INT8_MAX;
	volatile int64_t x807 = INT64_MIN;
	static int16_t x808 = 1973;
	volatile int64_t t183 = -89268LL;

    t183 = (((x805|x806)/x807)-x808);

    if (t183 != -1973LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x809 = UINT32_MAX;
	int8_t x810 = INT8_MIN;
	volatile int8_t x811 = INT8_MIN;
	int32_t x812 = INT32_MIN;
	uint32_t t184 = 88585128U;

    t184 = (((x809|x810)/x811)-x812);

    if (t184 != 2147483649U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x814 = UINT8_MAX;
	static uint8_t x815 = 1U;
	static volatile int64_t x816 = 1614LL;

    t185 = (((x813|x814)/x815)-x816);

    if (t185 != 18446744073709550001LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x817 = 0LLU;
	static int16_t x818 = 1;
	static uint32_t x819 = UINT32_MAX;
	int8_t x820 = 0;
	volatile uint64_t t186 = 2730LLU;

    t186 = (((x817|x818)/x819)-x820);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x821 = UINT16_MAX;
	int16_t x822 = INT16_MAX;
	uint32_t x823 = UINT32_MAX;
	uint16_t x824 = 46U;
	volatile uint32_t t187 = 115398U;

    t187 = (((x821|x822)/x823)-x824);

    if (t187 != 4294967250U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x825 = -1;
	int32_t x826 = 1;
	static uint32_t x827 = 229655299U;
	int32_t x828 = -9589509;

    t188 = (((x825|x826)/x827)-x828);

    if (t188 != 9589527U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x829 = UINT16_MAX;
	int64_t x830 = 4027084926463828LL;
	int16_t x831 = INT16_MIN;
	static volatile int16_t x832 = 410;
	volatile int64_t t189 = 483139761586LL;

    t189 = (((x829|x830)/x831)-x832);

    if (t189 != -122896879269LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x833 = 0U;
	int64_t x834 = INT64_MAX;
	volatile int8_t x835 = -3;
	int64_t x836 = INT64_MIN;
	static volatile int64_t t190 = 35257679783LL;

    t190 = (((x833|x834)/x835)-x836);

    if (t190 != 6148914691236517206LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x837 = INT64_MIN;
	int16_t x838 = INT16_MIN;
	int16_t x840 = -1;
	static int64_t t191 = 79119412054LL;

    t191 = (((x837|x838)/x839)-x840);

    if (t191 != -269LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x841 = INT32_MIN;
	static volatile uint32_t x842 = 252U;
	static volatile int8_t x843 = INT8_MIN;
	static volatile uint16_t x844 = UINT16_MAX;
	uint32_t t192 = 8308407U;

    t192 = (((x841|x842)/x843)-x844);

    if (t192 != 4294901761U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x851 = 53177354411091830LLU;
	uint64_t t193 = 10920604963LLU;

    t193 = (((x849|x850)/x851)-x852);

    if (t193 != 18446744071562068315LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x853 = -3785429;
	volatile int64_t x854 = 191533005203835LL;
	uint16_t x855 = 785U;
	volatile int16_t x856 = 4184;
	static volatile int64_t t194 = 1LL;

    t194 = (((x853|x854)/x855)-x856);

    if (t194 != -4268LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x857 = INT16_MAX;
	volatile int64_t x858 = INT64_MAX;
	volatile uint32_t x859 = 20U;
	int64_t t195 = 200528520259LL;

    t195 = (((x857|x858)/x859)-x860);

    if (t195 != 461168601842673255LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x861 = INT16_MIN;
	int16_t x862 = INT16_MAX;
	volatile int64_t x863 = INT64_MIN;
	int16_t x864 = -1;
	int64_t t196 = -12LL;

    t196 = (((x861|x862)/x863)-x864);

    if (t196 != 1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x865 = UINT8_MAX;
	int16_t x866 = INT16_MAX;
	static int64_t x867 = -213605830845687475LL;
	static int8_t x868 = 6;
	int64_t t197 = 5LL;

    t197 = (((x865|x866)/x867)-x868);

    if (t197 != -6LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x869 = UINT8_MAX;
	uint64_t x870 = UINT64_MAX;
	static volatile int32_t x872 = INT32_MIN;
	volatile uint64_t t198 = 35689174131209738LLU;

    t198 = (((x869|x870)/x871)-x872);

    if (t198 != 2147483649LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x877 = 19280U;
	int16_t x879 = INT16_MIN;
	int64_t x880 = -77860381973625LL;
	static volatile int64_t t199 = -1LL;

    t199 = (((x877|x878)/x879)-x880);

    if (t199 != 77860381973625LL) { NG(); } else { ; }
	
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

