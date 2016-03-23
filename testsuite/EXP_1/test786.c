
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

int64_t x1 = INT64_MIN;
static int8_t x4 = INT8_MIN;
static int64_t x5 = 678222874LL;
static uint64_t t2 = 524753941LLU;
uint64_t x14 = UINT64_MAX;
int8_t x16 = INT8_MAX;
int16_t x25 = -27;
int8_t x29 = -20;
volatile uint64_t t6 = 227998311LLU;
static int32_t x33 = INT32_MIN;
volatile uint64_t t7 = 310340781510001072LLU;
volatile uint64_t t8 = 507LLU;
volatile int64_t x43 = -5539164595472848LL;
int64_t x46 = 35489578LL;
volatile uint16_t x56 = 2U;
uint8_t x60 = 67U;
int8_t x61 = 28;
int64_t x65 = -1LL;
int16_t x68 = INT16_MAX;
volatile int8_t x71 = -1;
uint16_t x72 = 76U;
volatile int64_t x80 = INT64_MIN;
uint8_t x82 = 27U;
uint64_t t18 = UINT64_MAX;
int64_t t19 = -12909655967377614LL;
uint16_t x91 = 22U;
int32_t x93 = INT32_MIN;
volatile int32_t t21 = -55485495;
int64_t x108 = -1LL;
int64_t x117 = -53602916689276LL;
volatile int64_t x121 = 9269LL;
volatile int64_t t28 = 66955755LL;
int32_t x128 = 58966;
volatile uint64_t t29 = 8515911337719LLU;
static uint8_t x134 = 2U;
uint64_t t31 = 828LLU;
uint64_t t32 = 520397159929919371LLU;
int64_t t34 = 83LL;
int8_t x152 = -1;
uint64_t t35 = 1LLU;
int16_t x165 = INT16_MIN;
int16_t x166 = 15046;
volatile int32_t t38 = -58660;
int64_t x171 = INT64_MAX;
int32_t x174 = 194005;
int16_t x175 = INT16_MAX;
volatile uint64_t t40 = 94469711240LLU;
int32_t x179 = -1;
static volatile uint32_t t41 = 8105954U;
volatile int16_t x184 = 34;
uint32_t t42 = 48U;
volatile uint8_t x185 = 3U;
uint32_t x194 = UINT32_MAX;
int32_t x195 = INT32_MIN;
uint64_t x197 = 2708888139426LLU;
uint8_t x200 = 121U;
int32_t x211 = -1;
int16_t x215 = INT16_MIN;
uint32_t t50 = 211148088U;
int8_t x225 = -1;
int8_t x229 = 5;
volatile int16_t x234 = 1;
static int8_t x236 = INT8_MAX;
uint32_t x238 = 4U;
volatile uint32_t t55 = 62812412U;
static uint64_t t56 = 139170351995276692LLU;
static int64_t x245 = -1LL;
static uint64_t t57 = 49152595444LLU;
volatile uint16_t x249 = 1131U;
uint64_t x250 = 8230369458922607010LLU;
int32_t x251 = INT32_MIN;
volatile int32_t x253 = 3;
uint16_t x255 = 3805U;
int32_t x259 = INT32_MIN;
int64_t t60 = 858452964LL;
int16_t x267 = -1614;
static uint64_t t62 = 1021192425652789LLU;
static uint64_t x271 = UINT64_MAX;
uint64_t t63 = 50825LLU;
uint32_t x273 = UINT32_MAX;
int32_t x276 = INT32_MAX;
volatile int8_t x277 = 62;
uint16_t x278 = 11268U;
volatile uint16_t x281 = 25076U;
uint32_t x293 = 167371054U;
int16_t x295 = -3;
volatile uint32_t t69 = 133202U;
volatile int16_t x311 = -3;
volatile int32_t x313 = 59;
volatile uint64_t t75 = 9446422LLU;
int64_t t76 = 11111LL;
static uint16_t x350 = UINT16_MAX;
volatile uint8_t x351 = 0U;
volatile uint64_t t80 = 18641226LLU;
static int8_t x357 = -2;
uint16_t x367 = 1U;
int32_t t83 = 971943;
int64_t x378 = INT64_MIN;
volatile uint64_t t86 = 10LLU;
static uint64_t x392 = 363195274LLU;
static uint64_t t88 = 390798638283626484LLU;
int32_t x409 = INT32_MIN;
volatile int8_t x417 = INT8_MAX;
static int16_t x419 = 1;
static int64_t t94 = -1892197996LL;
uint16_t x429 = 0U;
int32_t x435 = INT32_MAX;
volatile uint64_t t98 = 653526LLU;
uint16_t x442 = 703U;
static int8_t x443 = -1;
volatile uint16_t x445 = 29153U;
static uint8_t x461 = UINT8_MAX;
static int32_t x463 = 162426329;
uint8_t x464 = UINT8_MAX;
uint64_t x465 = 467623LLU;
int8_t x467 = INT8_MIN;
volatile uint64_t t104 = 1985438712105509075LLU;
static int32_t x508 = -1;
int32_t x520 = 30070;
static uint64_t x521 = UINT64_MAX;
uint16_t x522 = UINT16_MAX;
int8_t x523 = -22;
uint64_t x525 = 118LLU;
volatile uint64_t t117 = 40LLU;
static uint64_t x532 = 398691LLU;
int32_t x534 = INT32_MAX;
int16_t x535 = INT16_MIN;
static uint8_t x540 = UINT8_MAX;
static int16_t x543 = INT16_MAX;
int8_t x544 = 5;
uint32_t x546 = UINT32_MAX;
static int32_t x556 = INT32_MAX;
int16_t x579 = INT16_MIN;
volatile uint64_t x586 = UINT64_MAX;
volatile uint64_t t131 = 52LLU;
uint32_t x594 = 413U;
static uint32_t x599 = UINT32_MAX;
uint64_t x602 = 27896LLU;
int64_t x605 = 0LL;
uint16_t x606 = UINT16_MAX;
int16_t x613 = INT16_MIN;
int8_t x614 = INT8_MIN;
volatile int64_t x629 = INT64_MAX;
int64_t x636 = -1LL;
int8_t x637 = -1;
int16_t x640 = INT16_MIN;
int32_t x648 = INT32_MIN;
volatile int64_t t145 = 23LL;
int32_t x652 = INT32_MIN;
int8_t x671 = 0;
int16_t x673 = INT16_MIN;
static int8_t x677 = -20;
int8_t x678 = INT8_MIN;
volatile int64_t x682 = INT64_MIN;
static volatile int32_t x690 = -1;
uint64_t x701 = 392988357772315LLU;
static volatile int8_t x704 = INT8_MIN;
static int16_t x708 = 1;
uint16_t x710 = 20U;
int32_t x711 = 46206434;
uint16_t x712 = 84U;
int32_t x715 = INT32_MIN;
static int8_t x721 = INT8_MIN;
static int8_t x723 = 1;
int8_t x726 = INT8_MIN;
volatile uint32_t t164 = 13984102U;
int32_t t165 = -1675341;
int64_t x739 = INT64_MIN;
static volatile uint64_t t166 = 163931016LLU;
volatile int64_t t168 = 216207246619660LL;
uint64_t x759 = UINT64_MAX;
int64_t x769 = INT64_MIN;
int16_t x771 = 15;
static int64_t t170 = 352299807969586586LL;
uint64_t x784 = 35886753651LLU;
int32_t x795 = -7686084;
int16_t x804 = -1;
int8_t x813 = -1;
int16_t x817 = 11;
volatile int8_t x820 = -1;
uint16_t x822 = 137U;
uint32_t x823 = UINT32_MAX;
int32_t x825 = 1;
int32_t x834 = 173307671;
uint64_t x835 = UINT64_MAX;
static uint32_t x843 = 217576U;
static int16_t x848 = INT16_MIN;
uint64_t x851 = 53404303293241LLU;
uint64_t x854 = UINT64_MAX;
uint16_t x855 = 26394U;
int8_t x860 = INT8_MAX;
uint64_t x861 = 134258LLU;
uint32_t x867 = 91U;
static uint8_t x868 = UINT8_MAX;
int16_t x876 = 1;
int32_t x879 = INT32_MIN;
static uint32_t t192 = 299039U;
int64_t x889 = -1LL;
static int32_t x894 = INT32_MAX;
int8_t x895 = 16;
int32_t x897 = 444664765;
static int16_t x903 = 6558;
uint32_t x904 = UINT32_MAX;


