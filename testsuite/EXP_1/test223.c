
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

static int8_t x9 = INT8_MAX;
uint64_t x12 = UINT64_MAX;
int8_t x17 = INT8_MAX;
volatile int8_t x28 = INT8_MIN;
int16_t x31 = INT16_MAX;
uint64_t x52 = UINT64_MAX;
uint64_t x53 = 45174053544LLU;
static volatile int16_t x56 = INT16_MIN;
int16_t x61 = INT16_MIN;
volatile int64_t x67 = -1LL;
volatile uint64_t x74 = 5LLU;
int16_t x76 = -1;
int64_t x77 = 0LL;
volatile int16_t x89 = 6942;
static uint64_t x91 = 62430107438886946LLU;
int64_t t18 = -473869008290912180LL;
int8_t x105 = 46;
uint8_t x106 = UINT8_MAX;
int64_t x118 = -1LL;
int64_t x119 = -1LL;
uint8_t x125 = UINT8_MAX;
int8_t x128 = -19;
int16_t x131 = INT16_MAX;
uint16_t x132 = 14U;
int16_t x134 = INT16_MIN;
volatile uint64_t x143 = 15610LLU;
uint16_t x163 = 21667U;
int32_t x171 = INT32_MIN;
uint16_t x172 = 297U;
static uint64_t x185 = 407730383295787LLU;
uint64_t t35 = UINT64_MAX;
int8_t x195 = INT8_MIN;
int16_t x199 = 33;
int64_t x201 = -1LL;
volatile int16_t x204 = -3;
uint8_t x206 = UINT8_MAX;
static volatile int8_t x217 = -1;
static int16_t x225 = INT16_MIN;
uint64_t x228 = 1505924424LLU;
uint32_t x234 = 1194892U;
int32_t x242 = INT32_MIN;
int8_t x243 = -1;
volatile uint32_t t47 = UINT32_MAX;
static int8_t x249 = INT8_MIN;
uint16_t x250 = UINT16_MAX;
uint16_t x255 = UINT16_MAX;
int32_t x272 = 116;
uint64_t t53 = 893LLU;
static int8_t x281 = INT8_MIN;
int16_t x282 = -1;
int16_t x283 = 3;
int64_t x288 = INT64_MIN;
static int16_t x294 = INT16_MAX;
int16_t x301 = -1;
int32_t x310 = -1;
int32_t t60 = 166473343;
int32_t x323 = INT32_MIN;
uint32_t t61 = 4U;
uint64_t x326 = 4368740LLU;
uint64_t x330 = UINT64_MAX;
volatile uint64_t t63 = 123668261LLU;
int16_t x334 = INT16_MIN;
volatile int16_t x342 = -1;
volatile uint64_t t67 = UINT64_MAX;
int16_t x356 = INT16_MIN;
static uint32_t x365 = 12534U;
static uint32_t t71 = 15U;
volatile uint16_t x369 = 309U;
static int8_t x376 = 20;
uint64_t t73 = 10017994189549LLU;
volatile int32_t x377 = INT32_MIN;
uint8_t x380 = 18U;
uint64_t x382 = UINT64_MAX;
volatile uint64_t t75 = 14459598415604LLU;
int16_t x397 = -1;
int8_t x398 = -1;
int16_t x402 = INT16_MAX;
int32_t x403 = -1;
static volatile int32_t t80 = 108103054;
uint16_t x410 = 968U;
static uint64_t x416 = 30LLU;
static uint64_t t83 = 265694103249043265LLU;
uint64_t t85 = 10608303615387369LLU;
int16_t x440 = INT16_MIN;
static int32_t t87 = 7;
int8_t x446 = -7;
volatile uint16_t x460 = 15859U;
uint64_t t92 = 13LLU;
int64_t x470 = 4788218324088LL;
int32_t x476 = -1;
int32_t x479 = -9238177;
volatile int64_t x481 = INT64_MAX;
static int32_t x493 = INT32_MIN;
uint16_t x500 = UINT16_MAX;
int32_t x501 = 25;
int32_t x521 = -1;
uint32_t x525 = 58U;
uint32_t t104 = 439796U;
static volatile int32_t x534 = -972693;
int64_t x535 = INT64_MAX;
volatile int64_t x536 = INT64_MIN;
uint64_t x550 = 537718289688902421LLU;
int8_t x551 = INT8_MAX;
uint8_t x552 = 30U;
volatile uint64_t x553 = 3169645025LLU;
volatile int32_t x555 = 550;
int16_t x559 = -1;
int64_t x569 = 944256443LL;
static volatile int64_t x573 = INT64_MIN;
uint64_t x577 = 159799LLU;
int64_t x580 = INT64_MIN;
int16_t x585 = -1;
volatile int16_t x597 = -6;
uint32_t t120 = 36778U;
static volatile int8_t x604 = INT8_MIN;
static int64_t x606 = 799533783LL;
static int32_t x615 = -392472436;
static uint64_t t124 = 1030279689751620760LLU;
int32_t x624 = INT32_MAX;
static uint16_t x625 = 11426U;
volatile uint8_t x627 = 0U;
int32_t x628 = INT32_MIN;
int64_t x629 = INT64_MAX;
volatile int8_t x632 = INT8_MAX;
int64_t t127 = -6608LL;
int32_t x633 = INT32_MIN;
volatile int64_t t128 = 542774LL;
int16_t x638 = INT16_MIN;
uint8_t x651 = 7U;
volatile int32_t t132 = -23;
volatile int64_t x653 = INT64_MAX;
uint16_t x654 = 675U;
volatile int64_t t133 = -610914851388LL;
uint32_t x671 = UINT32_MAX;
int64_t x672 = INT64_MIN;
static int8_t x676 = -1;
int16_t x679 = INT16_MAX;
static int32_t x680 = -1;
int32_t t139 = 28997;
static int8_t x689 = -11;
int8_t x696 = -18;
volatile int32_t t143 = -1304493;
static uint16_t x699 = 57U;
int64_t x707 = -54505190LL;
uint64_t t148 = 5913LLU;
int64_t x724 = INT64_MAX;
int16_t x726 = INT16_MAX;
volatile uint64_t t151 = 325LLU;
uint64_t x735 = UINT64_MAX;
int8_t x737 = -1;
uint8_t x745 = UINT8_MAX;
int32_t x755 = -1;
int64_t x756 = INT64_MAX;
static int32_t x757 = 25299347;
int8_t x758 = -2;
uint32_t x759 = 34U;
uint32_t t159 = 816121924U;
uint16_t x771 = 12722U;
int64_t t162 = -495818182817868LL;
volatile int16_t x794 = INT16_MIN;
static int16_t x802 = 201;
int16_t x804 = INT16_MIN;
volatile int32_t x812 = -19;
uint8_t x817 = 31U;
uint32_t t171 = UINT32_MAX;
int8_t x821 = 2;
static int8_t x823 = INT8_MIN;
int8_t x831 = 6;
uint32_t t174 = 6190330U;
uint32_t x840 = 1U;
volatile uint64_t t175 = 122768LLU;
volatile uint64_t t176 = 10266LLU;
uint16_t x866 = UINT16_MAX;
int16_t x868 = INT16_MAX;
static uint32_t x872 = 1463U;
volatile uint32_t x887 = 43797097U;
int8_t x890 = 1;
static volatile int32_t x894 = -1;
int32_t x897 = INT32_MIN;
volatile int32_t t187 = -1301646;
uint64_t t188 = 2533975LLU;
uint32_t x906 = 732U;
static int64_t x909 = -22LL;
static volatile uint32_t x910 = 2U;
static int16_t x911 = -2230;
int8_t x926 = 43;
int32_t x928 = INT32_MIN;
static int64_t x930 = 190441LL;
int32_t x937 = -1;
uint8_t x940 = 27U;
int32_t t194 = 6;
volatile int32_t x946 = 337;
int8_t x952 = -1;
static uint64_t t198 = 63844059024066553LLU;
int64_t x957 = INT64_MIN;
int8_t x958 = INT8_MIN;


