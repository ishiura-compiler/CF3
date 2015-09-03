#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint32_t x3 = UINT32_MAX;
volatile int8_t x6 = -23;
int32_t x12 = INT32_MAX;
uint64_t x22 = 196898300344882298LLU;
int16_t x24 = INT16_MAX;
volatile int32_t t5 = -13681195;
int32_t x25 = INT32_MIN;
static int8_t x28 = -1;
static volatile int32_t t6 = 657226;
volatile int64_t x34 = -3LL;
volatile int64_t x35 = -1LL;
static int32_t x41 = INT32_MIN;
volatile int32_t x52 = INT32_MIN;
volatile int32_t t12 = -839;
volatile uint64_t x58 = 4353851LLU;
int8_t x62 = INT8_MIN;
int64_t x66 = 15LL;
static int64_t x67 = 2033678321113661948LL;
uint64_t t20 = 207394381LLU;
static int64_t t21 = -20488468709664439LL;
volatile int8_t x95 = -1;
uint16_t x98 = 2010U;
int8_t x100 = -1;
static uint64_t x103 = 182514LLU;
int32_t x108 = -1;
volatile int32_t x116 = INT32_MIN;
volatile uint32_t x117 = 5905U;
static volatile int32_t x119 = -102914572;
volatile int32_t t31 = -985426;
int16_t x132 = INT16_MAX;
uint32_t t34 = 30336594U;
volatile int64_t x142 = -227718488LL;
uint8_t x148 = 3U;
volatile int32_t t36 = -4000055;
uint64_t x149 = 419609LLU;
static uint32_t x152 = 2638U;
volatile uint16_t x153 = UINT16_MAX;
int16_t x155 = INT16_MAX;
static int32_t t38 = -110176;
uint32_t x157 = UINT32_MAX;
volatile int16_t x158 = -1;
static volatile int16_t x160 = -1;
int32_t x161 = 852791759;
int8_t x168 = INT8_MIN;
volatile uint64_t x169 = 245186LLU;
int32_t x170 = -104;
int64_t x171 = -1LL;
static volatile int16_t x175 = INT16_MAX;
int16_t x177 = 25;
uint64_t x178 = 1873183579920776186LLU;
uint8_t x179 = 3U;
int64_t x182 = -1130985204465500LL;
uint64_t x184 = 9793LLU;
static int64_t x190 = INT64_MAX;
int16_t x196 = -1;
volatile uint32_t t50 = 3455U;
int16_t x211 = -2727;
int32_t t53 = 8507459;
static int32_t x220 = -1;
uint64_t x221 = 15162026LLU;
volatile int16_t x233 = 190;
uint64_t x239 = UINT64_MAX;
volatile uint64_t t59 = 301LLU;
int8_t x242 = INT8_MIN;
int64_t x244 = INT64_MIN;
int32_t x248 = INT32_MAX;
uint64_t x256 = 13LLU;
int64_t x257 = INT64_MIN;
volatile int8_t x263 = INT8_MIN;
static int64_t x271 = 10264099536LL;
volatile uint32_t x281 = UINT32_MAX;
static uint32_t x284 = 117U;
static volatile uint32_t x297 = 3031760U;
uint32_t t73 = 59591U;
uint64_t x304 = 2430192612453778LLU;
volatile uint64_t x312 = UINT64_MAX;
volatile uint64_t t76 = 213749610642242638LLU;
static volatile int64_t t77 = 207903355340682803LL;
int8_t x324 = INT8_MIN;
int8_t x328 = -1;
static int32_t t80 = -6084802;
int64_t x330 = -6288437031742986LL;
static int32_t x331 = INT32_MAX;
int32_t x336 = INT32_MIN;
volatile int64_t t82 = INT64_MIN;
uint16_t x340 = UINT16_MAX;
static uint8_t x341 = UINT8_MAX;
int32_t x356 = INT32_MIN;
int64_t t87 = INT64_MIN;
volatile int16_t x359 = INT16_MAX;
uint16_t x367 = 1U;
int32_t t94 = 15;
uint64_t x393 = 4917995LLU;


