#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 3;
int32_t x8 = INT32_MAX;
static int32_t t1 = -1449;
uint16_t x13 = UINT16_MAX;
static volatile int64_t t3 = -16LL;
int32_t x19 = -1;
int8_t x20 = INT8_MAX;
int32_t x22 = INT32_MAX;
int8_t x24 = INT8_MIN;
volatile int64_t t6 = 4934LL;
int8_t x31 = INT8_MIN;
int64_t x34 = -4149242534823954746LL;
int8_t x37 = INT8_MIN;
uint8_t x44 = 110U;
volatile int64_t t12 = -4033LL;
static volatile int64_t t13 = -6021978891495644LL;
uint64_t x59 = 239LLU;
int8_t x62 = -55;
int16_t x64 = -1;
volatile int64_t t17 = -1592775283532697LL;
int32_t x74 = -937;
int64_t t19 = 1275004LL;
static uint16_t x84 = 0U;
volatile int32_t t20 = 21098;
volatile uint32_t x85 = 1302163U;
volatile uint32_t t21 = 239614045U;
int32_t x92 = -131;
int16_t x102 = -1;
static int16_t x107 = INT16_MIN;
uint8_t x114 = 24U;
int32_t x115 = 0;
static volatile uint8_t x116 = 105U;
volatile uint64_t x119 = UINT64_MAX;
int16_t x123 = INT16_MIN;
uint64_t t30 = 101168539661361LLU;
int8_t x131 = 24;
int8_t x140 = INT8_MAX;
volatile int32_t t34 = -12187665;
int8_t x141 = INT8_MIN;
int64_t x145 = -31910716474096985LL;
static uint32_t x149 = 12556U;
int32_t x158 = 5108;
int64_t x163 = INT64_MIN;
static int64_t x166 = 11133LL;
int16_t x169 = INT16_MAX;
int32_t t42 = -41;
uint32_t x173 = 371712914U;
uint8_t x174 = 20U;
uint32_t x175 = 225667U;
int32_t x177 = INT32_MAX;
int32_t t44 = -33;
uint64_t t47 = 607383665639143819LLU;
int64_t x199 = INT64_MIN;
int16_t x200 = INT16_MIN;
static int32_t x210 = -1;
uint64_t x212 = UINT64_MAX;
volatile uint64_t t52 = 1LLU;
uint32_t x215 = 489U;
static uint16_t x224 = UINT16_MAX;
int32_t t55 = 3;
uint32_t x225 = UINT32_MAX;
static int16_t x228 = INT16_MAX;
volatile uint32_t t56 = 62U;
int16_t x230 = -246;
static int8_t x241 = 10;
int16_t x242 = INT16_MIN;
volatile int32_t x246 = INT32_MAX;
static int32_t t62 = 1922314;
int32_t x258 = -1;
int8_t x261 = -22;
static volatile int64_t x263 = INT64_MIN;
static uint64_t t65 = 44116182155LLU;
static int16_t x267 = 10;
int64_t x279 = -25781384983LL;
int32_t x284 = 576894594;
int32_t t70 = -1;
static int32_t x290 = 61790479;
static uint32_t x291 = 184U;
static volatile uint64_t t72 = 38360487910101932LLU;
int64_t x293 = -209346901401LL;
int64_t t73 = 5574968040995LL;
int64_t x297 = INT64_MAX;
static volatile uint64_t t74 = 350138908LLU;
static int32_t x305 = 9644;
int64_t x307 = INT64_MAX;
static uint32_t t76 = 440238U;
uint32_t x309 = 26512011U;
volatile int64_t t77 = -309227407315478LL;
int32_t x317 = -1;
int16_t x328 = 1989;
int16_t x329 = INT16_MIN;
static volatile int32_t x331 = 3855314;
int64_t t82 = -97171996080057LL;
int8_t x342 = -9;
uint64_t x346 = UINT64_MAX;
volatile uint64_t x348 = UINT64_MAX;
int64_t x352 = INT64_MIN;
int16_t x356 = 2;
static uint64_t x365 = 601783035197161424LLU;
volatile uint64_t t91 = 167496881022964940LLU;
int8_t x372 = INT8_MAX;
uint32_t x374 = UINT32_MAX;
static volatile int32_t t93 = 29634491;
int16_t x377 = -1;
int8_t x379 = INT8_MAX;
int32_t x383 = INT32_MIN;
uint64_t x398 = 1882866LLU;


