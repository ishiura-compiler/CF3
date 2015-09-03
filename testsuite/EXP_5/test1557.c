#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
volatile int16_t x3 = INT16_MIN;
static int32_t t0 = 357164;
volatile int8_t x7 = 0;
int32_t t1 = -190328351;
volatile int32_t x23 = INT32_MAX;
int32_t x34 = INT32_MAX;
int16_t x35 = -1;
volatile int64_t x42 = -1LL;
int64_t x45 = 1081LL;
static uint16_t x49 = 538U;
int8_t x54 = INT8_MAX;
int32_t x56 = 0;
static int32_t t13 = 178678;
int16_t x57 = INT16_MIN;
int16_t x58 = INT16_MIN;
int8_t x63 = INT8_MAX;
int32_t t15 = -1;
volatile int8_t x68 = 0;
volatile int32_t x71 = -97;
volatile int64_t x72 = INT64_MIN;
int64_t x80 = -1LL;
volatile int32_t t24 = -16732710;
volatile uint64_t x102 = 1969LLU;
volatile uint8_t x106 = 13U;
int32_t t26 = -54490;
static volatile int64_t x114 = 490915476888495793LL;
static volatile int64_t x119 = INT64_MIN;
int8_t x121 = 0;
volatile int16_t x123 = -1;
int32_t t30 = 41;
volatile int32_t x125 = INT32_MIN;
int64_t x147 = INT64_MIN;
uint64_t x151 = UINT64_MAX;
int32_t t37 = 784;
uint16_t x154 = 25U;
int32_t x156 = 877;
int64_t x157 = -5031365602LL;
uint8_t x160 = 1U;
int8_t x162 = INT8_MIN;
volatile int32_t t40 = -42036139;
uint32_t x165 = 1U;
static uint64_t x167 = UINT64_MAX;
uint64_t x177 = 16048980759099LLU;
uint8_t x181 = 1U;
int32_t t45 = 0;
static int64_t x192 = -1LL;
volatile int32_t t48 = 10622505;
volatile int16_t x199 = INT16_MIN;
int32_t t49 = -11;
uint32_t x203 = 30337626U;
int8_t x209 = -2;
int32_t t52 = -14;
volatile uint16_t x227 = 782U;
static int32_t t56 = -277450670;
int32_t x233 = INT32_MAX;
volatile int32_t t58 = -57228410;
uint8_t x238 = UINT8_MAX;
uint64_t x241 = 6363432380LLU;
int64_t x242 = INT64_MAX;
static int8_t x244 = INT8_MAX;
int64_t x245 = -1LL;
static int32_t x249 = INT32_MIN;
int16_t x252 = INT16_MIN;
volatile int32_t t62 = -11768;
int32_t x257 = INT32_MAX;
int32_t x259 = -152022;
volatile int64_t x261 = -1LL;
int8_t x264 = INT8_MIN;
int32_t t65 = 3947572;
int32_t x271 = INT32_MIN;
int64_t x272 = 2211500LL;
static volatile uint64_t x275 = 8307078585636LLU;
volatile uint32_t x276 = 268230243U;
static uint32_t x279 = 752U;
uint8_t x282 = 0U;
int32_t t72 = -15;
int32_t t73 = -22;
int32_t t75 = -192846256;
uint32_t x308 = 90U;
volatile int8_t x309 = -2;
int16_t x312 = -1;
int64_t x314 = 2630193803LL;
static volatile int64_t x325 = INT64_MIN;
uint8_t x327 = UINT8_MAX;
volatile int16_t x330 = 12074;
int8_t x333 = 1;
static uint64_t x337 = 184613648206943007LLU;
int8_t x340 = 6;
int64_t x347 = -1LL;
int16_t x357 = INT16_MIN;
uint16_t x364 = 3U;
volatile int8_t x371 = -63;
int32_t x372 = INT32_MAX;
static uint16_t x375 = UINT16_MAX;
volatile uint16_t x376 = UINT16_MAX;
uint32_t x388 = 11214229U;
volatile int32_t t97 = -6173;
int16_t x394 = -105;
int16_t x395 = INT16_MIN;
volatile int32_t t99 = 42597483;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	volatile uint16_t x4 = UINT16_MAX;

	t0 = (x1<=((x2<=x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1240U;
	int16_t x6 = -1;
	volatile int32_t x8 = 5581757;

	t1 = (x5<=((x6<=x7)*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 1U;
	volatile uint32_t x10 = 41610124U;
	uint32_t x11 = 38049702U;
	static volatile uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = -12861;

	t2 = (x9<=((x10<=x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static volatile int64_t x14 = 270276386579450273LL;
	int16_t x15 = INT16_MAX;
	static int64_t x16 = INT64_MAX;
	int32_t t3 = -17368;

	t3 = (x13<=((x14<=x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 4U;
	volatile int8_t x18 = 2;
	static volatile int32_t x19 = -1;
	static volatile uint64_t x20 = 3LLU;
	static volatile int32_t t4 = -15;

	t4 = (x17<=((x18<=x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = -1;
	int16_t x22 = -1245;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = 1;

	t5 = (x21<=((x22<=x23)*x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -74518332;
	static uint64_t x26 = UINT64_MAX;
	static uint32_t x27 = UINT32_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 771943;

	t6 = (x25<=((x26<=x27)*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 318U;
	uint64_t x30 = 10127298488LLU;
	int16_t x31 = INT16_MAX;
	static uint16_t x32 = 1625U;
	int32_t t7 = -13858;

	t7 = (x29<=((x30<=x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static int32_t x36 = INT32_MIN;
	static volatile int32_t t8 = 0;

	t8 = (x33<=((x34<=x35)*x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint16_t x38 = UINT16_MAX;
	static uint8_t x39 = UINT8_MAX;
	uint8_t x40 = 28U;
	static int32_t t9 = 741836;

	t9 = (x37<=((x38<=x39)*x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint16_t x43 = UINT16_MAX;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = 31;

	t10 = (x41<=((x42<=x43)*x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x46 = INT16_MAX;
	uint64_t x47 = 2LLU;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -12696;

	t11 = (x45<=((x46<=x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x50 = INT8_MIN;
	static int8_t x51 = -6;
	volatile uint64_t x52 = 566458756LLU;
	int32_t t12 = 6;

	t12 = (x49<=((x50<=x51)*x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 1U;
	uint16_t x55 = UINT16_MAX;

	t13 = (x53<=((x54<=x55)*x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x59 = INT8_MIN;
	volatile int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 1787690;

	t14 = (x57<=((x58<=x59)*x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = 2;
	int8_t x64 = 1;

	t15 = (x61<=((x62<=x63)*x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint8_t x66 = 1U;
	volatile uint16_t x67 = UINT16_MAX;
	static volatile int32_t t16 = -43;

	t16 = (x65<=((x66<=x67)*x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = -1;
	volatile int32_t t17 = 213311681;

	t17 = (x69<=((x70<=x71)*x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int64_t x74 = -1LL;
	static uint64_t x75 = 2615656LLU;
	static int64_t x76 = INT64_MIN;
	static int32_t t18 = 1695491;

	t18 = (x73<=((x74<=x75)*x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 1U;
	static int16_t x78 = INT16_MAX;
	int32_t x79 = 817;
	int32_t t19 = -1;

	t19 = (x77<=((x78<=x79)*x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 2591U;
	uint32_t x82 = 62U;
	uint32_t x83 = 3071U;
	static int16_t x84 = -1;
	int32_t t20 = -20;

	t20 = (x81<=((x82<=x83)*x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	static volatile uint16_t x86 = 2U;
	static int8_t x87 = INT8_MIN;
	uint32_t x88 = 28U;
	static int32_t t21 = -32;

	t21 = (x85<=((x86<=x87)*x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = -1;
	int64_t x91 = -1728011307LL;
	int64_t x92 = INT64_MIN;
	static volatile int32_t t22 = -6314562;

	t22 = (x89<=((x90<=x91)*x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = 978U;
	uint64_t x94 = 14101379LLU;
	int64_t x95 = -243654LL;
	uint16_t x96 = 0U;
	volatile int32_t t23 = -28;

	t23 = (x93<=((x94<=x95)*x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 56657830LLU;
	volatile int64_t x98 = -11697099568552LL;
	volatile uint64_t x99 = 2026062798727583945LLU;
	uint16_t x100 = UINT16_MAX;

	t24 = (x97<=((x98<=x99)*x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -251438LL;
	static uint16_t x103 = 58U;
	static int32_t x104 = INT32_MAX;
	volatile int32_t t25 = -1;

	t25 = (x101<=((x102<=x103)*x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 1;
	int8_t x107 = 2;
	static int16_t x108 = INT16_MAX;

	t26 = (x105<=((x106<=x107)*x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	int8_t x110 = INT8_MAX;
	uint64_t x111 = UINT64_MAX;
	int16_t x112 = INT16_MIN;
	static int32_t t27 = -835;

	t27 = (x109<=((x110<=x111)*x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 5U;
	volatile int16_t x115 = -1;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -247355066;

	t28 = (x113<=((x114<=x115)*x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	static uint64_t x118 = UINT64_MAX;
	int16_t x120 = -1742;
	int32_t t29 = -7;

	t29 = (x117<=((x118<=x119)*x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x122 = INT8_MIN;
	int16_t x124 = -1;

	t30 = (x121<=((x122<=x123)*x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MAX;
	uint64_t x127 = 32134473169668350LLU;
	int64_t x128 = 68764394409LL;
	int32_t t31 = 88;

	t31 = (x125<=((x126<=x127)*x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	volatile uint32_t x130 = UINT32_MAX;
	static volatile int16_t x131 = INT16_MIN;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -30271810;

	t32 = (x129<=((x130<=x131)*x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MIN;
	volatile int32_t x135 = 172200113;
	int64_t x136 = INT64_MIN;
	int32_t t33 = -1979355;

	t33 = (x133<=((x134<=x135)*x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	static uint32_t x138 = 2057773U;
	static int64_t x139 = 14195254595LL;
	volatile int32_t x140 = 999924452;
	static int32_t t34 = 11154;

	t34 = (x137<=((x138<=x139)*x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MIN;
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = 0;
	static volatile int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 539;

	t35 = (x141<=((x142<=x143)*x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint8_t x146 = 11U;
	static uint64_t x148 = 8619861LLU;
	int32_t t36 = 4514;

	t36 = (x145<=((x146<=x147)*x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int32_t x150 = -12;
	uint64_t x152 = 1LLU;

	t37 = (x149<=((x150<=x151)*x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	volatile uint8_t x155 = UINT8_MAX;
	volatile int32_t t38 = -1093;

	t38 = (x153<=((x154<=x155)*x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	volatile int32_t t39 = 99488;

	t39 = (x157<=((x158<=x159)*x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 2172;
	volatile uint32_t x163 = UINT32_MAX;
	static volatile uint32_t x164 = 1856744268U;

	t40 = (x161<=((x162<=x163)*x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -1;
	volatile int64_t x168 = 15853413810020177LL;
	static volatile int32_t t41 = 988864063;

	t41 = (x165<=((x166<=x167)*x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MIN;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = -1LL;
	int8_t x172 = 0;
	int32_t t42 = -37;

	t42 = (x169<=((x170<=x171)*x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 440969;
	int8_t x174 = INT8_MAX;
	uint32_t x175 = 2062365U;
	uint8_t x176 = 2U;
	static volatile int32_t t43 = -3;

	t43 = (x173<=((x174<=x175)*x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MIN;
	volatile uint64_t x179 = UINT64_MAX;
	int16_t x180 = INT16_MIN;
	static volatile int32_t t44 = -12315556;

	t44 = (x177<=((x178<=x179)*x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MAX;
	volatile uint16_t x183 = 17U;
	int16_t x184 = -1;

	t45 = (x181<=((x182<=x183)*x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = UINT32_MAX;
	int64_t x186 = -1LL;
	int32_t x187 = -1;
	int16_t x188 = -27;
	volatile int32_t t46 = 499;

	t46 = (x185<=((x186<=x187)*x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int8_t x190 = -1;
	static volatile uint8_t x191 = 3U;
	int32_t t47 = -5626;

	t47 = (x189<=((x190<=x191)*x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	volatile uint64_t x194 = UINT64_MAX;
	volatile int16_t x195 = INT16_MAX;
	static int8_t x196 = INT8_MAX;

	t48 = (x193<=((x194<=x195)*x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = UINT8_MAX;
	int8_t x198 = 12;
	uint8_t x200 = UINT8_MAX;

	t49 = (x197<=((x198<=x199)*x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 4102021U;
	int64_t x202 = 8570947LL;
	int64_t x204 = 57515765LL;
	volatile int32_t t50 = 27658;

	t50 = (x201<=((x202<=x203)*x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	volatile int8_t x206 = 0;
	static int16_t x207 = 182;
	int64_t x208 = INT64_MAX;
	volatile int32_t t51 = 183;

	t51 = (x205<=((x206<=x207)*x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = 2;
	uint8_t x211 = 48U;
	int32_t x212 = 120;

	t52 = (x209<=((x210<=x211)*x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x213 = 194U;
	int16_t x214 = 1859;
	static uint64_t x215 = UINT64_MAX;
	static volatile uint16_t x216 = 0U;
	volatile int32_t t53 = 2336044;

	t53 = (x213<=((x214<=x215)*x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MAX;
	volatile int8_t x218 = INT8_MAX;
	volatile int8_t x219 = INT8_MIN;
	volatile int16_t x220 = -1;
	int32_t t54 = -334277638;

	t54 = (x217<=((x218<=x219)*x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -726LL;
	int32_t x222 = INT32_MIN;
	int64_t x223 = -1LL;
	volatile int8_t x224 = INT8_MIN;
	int32_t t55 = 1;

	t55 = (x221<=((x222<=x223)*x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 156U;
	int64_t x226 = INT64_MIN;
	uint32_t x228 = 10798549U;

	t56 = (x225<=((x226<=x227)*x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 5031LL;
	static uint32_t x230 = 9765U;
	int16_t x231 = INT16_MIN;
	int64_t x232 = -1LL;
	static volatile int32_t t57 = 66;

	t57 = (x229<=((x230<=x231)*x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = UINT8_MAX;
	int64_t x235 = INT64_MIN;
	volatile int8_t x236 = INT8_MAX;

	t58 = (x233<=((x234<=x235)*x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -56;
	int16_t x239 = INT16_MIN;
	static volatile int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 162;

	t59 = (x237<=((x238<=x239)*x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x243 = UINT64_MAX;
	static volatile int32_t t60 = 303;

	t60 = (x241<=((x242<=x243)*x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = UINT32_MAX;
	uint8_t x247 = 1U;
	static volatile int8_t x248 = -1;
	volatile int32_t t61 = 51684;

	t61 = (x245<=((x246<=x247)*x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x250 = 3U;
	int8_t x251 = INT8_MAX;

	t62 = (x249<=((x250<=x251)*x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 23U;
	int32_t x254 = -1906;
	int32_t x255 = INT32_MAX;
	int8_t x256 = INT8_MAX;
	int32_t t63 = -54186419;

	t63 = (x253<=((x254<=x255)*x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MIN;
	int32_t x260 = INT32_MAX;
	int32_t t64 = 14;

	t64 = (x257<=((x258<=x259)*x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = 5567U;
	volatile int64_t x263 = INT64_MIN;

	t65 = (x261<=((x262<=x263)*x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 386451163718LLU;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MIN;
	uint8_t x268 = 44U;
	volatile int32_t t66 = 1179651;

	t66 = (x265<=((x266<=x267)*x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 0U;
	static volatile uint32_t x270 = 1242U;
	volatile int32_t t67 = 26106196;

	t67 = (x269<=((x270<=x271)*x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = UINT16_MAX;
	static int16_t x274 = INT16_MAX;
	volatile int32_t t68 = -19;

	t68 = (x273<=((x274<=x275)*x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	int16_t x278 = -1;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = 0;

	t69 = (x277<=((x278<=x279)*x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	static int16_t x284 = INT16_MAX;
	int32_t t70 = -107968790;

	t70 = (x281<=((x282<=x283)*x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MAX;
	int64_t x286 = INT64_MAX;
	int8_t x287 = INT8_MAX;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 3024849;

	t71 = (x285<=((x286<=x287)*x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1413LL;
	uint64_t x290 = UINT64_MAX;
	uint16_t x291 = 4U;
	static uint16_t x292 = 0U;

	t72 = (x289<=((x290<=x291)*x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	static int64_t x294 = INT64_MIN;
	static volatile int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MIN;

	t73 = (x293<=((x294<=x295)*x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 71U;
	volatile int16_t x298 = -1;
	int16_t x299 = 350;
	uint8_t x300 = 72U;
	volatile int32_t t74 = 15926819;

	t74 = (x297<=((x298<=x299)*x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	int8_t x302 = INT8_MIN;
	volatile uint32_t x303 = 23024030U;
	int8_t x304 = -1;

	t75 = (x301<=((x302<=x303)*x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x306 = 2265842740942LLU;
	uint32_t x307 = 20876835U;
	int32_t t76 = 3109010;

	t76 = (x305<=((x306<=x307)*x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x310 = -1044951LL;
	volatile int32_t x311 = -366160083;
	int32_t t77 = -25;

	t77 = (x309<=((x310<=x311)*x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 15U;
	volatile int32_t t78 = -9;

	t78 = (x313<=((x314<=x315)*x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 0;
	int16_t x318 = INT16_MIN;
	uint64_t x319 = UINT64_MAX;
	volatile int16_t x320 = -1;
	volatile int32_t t79 = 347393;

	t79 = (x317<=((x318<=x319)*x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 64U;
	uint32_t x322 = UINT32_MAX;
	uint8_t x323 = 45U;
	int32_t x324 = -5;
	int32_t t80 = 3637484;

	t80 = (x321<=((x322<=x323)*x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = 6585U;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -80591;

	t81 = (x325<=((x326<=x327)*x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int64_t x331 = 4394798874854767960LL;
	uint16_t x332 = 14220U;
	int32_t t82 = 103472;

	t82 = (x329<=((x330<=x331)*x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x334 = INT32_MIN;
	uint8_t x335 = 3U;
	volatile int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 1;

	t83 = (x333<=((x334<=x335)*x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = 2;
	int16_t x339 = INT16_MIN;
	int32_t t84 = 18063347;

	t84 = (x337<=((x338<=x339)*x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = 37644203;
	int32_t x342 = INT32_MAX;
	static int64_t x343 = INT64_MAX;
	int8_t x344 = -1;
	int32_t t85 = 16898616;

	t85 = (x341<=((x342<=x343)*x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	volatile int32_t x346 = 26677;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = 99213534;

	t86 = (x345<=((x346<=x347)*x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 12U;
	int8_t x350 = 3;
	int32_t x351 = INT32_MAX;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -1555;

	t87 = (x349<=((x350<=x351)*x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -509;
	int16_t x354 = -1;
	volatile int8_t x355 = 46;
	static uint64_t x356 = 3560874LLU;
	volatile int32_t t88 = -39;

	t88 = (x353<=((x354<=x355)*x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x358 = 75702010LLU;
	static int8_t x359 = INT8_MAX;
	uint8_t x360 = 100U;
	volatile int32_t t89 = -5911;

	t89 = (x357<=((x358<=x359)*x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MIN;
	static int8_t x363 = INT8_MIN;
	static volatile int32_t t90 = -2;

	t90 = (x361<=((x362<=x363)*x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = -1;
	volatile int8_t x367 = -1;
	int64_t x368 = 1LL;
	int32_t t91 = 6390213;

	t91 = (x365<=((x366<=x367)*x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int8_t x370 = -42;
	volatile int32_t t92 = -1580;

	t92 = (x369<=((x370<=x371)*x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	static uint32_t x374 = UINT32_MAX;
	volatile int32_t t93 = 13273552;

	t93 = (x373<=((x374<=x375)*x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	static volatile int32_t x378 = 46;
	uint8_t x379 = UINT8_MAX;
	int64_t x380 = -1LL;
	int32_t t94 = -26;

	t94 = (x377<=((x378<=x379)*x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 6906152425569951LL;
	int64_t x382 = 30LL;
	uint64_t x383 = 60824290129LLU;
	uint8_t x384 = 15U;
	int32_t t95 = 1;

	t95 = (x381<=((x382<=x383)*x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -2;
	uint16_t x386 = 81U;
	volatile uint8_t x387 = 13U;
	volatile int32_t t96 = -988;

	t96 = (x385<=((x386<=x387)*x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 1;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 2U;
	int64_t x392 = -1315LL;

	t97 = (x389<=((x390<=x391)*x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -54893968;
	int16_t x396 = -1;
	int32_t t98 = -26;

	t98 = (x393<=((x394<=x395)*x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	volatile int32_t x398 = -203244518;
	uint64_t x399 = UINT64_MAX;
	static int32_t x400 = INT32_MIN;

	t99 = (x397<=((x398<=x399)*x400));

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