void f0(void) {
	int32_t x1 = 374535611;
	volatile int64_t x4 = INT64_MAX;
	int64_t t0 = -112266661304083LL;

	t0 = ((x1+(x2<x3))&x4);

	if (t0 != 374535612LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 16318U;
	static uint16_t x7 = UINT16_MAX;
	static uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 4734;

	t1 = ((x5+(x6<x7))&x8);

	if (t1 != 191) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	int16_t x10 = -1;
	static int8_t x11 = INT8_MIN;
	int64_t t2 = 309285905594156LL;

	t2 = ((x9+(x10<x11))&x12);

	if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int16_t x14 = 2513;
	static volatile int64_t x15 = INT64_MIN;
	static uint32_t x16 = UINT32_MAX;
	static int64_t t3 = 18444967024984652LL;

	t3 = ((x13+(x14<x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = 2544;
	static uint32_t x19 = UINT32_MAX;
	uint16_t x20 = 7U;
	volatile int32_t t4 = 89635;

	t4 = ((x17+(x18<x19))&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -4397;
	uint16_t x23 = 161U;

	t5 = ((x21+(x22<x23))&x24);

	if (t5 != 28371) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -16263027;
	int64_t x27 = -1LL;

	t6 = ((x25+(x26<x27))&x28);

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 155737941LLU;
	uint16_t x30 = 5406U;
	int8_t x31 = -1;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 895LLU;

	t7 = ((x29+(x30<x31))&x32);

	if (t7 != 155737941LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 40U;
	volatile int8_t x36 = INT8_MIN;
	int32_t t8 = -126335;

	t8 = ((x33+(x34<x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t9 = INT32_MIN;

	t9 = ((x37+(x38<x39))&x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = INT64_MIN;
	uint8_t x43 = 1U;
	int32_t x44 = INT32_MIN;
	int32_t t10 = INT32_MIN;

	t10 = ((x41+(x42<x43))&x44);

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static int32_t x46 = INT32_MIN;
	volatile int32_t x47 = -1;
	volatile int32_t x48 = INT32_MAX;
	static int32_t t11 = 1;

	t11 = ((x45+(x46<x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 6331;
	volatile int32_t x50 = -26270610;
	uint16_t x51 = 3912U;

	t12 = ((x49+(x50<x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static int32_t x54 = INT32_MAX;
	int64_t x55 = INT64_MIN;
	static volatile int16_t x56 = -1;
	int64_t t13 = INT64_MIN;

	t13 = ((x53+(x54<x55))&x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 26LLU;
	volatile uint8_t x59 = 15U;
	int32_t x60 = -1;
	volatile uint64_t t14 = 297258653279LLU;

	t14 = ((x57+(x58<x59))&x60);

	if (t14 != 26LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 25U;
	int16_t x63 = INT16_MIN;
	int8_t x64 = 12;
	int32_t t15 = -549765092;

	t15 = ((x61+(x62<x63))&x64);

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 9927477U;
	volatile int32_t x68 = INT32_MAX;
	uint32_t t16 = 34658U;

	t16 = ((x65+(x66<x67))&x68);

	if (t16 != 9927478U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 3U;
	static int32_t x70 = INT32_MAX;
	int16_t x71 = INT16_MAX;
	int64_t x72 = 494846LL;
	static volatile int64_t t17 = 7246408446065LL;

	t17 = ((x69+(x70<x71))&x72);

	if (t17 != 2LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 99U;
	static volatile int8_t x74 = -1;
	int64_t x75 = -918LL;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 9285856;

	t18 = ((x73+(x74<x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int16_t x78 = -1;
	int16_t x79 = -1;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = INT32_MIN;

	t19 = ((x77+(x78<x79))&x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = 30437650925LLU;
	uint16_t x83 = 6U;
	uint64_t x84 = UINT64_MAX;

	t20 = ((x81+(x82<x83))&x84);

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = -1;
	volatile int8_t x87 = -1;
	int8_t x88 = 1;

	t21 = ((x85+(x86<x87))&x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	uint16_t x90 = UINT16_MAX;
	uint8_t x91 = 34U;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 42527279;

	t22 = ((x89+(x90<x91))&x92);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = UINT32_MAX;
	int64_t x96 = INT64_MIN;
	static volatile int64_t t23 = INT64_MIN;

	t23 = ((x93+(x94<x95))&x96);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 289U;
	int64_t x99 = -1LL;
	static volatile int32_t t24 = 124011;

	t24 = ((x97+(x98<x99))&x100);

	if (t24 != 289) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = 643;
	static uint32_t x102 = UINT32_MAX;
	uint32_t x104 = UINT32_MAX;
	volatile uint32_t t25 = 48304U;

	t25 = ((x101+(x102<x103))&x104);

	if (t25 != 643U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	uint16_t x106 = 4679U;
	int64_t x107 = INT64_MAX;
	uint64_t t26 = 378918744480524789LLU;

	t26 = ((x105+(x106<x107))&x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = 655103118527LL;
	uint32_t x110 = 21685U;
	int64_t x111 = -3398979959LL;
	static uint16_t x112 = UINT16_MAX;
	static int64_t t27 = 193477571714616LL;

	t27 = ((x109+(x110<x111))&x112);

	if (t27 != 19647LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 14U;
	int64_t x114 = INT64_MAX;
	int16_t x115 = INT16_MAX;
	volatile int32_t t28 = 6963;

	t28 = ((x113+(x114<x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = -1LL;
	int32_t x120 = -1;
	uint32_t t29 = 6U;

	t29 = ((x117+(x118<x119))&x120);

	if (t29 != 5905U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int32_t x122 = INT32_MIN;
	uint64_t x123 = 2157812162395652LLU;
	uint16_t x124 = 1004U;
	volatile int32_t t30 = -1;

	t30 = ((x121+(x122<x123))&x124);

	if (t30 != 1004) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = -1;
	int8_t x126 = INT8_MAX;
	int16_t x127 = INT16_MIN;
	uint8_t x128 = 123U;

	t31 = ((x125+(x126<x127))&x128);

	if (t31 != 123) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	int16_t x130 = INT16_MIN;
	volatile int64_t x131 = -1LL;
	volatile int32_t t32 = -1;

	t32 = ((x129+(x130<x131))&x132);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MAX;
	volatile uint64_t x135 = UINT64_MAX;
	int8_t x136 = INT8_MAX;
	volatile uint32_t t33 = 49588U;

	t33 = ((x133+(x134<x135))&x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 64306126U;
	static int32_t x138 = INT32_MAX;
	static uint64_t x139 = 25047484LLU;
	int16_t x140 = -1;

	t34 = ((x137+(x138<x139))&x140);

	if (t34 != 64306126U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x143 = 481;
	int64_t x144 = -1LL;
	static int64_t t35 = -1394604196882LL;

	t35 = ((x141+(x142<x143))&x144);

	if (t35 != 256LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	int32_t x147 = -443877;

	t36 = ((x145+(x146<x147))&x148);

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = -15049934995LL;
	volatile int32_t x151 = -1;
	volatile uint64_t t37 = 870576213377747788LLU;

	t37 = ((x149+(x150<x151))&x152);

	if (t37 != 522LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = UINT8_MAX;
	int32_t x156 = 0;

	t38 = ((x153+(x154<x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x159 = 670209089233LL;
	static volatile uint32_t t39 = 3623U;

	t39 = ((x157+(x158<x159))&x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = -3;
	uint8_t x163 = 24U;
	static int32_t x164 = 185726136;
	static int32_t t40 = -16483321;

	t40 = ((x161+(x162<x163))&x164);

	if (t40 != 34640016) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int8_t x166 = -2;
	uint16_t x167 = 11U;
	int32_t t41 = INT32_MIN;

	t41 = ((x165+(x166<x167))&x168);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x172 = UINT32_MAX;
	static uint64_t t42 = 5868310LLU;

	t42 = ((x169+(x170<x171))&x172);

	if (t42 != 245187LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 15;
	int8_t x174 = INT8_MIN;
	uint64_t x176 = 45713LLU;
	uint64_t t43 = 3191LLU;

	t43 = ((x173+(x174<x175))&x176);

	if (t43 != 16LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x180 = 22661U;
	volatile int32_t t44 = -834006771;

	t44 = ((x177+(x178<x179))&x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int8_t x183 = INT8_MAX;
	volatile uint64_t t45 = 35140141100135LLU;

	t45 = ((x181+(x182<x183))&x184);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	int32_t t46 = INT32_MIN;

	t46 = ((x185+(x186<x187))&x188);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = 1;
	int32_t x191 = INT32_MAX;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t47 = 0;

	t47 = ((x189+(x190<x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	volatile int32_t x194 = INT32_MAX;
	volatile uint16_t x195 = UINT16_MAX;
	volatile int32_t t48 = -2011903;

	t48 = ((x193+(x194<x195))&x196);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MAX;
	int8_t x200 = -1;
	volatile int64_t t49 = INT64_MIN;

	t49 = ((x197+(x198<x199))&x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	int32_t x202 = INT32_MAX;
	volatile int64_t x203 = -7116356160644LL;
	static uint32_t x204 = UINT32_MAX;

	t50 = ((x201+(x202<x203))&x204);

	if (t50 != 2147483647U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = 295840U;
	uint32_t x206 = 0U;
	int8_t x207 = 0;
	int64_t x208 = INT64_MIN;
	int64_t t51 = 1LL;

	t51 = ((x205+(x206<x207))&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	uint32_t x210 = UINT32_MAX;
	uint16_t x212 = UINT16_MAX;
	static volatile uint64_t t52 = 237446LLU;

	t52 = ((x209+(x210<x211))&x212);

	if (t52 != 65535LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	int64_t x214 = INT64_MIN;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MIN;

	t53 = ((x213+(x214<x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	uint64_t x218 = 339557628327193LLU;
	int16_t x219 = INT16_MIN;
	int32_t t54 = -6108971;

	t54 = ((x217+(x218<x219))&x220);

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x222 = INT8_MIN;
	int64_t x223 = -62559LL;
	uint8_t x224 = UINT8_MAX;
	static uint64_t t55 = 15LLU;

	t55 = ((x221+(x222<x223))&x224);

	if (t55 != 170LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -45;
	int32_t x226 = -26;
	uint32_t x227 = 437593U;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = ((x225+(x226<x227))&x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -1;
	int8_t x230 = INT8_MIN;
	static int32_t x231 = INT32_MAX;
	static volatile uint16_t x232 = UINT16_MAX;
	static volatile int32_t t57 = -3;

	t57 = ((x229+(x230<x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x234 = 47;
	int64_t x235 = -715LL;
	uint32_t x236 = 144522U;
	uint32_t t58 = 3510961U;

	t58 = ((x233+(x234<x235))&x236);

	if (t58 != 138U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int8_t x238 = -1;
	volatile int8_t x240 = 1;

	t59 = ((x237+(x238<x239))&x240);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MIN;
	int8_t x243 = 0;
	volatile int64_t t60 = INT64_MIN;

	t60 = ((x241+(x242<x243))&x244);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = INT32_MIN;
	int64_t x246 = -249325271459120LL;
	static volatile uint64_t x247 = UINT64_MAX;
	volatile int32_t t61 = 5;

	t61 = ((x245+(x246<x247))&x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 1464986465LL;
	uint16_t x250 = UINT16_MAX;
	uint32_t x251 = 640736U;
	static int16_t x252 = INT16_MIN;
	static int64_t t62 = 113802074606924567LL;

	t62 = ((x249+(x250<x251))&x252);

	if (t62 != 1464958976LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 0;
	int16_t x254 = INT16_MAX;
	int8_t x255 = INT8_MAX;
	static uint64_t t63 = 0LLU;

	t63 = ((x253+(x254<x255))&x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MAX;
	int16_t x259 = 0;
	int8_t x260 = 51;
	volatile int64_t t64 = 707LL;

	t64 = ((x257+(x258<x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 1492;
	static uint32_t x262 = 1626254184U;
	int8_t x264 = INT8_MIN;
	int32_t t65 = -506966;

	t65 = ((x261+(x262<x263))&x264);

	if (t65 != 1408) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 2;
	int32_t x266 = 758008488;
	int8_t x267 = -1;
	uint8_t x268 = 14U;
	int32_t t66 = 36494;

	t66 = ((x265+(x266<x267))&x268);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = 3;
	int64_t x270 = 258354LL;
	static uint16_t x272 = 225U;
	int32_t t67 = -10982;

	t67 = ((x269+(x270<x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -17904719212596224LL;
	static volatile int16_t x274 = -1;
	uint8_t x275 = 2U;
	int16_t x276 = INT16_MIN;
	int64_t t68 = -141640510974788LL;

	t68 = ((x273+(x274<x275))&x276);

	if (t68 != -17904719212609536LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x282 = INT8_MIN;
	int64_t x283 = -1119898014621439LL;
	uint32_t t69 = 414625823U;

	t69 = ((x281+(x282<x283))&x284);

	if (t69 != 117U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = UINT64_MAX;
	uint8_t x286 = 1U;
	uint32_t x287 = UINT32_MAX;
	volatile uint8_t x288 = 0U;
	volatile uint64_t t70 = 14LLU;

	t70 = ((x285+(x286<x287))&x288);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	volatile int64_t x290 = 6065195918371744LL;
	uint32_t x291 = UINT32_MAX;
	int64_t x292 = 522LL;
	int64_t t71 = -19LL;

	t71 = ((x289+(x290<x291))&x292);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x293 = INT8_MAX;
	uint8_t x294 = 3U;
	uint32_t x295 = UINT32_MAX;
	int32_t x296 = -1;
	int32_t t72 = 115882;

	t72 = ((x293+(x294<x295))&x296);

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x298 = 27U;
	uint64_t x299 = 273742287921LLU;
	volatile uint32_t x300 = 9036594U;

	t73 = ((x297+(x298<x299))&x300);

	if (t73 != 541200U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x301 = 12U;
	volatile uint8_t x302 = 72U;
	uint64_t x303 = 180678771477LLU;
	uint64_t t74 = 49306953321310LLU;

	t74 = ((x301+(x302<x303))&x304);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	int32_t x307 = 304;
	static uint8_t x308 = UINT8_MAX;
	volatile int32_t t75 = 11766125;

	t75 = ((x305+(x306<x307))&x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = 3U;
	static uint64_t x310 = UINT64_MAX;
	uint16_t x311 = 155U;

	t76 = ((x309+(x310<x311))&x312);

	if (t76 != 3LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MAX;
	int64_t x314 = -1LL;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 35248U;

	t77 = ((x313+(x314<x315))&x316);

	if (t77 != 35248LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MIN;
	static int16_t x318 = INT16_MIN;
	uint32_t x319 = UINT32_MAX;
	int8_t x320 = -1;
	static volatile int32_t t78 = -563933009;

	t78 = ((x317+(x318<x319))&x320);

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -1;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = 16U;
	static int32_t t79 = -290;

	t79 = ((x321+(x322<x323))&x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x325 = -1;
	int16_t x326 = -1;
	static int32_t x327 = INT32_MIN;

	t80 = ((x325+(x326<x327))&x328);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = -1LL;
	int64_t x332 = INT64_MIN;
	volatile int64_t t81 = 2400749734063LL;

	t81 = ((x329+(x330<x331))&x332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x334 = 54U;
	volatile int64_t x335 = -1LL;

	t82 = ((x333+(x334<x335))&x336);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MIN;
	static int64_t x338 = -80238377731LL;
	uint8_t x339 = 1U;
	volatile int32_t t83 = 845889;

	t83 = ((x337+(x338<x339))&x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x342 = 167;
	static volatile int32_t x343 = 1299745;
	volatile int32_t x344 = 872963962;
	int32_t t84 = 21;

	t84 = ((x341+(x342<x343))&x344);

	if (t84 != 256) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = 1704;
	int16_t x346 = -1;
	static int32_t x347 = INT32_MIN;
	uint32_t x348 = 13138357U;
	static uint32_t t85 = 126U;

	t85 = ((x345+(x346<x347))&x348);

	if (t85 != 160U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x349 = 3574;
	int64_t x350 = INT64_MIN;
	uint32_t x351 = 145054U;
	static volatile int64_t x352 = INT64_MIN;
	int64_t t86 = -319129505LL;

	t86 = ((x349+(x350<x351))&x352);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MIN;
	uint64_t x355 = 4618252376483262240LLU;

	t87 = ((x353+(x354<x355))&x356);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	static uint64_t x360 = 6274742812659990950LLU;
	volatile uint64_t t88 = 15071692360151365LLU;

	t88 = ((x357+(x358<x359))&x360);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = INT32_MIN;
	uint32_t x362 = 484916662U;
	volatile uint32_t x363 = 10U;
	int32_t x364 = -10;
	int32_t t89 = INT32_MIN;

	t89 = ((x361+(x362<x363))&x364);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x365 = -1;
	int16_t x366 = -111;
	volatile uint32_t x368 = 38U;
	uint32_t t90 = 12447677U;

	t90 = ((x365+(x366<x367))&x368);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x369 = UINT64_MAX;
	volatile uint8_t x370 = 0U;
	volatile int64_t x371 = -1LL;
	int16_t x372 = INT16_MIN;
	uint64_t t91 = 1710171406009500624LLU;

	t91 = ((x369+(x370<x371))&x372);

	if (t91 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x373 = 44;
	int32_t x374 = -1;
	int16_t x375 = INT16_MAX;
	static volatile int32_t x376 = 62373551;
	volatile int32_t t92 = -16129;

	t92 = ((x373+(x374<x375))&x376);

	if (t92 != 45) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = INT16_MAX;
	static uint8_t x379 = UINT8_MAX;
	static uint8_t x380 = 18U;
	static int32_t t93 = -2654;

	t93 = ((x377+(x378<x379))&x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = -75074589512LL;
	int16_t x383 = INT16_MIN;
	int16_t x384 = 2530;

	t94 = ((x381+(x382<x383))&x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = 15;
	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MAX;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t95 = 20221U;

	t95 = ((x385+(x386<x387))&x388);

	if (t95 != 16U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x389 = -576;
	int8_t x390 = INT8_MAX;
	volatile uint32_t x391 = 424U;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t96 = 71;

	t96 = ((x389+(x390<x391))&x392);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	int32_t x396 = -3;
	static volatile uint64_t t97 = 138485739539LLU;

	t97 = ((x393+(x394<x395))&x396);

	if (t97 != 4917996LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x397 = -1;
	static int64_t x398 = 245751742LL;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MAX;
	int64_t t98 = 549858463726606837LL;

	t98 = ((x397+(x398<x399))&x400);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x401 = -1281531122LL;
	int64_t x402 = -549438452535109LL;
	volatile int64_t x403 = INT64_MAX;
	volatile int64_t x404 = -12125958LL;
	int64_t t99 = -3247301604085331465LL;

	t99 = ((x401+(x402<x403))&x404);

	if (t99 != -1291558902LL) { NG(); } else { ; }
	
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


    return 0;
}