void f0(void) {
	uint8_t x1 = 35U;
	int64_t x2 = INT64_MAX;
	volatile int32_t x3 = INT32_MIN;
	static int8_t x4 = 9;

	t0 = ((x1+(x2==x3))^x4);

	if (t0 != 42) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -3;
	int64_t x6 = INT64_MIN;
	uint32_t x7 = 232012064U;

	t1 = ((x5+(x6==x7))^x8);

	if (t1 != -2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1903184705875725923LLU;
	volatile int64_t x10 = INT64_MIN;
	uint32_t x11 = 67U;
	static uint16_t x12 = 7U;
	volatile uint64_t t2 = 5677281189LLU;

	t2 = ((x9+(x10==x11))^x12);

	if (t2 != 1903184705875725924LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = 36858935698LL;
	int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MIN;

	t3 = ((x13+(x14==x15))^x16);

	if (t3 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int16_t x18 = 1;
	int32_t t4 = 73741510;

	t4 = ((x17+(x18==x19))^x20);

	if (t4 != -32641) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 1LLU;
	uint16_t x23 = 2937U;
	uint64_t t5 = 3849801052227LLU;

	t5 = ((x21+(x22==x23))^x24);

	if (t5 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 7709668U;
	volatile int32_t x26 = -16368;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;

	t6 = ((x25+(x26==x27))^x28);

	if (t6 != -9223372036847066140LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int64_t x30 = INT64_MAX;
	uint16_t x32 = 934U;
	int32_t t7 = -536336;

	t7 = ((x29+(x30==x31))^x32);

	if (t7 != 857) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	static int32_t x35 = -374904;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = -1016273611LL;

	t8 = ((x33+(x34==x35))^x36);

	if (t8 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x38 = INT8_MAX;
	volatile int8_t x39 = 9;
	int64_t x40 = INT64_MIN;
	static volatile int64_t t9 = -1195LL;

	t9 = ((x37+(x38==x39))^x40);

	if (t9 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 7U;
	int16_t x42 = -1;
	int8_t x43 = -1;
	static int32_t t10 = 0;

	t10 = ((x41+(x42==x43))^x44);

	if (t10 != 102) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -7392;
	static int16_t x46 = INT16_MAX;
	volatile uint8_t x47 = 53U;
	volatile uint32_t x48 = 1U;
	volatile uint32_t t11 = 8126U;

	t11 = ((x45+(x46==x47))^x48);

	if (t11 != 4294959905U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -62836031278623LL;
	int64_t x50 = -7LL;
	int8_t x51 = -1;
	uint32_t x52 = 4347880U;

	t12 = ((x49+(x50==x51))^x52);

	if (t12 != -62836026939895LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static int16_t x54 = -1440;
	volatile int16_t x55 = -8057;
	int64_t x56 = -29978244420609651LL;

	t13 = ((x53+(x54==x55))^x56);

	if (t13 != 9193393792434166157LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 65110255LL;
	uint8_t x58 = 13U;
	static uint16_t x60 = 15879U;
	int64_t t14 = -878366294271038260LL;

	t14 = ((x57+(x58==x59))^x60);

	if (t14 != 65126120LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int32_t x63 = -1;
	int32_t t15 = INT32_MAX;

	t15 = ((x61+(x62==x63))^x64);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	static int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	int64_t x68 = -1LL;
	static volatile int64_t t16 = 3LL;

	t16 = ((x65+(x66==x67))^x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	int8_t x70 = -22;
	uint8_t x71 = 8U;
	int64_t x72 = 1801LL;

	t17 = ((x69+(x70==x71))^x72);

	if (t17 != -9223372036854774007LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 13497506;
	uint16_t x75 = UINT16_MAX;
	int32_t x76 = INT32_MAX;
	int32_t t18 = 109483763;

	t18 = ((x73+(x74==x75))^x76);

	if (t18 != 2133986141) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = 101363U;
	static int64_t x78 = -1LL;
	int8_t x79 = INT8_MAX;
	int64_t x80 = INT64_MIN;

	t19 = ((x77+(x78==x79))^x80);

	if (t19 != -9223372036854674445LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int8_t x82 = -5;
	int64_t x83 = INT64_MIN;

	t20 = ((x81+(x82==x83))^x84);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	static volatile int8_t x87 = INT8_MAX;
	uint16_t x88 = 296U;

	t21 = ((x85+(x86==x87))^x88);

	if (t21 != 1302459U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x90 = 238662LLU;
	uint8_t x91 = 38U;
	volatile int32_t t22 = -331683;

	t22 = ((x89+(x90==x91))^x92);

	if (t22 != 32637) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MAX;
	int32_t x95 = -15;
	volatile uint64_t x96 = UINT64_MAX;
	static uint64_t t23 = 808715LLU;

	t23 = ((x93+(x94==x95))^x96);

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x97 = -1LL;
	int64_t x98 = -1LL;
	uint64_t x99 = 11276801LLU;
	uint64_t x100 = 183710366LLU;
	volatile uint64_t t24 = 100684LLU;

	t24 = ((x97+(x98==x99))^x100);

	if (t24 != 18446744073525841249LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int64_t x103 = -3518672355163018108LL;
	int32_t x104 = -1;
	int64_t t25 = INT64_MAX;

	t25 = ((x101+(x102==x103))^x104);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	int16_t x106 = 10;
	int32_t x108 = 340;
	int32_t t26 = -1098;

	t26 = ((x105+(x106==x107))^x108);

	if (t26 != 32427) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -2;
	static int64_t x110 = -1LL;
	int64_t x111 = INT64_MIN;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = 209;

	t27 = ((x109+(x110==x111))^x112);

	if (t27 != -65535) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int64_t t28 = -17786378454LL;

	t28 = ((x113+(x114==x115))^x116);

	if (t28 != -9223372036854775703LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	volatile int64_t x118 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -1;

	t29 = ((x117+(x118==x119))^x120);

	if (t29 != -2147483393) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 1779859995506LLU;
	int32_t x122 = -1;
	int8_t x124 = -1;

	t30 = ((x121+(x122==x123))^x124);

	if (t30 != 18446742293849556109LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -1;
	volatile uint16_t x126 = UINT16_MAX;
	volatile int64_t x127 = 14LL;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -2153224;

	t31 = ((x125+(x126==x127))^x128);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MAX;
	int16_t x130 = INT16_MIN;
	int8_t x132 = INT8_MAX;
	volatile int64_t t32 = -1823411533537393LL;

	t32 = ((x129+(x130==x131))^x132);

	if (t32 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	volatile int16_t x134 = INT16_MIN;
	int8_t x135 = 11;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t33 = 36049U;

	t33 = ((x133+(x134==x135))^x136);

	if (t33 != 4294967168U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 472070;
	static uint32_t x138 = UINT32_MAX;
	static uint16_t x139 = UINT16_MAX;

	t34 = ((x137+(x138==x139))^x140);

	if (t34 != 472185) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = -1;
	int32_t x143 = 26810;
	uint8_t x144 = 43U;
	int32_t t35 = -3203089;

	t35 = ((x141+(x142==x143))^x144);

	if (t35 != -85) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = -1;
	int16_t x147 = 429;
	static int32_t x148 = INT32_MIN;
	int64_t t36 = -86831575LL;

	t36 = ((x145+(x146==x147))^x148);

	if (t36 != 31910717280518823LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MAX;
	uint8_t x152 = UINT8_MAX;
	uint32_t t37 = 2U;

	t37 = ((x149+(x150==x151))^x152);

	if (t37 != 12787U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	volatile uint64_t x154 = 615821754LLU;
	static volatile int16_t x155 = INT16_MIN;
	int16_t x156 = -1;
	int32_t t38 = -301136;

	t38 = ((x153+(x154==x155))^x156);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	uint8_t x159 = 113U;
	int8_t x160 = INT8_MIN;
	static int32_t t39 = -1;

	t39 = ((x157+(x158==x159))^x160);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 222;
	volatile int16_t x162 = INT16_MAX;
	int64_t x164 = INT64_MIN;
	volatile int64_t t40 = 33863104495LL;

	t40 = ((x161+(x162==x163))^x164);

	if (t40 != -9223372036854775586LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	uint8_t x168 = 1U;
	volatile int32_t t41 = 9774;

	t41 = ((x165+(x166==x167))^x168);

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -1;
	static int32_t x171 = -1;
	int32_t x172 = 24492;

	t42 = ((x169+(x170==x171))^x172);

	if (t42 != 57260) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x176 = -1;
	static uint32_t t43 = 0U;

	t43 = ((x173+(x174==x175))^x176);

	if (t43 != 3923254381U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = 2692861LL;
	uint16_t x180 = 4U;

	t44 = ((x177+(x178==x179))^x180);

	if (t44 != 2147483643) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	uint16_t x183 = 65U;
	volatile int64_t x184 = -1LL;
	static volatile int64_t t45 = 4564401LL;

	t45 = ((x181+(x182==x183))^x184);

	if (t45 != 2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 23980629;
	int8_t x186 = INT8_MIN;
	int32_t x187 = -3543766;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 741;

	t46 = ((x185+(x186==x187))^x188);

	if (t46 != -23958955) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 31U;
	uint64_t x190 = 0LLU;
	static uint16_t x191 = 15766U;
	uint64_t x192 = 39624977142LLU;

	t47 = ((x189+(x190==x191))^x192);

	if (t47 != 39624977129LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile int8_t x194 = -7;
	int8_t x195 = INT8_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 135163;

	t48 = ((x193+(x194==x195))^x196);

	if (t48 != -65409) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 7;
	volatile uint8_t x198 = 3U;
	int32_t t49 = -288;

	t49 = ((x197+(x198==x199))^x200);

	if (t49 != -32761) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile uint16_t x202 = 2393U;
	static int16_t x203 = -8158;
	int8_t x204 = INT8_MAX;
	volatile int32_t t50 = 98;

	t50 = ((x201+(x202==x203))^x204);

	if (t50 != -32641) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	int8_t x206 = INT8_MAX;
	int8_t x207 = -9;
	int16_t x208 = INT16_MIN;
	volatile int64_t t51 = 14079612354137LL;

	t51 = ((x205+(x206==x207))^x208);

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = 1LL;
	int64_t x211 = -1LL;

	t52 = ((x209+(x210==x211))^x212);

	if (t52 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x213 = INT64_MIN;
	int64_t x214 = -3317456249LL;
	int8_t x216 = INT8_MIN;
	volatile int64_t t53 = 1LL;

	t53 = ((x213+(x214==x215))^x216);

	if (t53 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = 172U;
	uint64_t x218 = 426909LLU;
	uint64_t x219 = UINT64_MAX;
	volatile int64_t x220 = 156061891LL;
	volatile int64_t t54 = 3639774448559453311LL;

	t54 = ((x217+(x218==x219))^x220);

	if (t54 != 156061807LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	uint8_t x222 = UINT8_MAX;
	uint8_t x223 = 0U;

	t55 = ((x221+(x222==x223))^x224);

	if (t55 != -65409) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = -248;
	int8_t x227 = INT8_MAX;

	t56 = ((x225+(x226==x227))^x228);

	if (t56 != 4294934528U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x231 = INT8_MAX;
	uint32_t x232 = 396188260U;
	uint32_t t57 = 151U;

	t57 = ((x229+(x230==x231))^x232);

	if (t57 != 3898779035U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint16_t x234 = 14U;
	int8_t x235 = -1;
	volatile int32_t x236 = INT32_MAX;
	volatile int32_t t58 = -11239;

	t58 = ((x233+(x234==x235))^x236);

	if (t58 != -2147450881) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = -11003353494245LL;
	int16_t x238 = INT16_MIN;
	int8_t x239 = 0;
	volatile uint16_t x240 = 2059U;
	int64_t t59 = -56579LL;

	t59 = ((x237+(x238==x239))^x240);

	if (t59 != -11003353496304LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x243 = -1;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 28946;

	t60 = ((x241+(x242==x243))^x244);

	if (t60 != -2147483638) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	volatile uint16_t x247 = UINT16_MAX;
	int32_t x248 = -173;
	static uint64_t t61 = 180379416LLU;

	t61 = ((x245+(x246==x247))^x248);

	if (t61 != 172LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = INT32_MAX;
	static int32_t x252 = -1;

	t62 = ((x249+(x250==x251))^x252);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -2;
	int8_t x254 = INT8_MIN;
	int16_t x255 = -1;
	int16_t x256 = 1;
	static int32_t t63 = -138;

	t63 = ((x253+(x254==x255))^x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = UINT32_MAX;
	uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 71689960160628623LLU;
	uint64_t t64 = 335783307553131956LLU;

	t64 = ((x257+(x258==x259))^x260);

	if (t64 != 71689959578923120LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -33;
	static uint64_t x264 = 63LLU;

	t65 = ((x261+(x262==x263))^x264);

	if (t65 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MIN;
	volatile uint32_t x268 = UINT32_MAX;
	uint32_t t66 = 0U;

	t66 = ((x265+(x266==x267))^x268);

	if (t66 != 32767U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	static int16_t x270 = 143;
	uint32_t x271 = UINT32_MAX;
	volatile int64_t x272 = 62282LL;
	int64_t t67 = -32062845LL;

	t67 = ((x269+(x270==x271))^x272);

	if (t67 != -62283LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 145063302LLU;
	uint8_t x274 = 80U;
	int16_t x275 = -1;
	volatile uint16_t x276 = UINT16_MAX;
	static uint64_t t68 = 202LLU;

	t68 = ((x273+(x274==x275))^x276);

	if (t68 != 145064569LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = -5910545363288096LL;
	volatile int64_t x278 = -4252333716819282001LL;
	static int8_t x280 = -1;
	static volatile int64_t t69 = 11230619956LL;

	t69 = ((x277+(x278==x279))^x280);

	if (t69 != 5910545363288095LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 1;
	int8_t x282 = INT8_MAX;
	int32_t x283 = -1;

	t70 = ((x281+(x282==x283))^x284);

	if (t70 != 576894595) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 1809U;
	int16_t x286 = -1;
	int64_t x287 = INT64_MAX;
	uint16_t x288 = 1U;
	uint32_t t71 = 1U;

	t71 = ((x285+(x286==x287))^x288);

	if (t71 != 1808U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 158183297LLU;
	static uint64_t x292 = 156008979485853LLU;

	t72 = ((x289+(x290==x291))^x292);

	if (t72 != 156008825518876LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x294 = INT8_MAX;
	static int8_t x295 = -7;
	static int16_t x296 = INT16_MIN;

	t73 = ((x293+(x294==x295))^x296);

	if (t73 != 209346906727LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = UINT16_MAX;
	static int32_t x299 = INT32_MIN;
	static uint64_t x300 = UINT64_MAX;

	t74 = ((x297+(x298==x299))^x300);

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 36783972179LLU;
	volatile int64_t x302 = -1LL;
	uint8_t x303 = 0U;
	static uint64_t x304 = UINT64_MAX;
	volatile uint64_t t75 = 115100110098939723LLU;

	t75 = ((x301+(x302==x303))^x304);

	if (t75 != 18446744036925579436LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x306 = 0U;
	uint32_t x308 = 1634U;

	t76 = ((x305+(x306==x307))^x308);

	if (t76 != 9166U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x310 = UINT8_MAX;
	int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MIN;

	t77 = ((x309+(x310==x311))^x312);

	if (t77 != -9223372036828263797LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 57LLU;
	static volatile int64_t x314 = -1LL;
	int8_t x315 = 10;
	int64_t x316 = INT64_MIN;
	uint64_t t78 = 2933197LLU;

	t78 = ((x313+(x314==x315))^x316);

	if (t78 != 9223372036854775865LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = INT64_MAX;
	uint32_t x319 = 345253U;
	static uint8_t x320 = 20U;
	static volatile int32_t t79 = 443813;

	t79 = ((x317+(x318==x319))^x320);

	if (t79 != -21) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 2953;
	volatile int8_t x322 = INT8_MAX;
	int32_t x323 = 64190;
	uint8_t x324 = 5U;
	static volatile int32_t t80 = 766967030;

	t80 = ((x321+(x322==x323))^x324);

	if (t80 != 2956) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = -8133;
	int8_t x326 = 55;
	uint32_t x327 = UINT32_MAX;
	static volatile int32_t t81 = -3;

	t81 = ((x325+(x326==x327))^x328);

	if (t81 != -6146) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MIN;
	volatile int64_t x332 = -1LL;

	t82 = ((x329+(x330==x331))^x332);

	if (t82 != 32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -404;
	int8_t x334 = INT8_MAX;
	volatile uint8_t x335 = 3U;
	int16_t x336 = INT16_MAX;
	static volatile int32_t t83 = 3;

	t83 = ((x333+(x334==x335))^x336);

	if (t83 != -32365) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	volatile uint16_t x338 = UINT16_MAX;
	volatile int16_t x339 = INT16_MIN;
	uint16_t x340 = 2187U;
	static volatile uint32_t t84 = 101461U;

	t84 = ((x337+(x338==x339))^x340);

	if (t84 != 4294965108U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x343 = UINT64_MAX;
	uint64_t x344 = 1431166171507649247LLU;
	uint64_t t85 = 1336734543LLU;

	t85 = ((x341+(x342==x343))^x344);

	if (t85 != 17015577902201924319LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -11;
	static int16_t x347 = INT16_MAX;
	volatile uint64_t t86 = 116LLU;

	t86 = ((x345+(x346==x347))^x348);

	if (t86 != 10LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x349 = 120U;
	int16_t x350 = INT16_MAX;
	volatile uint32_t x351 = 15152U;
	int64_t t87 = 904LL;

	t87 = ((x349+(x350==x351))^x352);

	if (t87 != -9223372036854775688LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MIN;
	int32_t x354 = -1;
	volatile int32_t x355 = INT32_MAX;
	volatile int32_t t88 = -455;

	t88 = ((x353+(x354==x355))^x356);

	if (t88 != -32766) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MIN;
	volatile uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = -15514;

	t89 = ((x357+(x358==x359))^x360);

	if (t89 != 65280) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 1U;
	int8_t x362 = 1;
	uint64_t x363 = 744LLU;
	int8_t x364 = INT8_MIN;
	volatile uint32_t t90 = 77U;

	t90 = ((x361+(x362==x363))^x364);

	if (t90 != 4294967169U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 23747U;
	int8_t x368 = INT8_MAX;

	t91 = ((x365+(x366==x367))^x368);

	if (t91 != 601783035197161391LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	static int16_t x370 = -1;
	int16_t x371 = 5;
	int32_t t92 = -238685;

	t92 = ((x369+(x370==x371))^x372);

	if (t92 != 65408) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = 16U;
	uint64_t x375 = 59032224927342748LLU;
	int32_t x376 = INT32_MAX;

	t93 = ((x373+(x374==x375))^x376);

	if (t93 != 2147483631) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x378 = UINT8_MAX;
	volatile uint16_t x380 = 26U;
	volatile int32_t t94 = -816831;

	t94 = ((x377+(x378==x379))^x380);

	if (t94 != -27) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	int64_t x382 = -1LL;
	int32_t x384 = 286;
	int32_t t95 = 45127;

	t95 = ((x381+(x382==x383))^x384);

	if (t95 != 481) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x385 = 50;
	uint32_t x386 = 376512U;
	uint64_t x387 = UINT64_MAX;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = -253442;

	t96 = ((x385+(x386==x387))^x388);

	if (t96 != 205) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x389 = 74U;
	int32_t x390 = -3325089;
	uint8_t x391 = 0U;
	int16_t x392 = INT16_MAX;
	static uint32_t t97 = 17U;

	t97 = ((x389+(x390==x391))^x392);

	if (t97 != 32693U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = INT64_MIN;
	uint64_t x394 = 37574011193754895LLU;
	static int8_t x395 = 2;
	int16_t x396 = INT16_MIN;
	volatile int64_t t98 = -2005502123189LL;

	t98 = ((x393+(x394==x395))^x396);

	if (t98 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	uint8_t x399 = 10U;
	uint8_t x400 = 2U;
	static int32_t t99 = 14626999;

	t99 = ((x397+(x398==x399))^x400);

	if (t99 != 3) { NG(); } else { ; }
	
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