void f0(void) {
    	uint16_t x2 = UINT16_MAX;
	uint16_t x3 = UINT16_MAX;
	int64_t t0 = 755525397562012984LL;

    t0 = (((x1%x2)+x3)-x4);

    if (t0 != 32895LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x6 = INT8_MAX;
	int32_t x7 = -805084934;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 4899922920LLU;

    t1 = (((x5%x6)+x7)-x8);

    if (t1 != 18446744072904466758LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 136328845U;
	uint16_t x10 = 7U;
	static volatile uint8_t x11 = 3U;
	static uint64_t x12 = 3375998854677564066LLU;

    t2 = (((x9%x10)+x11)-x12);

    if (t2 != 15070745219031987555LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	int16_t x15 = 6334;
	uint64_t t3 = 33695010LLU;

    t3 = (((x13%x14)+x15)-x16);

    if (t3 != 6462LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint32_t x18 = 172U;
	uint16_t x19 = 421U;
	volatile int8_t x20 = INT8_MIN;
	static int64_t t4 = -331030695808LL;

    t4 = (((x17%x18)+x19)-x20);

    if (t4 != 421LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x26 = -16668734;
	static int8_t x27 = INT8_MIN;
	volatile int32_t x28 = INT32_MIN;
	int32_t t5 = -2;

    t5 = (((x25%x26)+x27)-x28);

    if (t5 != 2147483493) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x30 = 278LLU;
	static int8_t x31 = INT8_MIN;
	static int64_t x32 = INT64_MIN;

    t6 = (((x29%x30)+x31)-x32);

    if (t6 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x34 = INT16_MIN;
	uint64_t x35 = UINT64_MAX;
	volatile int32_t x36 = INT32_MIN;

    t7 = (((x33%x34)+x35)-x36);

    if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	volatile int64_t x38 = INT64_MAX;
	uint64_t x39 = 48886LLU;
	uint32_t x40 = UINT32_MAX;

    t8 = (((x37%x38)+x39)-x40);

    if (t8 != 18446744067267149559LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = UINT16_MAX;
	static int32_t x42 = -167;
	uint16_t x44 = 2U;
	int64_t t9 = 4234923348990163367LL;

    t9 = (((x41%x42)+x43)-x44);

    if (t9 != -5539164595472779LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x45 = 909U;
	uint8_t x47 = UINT8_MAX;
	volatile uint8_t x48 = 13U;
	int64_t t10 = -11227379LL;

    t10 = (((x45%x46)+x47)-x48);

    if (t10 != 1151LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -5;
	int64_t x50 = -19LL;
	static int32_t x51 = -1;
	int32_t x52 = INT32_MAX;
	static int64_t t11 = -892677348LL;

    t11 = (((x49%x50)+x51)-x52);

    if (t11 != -2147483653LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MIN;
	int64_t x54 = INT64_MIN;
	int64_t x55 = INT64_MAX;
	static volatile int64_t t12 = 2225285310270550998LL;

    t12 = (((x53%x54)+x55)-x56);

    if (t12 != 9223372034707292157LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x57 = 70U;
	int64_t x58 = -377823LL;
	int64_t x59 = -1LL;
	volatile int64_t t13 = -43627478975977LL;

    t13 = (((x57%x58)+x59)-x60);

    if (t13 != 2LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x62 = -273686572;
	static int8_t x63 = INT8_MIN;
	uint64_t x64 = 2337515LLU;
	uint64_t t14 = 135663LLU;

    t14 = (((x61%x62)+x63)-x64);

    if (t14 != 18446744073707214001LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x66 = INT16_MIN;
	static int32_t x67 = 1445329;
	volatile int64_t t15 = 2943637792LL;

    t15 = (((x65%x66)+x67)-x68);

    if (t15 != 1412561LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x69 = INT8_MIN;
	volatile int32_t x70 = INT32_MIN;
	volatile int32_t t16 = 1050;

    t16 = (((x69%x70)+x71)-x72);

    if (t16 != -205) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x77 = -16065375034237777LL;
	static uint16_t x78 = UINT16_MAX;
	int16_t x79 = -1;
	int64_t t17 = 9055276336596LL;

    t17 = (((x77%x78)+x79)-x80);

    if (t17 != 9223372036854770940LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = 2;
	uint64_t x83 = UINT64_MAX;
	int8_t x84 = 2;

    t18 = (((x81%x82)+x83)-x84);

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MIN;
	static volatile uint16_t x86 = 7332U;
	int64_t x87 = INT64_MAX;
	uint16_t x88 = 3U;

    t19 = (((x85%x86)+x87)-x88);

    if (t19 != 9223372036854772364LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = 439554;
	int32_t x90 = -106;
	static int8_t x92 = -1;
	int32_t t20 = 3836132;

    t20 = (((x89%x90)+x91)-x92);

    if (t20 != 101) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x94 = -1;
	int8_t x95 = -1;
	int32_t x96 = -1;

    t21 = (((x93%x94)+x95)-x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MIN;
	uint8_t x98 = UINT8_MAX;
	uint16_t x99 = 0U;
	int16_t x100 = INT16_MIN;
	volatile int64_t t22 = -42629008LL;

    t22 = (((x97%x98)+x99)-x100);

    if (t22 != 32640LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 970987U;
	uint16_t x102 = 8269U;
	volatile int32_t x103 = INT32_MAX;
	int32_t x104 = INT32_MIN;
	static volatile uint32_t t23 = 11U;

    t23 = (((x101%x102)+x103)-x104);

    if (t23 != 3513U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x105 = UINT8_MAX;
	uint16_t x106 = 339U;
	uint8_t x107 = UINT8_MAX;
	int64_t t24 = 17542021403288160LL;

    t24 = (((x105%x106)+x107)-x108);

    if (t24 != 511LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x109 = 2878LLU;
	volatile int16_t x110 = INT16_MIN;
	int8_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	volatile uint64_t t25 = 50497LLU;

    t25 = (((x109%x110)+x111)-x112);

    if (t25 != 2622LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x113 = -13;
	uint32_t x114 = UINT32_MAX;
	uint8_t x115 = UINT8_MAX;
	uint64_t x116 = 1LLU;
	uint64_t t26 = 176259453LLU;

    t26 = (((x113%x114)+x115)-x116);

    if (t26 != 241LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x118 = 2199U;
	int32_t x119 = INT32_MIN;
	volatile uint8_t x120 = 12U;
	volatile int64_t t27 = -1LL;

    t27 = (((x117%x118)+x119)-x120);

    if (t27 != -2147485086LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x122 = 2;
	volatile uint32_t x123 = 350258160U;
	int8_t x124 = INT8_MIN;

    t28 = (((x121%x122)+x123)-x124);

    if (t28 != 350258289LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x125 = 8026473084LLU;
	static uint32_t x126 = 2087238U;
	int32_t x127 = INT32_MIN;

    t29 = (((x125%x126)+x127)-x128);

    if (t29 != 18446744071563051976LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MAX;
	static int64_t x131 = -10041300067LL;
	int16_t x132 = -1;
	volatile int64_t t30 = -142770552062LL;

    t30 = (((x129%x130)+x131)-x132);

    if (t30 != -10041332834LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x133 = INT32_MIN;
	volatile int16_t x135 = INT16_MIN;
	volatile uint64_t x136 = 3134489649419677LLU;

    t31 = (((x133%x134)+x135)-x136);

    if (t31 != 18443609584060099171LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x137 = INT64_MIN;
	uint8_t x138 = 118U;
	static uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MAX;

    t32 = (((x137%x138)+x139)-x140);

    if (t32 != 18446744073709551456LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x141 = INT32_MIN;
	uint16_t x142 = 7086U;
	int32_t x143 = 95;
	int8_t x144 = -1;
	volatile int32_t t33 = -954810537;

    t33 = (((x141%x142)+x143)-x144);

    if (t33 != -392) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = INT64_MAX;
	volatile int32_t x146 = 36658;
	static int64_t x147 = 109994138923828LL;
	volatile int64_t x148 = INT64_MAX;

    t34 = (((x145%x146)+x147)-x148);

    if (t34 != -9223262042715818124LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MIN;
	uint64_t x150 = UINT64_MAX;
	int16_t x151 = INT16_MIN;

    t35 = (((x149%x150)+x151)-x152);

    if (t35 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = 661687510;
	static int32_t x154 = -1749;
	volatile uint8_t x155 = 7U;
	int16_t x156 = INT16_MIN;
	int32_t t36 = -204175008;

    t36 = (((x153%x154)+x155)-x156);

    if (t36 != 33358) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x161 = 523;
	int64_t x162 = INT64_MIN;
	volatile int16_t x163 = -61;
	static uint16_t x164 = UINT16_MAX;
	volatile int64_t t37 = 4059LL;

    t37 = (((x161%x162)+x163)-x164);

    if (t37 != -65073LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x167 = -1;
	uint16_t x168 = 10U;

    t38 = (((x165%x166)+x167)-x168);

    if (t38 != -2687) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x169 = INT64_MAX;
	uint64_t x170 = 1689751338643029LLU;
	volatile uint16_t x172 = 4U;
	static uint64_t t39 = 864LLU;

    t39 = (((x169%x170)+x171)-x172);

    if (t39 != 9224081267395899328LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = 229976543698879LL;
	uint64_t x176 = 1LLU;

    t40 = (((x173%x174)+x175)-x176);

    if (t40 != 147900LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x177 = 1U;
	uint16_t x178 = 274U;
	volatile int16_t x180 = INT16_MIN;

    t41 = (((x177%x178)+x179)-x180);

    if (t41 != 32768U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x181 = 1881943130U;
	uint32_t x182 = UINT32_MAX;
	uint16_t x183 = 553U;

    t42 = (((x181%x182)+x183)-x184);

    if (t42 != 1881943649U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x186 = -1;
	volatile int32_t x187 = -1;
	int16_t x188 = INT16_MAX;
	static volatile int32_t t43 = 867;

    t43 = (((x185%x186)+x187)-x188);

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = INT64_MIN;
	int16_t x190 = -1;
	static int16_t x191 = INT16_MAX;
	int16_t x192 = -1;
	int64_t t44 = -210602609040LL;

    t44 = (((x189%x190)+x191)-x192);

    if (t44 != 32768LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x193 = UINT32_MAX;
	volatile int32_t x196 = -8128;
	uint32_t t45 = 27149472U;

    t45 = (((x193%x194)+x195)-x196);

    if (t45 != 2147491776U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x198 = 32135228U;
	static uint16_t x199 = 38U;
	uint64_t t46 = 32191071018LLU;

    t46 = (((x197%x198)+x199)-x200);

    if (t46 != 16959855LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x205 = 3U;
	uint16_t x206 = 210U;
	uint32_t x207 = UINT32_MAX;
	uint64_t x208 = 39692320225612LLU;
	volatile uint64_t t47 = 2471295198LLU;

    t47 = (((x205%x206)+x207)-x208);

    if (t47 != 18446704381389326006LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x209 = 3453266232LLU;
	uint16_t x210 = 10200U;
	static uint8_t x212 = 16U;
	uint64_t t48 = 22919802331LLU;

    t48 = (((x209%x210)+x211)-x212);

    if (t48 != 5215LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = INT32_MIN;
	int16_t x214 = INT16_MAX;
	int8_t x216 = -3;
	volatile int32_t t49 = -124;

    t49 = (((x213%x214)+x215)-x216);

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x217 = -1;
	static int8_t x218 = -1;
	volatile uint32_t x219 = 559893395U;
	uint32_t x220 = 491127998U;

    t50 = (((x217%x218)+x219)-x220);

    if (t50 != 68765397U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x221 = 27574836314LLU;
	uint64_t x222 = 6120701LLU;
	uint8_t x223 = 29U;
	static uint8_t x224 = UINT8_MAX;
	uint64_t t51 = 88244056954LLU;

    t51 = (((x221%x222)+x223)-x224);

    if (t51 != 1078083LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	int16_t x228 = -9058;
	static volatile int32_t t52 = -21;

    t52 = (((x225%x226)+x227)-x228);

    if (t52 != 8929) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x230 = INT16_MIN;
	uint16_t x231 = 11460U;
	uint32_t x232 = 11U;
	volatile uint32_t t53 = 7376U;

    t53 = (((x229%x230)+x231)-x232);

    if (t53 != 11454U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x233 = INT8_MAX;
	int64_t x235 = -1LL;
	static int64_t t54 = -274764723563251LL;

    t54 = (((x233%x234)+x235)-x236);

    if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x237 = INT16_MAX;
	int8_t x239 = INT8_MAX;
	uint16_t x240 = UINT16_MAX;

    t55 = (((x237%x238)+x239)-x240);

    if (t55 != 4294901891U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x241 = INT8_MAX;
	int32_t x242 = -3683538;
	int64_t x243 = INT64_MIN;
	uint64_t x244 = 10179LLU;

    t56 = (((x241%x242)+x243)-x244);

    if (t56 != 9223372036854765756LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x246 = -1;
	static uint64_t x247 = 26503091077268694LLU;
	volatile uint64_t x248 = 11662829LLU;

    t57 = (((x245%x246)+x247)-x248);

    if (t57 != 26503091065605865LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x252 = 37U;
	uint64_t t58 = 2242064834135052LLU;

    t58 = (((x249%x250)+x251)-x252);

    if (t58 != 18446744071562069062LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x254 = INT8_MIN;
	int64_t x256 = 0LL;
	volatile int64_t t59 = 4303583397834LL;

    t59 = (((x253%x254)+x255)-x256);

    if (t59 != 3808LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = -11141248715357LL;
	static int8_t x258 = -1;
	int64_t x260 = -1LL;

    t60 = (((x257%x258)+x259)-x260);

    if (t60 != -2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	volatile int8_t x263 = INT8_MAX;
	int32_t x264 = 680684;
	static volatile int32_t t61 = -148065061;

    t61 = (((x261%x262)+x263)-x264);

    if (t61 != -680557) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x265 = UINT64_MAX;
	int64_t x266 = INT64_MAX;
	static uint16_t x268 = 13U;

    t62 = (((x265%x266)+x267)-x268);

    if (t62 != 18446744073709549990LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x269 = -1994;
	static int8_t x270 = INT8_MAX;
	static uint32_t x272 = 6U;

    t63 = (((x269%x270)+x271)-x272);

    if (t63 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x274 = UINT16_MAX;
	static uint64_t x275 = 811163889596718671LLU;
	volatile uint64_t t64 = 1242991257385577LLU;

    t64 = (((x273%x274)+x275)-x276);

    if (t64 != 811163887449235024LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x279 = 63935461U;
	int64_t x280 = -1LL;
	volatile int64_t t65 = -814836637LL;

    t65 = (((x277%x278)+x279)-x280);

    if (t65 != 63935524LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x282 = 14U;
	static volatile int16_t x283 = -1994;
	static int16_t x284 = 16;
	int32_t t66 = 44639930;

    t66 = (((x281%x282)+x283)-x284);

    if (t66 != -2008) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = INT32_MIN;
	uint32_t x286 = UINT32_MAX;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = -8;
	volatile uint64_t t67 = 619048630587LLU;

    t67 = (((x285%x286)+x287)-x288);

    if (t67 != 2147483655LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x289 = 13U;
	volatile int32_t x290 = 3;
	uint16_t x291 = 3U;
	int8_t x292 = 1;
	static int32_t t68 = 0;

    t68 = (((x289%x290)+x291)-x292);

    if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x294 = 333014U;
	int16_t x296 = INT16_MIN;

    t69 = (((x293%x294)+x295)-x296);

    if (t69 != 230791U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x297 = UINT32_MAX;
	volatile int16_t x298 = 334;
	int8_t x299 = INT8_MIN;
	volatile int64_t x300 = INT64_MAX;
	volatile int64_t t70 = -3066141481307571LL;

    t70 = (((x297%x298)+x299)-x300);

    if (t70 != -9223372036854775762LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x301 = -650279056143658255LL;
	static volatile int8_t x302 = INT8_MAX;
	uint8_t x303 = 0U;
	int64_t x304 = 253301LL;
	static int64_t t71 = 2291LL;

    t71 = (((x301%x302)+x303)-x304);

    if (t71 != -253362LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x309 = 54U;
	int32_t x310 = INT32_MIN;
	int32_t x312 = INT32_MAX;
	static int32_t t72 = 0;

    t72 = (((x309%x310)+x311)-x312);

    if (t72 != -2147483596) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x314 = INT8_MIN;
	volatile int32_t x315 = -1;
	uint8_t x316 = UINT8_MAX;
	int32_t t73 = -433901;

    t73 = (((x313%x314)+x315)-x316);

    if (t73 != -197) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x317 = 969906842219324LLU;
	int8_t x318 = -33;
	uint16_t x319 = UINT16_MAX;
	int16_t x320 = 6452;
	static uint64_t t74 = 34LLU;

    t74 = (((x317%x318)+x319)-x320);

    if (t74 != 969906842278407LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x321 = INT64_MIN;
	static uint64_t x322 = 116982104526LLU;
	static int64_t x323 = INT64_MIN;
	int16_t x324 = -1;

    t75 = (((x321%x322)+x323)-x324);

    if (t75 != 9223372046812354343LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x325 = -15;
	static uint32_t x326 = 633957448U;
	uint32_t x327 = UINT32_MAX;
	static int64_t x328 = -1LL;

    t76 = (((x325%x326)+x327)-x328);

    if (t76 != 491222593LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x333 = 1254035U;
	uint16_t x334 = 945U;
	int32_t x335 = INT32_MAX;
	int16_t x336 = INT16_MIN;
	static volatile uint32_t t77 = 162U;

    t77 = (((x333%x334)+x335)-x336);

    if (t77 != 2147516435U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x341 = -2921227LL;
	uint32_t x342 = 252996U;
	int16_t x343 = INT16_MIN;
	int32_t x344 = -1;
	int64_t t78 = -1448975043126736LL;

    t78 = (((x341%x342)+x343)-x344);

    if (t78 != -171038LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x349 = 598514;
	uint16_t x352 = 431U;
	volatile int32_t t79 = -3549;

    t79 = (((x349%x350)+x351)-x352);

    if (t79 != 8268) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x353 = 131662441317LLU;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -14751573323LL;
	volatile int64_t x356 = -1LL;

    t80 = (((x353%x354)+x355)-x356);

    if (t80 != 116910867995LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x358 = UINT64_MAX;
	int64_t x359 = -264275LL;
	int32_t x360 = INT32_MIN;
	volatile uint64_t t81 = 5923298628174708169LLU;

    t81 = (((x357%x358)+x359)-x360);

    if (t81 != 2147219371LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x361 = INT64_MIN;
	int32_t x362 = -8;
	uint64_t x363 = UINT64_MAX;
	static uint16_t x364 = 12020U;
	static uint64_t t82 = 4615756631462351396LLU;

    t82 = (((x361%x362)+x363)-x364);

    if (t82 != 18446744073709539595LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x365 = UINT16_MAX;
	static uint8_t x366 = UINT8_MAX;
	uint16_t x368 = 1117U;

    t83 = (((x365%x366)+x367)-x368);

    if (t83 != -1116) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x369 = INT32_MAX;
	int8_t x370 = 8;
	uint64_t x371 = UINT64_MAX;
	uint64_t x372 = 421814LLU;
	uint64_t t84 = 4661828LLU;

    t84 = (((x369%x370)+x371)-x372);

    if (t84 != 18446744073709129808LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x377 = INT16_MIN;
	volatile uint64_t x379 = 0LLU;
	int8_t x380 = INT8_MIN;
	volatile uint64_t t85 = 11LLU;

    t85 = (((x377%x378)+x379)-x380);

    if (t85 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x381 = 1903823LLU;
	volatile uint64_t x382 = 64665826873154626LLU;
	uint8_t x383 = UINT8_MAX;
	int64_t x384 = INT64_MIN;

    t86 = (((x381%x382)+x383)-x384);

    if (t86 != 9223372036856679886LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x385 = 3U;
	int8_t x386 = INT8_MAX;
	static uint32_t x387 = UINT32_MAX;
	int64_t x388 = 9920LL;
	int64_t t87 = -12600956513LL;

    t87 = (((x385%x386)+x387)-x388);

    if (t87 != -9918LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	static uint16_t x391 = 1007U;

    t88 = (((x389%x390)+x391)-x392);

    if (t88 != 18446744073346357349LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x393 = INT64_MAX;
	static int32_t x394 = INT32_MIN;
	uint32_t x395 = 1129729134U;
	volatile uint16_t x396 = 11U;
	int64_t t89 = 3549866LL;

    t89 = (((x393%x394)+x395)-x396);

    if (t89 != 3277212770LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x401 = INT8_MIN;
	static volatile uint16_t x402 = 569U;
	static uint64_t x403 = UINT64_MAX;
	static uint64_t x404 = UINT64_MAX;
	volatile uint64_t t90 = 5011850329494814LLU;

    t90 = (((x401%x402)+x403)-x404);

    if (t90 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x405 = INT16_MIN;
	uint8_t x406 = 1U;
	int64_t x407 = -1LL;
	uint8_t x408 = 1U;
	static volatile int64_t t91 = -130949858827707787LL;

    t91 = (((x405%x406)+x407)-x408);

    if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint16_t x410 = 11360U;
	uint32_t x411 = 244782232U;
	uint64_t x412 = 2582759LLU;
	volatile uint64_t t92 = 7LLU;

    t92 = (((x409%x410)+x411)-x412);

    if (t92 != 242198865LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint16_t x418 = 1U;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t93 = 1;

    t93 = (((x417%x418)+x419)-x420);

    if (t93 != -254) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x421 = INT64_MIN;
	static int64_t x422 = -129395329129402322LL;
	int16_t x423 = -1;
	uint8_t x424 = UINT8_MAX;

    t94 = (((x421%x422)+x423)-x424);

    if (t94 != -36303668667211202LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x425 = 3U;
	int16_t x426 = 3;
	int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t95 = -19004;

    t95 = (((x425%x426)+x427)-x428);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x430 = UINT32_MAX;
	volatile int32_t x431 = INT32_MAX;
	uint8_t x432 = UINT8_MAX;
	uint32_t t96 = 3U;

    t96 = (((x429%x430)+x431)-x432);

    if (t96 != 2147483392U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x433 = 15212834127994LLU;
	int8_t x434 = 42;
	uint64_t x436 = UINT64_MAX;
	static uint64_t t97 = 4898647660258118780LLU;

    t97 = (((x433%x434)+x435)-x436);

    if (t97 != 2147483682LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x437 = 3839702214LLU;
	static int8_t x438 = -1;
	static uint64_t x439 = UINT64_MAX;
	int64_t x440 = INT64_MAX;

    t98 = (((x437%x438)+x439)-x440);

    if (t98 != 9223372040694478022LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x441 = -204036543969123391LL;
	int64_t x444 = -350LL;
	volatile int64_t t99 = -6LL;

    t99 = (((x441%x442)+x443)-x444);

    if (t99 != -104LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x446 = 32823939794404238LL;
	uint32_t x447 = 3504U;
	static int8_t x448 = -1;
	int64_t t100 = -1946980LL;

    t100 = (((x445%x446)+x447)-x448);

    if (t100 != 32658LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x453 = 151108212283933LLU;
	static int16_t x454 = INT16_MIN;
	volatile uint8_t x455 = 29U;
	static int16_t x456 = INT16_MIN;
	uint64_t t101 = 189999470845015LLU;

    t101 = (((x453%x454)+x455)-x456);

    if (t101 != 151108212316730LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x457 = 7254U;
	uint16_t x458 = UINT16_MAX;
	int16_t x459 = INT16_MIN;
	static uint8_t x460 = UINT8_MAX;
	uint32_t t102 = 155560U;

    t102 = (((x457%x458)+x459)-x460);

    if (t102 != 4294941527U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x462 = INT64_MAX;
	static int64_t t103 = 56679LL;

    t103 = (((x461%x462)+x463)-x464);

    if (t103 != 162426329LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x466 = INT32_MAX;
	int32_t x468 = INT32_MIN;

    t104 = (((x465%x466)+x467)-x468);

    if (t104 != 2147951143LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x473 = INT8_MIN;
	int8_t x474 = INT8_MIN;
	int8_t x475 = INT8_MIN;
	int8_t x476 = -1;
	static volatile int32_t t105 = -3;

    t105 = (((x473%x474)+x475)-x476);

    if (t105 != -127) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x477 = 5944U;
	uint64_t x478 = 7481191LLU;
	int32_t x479 = INT32_MAX;
	volatile int32_t x480 = INT32_MIN;
	uint64_t t106 = 3915100439685851LLU;

    t106 = (((x477%x478)+x479)-x480);

    if (t106 != 4294973239LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x481 = 0;
	volatile int64_t x482 = -636496744649051906LL;
	int8_t x483 = 1;
	volatile uint8_t x484 = 0U;
	volatile int64_t t107 = -113LL;

    t107 = (((x481%x482)+x483)-x484);

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int64_t x490 = -1LL;
	int16_t x491 = -1;
	volatile int8_t x492 = 0;
	volatile uint64_t t108 = UINT64_MAX;

    t108 = (((x489%x490)+x491)-x492);

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x493 = UINT64_MAX;
	int32_t x494 = INT32_MIN;
	uint64_t x495 = UINT64_MAX;
	uint32_t x496 = 1369531U;
	uint64_t t109 = 127LLU;

    t109 = (((x493%x494)+x495)-x496);

    if (t109 != 2146114115LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x497 = 163249LL;
	uint8_t x498 = 3U;
	uint16_t x499 = UINT16_MAX;
	static uint32_t x500 = 3816U;
	int64_t t110 = -5LL;

    t110 = (((x497%x498)+x499)-x500);

    if (t110 != 61720LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint32_t x501 = 3U;
	uint8_t x502 = 15U;
	int64_t x503 = INT64_MIN;
	int8_t x504 = INT8_MIN;
	int64_t t111 = 145764440LL;

    t111 = (((x501%x502)+x503)-x504);

    if (t111 != -9223372036854775677LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x505 = INT64_MIN;
	static volatile uint16_t x506 = 7674U;
	static uint64_t x507 = UINT64_MAX;
	volatile uint64_t t112 = 396784649467444039LLU;

    t112 = (((x505%x506)+x507)-x508);

    if (t112 != 18446744073709551470LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x509 = INT64_MAX;
	uint64_t x510 = 6LLU;
	uint32_t x511 = 315U;
	static int8_t x512 = -18;
	uint64_t t113 = 2416045430886182LLU;

    t113 = (((x509%x510)+x511)-x512);

    if (t113 != 334LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x513 = 12U;
	static int64_t x514 = -3716848958593030LL;
	volatile int16_t x515 = INT16_MIN;
	static volatile int16_t x516 = -1;
	volatile int64_t t114 = 2629136333LL;

    t114 = (((x513%x514)+x515)-x516);

    if (t114 != -32755LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x518 = INT32_MIN;
	static int32_t x519 = 29789640;
	int32_t t115 = 5;

    t115 = (((x517%x518)+x519)-x520);

    if (t115 != 29726802) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x524 = 246;
	static volatile uint64_t t116 = 95412201LLU;

    t116 = (((x521%x522)+x523)-x524);

    if (t116 != 18446744073709551348LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x526 = 173U;
	int8_t x527 = 0;
	int8_t x528 = INT8_MIN;

    t117 = (((x525%x526)+x527)-x528);

    if (t117 != 246LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x529 = -1LL;
	int16_t x530 = INT16_MIN;
	static int64_t x531 = -3017640412948LL;
	uint64_t t118 = 9469139749LLU;

    t118 = (((x529%x530)+x531)-x532);

    if (t118 != 18446741056068739976LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x533 = 1658443005352LLU;
	volatile int8_t x536 = -1;
	static volatile uint64_t t119 = 104623LLU;

    t119 = (((x533%x534)+x535)-x536);

    if (t119 != 585597101LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x537 = INT32_MIN;
	static int8_t x538 = -1;
	uint16_t x539 = UINT16_MAX;
	static volatile int32_t t120 = -1032;

    t120 = (((x537%x538)+x539)-x540);

    if (t120 != 65280) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x541 = INT64_MAX;
	int32_t x542 = -60664;
	int64_t t121 = -849961085LL;

    t121 = (((x541%x542)+x543)-x544);

    if (t121 != 44401LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x545 = INT16_MIN;
	int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MAX;
	uint32_t t122 = 8048074U;

    t122 = (((x545%x546)+x547)-x548);

    if (t122 != 2147450753U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x549 = 4U;
	static int32_t x550 = INT32_MAX;
	uint16_t x551 = UINT16_MAX;
	static uint16_t x552 = 0U;
	uint32_t t123 = 21U;

    t123 = (((x549%x550)+x551)-x552);

    if (t123 != 65539U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x554 = INT64_MAX;
	uint64_t x555 = UINT64_MAX;
	uint64_t t124 = 738923557483LLU;

    t124 = (((x553%x554)+x555)-x556);

    if (t124 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x557 = 1173;
	static uint8_t x558 = UINT8_MAX;
	static int32_t x559 = INT32_MIN;
	int16_t x560 = -529;
	static volatile int32_t t125 = -44315461;

    t125 = (((x557%x558)+x559)-x560);

    if (t125 != -2147482966) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x561 = UINT32_MAX;
	static volatile uint8_t x562 = 10U;
	static int32_t x563 = -630733;
	int64_t x564 = INT64_MAX;
	int64_t t126 = -3064414526LL;

    t126 = (((x561%x562)+x563)-x564);

    if (t126 != -9223372032560439239LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x569 = 8060;
	int16_t x570 = INT16_MAX;
	volatile int16_t x571 = INT16_MIN;
	static uint8_t x572 = 53U;
	volatile int32_t t127 = 9;

    t127 = (((x569%x570)+x571)-x572);

    if (t127 != -24761) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x573 = 31U;
	uint16_t x574 = 15U;
	static volatile int8_t x575 = INT8_MIN;
	static int32_t x576 = INT32_MIN;
	int32_t t128 = -5105832;

    t128 = (((x573%x574)+x575)-x576);

    if (t128 != 2147483521) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x577 = 1;
	int64_t x578 = 57027830941515920LL;
	uint64_t x580 = 0LLU;
	uint64_t t129 = 11LLU;

    t129 = (((x577%x578)+x579)-x580);

    if (t129 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x581 = 221U;
	int64_t x582 = INT64_MIN;
	uint8_t x583 = 0U;
	static int64_t x584 = -1LL;
	int64_t t130 = -292402964293LL;

    t130 = (((x581%x582)+x583)-x584);

    if (t130 != 222LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x585 = INT8_MAX;
	int64_t x587 = INT64_MAX;
	uint32_t x588 = UINT32_MAX;

    t131 = (((x585%x586)+x587)-x588);

    if (t131 != 9223372032559808639LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	int16_t x595 = -10182;
	int8_t x596 = INT8_MIN;
	uint32_t t132 = 9054U;

    t132 = (((x593%x594)+x595)-x596);

    if (t132 != 4294957523U) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x597 = 1U;
	int64_t x598 = INT64_MIN;
	static uint16_t x600 = UINT16_MAX;
	volatile int64_t t133 = 157676381249418888LL;

    t133 = (((x597%x598)+x599)-x600);

    if (t133 != 4294901761LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x601 = 594553601U;
	int64_t x603 = INT64_MAX;
	int32_t x604 = INT32_MIN;
	uint64_t t134 = 5LLU;

    t134 = (((x601%x602)+x603)-x604);

    if (t134 != 9223372039002265608LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x607 = -1LL;
	int32_t x608 = 15;
	volatile int64_t t135 = -895191654LL;

    t135 = (((x605%x606)+x607)-x608);

    if (t135 != -16LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x609 = INT16_MIN;
	static int32_t x610 = 49747;
	int16_t x611 = -15;
	int8_t x612 = -1;
	static int32_t t136 = -272;

    t136 = (((x609%x610)+x611)-x612);

    if (t136 != -32782) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x615 = 18U;
	int64_t x616 = -1LL;
	int64_t t137 = 3077LL;

    t137 = (((x613%x614)+x615)-x616);

    if (t137 != 19LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x617 = INT8_MIN;
	int32_t x618 = INT32_MAX;
	volatile int16_t x619 = INT16_MIN;
	int64_t x620 = 1631348383297LL;
	volatile int64_t t138 = -80838LL;

    t138 = (((x617%x618)+x619)-x620);

    if (t138 != -1631348416193LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x621 = UINT8_MAX;
	int64_t x622 = INT64_MIN;
	volatile int8_t x623 = -17;
	static uint64_t x624 = 6817215182729LLU;
	static uint64_t t139 = 1LLU;

    t139 = (((x621%x622)+x623)-x624);

    if (t139 != 18446737256494369125LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x625 = 0;
	int8_t x626 = INT8_MAX;
	volatile uint16_t x627 = 638U;
	int64_t x628 = INT64_MAX;
	int64_t t140 = 207761229130097LL;

    t140 = (((x625%x626)+x627)-x628);

    if (t140 != -9223372036854775169LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x630 = 3;
	static int64_t x631 = -1LL;
	int16_t x632 = -370;
	int64_t t141 = -2210790198532415753LL;

    t141 = (((x629%x630)+x631)-x632);

    if (t141 != 370LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x633 = 12;
	int8_t x634 = -5;
	static int8_t x635 = INT8_MIN;
	int64_t t142 = 109380483590111517LL;

    t142 = (((x633%x634)+x635)-x636);

    if (t142 != -125LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x638 = UINT32_MAX;
	int8_t x639 = 14;
	volatile uint32_t t143 = 5537U;

    t143 = (((x637%x638)+x639)-x640);

    if (t143 != 32782U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x641 = 681687492;
	uint64_t x642 = UINT64_MAX;
	uint16_t x643 = 37U;
	int8_t x644 = 40;
	uint64_t t144 = 82850938843084LLU;

    t144 = (((x641%x642)+x643)-x644);

    if (t144 != 681687489LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x645 = INT64_MAX;
	static uint16_t x646 = UINT16_MAX;
	int32_t x647 = INT32_MIN;

    t145 = (((x645%x646)+x647)-x648);

    if (t145 != 32767LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x649 = INT32_MIN;
	static uint64_t x650 = 2927861LLU;
	uint16_t x651 = 18U;
	static volatile uint64_t t146 = 0LLU;

    t146 = (((x649%x650)+x651)-x652);

    if (t146 != 2149722709LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x653 = INT64_MAX;
	int8_t x654 = INT8_MIN;
	int8_t x655 = -1;
	static volatile uint64_t x656 = 7449520014LLU;
	volatile uint64_t t147 = 468172389LLU;

    t147 = (((x653%x654)+x655)-x656);

    if (t147 != 18446744066260031728LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x657 = INT16_MAX;
	int64_t x658 = INT64_MIN;
	int8_t x659 = INT8_MIN;
	int32_t x660 = INT32_MIN;
	volatile int64_t t148 = -916LL;

    t148 = (((x657%x658)+x659)-x660);

    if (t148 != 2147516287LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x661 = INT32_MIN;
	int64_t x662 = -2LL;
	int32_t x663 = 133;
	int16_t x664 = 4466;
	int64_t t149 = 0LL;

    t149 = (((x661%x662)+x663)-x664);

    if (t149 != -4333LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x665 = INT8_MAX;
	int16_t x666 = -1;
	uint8_t x667 = UINT8_MAX;
	static int8_t x668 = -29;
	int32_t t150 = -1311;

    t150 = (((x665%x666)+x667)-x668);

    if (t150 != 284) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x669 = INT16_MIN;
	int8_t x670 = 28;
	static uint16_t x672 = 0U;
	volatile int32_t t151 = 13686;

    t151 = (((x669%x670)+x671)-x672);

    if (t151 != -8) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x674 = INT16_MIN;
	int32_t x675 = INT32_MIN;
	int16_t x676 = -1;
	volatile int32_t t152 = -139;

    t152 = (((x673%x674)+x675)-x676);

    if (t152 != -2147483647) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x679 = -51960499421LL;
	int64_t x680 = INT64_MIN;
	int64_t t153 = -3992459821LL;

    t153 = (((x677%x678)+x679)-x680);

    if (t153 != 9223371984894276367LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x681 = 4U;
	int32_t x683 = -1;
	static int64_t x684 = -762LL;
	volatile int64_t t154 = 1LL;

    t154 = (((x681%x682)+x683)-x684);

    if (t154 != 765LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x689 = INT32_MIN;
	int32_t x691 = INT32_MIN;
	int16_t x692 = -1770;
	int32_t t155 = -427742437;

    t155 = (((x689%x690)+x691)-x692);

    if (t155 != -2147481878) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x693 = INT8_MIN;
	static uint64_t x694 = 1745375487716LLU;
	int16_t x695 = INT16_MIN;
	static int64_t x696 = 58540LL;
	volatile uint64_t t156 = 57649LLU;

    t156 = (((x693%x694)+x695)-x696);

    if (t156 != 1447200634880LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x697 = -1631;
	int32_t x698 = -128308004;
	uint8_t x699 = 125U;
	uint16_t x700 = 3892U;
	int32_t t157 = -521263698;

    t157 = (((x697%x698)+x699)-x700);

    if (t157 != -5398) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x702 = UINT32_MAX;
	int64_t x703 = -1LL;
	static uint64_t t158 = 1830942334888000877LLU;

    t158 = (((x701%x702)+x703)-x704);

    if (t158 != 3145247237LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x705 = -1LL;
	int8_t x706 = 6;
	uint64_t x707 = UINT64_MAX;
	volatile uint64_t t159 = 507LLU;

    t159 = (((x705%x706)+x707)-x708);

    if (t159 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x709 = INT8_MAX;
	int32_t t160 = 4531;

    t160 = (((x709%x710)+x711)-x712);

    if (t160 != 46206357) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x713 = 6U;
	int64_t x714 = -1LL;
	uint32_t x716 = UINT32_MAX;
	volatile int64_t t161 = 1802401811809LL;

    t161 = (((x713%x714)+x715)-x716);

    if (t161 != -6442450943LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x717 = 0U;
	volatile uint16_t x718 = 29072U;
	static int64_t x719 = INT64_MAX;
	static uint32_t x720 = 103U;
	volatile int64_t t162 = 16269728989862477LL;

    t162 = (((x717%x718)+x719)-x720);

    if (t162 != 9223372036854775704LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x722 = UINT32_MAX;
	int32_t x724 = INT32_MAX;
	uint32_t t163 = 89380559U;

    t163 = (((x721%x722)+x723)-x724);

    if (t163 != 2147483522U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x725 = 956U;
	static int16_t x727 = INT16_MAX;
	static int16_t x728 = INT16_MAX;

    t164 = (((x725%x726)+x727)-x728);

    if (t164 != 956U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x733 = INT32_MIN;
	static int8_t x734 = -1;
	uint8_t x735 = UINT8_MAX;
	uint8_t x736 = 3U;

    t165 = (((x733%x734)+x735)-x736);

    if (t165 != 252) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x737 = UINT64_MAX;
	int16_t x738 = INT16_MAX;
	uint8_t x740 = UINT8_MAX;

    t166 = (((x737%x738)+x739)-x740);

    if (t166 != 9223372036854775568LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x749 = 66;
	int8_t x750 = INT8_MIN;
	uint8_t x751 = 1U;
	int16_t x752 = 252;
	volatile int32_t t167 = -1037920;

    t167 = (((x749%x750)+x751)-x752);

    if (t167 != -185) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x753 = 927;
	volatile int32_t x754 = -1;
	volatile int16_t x755 = INT16_MIN;
	int64_t x756 = 1LL;

    t168 = (((x753%x754)+x755)-x756);

    if (t168 != -32769LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x757 = INT8_MIN;
	int8_t x758 = -1;
	uint32_t x760 = 1000429U;
	uint64_t t169 = 61591793820524LLU;

    t169 = (((x757%x758)+x759)-x760);

    if (t169 != 18446744073708551186LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x770 = UINT8_MAX;
	static volatile uint32_t x772 = 0U;

    t170 = (((x769%x770)+x771)-x772);

    if (t170 != -113LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x781 = INT8_MIN;
	uint8_t x782 = 37U;
	uint64_t x783 = UINT64_MAX;
	static volatile uint64_t t171 = 8030533975890425LLU;

    t171 = (((x781%x782)+x783)-x784);

    if (t171 != 18446744037822797947LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = INT64_MIN;
	int64_t x787 = INT64_MIN;
	int8_t x788 = -3;
	int64_t t172 = 533361651LL;

    t172 = (((x785%x786)+x787)-x788);

    if (t172 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x789 = INT16_MIN;
	volatile int32_t x790 = INT32_MAX;
	int8_t x791 = INT8_MIN;
	static int64_t x792 = -1LL;
	int64_t t173 = -6120619023443LL;

    t173 = (((x789%x790)+x791)-x792);

    if (t173 != -32895LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x793 = 25U;
	int16_t x794 = -1;
	volatile int16_t x796 = INT16_MAX;
	volatile int32_t t174 = -7758;

    t174 = (((x793%x794)+x795)-x796);

    if (t174 != -7718851) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x797 = UINT16_MAX;
	int16_t x798 = -1;
	uint64_t x799 = UINT64_MAX;
	int64_t x800 = -152582027LL;
	uint64_t t175 = 62579643983LLU;

    t175 = (((x797%x798)+x799)-x800);

    if (t175 != 152582026LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x801 = 3;
	int32_t x802 = 13763;
	volatile uint32_t x803 = 5206206U;
	uint32_t t176 = 318U;

    t176 = (((x801%x802)+x803)-x804);

    if (t176 != 5206210U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x814 = INT8_MIN;
	static int16_t x815 = -34;
	static volatile uint32_t x816 = UINT32_MAX;
	volatile uint32_t t177 = 4187461U;

    t177 = (((x813%x814)+x815)-x816);

    if (t177 != 4294967262U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x818 = 20851U;
	int32_t x819 = INT32_MIN;
	volatile uint32_t t178 = 1026117939U;

    t178 = (((x817%x818)+x819)-x820);

    if (t178 != 2147483660U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x821 = 70U;
	uint16_t x824 = UINT16_MAX;
	volatile uint32_t t179 = 141U;

    t179 = (((x821%x822)+x823)-x824);

    if (t179 != 4294901830U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x826 = 31U;
	uint64_t x827 = 125359357LLU;
	static int16_t x828 = -1;
	volatile uint64_t t180 = 69LLU;

    t180 = (((x825%x826)+x827)-x828);

    if (t180 != 125359359LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x833 = INT32_MAX;
	volatile int32_t x836 = INT32_MIN;
	uint64_t t181 = 4895448288586155LLU;

    t181 = (((x833%x834)+x835)-x836);

    if (t181 != 2215275242LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x837 = 26U;
	volatile int64_t x838 = -1LL;
	volatile int32_t x839 = 3746;
	int16_t x840 = INT16_MIN;
	int64_t t182 = 252621062LL;

    t182 = (((x837%x838)+x839)-x840);

    if (t182 != 36514LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x841 = 103U;
	int16_t x842 = INT16_MIN;
	uint64_t x844 = 31669041968LLU;
	volatile uint64_t t183 = 186848807352879839LLU;

    t183 = (((x841%x842)+x843)-x844);

    if (t183 != 18446744042040727327LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x845 = 25615914630798244LL;
	int64_t x846 = INT64_MIN;
	int8_t x847 = INT8_MIN;
	int64_t t184 = 69795093287727083LL;

    t184 = (((x845%x846)+x847)-x848);

    if (t184 != 25615914630830884LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x849 = 13972649U;
	int64_t x850 = INT64_MAX;
	int16_t x852 = INT16_MAX;
	uint64_t t185 = 142836859582346064LLU;

    t185 = (((x849%x850)+x851)-x852);

    if (t185 != 53404317233123LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x853 = -1;
	int64_t x856 = INT64_MAX;
	static volatile uint64_t t186 = 6389LLU;

    t186 = (((x853%x854)+x855)-x856);

    if (t186 != 9223372036854802203LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x857 = INT64_MIN;
	uint64_t x858 = UINT64_MAX;
	int8_t x859 = 35;
	static volatile uint64_t t187 = 10507266660240552LLU;

    t187 = (((x857%x858)+x859)-x860);

    if (t187 != 9223372036854775716LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x862 = 6522U;
	uint32_t x863 = 441224U;
	int8_t x864 = INT8_MIN;
	uint64_t t188 = 219333427428536LLU;

    t188 = (((x861%x862)+x863)-x864);

    if (t188 != 445170LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x865 = UINT8_MAX;
	int8_t x866 = 55;
	static uint32_t t189 = 2883U;

    t189 = (((x865%x866)+x867)-x868);

    if (t189 != 4294967167U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x869 = INT32_MIN;
	int32_t x870 = -25;
	static uint16_t x871 = 4109U;
	static volatile int16_t x872 = INT16_MAX;
	volatile int32_t t190 = -10055;

    t190 = (((x869%x870)+x871)-x872);

    if (t190 != -28681) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x873 = INT64_MIN;
	volatile uint16_t x874 = 1744U;
	static int8_t x875 = -1;
	static int64_t t191 = 8428LL;

    t191 = (((x873%x874)+x875)-x876);

    if (t191 != -1234LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x877 = INT16_MAX;
	uint32_t x878 = 484311U;
	int8_t x880 = -1;

    t192 = (((x877%x878)+x879)-x880);

    if (t192 != 2147516416U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x885 = UINT64_MAX;
	int8_t x886 = INT8_MIN;
	int16_t x887 = 1786;
	volatile int32_t x888 = INT32_MIN;
	volatile uint64_t t193 = 354950615409LLU;

    t193 = (((x885%x886)+x887)-x888);

    if (t193 != 2147485561LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x890 = -2;
	volatile int16_t x891 = INT16_MAX;
	volatile int64_t x892 = INT64_MAX;
	volatile int64_t t194 = -8158837LL;

    t194 = (((x889%x890)+x891)-x892);

    if (t194 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x893 = -6606;
	static volatile uint32_t x896 = 774U;
	uint32_t t195 = 72U;

    t195 = (((x893%x894)+x895)-x896);

    if (t195 != 4294959932U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x898 = INT8_MIN;
	uint16_t x899 = UINT16_MAX;
	uint8_t x900 = 7U;
	volatile int32_t t196 = -1;

    t196 = (((x897%x898)+x899)-x900);

    if (t196 != 65589) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x901 = -2;
	uint32_t x902 = 1004732693U;
	volatile uint32_t t197 = 5698U;

    t197 = (((x901%x902)+x903)-x904);

    if (t197 != 276043081U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x905 = INT8_MIN;
	uint32_t x906 = 19423242U;
	static int8_t x907 = -1;
	static int64_t x908 = 3878779827477LL;
	volatile int64_t t198 = -3244578899LL;

    t198 = (((x905%x906)+x907)-x908);

    if (t198 != -3878777396792LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x909 = UINT32_MAX;
	int32_t x910 = INT32_MIN;
	uint8_t x911 = 5U;
	static uint16_t x912 = 428U;
	volatile uint32_t t199 = 6U;

    t199 = (((x909%x910)+x911)-x912);

    if (t199 != 2147483224U) { NG(); } else { ; }
	
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