void f0(void) {
    	volatile uint64_t x1 = UINT64_MAX;
	static uint16_t x2 = 1U;
	static uint32_t x3 = 863245U;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 5682951436296282LLU;

    t0 = (((x1-x2)-x3)|x4);

    if (t0 != 18446744073708688369LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	uint64_t x6 = 1038294277059354817LLU;
	uint8_t x7 = 46U;
	uint64_t x8 = 8549615435069421LLU;
	volatile uint64_t t1 = 666LLU;

    t1 = (((x5-x6)-x7)|x8);

    if (t1 != 17410775282339414013LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = 15U;
	static int8_t x11 = INT8_MIN;
	volatile uint64_t t2 = UINT64_MAX;

    t2 = (((x9-x10)-x11)|x12);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x18 = 5LLU;
	int8_t x19 = -1;
	int16_t x20 = INT16_MIN;
	uint64_t t3 = 3741870741517332716LLU;

    t3 = (((x17-x18)-x19)|x20);

    if (t3 != 18446744073709518971LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x25 = 4U;
	static volatile int32_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	uint64_t t4 = 155129230137LLU;

    t4 = (((x25-x26)-x27)|x28);

    if (t4 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x29 = 8;
	uint16_t x30 = 283U;
	uint64_t x32 = 12065174537309630LLU;
	static uint64_t t5 = 36913910444LLU;

    t5 = (((x29-x30)-x31)|x32);

    if (t5 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x37 = -17438651029LL;
	int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MAX;
	int32_t x40 = -14335501;
	int64_t t6 = 79995027LL;

    t6 = (((x37-x38)-x39)|x40);

    if (t6 != -4764161LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = INT64_MIN;
	volatile int16_t x44 = 1;
	volatile uint64_t t7 = 5LLU;

    t7 = (((x41-x42)-x43)|x44);

    if (t7 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x49 = INT16_MAX;
	uint64_t x50 = 1616515549280226LLU;
	uint8_t x51 = UINT8_MAX;
	volatile uint64_t t8 = UINT64_MAX;

    t8 = (((x49-x50)-x51)|x52);

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x54 = -7;
	uint16_t x55 = 14265U;
	volatile uint64_t t9 = 500494808047274LLU;

    t9 = (((x53-x54)-x55)|x56);

    if (t9 != 18446744073709527798LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x57 = UINT64_MAX;
	uint16_t x58 = 334U;
	volatile int8_t x59 = -1;
	volatile uint32_t x60 = UINT32_MAX;
	uint64_t t10 = UINT64_MAX;

    t10 = (((x57-x58)-x59)|x60);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x62 = 0LL;
	int32_t x63 = INT32_MIN;
	uint8_t x64 = UINT8_MAX;
	volatile int64_t t11 = -24461154LL;

    t11 = (((x61-x62)-x63)|x64);

    if (t11 != 2147451135LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x65 = 0;
	int16_t x66 = 12057;
	int32_t x68 = 71008;
	int64_t t12 = 1LL;

    t12 = (((x65-x66)-x67)|x68);

    if (t12 != -10776LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x73 = INT64_MIN;
	volatile uint64_t x75 = 257802893968125LLU;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = (((x73-x74)-x75)|x76);

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x78 = -1;
	static uint64_t x79 = 8LLU;
	int64_t x80 = INT64_MAX;
	uint64_t t14 = UINT64_MAX;

    t14 = (((x77-x78)-x79)|x80);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x81 = -1;
	int64_t x82 = INT64_MAX;
	int16_t x83 = INT16_MIN;
	static int8_t x84 = -1;
	volatile int64_t t15 = 471546365685973LL;

    t15 = (((x81-x82)-x83)|x84);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x85 = -1;
	volatile int8_t x86 = INT8_MAX;
	volatile uint16_t x87 = 7U;
	static int16_t x88 = -1;
	int32_t t16 = -134;

    t16 = (((x85-x86)-x87)|x88);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x90 = INT16_MIN;
	int32_t x92 = 186090;
	uint64_t t17 = 6LLU;

    t17 = (((x89-x90)-x91)|x92);

    if (t17 != 18384313966270873342LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x93 = 90U;
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = 268312227461138902LL;
	uint16_t x96 = 1U;

    t18 = (((x93-x94)-x95)|x96);

    if (t18 != -268312227461139067LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x97 = -261;
	static volatile int64_t x98 = -1LL;
	uint64_t x99 = UINT64_MAX;
	int64_t x100 = 2106806785490508413LL;
	volatile uint64_t t19 = 227366482467307854LLU;

    t19 = (((x97-x98)-x99)|x100);

    if (t19 != 18446744073709551357LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x101 = 1;
	uint64_t x102 = UINT64_MAX;
	int32_t x103 = -1;
	int16_t x104 = -1;
	uint64_t t20 = UINT64_MAX;

    t20 = (((x101-x102)-x103)|x104);

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x107 = 9U;
	int8_t x108 = INT8_MAX;
	int32_t t21 = -250061;

    t21 = (((x105-x106)-x107)|x108);

    if (t21 != -129) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x109 = INT32_MAX;
	volatile int64_t x110 = -1123627LL;
	volatile uint32_t x111 = UINT32_MAX;
	uint8_t x112 = UINT8_MAX;
	volatile int64_t t22 = -390114855819516069LL;

    t22 = (((x109-x110)-x111)|x112);

    if (t22 != -2146359809LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x117 = -1;
	int16_t x120 = INT16_MIN;
	static volatile int64_t t23 = -2010278325892037LL;

    t23 = (((x117-x118)-x119)|x120);

    if (t23 != -32767LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	volatile int16_t x123 = INT16_MIN;
	static int32_t x124 = INT32_MIN;
	volatile int64_t t24 = -88011831LL;

    t24 = (((x121-x122)-x123)|x124);

    if (t24 != -2147418112LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x126 = 1163811241522865203LLU;
	volatile int16_t x127 = -2;
	volatile uint64_t t25 = 8201544892569LLU;

    t25 = (((x125-x126)-x127)|x128);

    if (t25 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x129 = INT32_MAX;
	static uint8_t x130 = 0U;
	volatile int32_t t26 = -5046722;

    t26 = (((x129-x130)-x131)|x132);

    if (t26 != 2147450894) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x133 = -1;
	int32_t x135 = 593351940;
	static uint32_t x136 = UINT32_MAX;
	volatile uint32_t t27 = UINT32_MAX;

    t27 = (((x133-x134)-x135)|x136);

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x137 = 2U;
	int8_t x138 = -2;
	uint16_t x139 = 35U;
	static int8_t x140 = 16;
	static int32_t t28 = -2123;

    t28 = (((x137-x138)-x139)|x140);

    if (t28 != -15) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x141 = -827;
	int64_t x142 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	volatile uint64_t t29 = 44LLU;

    t29 = (((x141-x142)-x143)|x144);

    if (t29 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x145 = 0;
	int16_t x146 = -10;
	static uint8_t x147 = 2U;
	int64_t x148 = INT64_MIN;
	static volatile int64_t t30 = 227LL;

    t30 = (((x145-x146)-x147)|x148);

    if (t30 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x153 = -1LL;
	volatile int8_t x154 = INT8_MAX;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MAX;
	volatile int64_t t31 = -4499110223743821LL;

    t31 = (((x153-x154)-x155)|x156);

    if (t31 != -32769LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x157 = 631993095497026LL;
	int16_t x158 = INT16_MAX;
	int8_t x159 = -1;
	uint16_t x160 = UINT16_MAX;
	volatile int64_t t32 = -15989062863686LL;

    t32 = (((x157-x158)-x159)|x160);

    if (t32 != 631993095487487LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x161 = INT16_MAX;
	volatile int16_t x162 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t33 = -14003;

    t33 = (((x161-x162)-x163)|x164);

    if (t33 != -36) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x169 = INT64_MIN;
	int8_t x170 = -7;
	static volatile int64_t t34 = -22847318526986697LL;

    t34 = (((x169-x170)-x171)|x172);

    if (t34 != -9223372034707291857LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x186 = -116528059;
	int64_t x187 = -993LL;
	int16_t x188 = -1;

    t35 = (((x185-x186)-x187)|x188);

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x189 = UINT64_MAX;
	volatile uint16_t x190 = 639U;
	static uint64_t x191 = UINT64_MAX;
	static int16_t x192 = INT16_MIN;
	uint64_t t36 = 111532095LLU;

    t36 = (((x189-x190)-x191)|x192);

    if (t36 != 18446744073709550977LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MIN;
	int16_t x196 = -3466;
	static volatile int64_t t37 = -359329LL;

    t37 = (((x193-x194)-x195)|x196);

    if (t37 != -3338LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x197 = 71U;
	int8_t x198 = -1;
	static volatile int32_t x200 = -60933748;
	volatile int32_t t38 = 8582;

    t38 = (((x197-x198)-x199)|x200);

    if (t38 != -60933713) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x202 = -1091027481142612810LL;
	static int64_t x203 = INT64_MAX;
	volatile int64_t t39 = 2498LL;

    t39 = (((x201-x202)-x203)|x204);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint32_t x205 = 3832U;
	volatile uint64_t x207 = 2LLU;
	static volatile int64_t x208 = 1988090339LL;
	volatile uint64_t t40 = 2114950024542900LLU;

    t40 = (((x205-x206)-x207)|x208);

    if (t40 != 1988091383LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x218 = 131361U;
	int8_t x219 = -31;
	int16_t x220 = -3606;
	volatile uint32_t t41 = UINT32_MAX;

    t41 = (((x217-x218)-x219)|x220);

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x226 = -5723LL;
	static volatile int32_t x227 = INT32_MIN;
	uint64_t t42 = 20839537081176LLU;

    t42 = (((x225-x226)-x227)|x228);

    if (t42 != 2147456859LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x229 = INT16_MIN;
	int64_t x230 = 438661976657LL;
	int8_t x231 = 1;
	int32_t x232 = INT32_MAX;
	volatile int64_t t43 = -818634802429LL;

    t43 = (((x229-x230)-x231)|x232);

    if (t43 != -438086664193LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x233 = 2466U;
	volatile int32_t x235 = 883572069;
	int64_t x236 = INT64_MIN;
	static volatile int64_t t44 = -217773383120LL;

    t44 = (((x233-x234)-x235)|x236);

    if (t44 != -9223372033444573007LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x237 = INT8_MIN;
	static int8_t x238 = -29;
	static int64_t x239 = 20852LL;
	static int8_t x240 = INT8_MIN;
	int64_t t45 = 20855876729433089LL;

    t45 = (((x237-x238)-x239)|x240);

    if (t45 != -87LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x241 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	volatile int64_t t46 = -2888LL;

    t46 = (((x241-x242)-x243)|x244);

    if (t46 != -9223372034707324927LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x245 = 3U;
	static int32_t x246 = INT32_MIN;
	static int16_t x247 = INT16_MIN;
	int32_t x248 = -1;

    t47 = (((x245-x246)-x247)|x248);

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x251 = 1500;
	volatile uint8_t x252 = UINT8_MAX;
	static int32_t t48 = 11547;

    t48 = (((x249-x250)-x251)|x252);

    if (t48 != -67073) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x253 = -1;
	int16_t x254 = INT16_MIN;
	static uint16_t x256 = UINT16_MAX;
	int32_t t49 = -2;

    t49 = (((x253-x254)-x255)|x256);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x261 = 4207334LLU;
	volatile uint8_t x262 = 107U;
	int8_t x263 = -1;
	uint32_t x264 = 4054343U;
	uint64_t t50 = 8601206LLU;

    t50 = (((x261-x262)-x263)|x264);

    if (t50 != 8257407LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x265 = -492221975;
	int16_t x266 = -14;
	int16_t x267 = -4090;
	static uint64_t x268 = 9565373LLU;
	volatile uint64_t t51 = 1198481059LLU;

    t51 = (((x265-x266)-x267)|x268);

    if (t51 != 18446744073218424317LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x269 = INT16_MAX;
	uint64_t x270 = 671660527417713LLU;
	int32_t x271 = -1;
	static volatile uint64_t t52 = 149269LLU;

    t52 = (((x269-x270)-x271)|x272);

    if (t52 != 18446072413182166783LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = 542571488775296482LL;

    t53 = (((x277-x278)-x279)|x280);

    if (t53 != 9223372036854765027LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x284 = -13080;
	int32_t t54 = 18069;

    t54 = (((x281-x282)-x283)|x284);

    if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x285 = 91195;
	int64_t x286 = -1LL;
	uint8_t x287 = UINT8_MAX;
	int64_t t55 = -842753LL;

    t55 = (((x285-x286)-x287)|x288);

    if (t55 != -9223372036854684867LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x293 = 1147033346U;
	int16_t x295 = INT16_MAX;
	int16_t x296 = INT16_MIN;
	uint32_t t56 = 360053426U;

    t56 = (((x293-x294)-x295)|x296);

    if (t56 != 4294956804U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x297 = INT16_MIN;
	volatile uint8_t x298 = UINT8_MAX;
	int8_t x299 = INT8_MIN;
	int64_t x300 = -17979440002734800LL;
	volatile int64_t t57 = -7726LL;

    t57 = (((x297-x298)-x299)|x300);

    if (t57 != -32847LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x302 = 3315U;
	int8_t x303 = -10;
	int64_t x304 = 0LL;
	int64_t t58 = -2457842LL;

    t58 = (((x301-x302)-x303)|x304);

    if (t58 != 4294963990LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x309 = 158161U;
	uint8_t x311 = 93U;
	int16_t x312 = INT16_MIN;
	uint32_t t59 = 40278U;

    t59 = (((x309-x310)-x311)|x312);

    if (t59 != 4294961525U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x317 = -1;
	uint8_t x318 = 27U;
	uint8_t x319 = UINT8_MAX;
	static uint16_t x320 = 3125U;

    t60 = (((x317-x318)-x319)|x320);

    if (t60 != -267) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x321 = -96355197;
	uint32_t x322 = 186269U;
	volatile int8_t x324 = INT8_MIN;

    t61 = (((x321-x322)-x323)|x324);

    if (t61 != 4294967270U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x325 = UINT32_MAX;
	uint32_t x327 = UINT32_MAX;
	static volatile int32_t x328 = 12;
	uint64_t t62 = 1550LLU;

    t62 = (((x325-x326)-x327)|x328);

    if (t62 != 18446744073705182876LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x329 = UINT32_MAX;
	uint8_t x331 = 3U;
	static volatile int64_t x332 = INT64_MAX;

    t63 = (((x329-x330)-x331)|x332);

    if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x333 = INT16_MAX;
	uint16_t x335 = 352U;
	static int64_t x336 = INT64_MAX;
	int64_t t64 = INT64_MAX;

    t64 = (((x333-x334)-x335)|x336);

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x337 = -1LL;
	uint64_t x338 = 3359LLU;
	volatile int32_t x339 = -1;
	uint64_t x340 = UINT64_MAX;
	uint64_t t65 = UINT64_MAX;

    t65 = (((x337-x338)-x339)|x340);

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x341 = INT8_MAX;
	int32_t x343 = -5869;
	uint32_t x344 = UINT32_MAX;
	uint32_t t66 = UINT32_MAX;

    t66 = (((x341-x342)-x343)|x344);

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x349 = INT16_MIN;
	uint8_t x350 = UINT8_MAX;
	static volatile int16_t x351 = -41;
	uint64_t x352 = UINT64_MAX;

    t67 = (((x349-x350)-x351)|x352);

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x353 = -65585;
	static uint64_t x354 = 225220690172LLU;
	int16_t x355 = INT16_MAX;
	uint64_t t68 = 2439564948755LLU;

    t68 = (((x353-x354)-x355)|x356);

    if (t68 != 18446744073709551316LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x357 = -3987833272LL;
	volatile uint32_t x358 = UINT32_MAX;
	volatile uint64_t x359 = 328547203454924LLU;
	uint32_t x360 = 69271U;
	volatile uint64_t t69 = 28957091LLU;

    t69 = (((x357-x358)-x359)|x360);

    if (t69 != 18446415518223298303LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x361 = 5320477LLU;
	static int16_t x362 = 175;
	static int32_t x363 = 9;
	uint8_t x364 = 20U;
	volatile uint64_t t70 = 5315522LLU;

    t70 = (((x361-x362)-x363)|x364);

    if (t70 != 5320309LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x366 = 33U;
	static uint16_t x367 = 1675U;
	int8_t x368 = 3;

    t71 = (((x365-x366)-x367)|x368);

    if (t71 != 10827U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x370 = 57832LLU;
	int16_t x371 = INT16_MAX;
	uint32_t x372 = 113877908U;
	volatile uint64_t t72 = 7822522073103960563LLU;

    t72 = (((x369-x370)-x371)|x372);

    if (t72 != 18446744073709535198LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x373 = 991553LLU;
	int64_t x374 = -1LL;
	volatile int8_t x375 = INT8_MIN;

    t73 = (((x373-x374)-x375)|x376);

    if (t73 != 991702LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x378 = -1;
	static int8_t x379 = -1;
	int32_t t74 = -12032564;

    t74 = (((x377-x378)-x379)|x380);

    if (t74 != -2147483630) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x381 = INT32_MAX;
	int8_t x383 = INT8_MAX;
	int8_t x384 = INT8_MAX;

    t75 = (((x381-x382)-x383)|x384);

    if (t75 != 2147483647LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x385 = UINT32_MAX;
	static int16_t x386 = INT16_MIN;
	int16_t x387 = -1;
	int16_t x388 = -1;
	uint32_t t76 = UINT32_MAX;

    t76 = (((x385-x386)-x387)|x388);

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x389 = 49;
	int64_t x390 = INT64_MAX;
	volatile int16_t x391 = INT16_MIN;
	static int16_t x392 = INT16_MIN;
	int64_t t77 = 74502208436161905LL;

    t77 = (((x389-x390)-x391)|x392);

    if (t77 != -32718LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x393 = 3U;
	volatile int32_t x394 = 0;
	static uint32_t x395 = 3868U;
	static volatile int8_t x396 = INT8_MAX;
	volatile uint32_t t78 = 4U;

    t78 = (((x393-x394)-x395)|x396);

    if (t78 != 4294963455U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x399 = INT16_MIN;
	uint64_t x400 = 215391710355520LLU;
	volatile uint64_t t79 = 3LLU;

    t79 = (((x397-x398)-x399)|x400);

    if (t79 != 215391710388288LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x401 = INT8_MAX;
	int16_t x404 = INT16_MIN;

    t80 = (((x401-x402)-x403)|x404);

    if (t80 != -32639) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x405 = INT16_MIN;
	uint16_t x406 = 1438U;
	int8_t x407 = INT8_MAX;
	int32_t x408 = INT32_MAX;
	volatile int32_t t81 = -5;

    t81 = (((x405-x406)-x407)|x408);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x409 = -2;
	int64_t x411 = -1LL;
	static volatile int16_t x412 = INT16_MAX;
	static int64_t t82 = -9345317215978698LL;

    t82 = (((x409-x410)-x411)|x412);

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x413 = INT8_MAX;
	volatile int8_t x414 = -1;
	volatile int16_t x415 = INT16_MIN;

    t83 = (((x413-x414)-x415)|x416);

    if (t83 != 32926LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x417 = 64U;
	static volatile uint64_t x418 = 1635837152058816809LLU;
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = INT64_MIN;
	uint64_t t84 = 4LLU;

    t84 = (((x417-x418)-x419)|x420);

    if (t84 != 16810906921650669336LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x433 = INT8_MAX;
	uint64_t x434 = 213864957LLU;
	static int8_t x435 = -1;
	static int64_t x436 = INT64_MIN;

    t85 = (((x433-x434)-x435)|x436);

    if (t85 != 18446744073495686787LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x437 = 141041620;
	static volatile int16_t x438 = INT16_MIN;
	uint64_t x439 = UINT64_MAX;
	volatile uint64_t t86 = 53409258257868LLU;

    t86 = (((x437-x438)-x439)|x440);

    if (t86 != 18446744073709526997LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x441 = INT8_MIN;
	uint8_t x442 = 0U;
	int8_t x443 = INT8_MAX;
	int8_t x444 = -1;

    t87 = (((x441-x442)-x443)|x444);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x445 = -1LL;
	int16_t x447 = 86;
	int32_t x448 = INT32_MIN;
	int64_t t88 = 6985192456233LL;

    t88 = (((x445-x446)-x447)|x448);

    if (t88 != -80LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x449 = 236;
	volatile uint8_t x450 = 31U;
	int8_t x451 = INT8_MIN;
	static int8_t x452 = INT8_MIN;
	volatile int32_t t89 = 2084987;

    t89 = (((x449-x450)-x451)|x452);

    if (t89 != -51) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x453 = 10U;
	int8_t x454 = 24;
	int64_t x455 = -1LL;
	static volatile uint8_t x456 = 25U;
	int64_t t90 = -19438261687899090LL;

    t90 = (((x453-x454)-x455)|x456);

    if (t90 != 4294967291LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x457 = 8266;
	uint64_t x458 = UINT64_MAX;
	int64_t x459 = 160524181LL;
	volatile uint64_t t91 = 80275565406LLU;

    t91 = (((x457-x458)-x459)|x460);

    if (t91 != 18446744073549037047LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x465 = -1;
	uint64_t x466 = UINT64_MAX;
	int64_t x467 = -7036570656161001LL;
	int16_t x468 = INT16_MAX;

    t92 = (((x465-x466)-x467)|x468);

    if (t92 != 7036570656178175LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x469 = 7609U;
	int16_t x471 = INT16_MAX;
	volatile uint64_t x472 = 4135220LLU;
	volatile uint64_t t93 = 794563873564000035LLU;

    t93 = (((x469-x470)-x471)|x472);

    if (t93 != 18446739285492054390LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x473 = 3128663014126456LLU;
	int16_t x474 = -1;
	int8_t x475 = -4;
	static volatile uint64_t t94 = UINT64_MAX;

    t94 = (((x473-x474)-x475)|x476);

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x477 = UINT16_MAX;
	int16_t x478 = 288;
	int32_t x480 = INT32_MIN;
	int32_t t95 = 29755;

    t95 = (((x477-x478)-x479)|x480);

    if (t95 != -2138180224) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x482 = 2LLU;
	volatile int64_t x483 = -1LL;
	uint64_t x484 = 527698395805LLU;
	volatile uint64_t t96 = 548223274433LLU;

    t96 = (((x481-x482)-x483)|x484);

    if (t96 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x485 = -121527223596LL;
	volatile int8_t x486 = -1;
	int32_t x487 = INT32_MAX;
	uint64_t x488 = UINT64_MAX;
	uint64_t t97 = UINT64_MAX;

    t97 = (((x485-x486)-x487)|x488);

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x494 = 536875LL;
	uint8_t x495 = UINT8_MAX;
	volatile uint32_t x496 = UINT32_MAX;
	volatile int64_t t98 = -682722443926LL;

    t98 = (((x493-x494)-x495)|x496);

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x497 = -2130;
	volatile int32_t x498 = -773355;
	int8_t x499 = 1;
	static int32_t t99 = 468035330;

    t99 = (((x497-x498)-x499)|x500);

    if (t99 != 786431) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x502 = -2;
	int32_t x503 = 24;
	int8_t x504 = 2;
	int32_t t100 = -114;

    t100 = (((x501-x502)-x503)|x504);

    if (t100 != 3) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x509 = INT8_MIN;
	volatile int32_t x510 = -1;
	int32_t x511 = -1;
	int64_t x512 = -1LL;
	volatile int64_t t101 = -144438893626LL;

    t101 = (((x509-x510)-x511)|x512);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x517 = 3154U;
	int32_t x518 = 467376;
	volatile uint32_t x519 = 3U;
	int32_t x520 = 28;
	volatile uint32_t t102 = 811U;

    t102 = (((x517-x518)-x519)|x520);

    if (t102 != 4294503071U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x522 = 1089832209U;
	uint16_t x523 = UINT16_MAX;
	static int8_t x524 = INT8_MAX;
	volatile uint32_t t103 = 985387U;

    t103 = (((x521-x522)-x523)|x524);

    if (t103 != 3205069567U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x526 = 3355;
	uint32_t x527 = 392U;
	int8_t x528 = INT8_MIN;

    t104 = (((x525-x526)-x527)|x528);

    if (t104 != 4294967191U) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x529 = UINT32_MAX;
	int8_t x530 = -1;
	int8_t x531 = INT8_MIN;
	uint16_t x532 = UINT16_MAX;
	volatile uint32_t t105 = 0U;

    t105 = (((x529-x530)-x531)|x532);

    if (t105 != 65535U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x533 = INT16_MIN;
	int64_t t106 = -321107LL;

    t106 = (((x533-x534)-x535)|x536);

    if (t106 != -9223372036853835882LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x537 = 3U;
	uint32_t x538 = 1U;
	int32_t x539 = 1;
	int16_t x540 = INT16_MAX;
	uint32_t t107 = 39673U;

    t107 = (((x537-x538)-x539)|x540);

    if (t107 != 32767U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x541 = 134060683LLU;
	int8_t x542 = INT8_MIN;
	int16_t x543 = -6861;
	uint32_t x544 = UINT32_MAX;
	static volatile uint64_t t108 = 46082552LLU;

    t108 = (((x541-x542)-x543)|x544);

    if (t108 != 4294967295LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x549 = INT32_MIN;
	volatile uint64_t t109 = 57871466LLU;

    t109 = (((x549-x550)-x551)|x552);

    if (t109 != 17909025781873165438LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x554 = 85U;
	volatile int8_t x556 = INT8_MIN;
	uint64_t t110 = 8219LLU;

    t110 = (((x553-x554)-x555)|x556);

    if (t110 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x557 = -1LL;
	static volatile uint32_t x558 = 148140521U;
	static volatile int16_t x560 = INT16_MAX;
	int64_t t111 = -17024771351939LL;

    t111 = (((x557-x558)-x559)|x560);

    if (t111 != -148111361LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x561 = -3;
	int64_t x562 = -74826522LL;
	int16_t x563 = INT16_MIN;
	int8_t x564 = 38;
	volatile int64_t t112 = -89070LL;

    t112 = (((x561-x562)-x563)|x564);

    if (t112 != 74859319LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x570 = INT16_MIN;
	int32_t x571 = INT32_MIN;
	static int64_t x572 = INT64_MIN;
	volatile int64_t t113 = 194LL;

    t113 = (((x569-x570)-x571)|x572);

    if (t113 != -9223372033763002949LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x574 = INT8_MIN;
	volatile uint64_t x575 = UINT64_MAX;
	static int16_t x576 = 438;
	volatile uint64_t t114 = 15144136493000LLU;

    t114 = (((x573-x574)-x575)|x576);

    if (t114 != 9223372036854776247LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x578 = 9392888617681471LLU;
	uint32_t x579 = UINT32_MAX;
	uint64_t t115 = 35198314417092728LLU;

    t115 = (((x577-x578)-x579)|x580);

    if (t115 != 18437351180797062649LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x581 = INT8_MIN;
	uint32_t x582 = UINT32_MAX;
	int16_t x583 = 9;
	static int16_t x584 = 118;
	volatile uint32_t t116 = 13223301U;

    t116 = (((x581-x582)-x583)|x584);

    if (t116 != 4294967166U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x586 = UINT8_MAX;
	uint8_t x587 = 86U;
	int8_t x588 = -26;
	volatile int32_t t117 = 1500;

    t117 = (((x585-x586)-x587)|x588);

    if (t117 != -18) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x589 = 1U;
	volatile int8_t x590 = INT8_MIN;
	static volatile uint8_t x591 = 55U;
	int8_t x592 = -24;
	volatile int32_t t118 = 841323;

    t118 = (((x589-x590)-x591)|x592);

    if (t118 != -22) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x593 = 12;
	int64_t x594 = INT64_MAX;
	uint8_t x595 = 3U;
	static volatile int32_t x596 = INT32_MAX;
	int64_t t119 = 4142509LL;

    t119 = (((x593-x594)-x595)|x596);

    if (t119 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x598 = -1;
	uint32_t x599 = UINT32_MAX;
	uint16_t x600 = 250U;

    t120 = (((x597-x598)-x599)|x600);

    if (t120 != 4294967294U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x601 = UINT8_MAX;
	int16_t x602 = INT16_MAX;
	volatile int64_t x603 = 217885570217LL;
	int64_t t121 = -1LL;

    t121 = (((x601-x602)-x603)|x604);

    if (t121 != -41LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x605 = UINT64_MAX;
	int8_t x607 = -6;
	uint16_t x608 = UINT16_MAX;
	uint64_t t122 = 1LLU;

    t122 = (((x605-x606)-x607)|x608);

    if (t122 != 18446744072910077951LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x613 = -5;
	volatile int16_t x614 = INT16_MAX;
	uint32_t x616 = 1665670016U;
	volatile uint32_t t123 = 18U;

    t123 = (((x613-x614)-x615)|x616);

    if (t123 != 2003582960U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x617 = INT32_MIN;
	int32_t x618 = INT32_MIN;
	static uint64_t x619 = UINT64_MAX;
	int16_t x620 = INT16_MIN;

    t124 = (((x617-x618)-x619)|x620);

    if (t124 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x621 = INT8_MAX;
	volatile uint16_t x622 = UINT16_MAX;
	static int16_t x623 = INT16_MIN;
	static int32_t t125 = 1446072;

    t125 = (((x621-x622)-x623)|x624);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x626 = 3U;
	volatile int32_t t126 = 40939;

    t126 = (((x625-x626)-x627)|x628);

    if (t126 != -2147472225) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x630 = 43U;
	static int16_t x631 = 244;

    t127 = (((x629-x630)-x631)|x632);

    if (t127 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x634 = -1LL;
	int8_t x635 = -14;
	uint8_t x636 = 13U;

    t128 = (((x633-x634)-x635)|x636);

    if (t128 != -2147483633LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x637 = INT16_MIN;
	volatile uint64_t x639 = 5479LLU;
	int64_t x640 = 0LL;
	volatile uint64_t t129 = 9642LLU;

    t129 = (((x637-x638)-x639)|x640);

    if (t129 != 18446744073709546137LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x641 = UINT32_MAX;
	uint32_t x642 = 23685058U;
	int16_t x643 = INT16_MIN;
	int64_t x644 = INT64_MIN;
	static int64_t t130 = -15128285099LL;

    t130 = (((x641-x642)-x643)|x644);

    if (t130 != -9223372032583460803LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x645 = -1;
	volatile int64_t x646 = -3LL;
	static uint64_t x647 = 12743703LLU;
	int64_t x648 = INT64_MAX;
	uint64_t t131 = UINT64_MAX;

    t131 = (((x645-x646)-x647)|x648);

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x649 = 57U;
	int8_t x650 = INT8_MIN;
	int32_t x652 = INT32_MIN;

    t132 = (((x649-x650)-x651)|x652);

    if (t132 != -2147483470) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x655 = 3666U;
	uint16_t x656 = 6625U;

    t133 = (((x653-x654)-x655)|x656);

    if (t133 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x657 = INT32_MAX;
	int64_t x658 = -840LL;
	uint32_t x659 = UINT32_MAX;
	uint32_t x660 = UINT32_MAX;
	volatile int64_t t134 = 30LL;

    t134 = (((x657-x658)-x659)|x660);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x661 = UINT64_MAX;
	int16_t x662 = INT16_MIN;
	int64_t x663 = INT64_MAX;
	volatile int32_t x664 = INT32_MIN;
	uint64_t t135 = 1415LLU;

    t135 = (((x661-x662)-x663)|x664);

    if (t135 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x665 = UINT8_MAX;
	static int64_t x666 = 3425LL;
	uint8_t x667 = 9U;
	int16_t x668 = INT16_MIN;
	int64_t t136 = -988248LL;

    t136 = (((x665-x666)-x667)|x668);

    if (t136 != -3179LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x669 = 2;
	volatile int64_t x670 = -1LL;
	int64_t t137 = -51902519301378715LL;

    t137 = (((x669-x670)-x671)|x672);

    if (t137 != -4294967292LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x673 = -1;
	uint16_t x674 = 26648U;
	static uint16_t x675 = 7623U;
	static volatile int32_t t138 = -65;

    t138 = (((x673-x674)-x675)|x676);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x677 = INT16_MIN;
	volatile int8_t x678 = INT8_MAX;

    t139 = (((x677-x678)-x679)|x680);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x681 = -1LL;
	int8_t x682 = -1;
	int64_t x683 = -1LL;
	static int64_t x684 = INT64_MIN;
	int64_t t140 = -1LL;

    t140 = (((x681-x682)-x683)|x684);

    if (t140 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x685 = 1U;
	volatile uint32_t x686 = 6U;
	uint64_t x687 = UINT64_MAX;
	uint8_t x688 = UINT8_MAX;
	uint64_t t141 = 8219871LLU;

    t141 = (((x685-x686)-x687)|x688);

    if (t141 != 4294967295LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x690 = 4;
	int16_t x691 = 57;
	int64_t x692 = INT64_MIN;
	int64_t t142 = 8655128781LL;

    t142 = (((x689-x690)-x691)|x692);

    if (t142 != -72LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x693 = INT8_MAX;
	int16_t x694 = 7025;
	static int16_t x695 = INT16_MIN;

    t143 = (((x693-x694)-x695)|x696);

    if (t143 != -18) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x697 = INT32_MIN;
	static int64_t x698 = INT64_MIN;
	static volatile uint16_t x700 = 123U;
	volatile int64_t t144 = -1LL;

    t144 = (((x697-x698)-x699)|x700);

    if (t144 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x701 = INT8_MIN;
	uint64_t x702 = UINT64_MAX;
	static int16_t x703 = -40;
	int8_t x704 = -1;
	volatile uint64_t t145 = UINT64_MAX;

    t145 = (((x701-x702)-x703)|x704);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x705 = 1U;
	volatile uint32_t x706 = 80218U;
	int16_t x708 = INT16_MAX;
	int64_t t146 = -653517164221098835LL;

    t146 = (((x705-x706)-x707)|x708);

    if (t146 != 4349394943LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x709 = -1;
	int8_t x710 = INT8_MAX;
	volatile int8_t x711 = -1;
	int64_t x712 = INT64_MAX;
	static volatile int64_t t147 = 213LL;

    t147 = (((x709-x710)-x711)|x712);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x713 = 96U;
	uint64_t x714 = 370593406788LLU;
	int8_t x715 = -1;
	static int32_t x716 = INT32_MIN;

    t148 = (((x713-x714)-x715)|x716);

    if (t148 != 18446744072483332381LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	int16_t x718 = INT16_MIN;
	int64_t x719 = INT64_MAX;
	int64_t x720 = INT64_MIN;
	static uint64_t t149 = 15LLU;

    t149 = (((x717-x718)-x719)|x720);

    if (t149 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x721 = 3215110962499209LLU;
	uint32_t x722 = 485437070U;
	uint16_t x723 = 426U;
	volatile uint64_t t150 = 87655LLU;

    t150 = (((x721-x722)-x723)|x724);

    if (t150 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x725 = -4;
	uint64_t x727 = 7647194045676LLU;
	volatile int32_t x728 = 245;

    t151 = (((x725-x726)-x727)|x728);

    if (t151 != 18446736426515473397LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x729 = 3U;
	int64_t x730 = INT64_MAX;
	static int16_t x731 = INT16_MIN;
	int64_t x732 = 11047655145LL;
	volatile int64_t t152 = 5089115893LL;

    t152 = (((x729-x730)-x731)|x732);

    if (t152 != -9223372025807120659LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x733 = 85U;
	uint16_t x734 = 11U;
	volatile int8_t x736 = INT8_MIN;
	volatile uint64_t t153 = 5457066530LLU;

    t153 = (((x733-x734)-x735)|x736);

    if (t153 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x738 = -1;
	int8_t x739 = INT8_MIN;
	volatile uint64_t x740 = 15203478457907634LLU;
	static volatile uint64_t t154 = 1423LLU;

    t154 = (((x737-x738)-x739)|x740);

    if (t154 != 15203478457907634LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x741 = INT32_MIN;
	static volatile uint32_t x742 = 56555U;
	int8_t x743 = -1;
	static int64_t x744 = INT64_MAX;
	int64_t t155 = INT64_MAX;

    t155 = (((x741-x742)-x743)|x744);

    if (t155 != INT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x746 = INT16_MIN;
	int32_t x747 = -1;
	int8_t x748 = -1;
	int32_t t156 = 790698;

    t156 = (((x745-x746)-x747)|x748);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x749 = 6549271U;
	uint64_t x750 = 17257LLU;
	int8_t x751 = 5;
	int32_t x752 = INT32_MAX;
	static uint64_t t157 = 195LLU;

    t157 = (((x749-x750)-x751)|x752);

    if (t157 != 2147483647LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x753 = INT64_MAX;
	uint16_t x754 = UINT16_MAX;
	int64_t t158 = INT64_MAX;

    t158 = (((x753-x754)-x755)|x756);

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x760 = INT8_MIN;

    t159 = (((x757-x758)-x759)|x760);

    if (t159 != 4294967283U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x769 = 3U;
	static volatile int16_t x770 = -7;
	uint16_t x772 = 15U;
	static volatile int32_t t160 = -15085;

    t160 = (((x769-x770)-x771)|x772);

    if (t160 != -12705) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x777 = INT16_MIN;
	uint32_t x778 = UINT32_MAX;
	int8_t x779 = INT8_MIN;
	uint16_t x780 = UINT16_MAX;
	static uint32_t t161 = UINT32_MAX;

    t161 = (((x777-x778)-x779)|x780);

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x781 = -2775478522968048296LL;
	uint16_t x782 = 8U;
	volatile uint16_t x783 = UINT16_MAX;
	uint16_t x784 = 3U;

    t162 = (((x781-x782)-x783)|x784);

    if (t162 != -2775478522968113837LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x785 = 1U;
	volatile int16_t x786 = -14568;
	static int16_t x787 = -1;
	static volatile uint8_t x788 = UINT8_MAX;
	volatile int32_t t163 = -7;

    t163 = (((x785-x786)-x787)|x788);

    if (t163 != 14591) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x789 = -1;
	uint8_t x790 = 55U;
	volatile int16_t x791 = INT16_MIN;
	volatile uint64_t x792 = 2236177049623109LLU;
	uint64_t t164 = 370088LLU;

    t164 = (((x789-x790)-x791)|x792);

    if (t164 != 2236177049649101LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x793 = 126U;
	volatile int8_t x795 = 3;
	uint8_t x796 = UINT8_MAX;
	static volatile int32_t t165 = 1826;

    t165 = (((x793-x794)-x795)|x796);

    if (t165 != 33023) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x797 = -6926031308834LL;
	int32_t x798 = -3069435;
	int8_t x799 = -26;
	uint8_t x800 = UINT8_MAX;
	static int64_t t166 = 393LL;

    t166 = (((x797-x798)-x799)|x800);

    if (t166 != -6926028239361LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x801 = INT16_MAX;
	uint16_t x803 = 148U;
	volatile int32_t t167 = -8704;

    t167 = (((x801-x802)-x803)|x804);

    if (t167 != -350) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x805 = 43181097299919236LLU;
	int64_t x806 = 9733723443830LL;
	int32_t x807 = -1734480;
	int64_t x808 = -1062106594493965189LL;
	uint64_t t168 = 3943551541LLU;

    t168 = (((x805-x806)-x807)|x808);

    if (t168 != 17427773519497690751LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x809 = 13619;
	volatile int8_t x810 = INT8_MAX;
	uint32_t x811 = 440615U;
	static volatile uint32_t t169 = 6577U;

    t169 = (((x809-x810)-x811)|x812);

    if (t169 != 4294967277U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x813 = 4U;
	static int32_t x814 = INT32_MAX;
	static volatile uint8_t x815 = 0U;
	int64_t x816 = 349271LL;
	int64_t t170 = -252LL;

    t170 = (((x813-x814)-x815)|x816);

    if (t170 != 2147832919LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x818 = 525333U;
	int8_t x819 = -1;
	int16_t x820 = -2;

    t171 = (((x817-x818)-x819)|x820);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x822 = 39;
	volatile int8_t x824 = -1;
	static int32_t t172 = -1;

    t172 = (((x821-x822)-x823)|x824);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x825 = INT8_MIN;
	uint16_t x826 = UINT16_MAX;
	int32_t x827 = INT32_MIN;
	int64_t x828 = INT64_MIN;
	int64_t t173 = -36459868433885LL;

    t173 = (((x825-x826)-x827)|x828);

    if (t173 != -9223372034707357823LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x829 = 1450;
	int8_t x830 = INT8_MIN;
	uint32_t x832 = 70U;

    t174 = (((x829-x830)-x831)|x832);

    if (t174 != 1638U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x837 = INT32_MIN;
	uint64_t x838 = 330744146574002LLU;
	static int64_t x839 = INT64_MIN;

    t175 = (((x837-x838)-x839)|x840);

    if (t175 != 9223041290560718159LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x841 = INT32_MAX;
	static volatile uint64_t x842 = 166558LLU;
	uint8_t x843 = 1U;
	static volatile int64_t x844 = INT64_MAX;

    t176 = (((x841-x842)-x843)|x844);

    if (t176 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x849 = INT16_MAX;
	uint16_t x850 = 11219U;
	uint64_t x851 = UINT64_MAX;
	volatile int8_t x852 = -2;
	volatile uint64_t t177 = UINT64_MAX;

    t177 = (((x849-x850)-x851)|x852);

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x857 = UINT32_MAX;
	int32_t x858 = -17;
	static int8_t x859 = -1;
	uint8_t x860 = 58U;
	volatile uint32_t t178 = 10562858U;

    t178 = (((x857-x858)-x859)|x860);

    if (t178 != 59U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x865 = UINT8_MAX;
	int32_t x867 = -83;
	int32_t t179 = 6;

    t179 = (((x865-x866)-x867)|x868);

    if (t179 != -32769) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x869 = 5U;
	int8_t x870 = 57;
	static int32_t x871 = -4695;
	static volatile uint32_t t180 = 7074U;

    t180 = (((x869-x870)-x871)|x872);

    if (t180 != 6071U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x873 = -1;
	int16_t x874 = INT16_MAX;
	volatile int8_t x875 = INT8_MIN;
	volatile int16_t x876 = INT16_MAX;
	static volatile int32_t t181 = -3882;

    t181 = (((x873-x874)-x875)|x876);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x877 = 58U;
	int8_t x878 = INT8_MAX;
	uint32_t x879 = 809230U;
	int16_t x880 = INT16_MAX;
	static volatile uint32_t t182 = 6072U;

    t182 = (((x877-x878)-x879)|x880);

    if (t182 != 4294180863U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x881 = 23141;
	int16_t x882 = 4914;
	static int8_t x883 = INT8_MIN;
	int16_t x884 = 0;
	static volatile int32_t t183 = -269929514;

    t183 = (((x881-x882)-x883)|x884);

    if (t183 != 18355) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x885 = -13701230;
	uint8_t x886 = 3U;
	uint16_t x888 = 21859U;
	volatile uint32_t t184 = 908053U;

    t184 = (((x885-x886)-x887)|x888);

    if (t184 != 4237489511U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x889 = INT8_MAX;
	uint64_t x891 = UINT64_MAX;
	int8_t x892 = 19;
	uint64_t t185 = 953226LLU;

    t185 = (((x889-x890)-x891)|x892);

    if (t185 != 127LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x893 = UINT32_MAX;
	static volatile uint16_t x895 = UINT16_MAX;
	int64_t x896 = INT64_MAX;
	volatile int64_t t186 = INT64_MAX;

    t186 = (((x893-x894)-x895)|x896);

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x898 = -12177372;
	static int8_t x899 = INT8_MIN;
	int16_t x900 = INT16_MIN;

    t187 = (((x897-x898)-x899)|x900);

    if (t187 != -12196) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x901 = UINT64_MAX;
	static volatile int16_t x902 = -1;
	int32_t x903 = INT32_MIN;
	int64_t x904 = 169813LL;

    t188 = (((x901-x902)-x903)|x904);

    if (t188 != 2147653461LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x905 = UINT64_MAX;
	int64_t x907 = INT64_MIN;
	static int8_t x908 = INT8_MAX;
	volatile uint64_t t189 = 2018LLU;

    t189 = (((x905-x906)-x907)|x908);

    if (t189 != 9223372036854775167LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x912 = 0;
	volatile int64_t t190 = 1634923LL;

    t190 = (((x909-x910)-x911)|x912);

    if (t190 != 2206LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x921 = INT64_MAX;
	int8_t x922 = INT8_MAX;
	static int8_t x923 = -24;
	int64_t x924 = INT64_MIN;
	static volatile int64_t t191 = -58009805395LL;

    t191 = (((x921-x922)-x923)|x924);

    if (t191 != -104LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x925 = INT64_MAX;
	static uint32_t x927 = UINT32_MAX;
	volatile int64_t t192 = -702097LL;

    t192 = (((x925-x926)-x927)|x928);

    if (t192 != -43LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x929 = 2937;
	volatile uint64_t x931 = 1522LLU;
	uint64_t x932 = UINT64_MAX;
	volatile uint64_t t193 = UINT64_MAX;

    t193 = (((x929-x930)-x931)|x932);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x938 = INT16_MIN;
	uint16_t x939 = UINT16_MAX;

    t194 = (((x937-x938)-x939)|x940);

    if (t194 != -32741) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x941 = INT16_MIN;
	int64_t x942 = -435752LL;
	uint32_t x943 = UINT32_MAX;
	static int64_t x944 = INT64_MAX;
	int64_t t195 = 1355069265767901036LL;

    t195 = (((x941-x942)-x943)|x944);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x945 = -1;
	static int32_t x947 = 505700;
	volatile uint8_t x948 = 77U;
	volatile int32_t t196 = 21;

    t196 = (((x945-x946)-x947)|x948);

    if (t196 != -506033) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x949 = -1;
	volatile int32_t x950 = INT32_MAX;
	int64_t x951 = INT64_MIN;
	volatile int64_t t197 = 78564980576295LL;

    t197 = (((x949-x950)-x951)|x952);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x953 = 21306U;
	uint16_t x954 = 176U;
	int16_t x955 = INT16_MAX;
	static uint64_t x956 = 244LLU;

    t198 = (((x953-x954)-x955)|x956);

    if (t198 != 18446744073709540095LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x959 = 25U;
	int16_t x960 = 7465;
	int64_t t199 = -494444182270377LL;

    t199 = (((x957-x958)-x959)|x960);

    if (t199 != -9223372036854768273LL) { NG(); } else { ; }
	
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

