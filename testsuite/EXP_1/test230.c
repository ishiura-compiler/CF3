#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -8730146850212LL;
volatile uint32_t x3 = 1927589527U;
uint16_t x5 = UINT16_MAX;
uint8_t x12 = UINT8_MAX;
int8_t x22 = -45;
static int8_t x25 = INT8_MIN;
static int64_t x28 = INT64_MAX;
volatile int32_t t5 = -1;
int32_t x37 = 438892034;
uint16_t x42 = UINT16_MAX;
volatile uint64_t x46 = 296236020823214711LLU;
int32_t x48 = INT32_MIN;
static volatile uint16_t x50 = 13087U;
int32_t x51 = INT32_MIN;
int16_t x57 = 0;
static uint16_t x64 = UINT16_MAX;
uint16_t x72 = 111U;
uint32_t x74 = 6030U;
static int32_t t23 = -7069;
int64_t x109 = -1LL;
int32_t x110 = -1;
uint32_t x122 = 1619340067U;
int64_t x128 = INT64_MIN;
int8_t x129 = -20;
int16_t x133 = INT16_MIN;
static int8_t x139 = INT8_MIN;
int32_t x140 = INT32_MIN;
volatile uint8_t x143 = 1U;
int8_t x158 = -11;
uint16_t x163 = UINT16_MAX;
int8_t x164 = INT8_MAX;
int32_t x182 = INT32_MIN;
int32_t t43 = 13331;
int8_t x189 = INT8_MIN;
int64_t x200 = INT64_MIN;
static int64_t x202 = INT64_MAX;
volatile int32_t x205 = INT32_MIN;
uint64_t x210 = 7052268045130439LLU;
int32_t x211 = -234;
int64_t x212 = INT64_MIN;
uint32_t x219 = UINT32_MAX;
volatile int32_t t50 = 2;
static int32_t x227 = -1;
uint16_t x245 = 158U;
static volatile int32_t t55 = 9;
volatile uint8_t x256 = UINT8_MAX;
static int32_t x258 = INT32_MIN;
uint8_t x267 = 5U;
volatile int32_t t58 = -1;
volatile int16_t x269 = INT16_MAX;
static volatile int8_t x275 = -1;
static int64_t x278 = -1LL;
static uint64_t x279 = UINT64_MAX;
int8_t x292 = -1;
int8_t x298 = -4;
uint32_t x302 = UINT32_MAX;
int8_t x314 = -1;
int64_t x323 = INT64_MAX;
static int64_t x331 = -3510584LL;
volatile int32_t x340 = INT32_MIN;
volatile int32_t t72 = -1714775;
uint64_t x347 = 56LLU;
static int32_t t73 = -75123;
uint64_t x350 = UINT64_MAX;
static int16_t x352 = INT16_MIN;
static int16_t x383 = 1;
uint16_t x385 = UINT16_MAX;
int32_t t82 = -6;
static int32_t x394 = -1;
volatile int32_t t83 = -20;
int64_t x402 = INT64_MAX;
int16_t x411 = INT16_MIN;
int32_t x417 = -106;
static int64_t x419 = INT64_MIN;
static volatile int8_t x430 = INT8_MAX;
int64_t x443 = INT64_MIN;
static uint32_t x455 = 22U;
int32_t t93 = -888;
int8_t x462 = INT8_MAX;
uint8_t x467 = 6U;
volatile uint8_t x469 = UINT8_MAX;
static int16_t x477 = 4891;
int64_t x480 = -1LL;
int64_t x483 = INT64_MIN;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static uint32_t x4 = 1498U;
	int32_t t0 = 758691377;

	t0 = (((x1-x2)%x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = INT64_MAX;
	int64_t x7 = INT64_MAX;
	int8_t x8 = -1;
	volatile int32_t t1 = 1572;

	t1 = (((x5-x6)%x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -912;
	uint64_t x10 = UINT64_MAX;
	static volatile int64_t x11 = INT64_MIN;
	volatile int32_t t2 = 42;

	t2 = (((x9-x10)%x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x14 = 1U;
	int32_t x15 = INT32_MIN;
	volatile int32_t x16 = INT32_MIN;
	int32_t t3 = -362640;

	t3 = (((x13-x14)%x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	int64_t x23 = -1592LL;
	uint64_t x24 = 2634882488LLU;
	int32_t t4 = -2;

	t4 = (((x21-x22)%x23)<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = INT64_MIN;
	static int16_t x27 = INT16_MIN;

	t5 = (((x25-x26)%x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x30 = INT32_MAX;
	uint32_t x31 = UINT32_MAX;
	static uint64_t x32 = 51310431LLU;
	volatile int32_t t6 = 52701406;

	t6 = (((x29-x30)%x31)<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MIN;
	uint32_t x34 = 31169U;
	uint64_t x35 = UINT64_MAX;
	uint8_t x36 = UINT8_MAX;
	static volatile int32_t t7 = 337;

	t7 = (((x33-x34)%x35)<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = 115;
	static int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t8 = 125774341;

	t8 = (((x37-x38)%x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	uint16_t x43 = 22996U;
	uint32_t x44 = 48107141U;
	int32_t t9 = 17;

	t9 = (((x41-x42)%x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	volatile int32_t x47 = -551612;
	int32_t t10 = 1;

	t10 = (((x45-x46)%x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 13U;
	uint8_t x52 = 53U;
	volatile int32_t t11 = 1;

	t11 = (((x49-x50)%x51)<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = INT16_MAX;
	int64_t x55 = INT64_MAX;
	uint32_t x56 = UINT32_MAX;
	int32_t t12 = -228929340;

	t12 = (((x53-x54)%x55)<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = INT8_MIN;
	volatile uint16_t x59 = UINT16_MAX;
	static volatile int16_t x60 = -1;
	volatile int32_t t13 = 10967;

	t13 = (((x57-x58)%x59)<x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = -1;
	volatile int64_t x63 = -8194LL;
	static int32_t t14 = -95;

	t14 = (((x61-x62)%x63)<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 48;
	static uint8_t x66 = 29U;
	int64_t x67 = -1LL;
	int16_t x68 = INT16_MAX;
	int32_t t15 = 127;

	t15 = (((x65-x66)%x67)<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	volatile uint32_t x70 = UINT32_MAX;
	uint16_t x71 = 432U;
	volatile int32_t t16 = -888566608;

	t16 = (((x69-x70)%x71)<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -59327215618548857LL;
	int16_t x75 = INT16_MAX;
	int16_t x76 = INT16_MAX;
	volatile int32_t t17 = 57460;

	t17 = (((x73-x74)%x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = -41;
	int16_t x80 = -1002;
	volatile int32_t t18 = 263888144;

	t18 = (((x77-x78)%x79)<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MAX;
	static int16_t x82 = INT16_MIN;
	uint64_t x83 = UINT64_MAX;
	static volatile int64_t x84 = -11615484LL;
	volatile int32_t t19 = 11407;

	t19 = (((x81-x82)%x83)<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 31U;
	static int64_t x86 = -1LL;
	int32_t x87 = -390;
	int64_t x88 = INT64_MIN;
	int32_t t20 = 1103624;

	t20 = (((x85-x86)%x87)<x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = -1LL;
	int32_t x90 = INT32_MIN;
	static uint64_t x91 = UINT64_MAX;
	int64_t x92 = 81LL;
	int32_t t21 = 146693;

	t21 = (((x89-x90)%x91)<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = 378U;
	volatile uint32_t x95 = UINT32_MAX;
	volatile int64_t x96 = INT64_MIN;
	static volatile int32_t t22 = -23929;

	t22 = (((x93-x94)%x95)<x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = -893989902575072915LL;
	static uint64_t x102 = 474840LLU;
	int64_t x103 = -1LL;
	int32_t x104 = INT32_MAX;

	t23 = (((x101-x102)%x103)<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -16156;
	volatile uint32_t x106 = UINT32_MAX;
	int64_t x107 = -954246366805LL;
	volatile uint8_t x108 = 56U;
	int32_t t24 = 1;

	t24 = (((x105-x106)%x107)<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x111 = INT16_MAX;
	static volatile int64_t x112 = -2960289530238492001LL;
	int32_t t25 = -14;

	t25 = (((x109-x110)%x111)<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MAX;
	static uint8_t x114 = UINT8_MAX;
	uint16_t x115 = 211U;
	static volatile uint16_t x116 = 78U;
	static int32_t t26 = 103975;

	t26 = (((x113-x114)%x115)<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = UINT64_MAX;
	uint32_t x118 = 10809U;
	int32_t x119 = 10;
	int32_t x120 = INT32_MAX;
	int32_t t27 = 163;

	t27 = (((x117-x118)%x119)<x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = 633993188LL;
	volatile uint16_t x123 = 61U;
	int8_t x124 = INT8_MIN;
	static int32_t t28 = 1416067;

	t28 = (((x121-x122)%x123)<x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x125 = 4U;
	uint8_t x126 = 0U;
	static volatile uint8_t x127 = UINT8_MAX;
	volatile int32_t t29 = 23707;

	t29 = (((x125-x126)%x127)<x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = INT32_MIN;
	static int64_t x131 = -1LL;
	volatile int32_t x132 = INT32_MIN;
	static int32_t t30 = 4361725;

	t30 = (((x129-x130)%x131)<x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x134 = 127U;
	uint64_t x135 = UINT64_MAX;
	uint16_t x136 = 11U;
	volatile int32_t t31 = -827573551;

	t31 = (((x133-x134)%x135)<x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x137 = INT8_MIN;
	uint16_t x138 = 411U;
	volatile int32_t t32 = -3990;

	t32 = (((x137-x138)%x139)<x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	volatile int16_t x142 = -129;
	int16_t x144 = -163;
	static volatile int32_t t33 = 1;

	t33 = (((x141-x142)%x143)<x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = -265365118189055712LL;
	volatile int32_t x146 = 0;
	int16_t x147 = -4670;
	int8_t x148 = -15;
	int32_t t34 = -1402007;

	t34 = (((x145-x146)%x147)<x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	volatile uint32_t x150 = UINT32_MAX;
	uint16_t x151 = 12773U;
	static int64_t x152 = 105LL;
	volatile int32_t t35 = 1;

	t35 = (((x149-x150)%x151)<x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = 1;
	volatile int16_t x154 = INT16_MAX;
	int32_t x155 = INT32_MIN;
	static uint8_t x156 = 55U;
	volatile int32_t t36 = -103;

	t36 = (((x153-x154)%x155)<x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x157 = INT16_MIN;
	int16_t x159 = INT16_MAX;
	uint16_t x160 = UINT16_MAX;
	static int32_t t37 = -827;

	t37 = (((x157-x158)%x159)<x160);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	volatile uint32_t x162 = 6U;
	volatile int32_t t38 = 638;

	t38 = (((x161-x162)%x163)<x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	volatile int16_t x171 = 9;
	static int16_t x172 = -1;
	static volatile int32_t t39 = 3;

	t39 = (((x169-x170)%x171)<x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = -1;
	int32_t x175 = INT32_MAX;
	static uint16_t x176 = 0U;
	int32_t t40 = 1;

	t40 = (((x173-x174)%x175)<x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x177 = 16;
	uint32_t x178 = 3303288U;
	static int32_t x179 = INT32_MAX;
	int64_t x180 = INT64_MAX;
	int32_t t41 = 126824;

	t41 = (((x177-x178)%x179)<x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 385692LLU;
	int64_t x183 = -1LL;
	uint64_t x184 = 3367647769337711643LLU;
	volatile int32_t t42 = 7667;

	t42 = (((x181-x182)%x183)<x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = 3U;
	uint16_t x186 = 7U;
	int32_t x187 = INT32_MAX;
	uint64_t x188 = 8514LLU;

	t43 = (((x185-x186)%x187)<x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x190 = 57281436U;
	int32_t x191 = 13;
	static volatile int16_t x192 = -7191;
	static volatile int32_t t44 = -1723;

	t44 = (((x189-x190)%x191)<x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = 3;
	int16_t x198 = INT16_MAX;
	static int8_t x199 = INT8_MAX;
	int32_t t45 = -1199;

	t45 = (((x197-x198)%x199)<x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = UINT32_MAX;
	volatile int32_t x203 = INT32_MIN;
	volatile int16_t x204 = INT16_MAX;
	int32_t t46 = 0;

	t46 = (((x201-x202)%x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x206 = INT16_MIN;
	int64_t x207 = -1LL;
	volatile int64_t x208 = INT64_MIN;
	int32_t t47 = -849280251;

	t47 = (((x205-x206)%x207)<x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x209 = 41U;
	int32_t t48 = 233916504;

	t48 = (((x209-x210)%x211)<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = 451752;
	int8_t x218 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	volatile int32_t t49 = 3357674;

	t49 = (((x217-x218)%x219)<x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = UINT16_MAX;
	int8_t x222 = INT8_MIN;
	volatile int32_t x223 = INT32_MAX;
	static volatile uint64_t x224 = UINT64_MAX;

	t50 = (((x221-x222)%x223)<x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = -52172783;
	int32_t x226 = INT32_MIN;
	static int64_t x228 = -212LL;
	int32_t t51 = -183835;

	t51 = (((x225-x226)%x227)<x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = -1;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MAX;
	int32_t t52 = 1545314;

	t52 = (((x233-x234)%x235)<x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 1;
	int16_t x238 = INT16_MIN;
	volatile int32_t x239 = -53333926;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t53 = -1;

	t53 = (((x237-x238)%x239)<x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = 0U;
	int32_t x242 = -1;
	static int16_t x243 = 228;
	int32_t x244 = 7;
	volatile int32_t t54 = 60;

	t54 = (((x241-x242)%x243)<x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MAX;

	t55 = (((x245-x246)%x247)<x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = -1;
	uint8_t x255 = 2U;
	volatile int32_t t56 = 2431;

	t56 = (((x253-x254)%x255)<x256);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = 1047686336LL;
	static uint32_t x259 = 4025285U;
	static int16_t x260 = INT16_MIN;
	int32_t t57 = -918362391;

	t57 = (((x257-x258)%x259)<x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x265 = -1LL;
	static int16_t x266 = INT16_MAX;
	int64_t x268 = INT64_MIN;

	t58 = (((x265-x266)%x267)<x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x270 = 29U;
	int8_t x271 = INT8_MIN;
	uint8_t x272 = UINT8_MAX;
	static volatile int32_t t59 = -1;

	t59 = (((x269-x270)%x271)<x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = 1U;
	uint8_t x274 = UINT8_MAX;
	int16_t x276 = -1;
	int32_t t60 = -4076;

	t60 = (((x273-x274)%x275)<x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x277 = -1;
	uint16_t x280 = UINT16_MAX;
	int32_t t61 = -14665340;

	t61 = (((x277-x278)%x279)<x280);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x281 = 18848U;
	int32_t x282 = -1;
	volatile int32_t x283 = -170900933;
	int16_t x284 = -1;
	int32_t t62 = 195393;

	t62 = (((x281-x282)%x283)<x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x285 = UINT8_MAX;
	static uint64_t x286 = UINT64_MAX;
	int8_t x287 = INT8_MIN;
	static int8_t x288 = -44;
	static volatile int32_t t63 = -26;

	t63 = (((x285-x286)%x287)<x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = UINT8_MAX;
	static volatile uint8_t x290 = 1U;
	volatile int16_t x291 = INT16_MAX;
	int32_t t64 = -876720712;

	t64 = (((x289-x290)%x291)<x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = -1;
	int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MAX;
	volatile int8_t x296 = 1;
	volatile int32_t t65 = 55649;

	t65 = (((x293-x294)%x295)<x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = -9;
	uint8_t x299 = UINT8_MAX;
	static int32_t x300 = -1;
	volatile int32_t t66 = 572;

	t66 = (((x297-x298)%x299)<x300);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x301 = 812774902LLU;
	int16_t x303 = -1;
	volatile int16_t x304 = -1;
	static int32_t t67 = -3490153;

	t67 = (((x301-x302)%x303)<x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = INT16_MIN;
	static int64_t x315 = INT64_MIN;
	int8_t x316 = -1;
	volatile int32_t t68 = -16;

	t68 = (((x313-x314)%x315)<x316);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = -8;
	static uint16_t x322 = 120U;
	static int8_t x324 = INT8_MIN;
	int32_t t69 = -10402351;

	t69 = (((x321-x322)%x323)<x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = -1577401;
	int8_t x326 = 0;
	int64_t x327 = 112634340LL;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t70 = -256072004;

	t70 = (((x325-x326)%x327)<x328);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x329 = 15195U;
	uint32_t x330 = 7912U;
	int16_t x332 = -13;
	int32_t t71 = -503844;

	t71 = (((x329-x330)%x331)<x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x337 = 1711104LLU;
	static volatile int8_t x338 = 0;
	uint64_t x339 = 77732787LLU;

	t72 = (((x337-x338)%x339)<x340);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x345 = -1;
	volatile uint32_t x346 = UINT32_MAX;
	int16_t x348 = 0;

	t73 = (((x345-x346)%x347)<x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x349 = INT32_MAX;
	int8_t x351 = -1;
	int32_t t74 = -1387;

	t74 = (((x349-x350)%x351)<x352);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x353 = 9258756U;
	static volatile int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	static int32_t x356 = -1;
	volatile int32_t t75 = -27221848;

	t75 = (((x353-x354)%x355)<x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x365 = -1;
	int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	volatile int16_t x368 = INT16_MAX;
	int32_t t76 = 31676;

	t76 = (((x365-x366)%x367)<x368);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x369 = INT16_MIN;
	int8_t x370 = -3;
	uint32_t x371 = UINT32_MAX;
	volatile int32_t x372 = 80157522;
	volatile int32_t t77 = -40040999;

	t77 = (((x369-x370)%x371)<x372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x373 = UINT16_MAX;
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = INT32_MIN;
	int16_t x376 = -1;
	int32_t t78 = 1891;

	t78 = (((x373-x374)%x375)<x376);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x377 = INT16_MAX;
	int64_t x378 = -1LL;
	int64_t x379 = -1LL;
	static volatile int64_t x380 = INT64_MAX;
	int32_t t79 = 254794221;

	t79 = (((x377-x378)%x379)<x380);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x381 = -1LL;
	int32_t x382 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t80 = -30;

	t80 = (((x381-x382)%x383)<x384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x386 = 1550211699465LLU;
	static int64_t x387 = INT64_MAX;
	volatile int16_t x388 = INT16_MIN;
	int32_t t81 = 43035;

	t81 = (((x385-x386)%x387)<x388);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x389 = -1;
	int32_t x390 = INT32_MIN;
	uint8_t x391 = 4U;
	int16_t x392 = INT16_MIN;

	t82 = (((x389-x390)%x391)<x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x393 = 6U;
	int64_t x395 = INT64_MIN;
	int64_t x396 = 0LL;

	t83 = (((x393-x394)%x395)<x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x401 = 43U;
	int32_t x403 = 612730411;
	static int64_t x404 = INT64_MAX;
	int32_t t84 = -72;

	t84 = (((x401-x402)%x403)<x404);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x405 = INT16_MAX;
	int16_t x406 = INT16_MIN;
	uint16_t x407 = 1U;
	volatile int64_t x408 = INT64_MIN;
	volatile int32_t t85 = -508470;

	t85 = (((x405-x406)%x407)<x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x409 = 3U;
	static uint64_t x410 = 1799360LLU;
	int8_t x412 = INT8_MIN;
	volatile int32_t t86 = 5274131;

	t86 = (((x409-x410)%x411)<x412);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x418 = INT8_MAX;
	int8_t x420 = 1;
	int32_t t87 = -65114;

	t87 = (((x417-x418)%x419)<x420);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x425 = INT32_MIN;
	volatile int64_t x426 = -17257092315815997LL;
	static volatile int64_t x427 = INT64_MIN;
	int64_t x428 = INT64_MIN;
	int32_t t88 = -624487;

	t88 = (((x425-x426)%x427)<x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x429 = INT16_MIN;
	int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;
	static volatile int32_t t89 = -35;

	t89 = (((x429-x430)%x431)<x432);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x433 = UINT8_MAX;
	int8_t x434 = 27;
	int8_t x435 = INT8_MIN;
	volatile uint8_t x436 = UINT8_MAX;
	volatile int32_t t90 = -19020327;

	t90 = (((x433-x434)%x435)<x436);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x437 = -491903;
	volatile int8_t x438 = -1;
	static uint16_t x439 = 296U;
	static int16_t x440 = 1507;
	volatile int32_t t91 = -1;

	t91 = (((x437-x438)%x439)<x440);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x441 = UINT64_MAX;
	static int8_t x442 = 0;
	int16_t x444 = -1866;
	volatile int32_t t92 = 0;

	t92 = (((x441-x442)%x443)<x444);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x453 = 4862071U;
	int8_t x454 = -1;
	int32_t x456 = INT32_MAX;

	t93 = (((x453-x454)%x455)<x456);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x457 = INT64_MIN;
	static int64_t x458 = INT64_MIN;
	int32_t x459 = -1;
	int8_t x460 = INT8_MAX;
	volatile int32_t t94 = -609;

	t94 = (((x457-x458)%x459)<x460);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x461 = INT8_MAX;
	int16_t x463 = -4831;
	int64_t x464 = INT64_MIN;
	volatile int32_t t95 = 18;

	t95 = (((x461-x462)%x463)<x464);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x465 = -37;
	uint8_t x466 = 0U;
	uint64_t x468 = 21453409178031674LLU;
	int32_t t96 = -25;

	t96 = (((x465-x466)%x467)<x468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x470 = INT16_MIN;
	uint32_t x471 = UINT32_MAX;
	static int64_t x472 = -1LL;
	static volatile int32_t t97 = -505453153;

	t97 = (((x469-x470)%x471)<x472);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x478 = INT16_MIN;
	volatile int8_t x479 = INT8_MIN;
	int32_t t98 = 24146;

	t98 = (((x477-x478)%x479)<x480);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x481 = 38U;
	static int16_t x482 = -387;
	int32_t x484 = INT32_MIN;
	volatile int32_t t99 = 996905;

	t99 = (((x481-x482)%x483)<x484);

	if (t99 != 0) { NG(); } else { ; }
	
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

