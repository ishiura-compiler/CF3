#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MIN;
volatile int32_t t2 = -3040353;
uint8_t x15 = 85U;
int16_t x16 = INT16_MIN;
int32_t x19 = 3;
uint64_t x23 = 210758LLU;
static volatile uint8_t x26 = 2U;
int64_t x30 = -1LL;
int16_t x31 = -5;
static int8_t x35 = -1;
int64_t x42 = INT64_MAX;
volatile int32_t t10 = 1;
uint32_t x45 = UINT32_MAX;
int8_t x51 = -51;
volatile int32_t t14 = 7863;
uint16_t x62 = 30U;
volatile int32_t x70 = INT32_MIN;
int8_t x76 = INT8_MIN;
int64_t x81 = 15788LL;
uint64_t x83 = UINT64_MAX;
volatile int32_t t20 = -3216;
volatile int64_t x88 = INT64_MAX;
int16_t x94 = INT16_MAX;
volatile int16_t x97 = INT16_MAX;
int8_t x99 = -1;
int32_t x103 = -1;
static uint16_t x114 = 4315U;
int16_t x118 = INT16_MIN;
uint16_t x119 = 5U;
int16_t x120 = -1;
volatile int32_t t30 = -3720;
int32_t x125 = 2;
static int8_t x126 = -43;
uint16_t x127 = 693U;
static int8_t x130 = 1;
volatile uint64_t x132 = UINT64_MAX;
volatile int32_t t33 = -235672784;
static int64_t x140 = INT64_MIN;
static volatile int32_t t34 = 255661490;
volatile uint16_t x145 = 1308U;
static volatile int32_t t36 = 349;
int32_t x150 = INT32_MAX;
int32_t x157 = -28;
static volatile int32_t t39 = -598;
volatile int64_t x161 = -1LL;
int32_t x162 = INT32_MAX;
int8_t x197 = INT8_MIN;
int16_t x200 = INT16_MIN;
int32_t t46 = -1346;
int8_t x202 = INT8_MIN;
volatile uint32_t x205 = 9U;
int8_t x208 = -56;
static volatile int16_t x212 = INT16_MIN;
int8_t x214 = 58;
int64_t x215 = INT64_MIN;
uint16_t x216 = 0U;
int32_t t50 = 5;
volatile int64_t x218 = -1LL;
static uint32_t x222 = UINT32_MAX;
static int64_t x224 = INT64_MIN;
int32_t t53 = -479732499;
int8_t x238 = -3;
int8_t x239 = 1;
int64_t x241 = -1LL;
int32_t x253 = 0;
int32_t x257 = 630175240;
uint8_t x270 = UINT8_MAX;
int64_t x273 = -2136546653594LL;
uint64_t x274 = 44LLU;
int32_t t66 = 2913355;
volatile uint16_t x288 = 1569U;
volatile int32_t t67 = 0;
int8_t x293 = INT8_MIN;
int32_t x294 = INT32_MIN;
int32_t t69 = -44545133;
int32_t x307 = INT32_MAX;
volatile int16_t x308 = INT16_MAX;
uint8_t x317 = 17U;
static volatile int16_t x319 = -1;
volatile int32_t t74 = 419;
static uint16_t x322 = 6U;
uint16_t x325 = 617U;
volatile int32_t x332 = INT32_MIN;
int8_t x334 = INT8_MAX;
int32_t x344 = INT32_MAX;
uint8_t x346 = 50U;
volatile int32_t t83 = 420;
int64_t x357 = -1LL;
int8_t x366 = INT8_MIN;
static volatile uint8_t x375 = 34U;
int16_t x376 = INT16_MIN;
int64_t x384 = 2230139LL;
static uint8_t x387 = UINT8_MAX;
int32_t t93 = -4;
static int8_t x409 = INT8_MIN;
int8_t x411 = INT8_MIN;
int8_t x421 = -1;
uint32_t x424 = UINT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = -1;
	static int8_t x3 = INT8_MAX;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 186;

	t0 = ((x1+(x2<=x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 0U;
	static int8_t x6 = -8;
	static uint16_t x7 = UINT16_MAX;
	int32_t t1 = 3775;

	t1 = ((x5+(x6<=x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	volatile int64_t x10 = INT64_MIN;
	static uint64_t x11 = 2965888142624840LLU;
	static uint16_t x12 = UINT16_MAX;

	t2 = ((x9+(x10<=x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	static uint8_t x14 = UINT8_MAX;
	static int32_t t3 = -29;

	t3 = ((x13+(x14<=x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static int64_t x18 = 16186251LL;
	int64_t x20 = INT64_MAX;
	volatile int32_t t4 = -600516635;

	t4 = ((x17+(x18<=x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static volatile int16_t x22 = INT16_MIN;
	uint64_t x24 = 307796739581391067LLU;
	int32_t t5 = 1;

	t5 = ((x21+(x22<=x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 31944188;

	t6 = ((x25+(x26<=x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x32 = -1;
	int32_t t7 = -16236553;

	t7 = ((x29+(x30<=x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint8_t x34 = 52U;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = 52986;

	t8 = ((x33+(x34<=x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile uint64_t x38 = UINT64_MAX;
	volatile uint32_t x39 = 796U;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 1;

	t9 = ((x37+(x38<=x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = 1;
	uint32_t x43 = 4591U;
	static int16_t x44 = INT16_MIN;

	t10 = ((x41+(x42<=x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = INT64_MAX;
	volatile uint16_t x47 = 43U;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = -585950;

	t11 = ((x45+(x46<=x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = 761;
	static uint32_t x50 = 220U;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = -3;

	t12 = ((x49+(x50<=x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	static int64_t x54 = INT64_MAX;
	int32_t x55 = INT32_MIN;
	uint16_t x56 = UINT16_MAX;
	static int32_t t13 = 1;

	t13 = ((x53+(x54<=x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	volatile int16_t x60 = INT16_MIN;

	t14 = ((x57+(x58<=x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int64_t x63 = -1LL;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -5540;

	t15 = ((x61+(x62<=x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	int8_t x66 = 39;
	uint64_t x67 = 1583LLU;
	int64_t x68 = -13826LL;
	static volatile int32_t t16 = 6;

	t16 = ((x65+(x66<=x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 10U;
	int64_t x71 = -1LL;
	static volatile int64_t x72 = INT64_MIN;
	volatile int32_t t17 = -1063610079;

	t17 = ((x69+(x70<=x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	uint32_t x74 = 14213U;
	int8_t x75 = 0;
	volatile int32_t t18 = 209889471;

	t18 = ((x73+(x74<=x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint32_t x78 = UINT32_MAX;
	uint16_t x79 = 4U;
	uint64_t x80 = 113LLU;
	volatile int32_t t19 = -3822;

	t19 = ((x77+(x78<=x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -1;
	int64_t x84 = INT64_MIN;

	t20 = ((x81+(x82<=x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 1226U;
	volatile uint8_t x86 = 114U;
	volatile int64_t x87 = -2900038LL;
	volatile int32_t t21 = -130601;

	t21 = ((x85+(x86<=x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = -89106;
	volatile uint16_t x91 = 2484U;
	static int8_t x92 = 3;
	volatile int32_t t22 = -2224331;

	t22 = ((x89+(x90<=x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 7U;
	int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -595;

	t23 = ((x93+(x94<=x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x98 = 42U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 4064670;

	t24 = ((x97+(x98<=x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int64_t x102 = INT64_MIN;
	int8_t x104 = 11;
	int32_t t25 = 204;

	t25 = ((x101+(x102<=x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int32_t x106 = -69720855;
	int16_t x107 = INT16_MAX;
	volatile int16_t x108 = INT16_MIN;
	int32_t t26 = -112;

	t26 = ((x105+(x106<=x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = -30405977;
	uint8_t x111 = UINT8_MAX;
	int32_t x112 = 29899236;
	volatile int32_t t27 = 617410356;

	t27 = ((x109+(x110<=x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 117936065LLU;
	int32_t x115 = -366015;
	int64_t x116 = 61474LL;
	int32_t t28 = -859859381;

	t28 = ((x113+(x114<=x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x117 = UINT32_MAX;
	int32_t t29 = -2801097;

	t29 = ((x117+(x118<=x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 185343766LLU;
	volatile uint32_t x122 = UINT32_MAX;
	uint8_t x123 = 86U;
	int32_t x124 = INT32_MIN;

	t30 = ((x121+(x122<=x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = 2155620;

	t31 = ((x125+(x126<=x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -107;
	volatile int64_t x131 = INT64_MIN;
	int32_t t32 = -5808;

	t32 = ((x129+(x130<=x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	static int32_t x134 = INT32_MAX;
	uint64_t x135 = UINT64_MAX;
	volatile uint32_t x136 = UINT32_MAX;

	t33 = ((x133+(x134<=x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int32_t x138 = -1;
	int8_t x139 = 5;

	t34 = ((x137+(x138<=x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile uint64_t x142 = 535394975174899703LLU;
	volatile uint32_t x143 = 4U;
	int32_t x144 = -11;
	int32_t t35 = 1;

	t35 = ((x141+(x142<=x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = INT64_MIN;
	static int8_t x147 = 0;
	uint32_t x148 = 7U;

	t36 = ((x145+(x146<=x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -14;
	uint32_t x151 = UINT32_MAX;
	int64_t x152 = 763LL;
	volatile int32_t t37 = -37;

	t37 = ((x149+(x150<=x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = 1;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -54981792;

	t38 = ((x153+(x154<=x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 1U;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 80U;

	t39 = ((x157+(x158<=x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MIN;
	int32_t t40 = -5531268;

	t40 = ((x161+(x162<=x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static volatile uint8_t x166 = 58U;
	static int8_t x167 = -11;
	static uint32_t x168 = 827200U;
	volatile int32_t t41 = -1346072;

	t41 = ((x165+(x166<=x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = 704;
	int64_t x178 = -1LL;
	static volatile int8_t x179 = -1;
	int16_t x180 = INT16_MIN;
	volatile int32_t t42 = 16546269;

	t42 = ((x177+(x178<=x179))<=x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MAX;
	uint16_t x183 = 2U;
	uint64_t x184 = 1372759066LLU;
	int32_t t43 = -3600;

	t43 = ((x181+(x182<=x183))<=x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = UINT8_MAX;
	static int16_t x186 = -1;
	int32_t x187 = INT32_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t44 = -306;

	t44 = ((x185+(x186<=x187))<=x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	static int8_t x194 = -1;
	uint16_t x195 = 8524U;
	int32_t x196 = INT32_MIN;
	volatile int32_t t45 = 852166;

	t45 = ((x193+(x194<=x195))<=x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x198 = 203300U;
	int16_t x199 = INT16_MIN;

	t46 = ((x197+(x198<=x199))<=x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x201 = 1914;
	uint32_t x203 = 1421U;
	static int16_t x204 = -5150;
	volatile int32_t t47 = 207155366;

	t47 = ((x201+(x202<=x203))<=x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x206 = -1;
	volatile uint16_t x207 = UINT16_MAX;
	volatile int32_t t48 = -4748;

	t48 = ((x205+(x206<=x207))<=x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = -469;
	static int16_t x210 = -1;
	int16_t x211 = 30;
	int32_t t49 = 2732789;

	t49 = ((x209+(x210<=x211))<=x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MAX;

	t50 = ((x213+(x214<=x215))<=x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x217 = 15829982359LLU;
	int16_t x219 = 3;
	volatile uint16_t x220 = 36U;
	int32_t t51 = 376;

	t51 = ((x217+(x218<=x219))<=x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x221 = 1734;
	uint16_t x223 = 349U;
	volatile int32_t t52 = -108948191;

	t52 = ((x221+(x222<=x223))<=x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = 61328258883758097LL;
	static int16_t x226 = INT16_MIN;
	uint32_t x227 = 1437U;
	static uint16_t x228 = UINT16_MAX;

	t53 = ((x225+(x226<=x227))<=x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = 363508LL;
	volatile int32_t x230 = -1786;
	int32_t x231 = INT32_MIN;
	int64_t x232 = 891971226028242LL;
	volatile int32_t t54 = -1;

	t54 = ((x229+(x230<=x231))<=x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = 1;
	static uint32_t x234 = 11138458U;
	uint32_t x235 = 225345U;
	uint64_t x236 = 6463301252LLU;
	static int32_t t55 = -13451;

	t55 = ((x233+(x234<=x235))<=x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x237 = INT64_MIN;
	uint8_t x240 = UINT8_MAX;
	int32_t t56 = 158;

	t56 = ((x237+(x238<=x239))<=x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x242 = 5938505699677989203LLU;
	int64_t x243 = -1LL;
	int32_t x244 = 252;
	volatile int32_t t57 = -3807;

	t57 = ((x241+(x242<=x243))<=x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = 3388U;
	int64_t x246 = 153350678517613LL;
	static uint8_t x247 = UINT8_MAX;
	static uint16_t x248 = 5U;
	int32_t t58 = 22632524;

	t58 = ((x245+(x246<=x247))<=x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x254 = 512118752954721575LL;
	uint16_t x255 = UINT16_MAX;
	int32_t x256 = INT32_MAX;
	static volatile int32_t t59 = -261246;

	t59 = ((x253+(x254<=x255))<=x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x258 = -1;
	int64_t x259 = 1411947444536193LL;
	uint64_t x260 = 27526190214LLU;
	int32_t t60 = 227666;

	t60 = ((x257+(x258<=x259))<=x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MAX;
	volatile int32_t x262 = INT32_MAX;
	static int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MAX;
	volatile int32_t t61 = -2929312;

	t61 = ((x261+(x262<=x263))<=x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = -1LL;
	int64_t x267 = INT64_MIN;
	static volatile int8_t x268 = -1;
	int32_t t62 = 1456;

	t62 = ((x265+(x266<=x267))<=x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MAX;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 10U;
	int32_t t63 = -1159;

	t63 = ((x269+(x270<=x271))<=x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x275 = 2LLU;
	int32_t x276 = INT32_MIN;
	volatile int32_t t64 = -10903;

	t64 = ((x273+(x274<=x275))<=x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = INT8_MAX;
	uint32_t x278 = 28648U;
	static uint32_t x279 = 191314U;
	uint32_t x280 = 14U;
	volatile int32_t t65 = -1671;

	t65 = ((x277+(x278<=x279))<=x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x282 = 45LLU;
	uint8_t x283 = 53U;
	volatile uint8_t x284 = 11U;

	t66 = ((x281+(x282<=x283))<=x284);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x285 = 17;
	uint8_t x286 = UINT8_MAX;
	int64_t x287 = 3772289344LL;

	t67 = ((x285+(x286<=x287))<=x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = -1;
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = -1;
	uint64_t x292 = 2591LLU;
	int32_t t68 = -50211;

	t68 = ((x289+(x290<=x291))<=x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x295 = UINT8_MAX;
	int64_t x296 = -1LL;

	t69 = ((x293+(x294<=x295))<=x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x297 = INT16_MAX;
	int32_t x298 = -4069;
	uint32_t x299 = 11U;
	int32_t x300 = -696721;
	int32_t t70 = -1029133415;

	t70 = ((x297+(x298<=x299))<=x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MAX;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 10U;
	static int32_t t71 = 1;

	t71 = ((x301+(x302<=x303))<=x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x305 = UINT32_MAX;
	int64_t x306 = INT64_MIN;
	static volatile int32_t t72 = -2;

	t72 = ((x305+(x306<=x307))<=x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 18U;
	int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MIN;
	int64_t x316 = -1LL;
	volatile int32_t t73 = 459667;

	t73 = ((x313+(x314<=x315))<=x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x318 = INT32_MIN;
	int64_t x320 = INT64_MAX;

	t74 = ((x317+(x318<=x319))<=x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = INT32_MIN;
	int32_t x323 = -15;
	uint64_t x324 = 2100566690661314LLU;
	volatile int32_t t75 = -71595;

	t75 = ((x321+(x322<=x323))<=x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x326 = -10;
	int16_t x327 = -1;
	volatile int16_t x328 = INT16_MIN;
	int32_t t76 = 625;

	t76 = ((x325+(x326<=x327))<=x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = INT64_MIN;
	static uint16_t x330 = 1U;
	int64_t x331 = 5549143098725LL;
	volatile int32_t t77 = 7837;

	t77 = ((x329+(x330<=x331))<=x332);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x333 = 730257;
	static uint32_t x335 = 747014U;
	int32_t x336 = INT32_MIN;
	volatile int32_t t78 = -713794;

	t78 = ((x333+(x334<=x335))<=x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = 118891;
	int8_t x338 = -1;
	uint8_t x339 = 127U;
	int8_t x340 = INT8_MAX;
	volatile int32_t t79 = -48282931;

	t79 = ((x337+(x338<=x339))<=x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = 3;
	int16_t x342 = INT16_MIN;
	uint16_t x343 = UINT16_MAX;
	static int32_t t80 = -29699528;

	t80 = ((x341+(x342<=x343))<=x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = -1LL;
	volatile int16_t x347 = INT16_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile int32_t t81 = -1;

	t81 = ((x345+(x346<=x347))<=x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = 2U;
	uint64_t x350 = UINT64_MAX;
	int16_t x351 = -1;
	static int16_t x352 = -110;
	static volatile int32_t t82 = -164693;

	t82 = ((x349+(x350<=x351))<=x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = 11;
	int8_t x354 = -1;
	int8_t x355 = -15;
	static int64_t x356 = -1LL;

	t83 = ((x353+(x354<=x355))<=x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x358 = INT16_MIN;
	volatile int32_t x359 = INT32_MAX;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t84 = 4;

	t84 = ((x357+(x358<=x359))<=x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = UINT8_MAX;
	volatile uint32_t x362 = UINT32_MAX;
	int8_t x363 = -1;
	int64_t x364 = -1LL;
	int32_t t85 = 383326129;

	t85 = ((x361+(x362<=x363))<=x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x365 = INT8_MIN;
	int16_t x367 = -1;
	int32_t x368 = -3143;
	int32_t t86 = -28;

	t86 = ((x365+(x366<=x367))<=x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x373 = 115U;
	int32_t x374 = 13;
	int32_t t87 = 1602762;

	t87 = ((x373+(x374<=x375))<=x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x377 = UINT32_MAX;
	int32_t x378 = -9563;
	uint16_t x379 = 559U;
	int64_t x380 = -2702215660608317139LL;
	static volatile int32_t t88 = 343100729;

	t88 = ((x377+(x378<=x379))<=x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x381 = 18308305;
	volatile uint64_t x382 = 320LLU;
	int64_t x383 = -559085040971792LL;
	int32_t t89 = -3;

	t89 = ((x381+(x382<=x383))<=x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x385 = 4864121163LLU;
	int32_t x386 = INT32_MIN;
	int64_t x388 = 3024432171130LL;
	static volatile int32_t t90 = 1592677;

	t90 = ((x385+(x386<=x387))<=x388);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x389 = 1959U;
	int64_t x390 = INT64_MAX;
	static uint16_t x391 = 27U;
	int32_t x392 = INT32_MAX;
	int32_t t91 = 63;

	t91 = ((x389+(x390<=x391))<=x392);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x393 = UINT16_MAX;
	static volatile uint32_t x394 = UINT32_MAX;
	int64_t x395 = INT64_MIN;
	static uint32_t x396 = UINT32_MAX;
	int32_t t92 = -15526;

	t92 = ((x393+(x394<=x395))<=x396);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = 1;
	static uint16_t x398 = 34U;
	int16_t x399 = -145;
	volatile int16_t x400 = INT16_MIN;

	t93 = ((x397+(x398<=x399))<=x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = INT64_MIN;
	static int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MIN;
	static int8_t x404 = INT8_MAX;
	int32_t t94 = 265;

	t94 = ((x401+(x402<=x403))<=x404);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = UINT32_MAX;
	volatile int32_t x406 = INT32_MAX;
	int16_t x407 = INT16_MIN;
	uint64_t x408 = 22785602760512LLU;
	volatile int32_t t95 = -1;

	t95 = ((x405+(x406<=x407))<=x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x410 = -299;
	int8_t x412 = INT8_MIN;
	volatile int32_t t96 = -45;

	t96 = ((x409+(x410<=x411))<=x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x413 = INT16_MIN;
	static uint64_t x414 = UINT64_MAX;
	uint64_t x415 = 412496385510873LLU;
	int32_t x416 = -2271522;
	volatile int32_t t97 = 1022;

	t97 = ((x413+(x414<=x415))<=x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = INT32_MIN;
	int8_t x418 = -1;
	int64_t x419 = 17876059877100094LL;
	int32_t x420 = -1592742;
	volatile int32_t t98 = -459;

	t98 = ((x417+(x418<=x419))<=x420);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x422 = INT8_MIN;
	uint8_t x423 = UINT8_MAX;
	volatile int32_t t99 = -1525;

	t99 = ((x421+(x422<=x423))<=x424);

	if (t99 != 1) { NG(); } else { ; }
	
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
