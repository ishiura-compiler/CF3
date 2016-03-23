
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

int32_t x1 = INT32_MIN;
volatile uint64_t x4 = 27968839102LLU;
int8_t x8 = INT8_MIN;
int8_t x9 = INT8_MAX;
int8_t x14 = 0;
int32_t x15 = INT32_MAX;
volatile int64_t t4 = -266558028LL;
volatile int64_t t5 = -3916LL;
volatile int64_t t6 = 14372211LL;
int32_t x29 = -243253;
int16_t x34 = INT16_MIN;
uint8_t x40 = UINT8_MAX;
static int32_t x43 = INT32_MAX;
uint64_t x50 = 85LLU;
uint64_t t15 = 195919LLU;
static int8_t x66 = INT8_MAX;
volatile int64_t t16 = 6155LL;
volatile int32_t x69 = -23;
static volatile int32_t t17 = 0;
int16_t x78 = -1;
uint32_t x80 = 1013U;
uint64_t x86 = 7LLU;
static uint32_t x91 = 120704U;
static uint32_t x111 = 47354399U;
uint16_t x117 = UINT16_MAX;
int64_t x118 = INT64_MAX;
int64_t t29 = INT64_MIN;
static uint8_t x129 = 61U;
int32_t x141 = -50014644;
uint16_t x142 = UINT16_MAX;
uint8_t x145 = UINT8_MAX;
int64_t x146 = 781159696LL;
int64_t x152 = -1LL;
uint16_t x157 = UINT16_MAX;
int64_t x161 = 1440316908LL;
uint64_t x172 = 17500769123042739LLU;
static int16_t x173 = -1;
static uint64_t x177 = 4814222906846625LLU;
static int8_t x178 = -1;
int64_t x181 = -1053808539520525LL;
static int64_t x182 = INT64_MAX;
volatile int8_t x186 = INT8_MIN;
int16_t x187 = 561;
int16_t x189 = INT16_MIN;
int64_t x191 = INT64_MAX;
int16_t x203 = INT16_MAX;
volatile int64_t x204 = INT64_MIN;
static int16_t x205 = INT16_MIN;
static uint32_t x207 = 62U;
static int32_t x210 = INT32_MAX;
volatile uint32_t t52 = 94U;
uint64_t x214 = 1126245187627102459LLU;
static int8_t x215 = -42;
static volatile int64_t t54 = -59011003806LL;
static uint16_t x228 = 7U;
static int64_t x232 = INT64_MIN;
volatile uint64_t t57 = 130244205435LLU;
int32_t x235 = INT32_MIN;
uint32_t x237 = 7U;
int16_t x240 = INT16_MIN;
int64_t t59 = 5881314705773LL;
int32_t t62 = -844;
uint64_t x256 = UINT64_MAX;
volatile uint16_t x259 = UINT16_MAX;
int8_t x269 = INT8_MIN;
int32_t t67 = -7;
uint8_t x273 = 0U;
int16_t x276 = -3;
int32_t t68 = -4416;
volatile int8_t x279 = 0;
static int64_t t71 = 538027950528LL;
int16_t x294 = -164;
static volatile int64_t x295 = INT64_MIN;
uint16_t x297 = UINT16_MAX;
volatile uint64_t t77 = 3896722591159206062LLU;
volatile int16_t x313 = -1;
uint64_t x320 = 54400152LLU;
uint64_t t79 = 444058948875LLU;
uint32_t x322 = 188062592U;
volatile uint32_t x325 = 18407U;
uint16_t x328 = 6U;
static volatile uint32_t t82 = 296124400U;
volatile int64_t t84 = 5LL;
static int16_t x343 = -2;
static uint16_t x346 = UINT16_MAX;
volatile int16_t x348 = -3;
static uint8_t x352 = 3U;
int32_t x360 = INT32_MIN;
volatile int8_t x364 = -1;
static int32_t x366 = -17;
int8_t x370 = INT8_MAX;
volatile int64_t x375 = 7162816006LL;
uint32_t x376 = 1243782121U;
static int8_t x379 = 2;
int16_t x380 = -2;
int32_t x384 = 62;
volatile int64_t t96 = -4796119191222LL;
static int8_t x390 = -1;
static int32_t x397 = -1;
int8_t x405 = INT8_MIN;
static int32_t t101 = -4552617;
uint64_t t102 = 3337174898LLU;
int64_t x418 = INT64_MIN;
static int16_t x430 = INT16_MIN;
uint64_t t107 = 774747069613710LLU;
int8_t x435 = INT8_MIN;
int32_t x441 = -20481714;
uint8_t x444 = 11U;
volatile int64_t t110 = -1658267121LL;
uint16_t x453 = 1U;
int8_t x460 = 11;
int8_t x461 = INT8_MIN;
uint16_t x462 = UINT16_MAX;
int8_t x467 = -1;
volatile int32_t t116 = 55;
int64_t x472 = INT64_MAX;
int64_t x474 = -1LL;
int32_t x475 = INT32_MIN;
int64_t t118 = 254771301224LL;
int8_t x493 = INT8_MIN;
int8_t x496 = INT8_MIN;
static volatile uint16_t x498 = 0U;
uint32_t x500 = UINT32_MAX;
volatile int64_t t125 = 435391220041LL;
int64_t x508 = INT64_MAX;
int32_t x519 = INT32_MIN;
static volatile int64_t t129 = -8666LL;
int64_t x521 = INT64_MIN;
int64_t x525 = INT64_MAX;
int16_t x529 = INT16_MIN;
static uint8_t x533 = 14U;
int32_t t136 = 592700;
int32_t x550 = INT32_MIN;
int8_t x563 = INT8_MIN;
static uint16_t x565 = 6593U;
static uint32_t x567 = 535339U;
int16_t x568 = 178;
static volatile uint64_t x570 = UINT64_MAX;
volatile int64_t t143 = -1792281418121630404LL;
int64_t x580 = 21LL;
int64_t t145 = 0LL;
volatile int16_t x585 = INT16_MIN;
int16_t x587 = 33;
volatile int64_t x591 = -1058229860587322LL;
static int16_t x597 = INT16_MAX;
volatile int16_t x603 = INT16_MIN;
int64_t t150 = -104775659748306764LL;
uint64_t x605 = UINT64_MAX;
volatile int8_t x607 = INT8_MIN;
int32_t x609 = INT32_MIN;
uint64_t x619 = UINT64_MAX;
int64_t x620 = INT64_MIN;
uint8_t x624 = 20U;
int16_t x626 = INT16_MIN;
int16_t x637 = 3283;
static int64_t t159 = 7181500962LL;
uint8_t x641 = UINT8_MAX;
int8_t x642 = INT8_MIN;
static int16_t x646 = INT16_MIN;
static int8_t x647 = INT8_MIN;
int64_t x651 = INT64_MIN;
int64_t t162 = -99425779140144LL;
uint32_t x655 = 201824480U;
uint8_t x661 = 109U;
static uint8_t x663 = UINT8_MAX;
int8_t x666 = INT8_MAX;
int16_t x668 = INT16_MAX;
int32_t x672 = 0;
static uint64_t x673 = 136195366134879LLU;
static int64_t x677 = -235206046630742376LL;
int64_t x678 = 2839605882176147LL;
volatile uint64_t x682 = 29897095866209742LLU;
int8_t x683 = INT8_MIN;
volatile uint64_t t172 = 366759532777063013LLU;
static uint64_t t173 = 36105901449150LLU;
volatile int32_t x698 = -176;
int8_t x707 = -1;
int32_t t176 = -6;
int64_t t177 = -156173794999229359LL;
static int32_t t178 = 13;
int64_t x717 = -1LL;
uint64_t x720 = UINT64_MAX;
static volatile int16_t x724 = 173;
static int32_t t180 = 12540550;
int64_t t182 = -4457915688411965LL;
uint64_t x738 = UINT64_MAX;
int8_t x739 = INT8_MAX;
int8_t x745 = INT8_MIN;
volatile int16_t x747 = INT16_MIN;
int8_t x749 = INT8_MIN;
uint8_t x754 = 16U;
int64_t x757 = INT64_MIN;
volatile int64_t t192 = -70112675444362LL;
uint32_t x784 = 1U;
int64_t x796 = -3016285210755790638LL;
int64_t x798 = INT64_MIN;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	int16_t x3 = INT16_MIN;
	uint64_t t0 = 7226103301102729LLU;

    t0 = (((x1^x2)^x3)&x4);

    if (t0 != 51544126LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 506U;
	int64_t x6 = 1101488LL;
	uint16_t x7 = UINT16_MAX;
	int64_t t1 = 115825035414LL;

    t1 = (((x5^x6)^x7)&x8);

    if (t1 != 1060992LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 2U;
	static int8_t x11 = 2;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -280;

    t2 = (((x9^x10)^x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 44U;
	uint16_t x16 = 88U;
	int32_t t3 = -223512824;

    t3 = (((x13^x14)^x15)&x16);

    if (t3 != 80) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -7;
	static int16_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	volatile int64_t x20 = 1257944990620087LL;

    t4 = (((x17^x18)^x19)&x20);

    if (t4 != 6577LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 221423609811091LL;
	int8_t x22 = 2;
	int32_t x23 = INT32_MIN;
	volatile int32_t x24 = -1;

    t5 = (((x21^x22)^x23)&x24);

    if (t5 != -221424025628527LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int64_t x26 = -35657469040LL;
	int64_t x27 = -1LL;
	static int64_t x28 = 174016161831244LL;

    t6 = (((x25^x26)^x27)&x28);

    if (t6 != 174014937043200LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MAX;
	volatile int32_t x31 = -178238;
	int64_t x32 = 1550897600901LL;
	int64_t t7 = 557723LL;

    t7 = (((x29^x30)^x31)&x32);

    if (t7 != 1550897533316LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = -1;
	uint64_t x35 = 91LLU;
	int64_t x36 = -129LL;
	uint64_t t8 = 75907196902544625LLU;

    t8 = (((x33^x34)^x35)&x36);

    if (t8 != 32548LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	int32_t x38 = -1;
	uint32_t x39 = 596U;
	volatile uint32_t t9 = 11U;

    t9 = (((x37^x38)^x39)&x40);

    if (t9 != 84U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MAX;
	volatile int32_t x42 = 57;
	uint64_t x44 = 1018193843015177031LLU;
	uint64_t t10 = 31764LLU;

    t10 = (((x41^x42)^x43)&x44);

    if (t10 != 1432933121LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x45 = INT16_MAX;
	volatile uint32_t x46 = 391272388U;
	static int32_t x47 = 525675626;
	int64_t x48 = INT64_MIN;
	int64_t t11 = -446133123738LL;

    t11 = (((x45^x46)^x47)&x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = INT8_MIN;
	int16_t x51 = -819;
	uint16_t x52 = 8057U;
	static uint64_t t12 = 9611757795221485LLU;

    t12 = (((x49^x50)^x51)&x52);

    if (t12 != 792LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	static uint32_t x54 = 1937U;
	uint8_t x55 = 62U;
	uint64_t x56 = 3183384951342LLU;
	volatile uint64_t t13 = 823658643LLU;

    t13 = (((x53^x54)^x55)&x56);

    if (t13 != 814184448LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int64_t x58 = INT64_MAX;
	int32_t x59 = INT32_MAX;
	uint16_t x60 = 490U;
	volatile int64_t t14 = 120LL;

    t14 = (((x57^x58)^x59)&x60);

    if (t14 != 490LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 60U;
	static int16_t x62 = -6348;
	int8_t x63 = -1;
	volatile uint64_t x64 = UINT64_MAX;

    t15 = (((x61^x62)^x63)&x64);

    if (t15 != 6391LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 15;
	int64_t x67 = 4337000194LL;
	static int16_t x68 = -1;

    t16 = (((x65^x66)^x67)&x68);

    if (t16 != 4337000306LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = 2;
	int8_t x71 = INT8_MAX;
	int16_t x72 = INT16_MIN;

    t17 = (((x69^x70)^x71)&x72);

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x73 = 19U;
	volatile int64_t x74 = -1LL;
	static int8_t x75 = 8;
	uint16_t x76 = 478U;
	volatile int64_t t18 = -80106LL;

    t18 = (((x73^x74)^x75)&x76);

    if (t18 != 452LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = INT16_MIN;
	volatile int64_t x79 = INT64_MIN;
	int64_t t19 = 38998593114430LL;

    t19 = (((x77^x78)^x79)&x80);

    if (t19 != 1013LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MAX;
	volatile uint64_t x84 = UINT64_MAX;
	static uint64_t t20 = 2131369LLU;

    t20 = (((x81^x82)^x83)&x84);

    if (t20 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = INT16_MAX;
	int64_t x87 = 38LL;
	int32_t x88 = INT32_MIN;
	static uint64_t t21 = 288489747733516LLU;

    t21 = (((x85^x86)^x87)&x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = -1LL;
	int8_t x90 = -1;
	int32_t x92 = -1;
	volatile int64_t t22 = -4224412650553LL;

    t22 = (((x89^x90)^x91)&x92);

    if (t22 != 120704LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 6;
	static int16_t x94 = -1;
	uint16_t x95 = 4159U;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -633983;

    t23 = (((x93^x94)^x95)&x96);

    if (t23 != -4224) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	uint8_t x98 = 44U;
	int32_t x99 = INT32_MAX;
	uint64_t x100 = 1356LLU;
	volatile uint64_t t24 = 2181LLU;

    t24 = (((x97^x98)^x99)&x100);

    if (t24 != 12LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	volatile uint8_t x102 = UINT8_MAX;
	int32_t x103 = -939049;
	int8_t x104 = INT8_MAX;
	volatile int64_t t25 = 1429602LL;

    t25 = (((x101^x102)^x103)&x104);

    if (t25 != 87LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = 0LL;
	uint32_t x106 = UINT32_MAX;
	static volatile int64_t x107 = INT64_MIN;
	uint16_t x108 = 483U;
	int64_t t26 = 3936922847844LL;

    t26 = (((x105^x106)^x107)&x108);

    if (t26 != 483LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 527012;
	volatile int32_t x110 = INT32_MAX;
	static uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t27 = 9937277153018LLU;

    t27 = (((x109^x110)^x111)&x112);

    if (t27 != 2099603268LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	int64_t x114 = INT64_MIN;
	volatile uint64_t x115 = UINT64_MAX;
	volatile int32_t x116 = INT32_MIN;
	uint64_t t28 = 2772626LLU;

    t28 = (((x113^x114)^x115)&x116);

    if (t28 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x119 = INT8_MIN;
	static volatile int64_t x120 = INT64_MIN;

    t29 = (((x117^x118)^x119)&x120);

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int64_t x122 = -1097888203409342677LL;
	volatile int32_t x123 = INT32_MAX;
	static volatile int8_t x124 = 0;
	int64_t t30 = 255LL;

    t30 = (((x121^x122)^x123)&x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint32_t x125 = 2U;
	int64_t x126 = -223194527LL;
	uint16_t x127 = UINT16_MAX;
	volatile int64_t x128 = 1208887846LL;
	int64_t t31 = 22LL;

    t31 = (((x125^x126)^x127)&x128);

    if (t31 != 1073883140LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = INT64_MAX;
	volatile uint64_t x131 = UINT64_MAX;
	int16_t x132 = INT16_MIN;
	uint64_t t32 = 147809407905959LLU;

    t32 = (((x129^x130)^x131)&x132);

    if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	static int64_t x134 = 1011607500520010033LL;
	uint8_t x135 = 1U;
	uint32_t x136 = UINT32_MAX;
	volatile int64_t t33 = -201894195577LL;

    t33 = (((x133^x134)^x135)&x136);

    if (t33 != 2271366863LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MAX;
	volatile int32_t x139 = -1;
	int32_t x140 = INT32_MIN;
	static int32_t t34 = 2;

    t34 = (((x137^x138)^x139)&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x143 = INT64_MAX;
	int16_t x144 = 70;
	volatile int64_t t35 = -35109127399098547LL;

    t35 = (((x141^x142)^x143)&x144);

    if (t35 != 68LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x147 = INT8_MIN;
	int32_t x148 = 1;
	int64_t t36 = -202720034493717884LL;

    t36 = (((x145^x146)^x147)&x148);

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	uint32_t x150 = 22405U;
	int32_t x151 = -41;
	static volatile int64_t t37 = 996459046020469904LL;

    t37 = (((x149^x150)^x151)&x152);

    if (t37 != 2147506093LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	int64_t x154 = 1826LL;
	static int8_t x155 = INT8_MAX;
	volatile int64_t x156 = INT64_MAX;
	int64_t t38 = -6LL;

    t38 = (((x153^x154)^x155)&x156);

    if (t38 != 63650LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = 1079405479881136LL;
	uint8_t x159 = 0U;
	static volatile uint16_t x160 = UINT16_MAX;
	volatile int64_t t39 = -196701LL;

    t39 = (((x157^x158)^x159)&x160);

    if (t39 != 38479LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = INT32_MIN;
	int16_t x163 = -1;
	int8_t x164 = INT8_MIN;
	static volatile int64_t t40 = 431195654199LL;

    t40 = (((x161^x162)^x163)&x164);

    if (t40 != 707166720LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MIN;
	int16_t x167 = 1433;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -5095;

    t41 = (((x165^x166)^x167)&x168);

    if (t41 != 64230) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 126919686U;
	int8_t x170 = INT8_MIN;
	volatile int8_t x171 = INT8_MAX;
	static volatile uint64_t t42 = 1823111LLU;

    t42 = (((x169^x170)^x171)&x172);

    if (t42 != 1348469169LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = -1;
	int64_t x175 = INT64_MIN;
	int64_t x176 = 198091719932658102LL;
	int64_t t43 = -21565LL;

    t43 = (((x173^x174)^x175)&x176);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x179 = 115303U;
	static uint32_t x180 = 1771711U;
	volatile uint64_t t44 = 175045327368723LLU;

    t44 = (((x177^x178)^x179)&x180);

    if (t44 != 65593LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x183 = INT32_MIN;
	volatile int16_t x184 = 56;
	volatile int64_t t45 = 947123960209744LL;

    t45 = (((x181^x182)^x183)&x184);

    if (t45 != 8LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x185 = 198894LLU;
	static int8_t x188 = INT8_MAX;
	static volatile uint64_t t46 = 6037555540LLU;

    t46 = (((x185^x186)^x187)&x188);

    if (t46 != 95LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x190 = -1LL;
	int8_t x192 = -24;
	int64_t t47 = 1246105611LL;

    t47 = (((x189^x190)^x191)&x192);

    if (t47 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -535738992LL;
	uint8_t x194 = 52U;
	static int32_t x195 = -1;
	int8_t x196 = INT8_MIN;
	static int64_t t48 = 144673310795231LL;

    t48 = (((x193^x194)^x195)&x196);

    if (t48 != 535738880LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = -1LL;
	uint8_t x198 = UINT8_MAX;
	uint8_t x199 = 4U;
	int8_t x200 = -24;
	volatile int64_t t49 = -2589203399405532LL;

    t49 = (((x197^x198)^x199)&x200);

    if (t49 != -256LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = -102;
	volatile uint8_t x202 = 1U;
	int64_t t50 = INT64_MIN;

    t50 = (((x201^x202)^x203)&x204);

    if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x206 = -298LL;
	int64_t x208 = INT64_MIN;
	volatile int64_t t51 = 8244LL;

    t51 = (((x205^x206)^x207)&x208);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x209 = UINT32_MAX;
	static int8_t x211 = INT8_MIN;
	uint32_t x212 = 12125288U;

    t52 = (((x209^x210)^x211)&x212);

    if (t52 != 12125184U) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x213 = UINT16_MAX;
	int32_t x216 = INT32_MAX;
	uint64_t t53 = 701LLU;

    t53 = (((x213^x214)^x215)&x216);

    if (t53 != 226406610LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -1922;
	volatile int16_t x218 = INT16_MAX;
	int16_t x219 = 1912;
	volatile int64_t x220 = -1LL;

    t54 = (((x217^x218)^x219)&x220);

    if (t54 != -32519LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 10U;
	static uint8_t x222 = 1U;
	uint32_t x223 = 3914U;
	volatile uint32_t x224 = 1U;
	volatile uint32_t t55 = 13U;

    t55 = (((x221^x222)^x223)&x224);

    if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = UINT16_MAX;
	int64_t x226 = -414152320LL;
	int64_t x227 = INT64_MAX;
	static volatile int64_t t56 = -3562399LL;

    t56 = (((x225^x226)^x227)&x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 565U;
	uint64_t x230 = 215426644450LLU;
	int8_t x231 = 1;

    t57 = (((x229^x230)^x231)&x232);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	volatile int16_t x234 = -1;
	uint32_t x236 = 28417532U;
	volatile uint32_t t58 = 20456400U;

    t58 = (((x233^x234)^x235)&x236);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = 10763355083855653LL;
	int16_t x239 = 8436;

    t59 = (((x237^x238)^x239)&x240);

    if (t59 != 10763355083833344LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	uint32_t x242 = 18612616U;
	int32_t x243 = INT32_MIN;
	volatile int16_t x244 = INT16_MAX;
	uint32_t t60 = 61229121U;

    t60 = (((x241^x242)^x243)&x244);

    if (t60 != 32264U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = -1;
	int32_t x246 = INT32_MAX;
	int32_t x247 = 1298901;
	int8_t x248 = -1;
	volatile int32_t t61 = 7;

    t61 = (((x245^x246)^x247)&x248);

    if (t61 != -2146184747) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	int8_t x251 = -1;
	uint8_t x252 = 43U;

    t62 = (((x249^x250)^x251)&x252);

    if (t62 != 43) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	int32_t x254 = -1;
	uint64_t x255 = 2356618633LLU;
	uint64_t t63 = 115323791759287997LLU;

    t63 = (((x253^x254)^x255)&x256);

    if (t63 != 4085832310LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 17502U;
	static int16_t x258 = -1;
	static uint32_t x260 = UINT32_MAX;
	volatile uint32_t t64 = 71929717U;

    t64 = (((x257^x258)^x259)&x260);

    if (t64 != 4294919262U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = 1325;
	static int32_t x262 = INT32_MIN;
	int32_t x263 = 4874454;
	static volatile int64_t x264 = 24070843087020LL;
	volatile int64_t t65 = -7648947433LL;

    t65 = (((x261^x262)^x263)&x264);

    if (t65 != 24068997259432LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -14166053230LL;
	int64_t x266 = INT64_MIN;
	static int8_t x267 = INT8_MAX;
	volatile int32_t x268 = INT32_MIN;
	volatile int64_t t66 = 73380415482LL;

    t66 = (((x265^x266)^x267)&x268);

    if (t66 != 9223372021822390272LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = 6;
	static volatile int8_t x271 = INT8_MAX;
	static uint8_t x272 = 1U;

    t67 = (((x269^x270)^x271)&x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x274 = 1;
	int8_t x275 = INT8_MAX;

    t68 = (((x273^x274)^x275)&x276);

    if (t68 != 124) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -1;
	int64_t x278 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	volatile int64_t t69 = -6LL;

    t69 = (((x277^x278)^x279)&x280);

    if (t69 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = -1;
	static volatile uint16_t x282 = UINT16_MAX;
	int32_t x283 = INT32_MAX;
	int32_t x284 = INT32_MAX;
	int32_t t70 = 98;

    t70 = (((x281^x282)^x283)&x284);

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 649;
	static int64_t x286 = INT64_MIN;
	volatile int8_t x287 = INT8_MAX;
	static volatile int16_t x288 = -1;

    t71 = (((x285^x286)^x287)&x288);

    if (t71 != -9223372036854775050LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 850669237U;
	int64_t x290 = INT64_MIN;
	int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MAX;
	static int64_t t72 = -10035398449LL;

    t72 = (((x289^x290)^x291)&x292);

    if (t72 != 11957LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = INT16_MIN;
	static int64_t x296 = 0LL;
	volatile int64_t t73 = -235201731361425860LL;

    t73 = (((x293^x294)^x295)&x296);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x298 = INT16_MAX;
	int64_t x299 = INT64_MAX;
	static volatile int32_t x300 = INT32_MAX;
	int64_t t74 = -33668369179587737LL;

    t74 = (((x297^x298)^x299)&x300);

    if (t74 != 2147450879LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -10548322;
	int8_t x302 = INT8_MIN;
	static uint8_t x303 = UINT8_MAX;
	static uint32_t x304 = 10031525U;
	volatile uint32_t t75 = 16U;

    t75 = (((x301^x302)^x303)&x304);

    if (t75 != 8392865U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = -7;
	static int64_t x306 = 2020LL;
	int8_t x307 = 37;
	int32_t x308 = INT32_MIN;
	volatile int64_t t76 = 31960330391LL;

    t76 = (((x305^x306)^x307)&x308);

    if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	int8_t x310 = INT8_MAX;
	uint16_t x311 = 94U;
	int64_t x312 = 6292729443558LL;

    t77 = (((x309^x310)^x311)&x312);

    if (t77 != 6292729443526LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = INT16_MIN;
	uint32_t x315 = UINT32_MAX;
	static uint16_t x316 = UINT16_MAX;
	volatile uint32_t t78 = 80986U;

    t78 = (((x313^x314)^x315)&x316);

    if (t78 != 32768U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = UINT64_MAX;
	int32_t x318 = INT32_MIN;
	uint64_t x319 = 2154978LLU;

    t79 = (((x317^x318)^x319)&x320);

    if (t79 != 52302872LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = 515;
	int32_t x323 = 1555932;
	volatile int32_t x324 = INT32_MAX;
	volatile uint32_t t80 = 206U;

    t80 = (((x321^x322)^x323)&x324);

    if (t80 != 186786911U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x326 = 5649722LL;
	uint32_t x327 = 8746191U;
	static volatile int64_t t81 = 91LL;

    t81 = (((x325^x326)^x327)&x328);

    if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = INT16_MAX;
	uint32_t x330 = UINT32_MAX;
	volatile int32_t x331 = INT32_MAX;
	static volatile uint32_t x332 = 189475472U;

    t82 = (((x329^x330)^x331)&x332);

    if (t82 != 10896U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x333 = 3LLU;
	int16_t x334 = INT16_MIN;
	static uint64_t x335 = 49855341LLU;
	int8_t x336 = 0;
	volatile uint64_t t83 = 7939892912380035649LLU;

    t83 = (((x333^x334)^x335)&x336);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MIN;
	int64_t x339 = -118285027LL;
	int32_t x340 = 0;

    t84 = (((x337^x338)^x339)&x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	volatile uint64_t x342 = 220064738997807LLU;
	uint8_t x344 = 2U;
	uint64_t t85 = 90LLU;

    t85 = (((x341^x342)^x343)&x344);

    if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	uint8_t x347 = 0U;
	volatile int64_t t86 = 589943578235LL;

    t86 = (((x345^x346)^x347)&x348);

    if (t86 != -65536LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = -235;
	static uint16_t x350 = 55U;
	uint64_t x351 = 62555170636LLU;
	volatile uint64_t t87 = 75070605LLU;

    t87 = (((x349^x350)^x351)&x352);

    if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x353 = 127;
	int32_t x354 = INT32_MAX;
	static int32_t x355 = 663607607;
	volatile int64_t x356 = INT64_MIN;
	volatile int64_t t88 = -249714LL;

    t88 = (((x353^x354)^x355)&x356);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MIN;
	int64_t x358 = INT64_MIN;
	static int8_t x359 = INT8_MIN;
	int64_t t89 = INT64_MIN;

    t89 = (((x357^x358)^x359)&x360);

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 24U;
	static uint32_t x362 = 597087U;
	int8_t x363 = INT8_MIN;
	uint32_t t90 = 2006967086U;

    t90 = (((x361^x362)^x363)&x364);

    if (t90 != 4294370247U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	int64_t x367 = -1LL;
	int16_t x368 = INT16_MAX;
	static int64_t t91 = 4LL;

    t91 = (((x365^x366)^x367)&x368);

    if (t91 != 32751LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -6798LL;
	int64_t x371 = INT64_MIN;
	volatile int16_t x372 = INT16_MIN;
	int64_t t92 = 8531562716266LL;

    t92 = (((x369^x370)^x371)&x372);

    if (t92 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MAX;
	volatile uint64_t x374 = 39249183636523LLU;
	uint64_t t93 = 611LLU;

    t93 = (((x373^x374)^x375)&x376);

    if (t93 != 1107427776LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 1538242U;
	volatile int32_t x378 = INT32_MAX;
	volatile uint32_t t94 = 62837023U;

    t94 = (((x377^x378)^x379)&x380);

    if (t94 != 2145945406U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x381 = 0;
	int16_t x382 = INT16_MIN;
	int16_t x383 = -1;
	volatile int32_t t95 = 811600952;

    t95 = (((x381^x382)^x383)&x384);

    if (t95 != 62) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MAX;
	int64_t x387 = INT64_MAX;
	int16_t x388 = INT16_MIN;

    t96 = (((x385^x386)^x387)&x388);

    if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	int32_t x391 = -1;
	static uint32_t x392 = 9427205U;
	int64_t t97 = -22621LL;

    t97 = (((x389^x390)^x391)&x392);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = -1LL;
	uint64_t x394 = 8LLU;
	int32_t x395 = INT32_MAX;
	static volatile uint64_t x396 = UINT64_MAX;
	volatile uint64_t t98 = 97619858141LLU;

    t98 = (((x393^x394)^x395)&x396);

    if (t98 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x398 = INT64_MIN;
	static uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MIN;
	static int64_t t99 = -309903433LL;

    t99 = (((x397^x398)^x399)&x400);

    if (t99 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 11174361452244LLU;
	static int32_t x402 = -1;
	volatile int32_t x403 = INT32_MIN;
	int64_t x404 = -1LL;
	uint64_t t100 = 5270818LLU;

    t100 = (((x401^x402)^x403)&x404);

    if (t100 != 11174500872491LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = -3932;
	int16_t x407 = INT16_MIN;
	int8_t x408 = -1;

    t101 = (((x405^x406)^x407)&x408);

    if (t101 != -28892) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = INT64_MIN;
	int16_t x410 = INT16_MIN;
	static int32_t x411 = INT32_MAX;
	static uint64_t x412 = 715336LLU;

    t102 = (((x409^x410)^x411)&x412);

    if (t102 != 27208LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = -196315008;
	int32_t x414 = -1;
	uint64_t x415 = 3140166347LLU;
	static int64_t x416 = -506889565441641LL;
	volatile uint64_t t103 = 508680054454LLU;

    t103 = (((x413^x414)^x415)&x416);

    if (t103 != 2424349076LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = INT32_MIN;
	uint32_t x419 = 1U;
	volatile uint8_t x420 = 7U;
	int64_t t104 = -1021497250460054LL;

    t104 = (((x417^x418)^x419)&x420);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	uint16_t x422 = UINT16_MAX;
	static uint32_t x423 = 0U;
	volatile int16_t x424 = INT16_MIN;
	volatile uint32_t t105 = 6U;

    t105 = (((x421^x422)^x423)&x424);

    if (t105 != 4294901760U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x425 = 64537372LLU;
	static int32_t x426 = INT32_MAX;
	volatile uint8_t x427 = 18U;
	int8_t x428 = INT8_MIN;
	volatile uint64_t t106 = 116488LLU;

    t106 = (((x425^x426)^x427)&x428);

    if (t106 != 2082946176LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	uint64_t x431 = 31290360926689375LLU;
	int8_t x432 = INT8_MIN;

    t107 = (((x429^x430)^x431)&x432);

    if (t107 != 31290360926689280LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MIN;
	static int64_t x436 = INT64_MIN;
	volatile int64_t t108 = INT64_MIN;

    t108 = (((x433^x434)^x435)&x436);

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -20540549860489LL;
	int64_t x438 = -192705155154566LL;
	uint64_t x439 = 1572872LLU;
	volatile uint8_t x440 = 1U;
	static volatile uint64_t t109 = 401962248LLU;

    t109 = (((x437^x438)^x439)&x440);

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x442 = -1;
	volatile int64_t x443 = -4152629735536LL;

    t110 = (((x441^x442)^x443)&x444);

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -2847LL;
	volatile int8_t x446 = -1;
	uint8_t x447 = 4U;
	static int32_t x448 = -1;
	int64_t t111 = -444971LL;

    t111 = (((x445^x446)^x447)&x448);

    if (t111 != 2842LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	uint16_t x450 = 18U;
	static uint8_t x451 = UINT8_MAX;
	volatile int16_t x452 = INT16_MAX;
	int64_t t112 = 181414708LL;

    t112 = (((x449^x450)^x451)&x452);

    if (t112 != 237LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x454 = -1LL;
	int8_t x455 = INT8_MIN;
	uint8_t x456 = 6U;
	static volatile int64_t t113 = -2391454047645201341LL;

    t113 = (((x453^x454)^x455)&x456);

    if (t113 != 6LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	static volatile int64_t x458 = 2155066132436LL;
	volatile int32_t x459 = INT32_MIN;
	int64_t t114 = 0LL;

    t114 = (((x457^x458)^x459)&x460);

    if (t114 != 11LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x463 = INT64_MAX;
	static volatile uint64_t x464 = UINT64_MAX;
	uint64_t t115 = 4LLU;

    t115 = (((x461^x462)^x463)&x464);

    if (t115 != 9223372036854841216LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = INT16_MAX;
	int8_t x466 = INT8_MIN;
	int32_t x468 = INT32_MAX;

    t116 = (((x465^x466)^x467)&x468);

    if (t116 != 32640) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = INT64_MAX;
	static int8_t x470 = 3;
	volatile uint8_t x471 = UINT8_MAX;
	static int64_t t117 = 64052903101LL;

    t117 = (((x469^x470)^x471)&x472);

    if (t117 != 9223372036854775555LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int16_t x476 = -29;

    t118 = (((x473^x474)^x475)&x476);

    if (t118 != -2147483549LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = 28LLU;
	int8_t x478 = -16;
	uint8_t x479 = UINT8_MAX;
	static uint8_t x480 = UINT8_MAX;
	uint64_t t119 = 16240716955LLU;

    t119 = (((x477^x478)^x479)&x480);

    if (t119 != 19LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = UINT16_MAX;
	static int32_t x482 = -99111;
	int32_t x483 = INT32_MAX;
	int8_t x484 = -1;
	int32_t t120 = 6321;

    t120 = (((x481^x482)^x483)&x484);

    if (t120 != -2147386151) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	int32_t x486 = 8054;
	static uint64_t x487 = 4732LLU;
	static uint16_t x488 = 31U;
	uint64_t t121 = 166759901343666LLU;

    t121 = (((x485^x486)^x487)&x488);

    if (t121 != 21LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = 85LL;
	volatile int64_t x490 = INT64_MAX;
	static uint16_t x491 = UINT16_MAX;
	volatile int64_t x492 = 17769796450LL;
	int64_t t122 = -212LL;

    t122 = (((x489^x490)^x491)&x492);

    if (t122 != 17769758784LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x494 = INT32_MAX;
	static volatile uint16_t x495 = 6U;
	static volatile int32_t t123 = INT32_MIN;

    t123 = (((x493^x494)^x495)&x496);

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = INT32_MIN;
	static int8_t x499 = INT8_MAX;
	uint32_t t124 = 1U;

    t124 = (((x497^x498)^x499)&x500);

    if (t124 != 2147483775U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = 258391007LL;
	int16_t x502 = 78;
	volatile int32_t x503 = -19513236;
	uint32_t x504 = UINT32_MAX;

    t125 = (((x501^x502)^x503)&x504);

    if (t125 != 4054907901LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -14447;
	static int64_t x506 = 14998012582LL;
	uint8_t x507 = 30U;
	int64_t t126 = 36974606813370424LL;

    t126 = (((x505^x506)^x507)&x508);

    if (t126 != 9223372021856748841LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -139960;
	uint16_t x510 = 0U;
	volatile int16_t x511 = INT16_MIN;
	uint32_t x512 = 846453U;
	volatile uint32_t t127 = 679693U;

    t127 = (((x509^x510)^x511)&x512);

    if (t127 != 18496U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -1;
	volatile int16_t x514 = -1;
	uint64_t x515 = 2LLU;
	int64_t x516 = -1043696LL;
	static volatile uint64_t t128 = 475086275247LLU;

    t128 = (((x513^x514)^x515)&x516);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 319U;
	int8_t x518 = INT8_MIN;
	static volatile int64_t x520 = INT64_MAX;

    t129 = (((x517^x518)^x519)&x520);

    if (t129 != 2147483327LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x522 = INT64_MAX;
	int32_t x523 = 2014220;
	uint64_t x524 = UINT64_MAX;
	static uint64_t t130 = 1262801155LLU;

    t130 = (((x521^x522)^x523)&x524);

    if (t130 != 18446744073707537395LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x526 = 2281363080749LLU;
	uint64_t x527 = 5165061444305981574LLU;
	static int32_t x528 = INT32_MIN;
	volatile uint64_t t131 = 6LLU;

    t131 = (((x525^x526)^x527)&x528);

    if (t131 != 4058308310158278656LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x530 = INT8_MIN;
	static volatile int16_t x531 = INT16_MIN;
	int8_t x532 = INT8_MIN;
	volatile int32_t t132 = -15267;

    t132 = (((x529^x530)^x531)&x532);

    if (t132 != -128) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x534 = -1;
	int64_t x535 = -1LL;
	uint16_t x536 = 4009U;
	volatile int64_t t133 = -5852549LL;

    t133 = (((x533^x534)^x535)&x536);

    if (t133 != 8LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	volatile int32_t x538 = INT32_MAX;
	int32_t x539 = 7;
	uint32_t x540 = 902803U;
	uint32_t t134 = 144897U;

    t134 = (((x537^x538)^x539)&x540);

    if (t134 != 902800U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 7817U;
	uint16_t x542 = 2U;
	int32_t x543 = INT32_MIN;
	static int8_t x544 = -8;
	volatile uint32_t t135 = 1U;

    t135 = (((x541^x542)^x543)&x544);

    if (t135 != 2147491464U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -29;
	uint8_t x546 = 3U;
	volatile int8_t x547 = INT8_MAX;
	volatile int16_t x548 = INT16_MIN;

    t136 = (((x545^x546)^x547)&x548);

    if (t136 != -32768) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x549 = INT8_MAX;
	uint64_t x551 = UINT64_MAX;
	static volatile uint16_t x552 = UINT16_MAX;
	volatile uint64_t t137 = 0LLU;

    t137 = (((x549^x550)^x551)&x552);

    if (t137 != 65408LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int64_t x553 = INT64_MIN;
	volatile int64_t x554 = -1LL;
	volatile uint32_t x555 = 181U;
	volatile int8_t x556 = INT8_MIN;
	static int64_t t138 = 834408841LL;

    t138 = (((x553^x554)^x555)&x556);

    if (t138 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = 84774;
	static volatile int16_t x558 = INT16_MAX;
	uint32_t x559 = 269780U;
	static uint64_t x560 = 2608912261LLU;
	static volatile uint64_t t139 = 6365954618631922631LLU;

    t139 = (((x557^x558)^x559)&x560);

    if (t139 != 261LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x561 = 264077294U;
	static int16_t x562 = -260;
	int16_t x564 = INT16_MIN;
	uint32_t t140 = 248656U;

    t140 = (((x561^x562)^x563)&x564);

    if (t140 != 264044544U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x566 = -465LL;
	volatile int64_t t141 = 1146043LL;

    t141 = (((x565^x566)^x567)&x568);

    if (t141 != 128LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	volatile int8_t x571 = INT8_MIN;
	static int16_t x572 = INT16_MIN;
	static uint64_t t142 = 579937369452411LLU;

    t142 = (((x569^x570)^x571)&x572);

    if (t142 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = -9056145;
	volatile uint32_t x574 = UINT32_MAX;
	volatile int64_t x575 = -172277445LL;
	int32_t x576 = INT32_MIN;

    t143 = (((x573^x574)^x575)&x576);

    if (t143 != -2147483648LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x577 = UINT16_MAX;
	static volatile int32_t x578 = 3;
	volatile int32_t x579 = INT32_MAX;
	volatile int64_t t144 = 1277627989182572LL;

    t144 = (((x577^x578)^x579)&x580);

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 96;
	uint8_t x582 = 63U;
	int64_t x583 = -14609115884142532LL;
	int64_t x584 = 173LL;

    t145 = (((x581^x582)^x583)&x584);

    if (t145 != 33LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = INT8_MIN;
	static uint16_t x588 = 0U;
	static int32_t t146 = 2239;

    t146 = (((x585^x586)^x587)&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x589 = INT32_MIN;
	uint8_t x590 = UINT8_MAX;
	uint32_t x592 = 688192U;
	volatile int64_t t147 = 1521039874663034LL;

    t147 = (((x589^x590)^x591)&x592);

    if (t147 != 32768LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MAX;
	int64_t x594 = -1LL;
	uint64_t x595 = 8366LLU;
	static int16_t x596 = INT16_MAX;
	volatile uint64_t t148 = 1031340778706700LLU;

    t148 = (((x593^x594)^x595)&x596);

    if (t148 != 8366LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x598 = UINT64_MAX;
	uint32_t x599 = UINT32_MAX;
	volatile int16_t x600 = 1;
	uint64_t t149 = 28481136251008LLU;

    t149 = (((x597^x598)^x599)&x600);

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = 323988081LL;
	uint32_t x602 = 30151555U;
	static int16_t x604 = INT16_MIN;

    t150 = (((x601^x602)^x603)&x604);

    if (t150 != -310640640LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x606 = -1;
	int32_t x608 = 2;
	uint64_t t151 = 88022322006140630LLU;

    t151 = (((x605^x606)^x607)&x608);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x610 = INT64_MIN;
	int16_t x611 = 22;
	static int32_t x612 = -1;
	static int64_t t152 = -3644301744168849LL;

    t152 = (((x609^x610)^x611)&x612);

    if (t152 != 9223372034707292182LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	uint8_t x614 = 60U;
	uint32_t x615 = UINT32_MAX;
	static int32_t x616 = -1;
	volatile uint32_t t153 = 36U;

    t153 = (((x613^x614)^x615)&x616);

    if (t153 != 4294967100U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = 17U;
	volatile int64_t x618 = INT64_MIN;
	uint64_t t154 = 67629534LLU;

    t154 = (((x617^x618)^x619)&x620);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 7U;
	int16_t x622 = 1;
	uint16_t x623 = UINT16_MAX;
	volatile int32_t t155 = 14154251;

    t155 = (((x621^x622)^x623)&x624);

    if (t155 != 16) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MAX;
	int64_t x627 = -9LL;
	uint16_t x628 = 181U;
	volatile int64_t t156 = -1LL;

    t156 = (((x625^x626)^x627)&x628);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -8118;
	int8_t x630 = 12;
	uint16_t x631 = 8886U;
	int16_t x632 = 344;
	int32_t t157 = -13302;

    t157 = (((x629^x630)^x631)&x632);

    if (t157 != 80) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -7;
	int64_t x634 = INT64_MIN;
	int16_t x635 = -478;
	int8_t x636 = INT8_MIN;
	int64_t t158 = -3814856LL;

    t158 = (((x633^x634)^x635)&x636);

    if (t158 != -9223372036854775424LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x638 = -1;
	int8_t x639 = INT8_MIN;
	int64_t x640 = INT64_MAX;

    t159 = (((x637^x638)^x639)&x640);

    if (t159 != 3244LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x643 = INT8_MIN;
	int32_t x644 = INT32_MAX;
	static volatile int32_t t160 = 32387106;

    t160 = (((x641^x642)^x643)&x644);

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x645 = UINT16_MAX;
	int8_t x648 = -14;
	static int32_t t161 = -1;

    t161 = (((x645^x646)^x647)&x648);

    if (t161 != 32882) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = 29;
	volatile int8_t x650 = -1;
	int32_t x652 = INT32_MAX;

    t162 = (((x649^x650)^x651)&x652);

    if (t162 != 2147483618LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x653 = 1U;
	uint8_t x654 = UINT8_MAX;
	int16_t x656 = -431;
	volatile uint32_t t163 = 6U;

    t163 = (((x653^x654)^x655)&x656);

    if (t163 != 201824272U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 114LLU;
	int32_t x658 = INT32_MIN;
	volatile int8_t x659 = 5;
	uint32_t x660 = UINT32_MAX;
	static volatile uint64_t t164 = 8LLU;

    t164 = (((x657^x658)^x659)&x660);

    if (t164 != 2147483767LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x662 = -1;
	static int64_t x664 = INT64_MIN;
	volatile int64_t t165 = INT64_MIN;

    t165 = (((x661^x662)^x663)&x664);

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	volatile uint16_t x667 = UINT16_MAX;
	uint32_t t166 = 47U;

    t166 = (((x665^x666)^x667)&x668);

    if (t166 != 127U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -11489;
	int8_t x670 = 1;
	int8_t x671 = INT8_MAX;
	static int32_t t167 = -13;

    t167 = (((x669^x670)^x671)&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x674 = -3;
	uint16_t x675 = 7U;
	int32_t x676 = INT32_MIN;
	volatile uint64_t t168 = 1016607LLU;

    t168 = (((x673^x674)^x675)&x676);

    if (t168 != 18446607878149111808LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x679 = 13;
	int16_t x680 = INT16_MAX;
	int64_t t169 = -630LL;

    t169 = (((x677^x678)^x679)&x680);

    if (t169 != 13318LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -1;
	int32_t x684 = INT32_MIN;
	uint64_t t170 = 2LLU;

    t170 = (((x681^x682)^x683)&x684);

    if (t170 != 29897095548764160LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 5864839425LLU;
	uint8_t x686 = 8U;
	int32_t x687 = -1;
	uint32_t x688 = UINT32_MAX;
	static volatile uint64_t t171 = 101934149129455LLU;

    t171 = (((x685^x686)^x687)&x688);

    if (t171 != 2725095158LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x689 = 26LLU;
	uint16_t x690 = 3U;
	int16_t x691 = -30;
	static volatile uint64_t x692 = UINT64_MAX;

    t172 = (((x689^x690)^x691)&x692);

    if (t172 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = INT64_MIN;
	uint64_t x694 = 85500711494489114LLU;
	static int8_t x695 = INT8_MIN;
	int32_t x696 = INT32_MAX;

    t173 = (((x693^x694)^x695)&x696);

    if (t173 != 1330899866LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	int8_t x699 = -51;
	int64_t x700 = 208085LL;
	uint64_t t174 = 18721LLU;

    t174 = (((x697^x698)^x699)&x700);

    if (t174 != 207936LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 11049915167765193LLU;
	int64_t x702 = INT64_MIN;
	static uint16_t x703 = UINT16_MAX;
	volatile uint8_t x704 = 0U;
	uint64_t t175 = 69515796527118139LLU;

    t175 = (((x701^x702)^x703)&x704);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = INT32_MAX;
	int32_t x706 = INT32_MIN;
	uint8_t x708 = 7U;

    t176 = (((x705^x706)^x707)&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = UINT32_MAX;
	int64_t x710 = INT64_MIN;
	int64_t x711 = INT64_MAX;
	volatile int32_t x712 = INT32_MIN;

    t177 = (((x709^x710)^x711)&x712);

    if (t177 != -4294967296LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	static int16_t x714 = INT16_MIN;
	int32_t x715 = -1172432;
	uint16_t x716 = 2U;

    t178 = (((x713^x714)^x715)&x716);

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x718 = 8134U;
	uint64_t x719 = 67178231LLU;
	static volatile uint64_t t179 = 70658251147958449LLU;

    t179 = (((x717^x718)^x719)&x720);

    if (t179 != 18446744073642372814LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = UINT8_MAX;
	volatile int8_t x722 = INT8_MIN;
	int32_t x723 = INT32_MIN;

    t180 = (((x721^x722)^x723)&x724);

    if (t180 != 45) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 3U;
	static int64_t x726 = 0LL;
	volatile uint64_t x727 = 2122787LLU;
	int64_t x728 = -4044LL;
	static uint64_t t181 = 38866604995LLU;

    t181 = (((x725^x726)^x727)&x728);

    if (t181 != 2121760LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	int8_t x730 = 5;
	int64_t x731 = 923964214172255019LL;
	int32_t x732 = INT32_MAX;

    t182 = (((x729^x730)^x731)&x732);

    if (t182 != 854131502LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = -1;
	static int8_t x734 = INT8_MIN;
	uint8_t x735 = UINT8_MAX;
	int8_t x736 = 22;
	static volatile int32_t t183 = 34664396;

    t183 = (((x733^x734)^x735)&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x737 = UINT64_MAX;
	static volatile uint64_t x740 = UINT64_MAX;
	uint64_t t184 = 5004101258568889LLU;

    t184 = (((x737^x738)^x739)&x740);

    if (t184 != 127LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = 3;
	static uint64_t x742 = 13500189657266087LLU;
	int64_t x743 = 570981979989979LL;
	volatile int64_t x744 = INT64_MAX;
	uint64_t t185 = 3582944LLU;

    t185 = (((x741^x742)^x743)&x744);

    if (t185 != 12931458309869695LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x746 = 1419U;
	uint8_t x748 = 0U;
	int32_t t186 = 2035628;

    t186 = (((x745^x746)^x747)&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x750 = -1793983657723266079LL;
	static volatile int32_t x751 = INT32_MAX;
	static volatile uint16_t x752 = 24762U;
	volatile int64_t t187 = -21717662LL;

    t187 = (((x749^x750)^x751)&x752);

    if (t187 != 24730LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -6170920422459705LL;
	uint16_t x755 = 8U;
	volatile int16_t x756 = 1;
	int64_t t188 = 173633091277183430LL;

    t188 = (((x753^x754)^x755)&x756);

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = 354;
	volatile uint16_t x759 = 10129U;
	static int32_t x760 = INT32_MAX;
	volatile int64_t t189 = 534261326757346LL;

    t189 = (((x757^x758)^x759)&x760);

    if (t189 != 9971LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	uint8_t x762 = 2U;
	uint16_t x763 = UINT16_MAX;
	uint32_t x764 = 111U;
	volatile uint32_t t190 = 1952644519U;

    t190 = (((x761^x762)^x763)&x764);

    if (t190 != 109U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MAX;
	uint8_t x766 = 3U;
	uint64_t x767 = 64455301400702629LLU;
	int32_t x768 = INT32_MAX;
	uint64_t t191 = 28114697982582LLU;

    t191 = (((x765^x766)^x767)&x768);

    if (t191 != 807326041LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x769 = -1;
	volatile int64_t x770 = INT64_MIN;
	int32_t x771 = -24418364;
	static volatile int32_t x772 = 6;

    t192 = (((x769^x770)^x771)&x772);

    if (t192 != 2LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = -127;
	static uint64_t x774 = 608228025769097619LLU;
	int8_t x775 = -1;
	volatile uint8_t x776 = UINT8_MAX;
	uint64_t t193 = 506492646257LLU;

    t193 = (((x773^x774)^x775)&x776);

    if (t193 != 237LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	static int8_t x778 = -1;
	int64_t x779 = INT64_MIN;
	static int16_t x780 = INT16_MAX;
	int64_t t194 = -486787365LL;

    t194 = (((x777^x778)^x779)&x780);

    if (t194 != 32640LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 469013U;
	int32_t x782 = 81;
	uint64_t x783 = 1203470710551256651LLU;
	volatile uint64_t t195 = 3973857317670LLU;

    t195 = (((x781^x782)^x783)&x784);

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 49139766U;
	uint8_t x786 = 51U;
	int64_t x787 = INT64_MIN;
	uint16_t x788 = 47U;
	int64_t t196 = -103435742780LL;

    t196 = (((x785^x786)^x787)&x788);

    if (t196 != 5LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -8;
	int16_t x790 = 598;
	uint64_t x791 = UINT64_MAX;
	int16_t x792 = INT16_MIN;
	uint64_t t197 = 0LLU;

    t197 = (((x789^x790)^x791)&x792);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -1LL;
	uint16_t x794 = 2912U;
	int32_t x795 = -1;
	volatile int64_t t198 = -75512799666LL;

    t198 = (((x793^x794)^x795)&x796);

    if (t198 != 2112LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 354375837507LLU;
	int64_t x799 = INT64_MIN;
	static int8_t x800 = INT8_MIN;
	static volatile uint64_t t199 = 28672728755LLU;

    t199 = (((x797^x798)^x799)&x800);

    if (t199 != 354375837440LLU) { NG(); } else { ; }
	
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

