#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 1696;
int32_t t1 = 117;
static int64_t x10 = -1LL;
uint16_t x13 = 15U;
volatile int8_t x15 = -11;
volatile int32_t t3 = 6;
int32_t x18 = -1;
int64_t x34 = -8193625LL;
int8_t x37 = -7;
volatile int64_t x38 = INT64_MIN;
uint32_t x40 = 4668U;
int64_t x47 = INT64_MIN;
int32_t t11 = -12;
int32_t x55 = 6268;
volatile int64_t x56 = 23652830362625077LL;
int8_t x60 = INT8_MAX;
volatile int32_t t14 = 754;
volatile uint16_t x62 = UINT16_MAX;
static uint64_t x64 = 1662LLU;
int32_t t16 = 3597;
int8_t x74 = INT8_MAX;
static uint64_t x80 = 1607134LLU;
int64_t x81 = INT64_MIN;
int32_t t20 = -2069;
volatile int16_t x91 = INT16_MIN;
volatile int32_t t22 = 8459438;
volatile int16_t x94 = -1;
volatile int64_t x108 = -30LL;
int16_t x113 = INT16_MAX;
uint16_t x114 = 6U;
int32_t t28 = -31840331;
static volatile int32_t t29 = -6074209;
volatile int32_t t31 = -122705;
int32_t x131 = 11275729;
volatile int8_t x133 = INT8_MIN;
static uint32_t x134 = 97U;
uint16_t x141 = 389U;
volatile int32_t t36 = 704145;
int32_t x150 = -1;
volatile uint64_t x153 = 0LLU;
int64_t x155 = INT64_MIN;
int8_t x156 = -1;
uint64_t x157 = UINT64_MAX;
int32_t x164 = INT32_MIN;
int16_t x166 = INT16_MIN;
volatile int64_t x167 = -2224962213432560325LL;
uint16_t x173 = UINT16_MAX;
int16_t x177 = INT16_MIN;
volatile int64_t x179 = INT64_MAX;
int32_t t48 = 867226991;
int32_t t49 = 33601774;
int32_t x202 = 58;
static uint64_t x203 = 23LLU;
uint8_t x206 = 3U;
int64_t x219 = INT64_MIN;
int16_t x225 = -14843;
int16_t x226 = INT16_MIN;
int32_t x227 = INT32_MIN;
volatile int32_t t56 = 6;
int32_t x238 = INT32_MAX;
static int64_t x241 = INT64_MIN;
int32_t x242 = INT32_MIN;
int64_t x245 = INT64_MIN;
int8_t x248 = INT8_MAX;
int32_t t61 = 10258;
int32_t t62 = 865814458;
static volatile int32_t x254 = -1;
int8_t x256 = INT8_MIN;
int16_t x259 = -1741;
int32_t x260 = 4268;
uint64_t x266 = UINT64_MAX;
int8_t x268 = INT8_MIN;
uint8_t x281 = 9U;
int32_t x283 = INT32_MIN;
int64_t x284 = INT64_MAX;
int8_t x286 = 8;
volatile uint64_t x287 = 16121323578LLU;
int32_t x290 = 1581;
int64_t x291 = INT64_MAX;
volatile uint64_t x296 = UINT64_MAX;
volatile int32_t t72 = 5766049;
int32_t x298 = -3;
volatile uint8_t x303 = 105U;
uint8_t x305 = UINT8_MAX;
int32_t t75 = 16676;
int32_t x314 = INT32_MAX;
static int64_t x317 = -61371735LL;
int32_t t79 = 13;
int32_t x327 = 42217511;
static uint8_t x336 = 69U;
int16_t x338 = -1;
volatile int32_t t84 = -150830;
volatile int32_t x349 = 15111545;
int16_t x352 = INT16_MIN;
int16_t x363 = INT16_MAX;
int16_t x364 = INT16_MIN;
int32_t t89 = 825;
int8_t x365 = INT8_MAX;
static int8_t x367 = -55;
int8_t x370 = 4;
uint8_t x380 = UINT8_MAX;
int32_t t93 = 26;
uint32_t x382 = UINT32_MAX;
static int16_t x385 = -1;
static int64_t x392 = -1738031376493561964LL;
int16_t x393 = 2041;
int16_t x396 = -5;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MIN;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 845004291;

	t0 = (x1<=((x2%x3)<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static int8_t x6 = -2;
	static int16_t x7 = -1;
	int16_t x8 = INT16_MAX;

	t1 = (x5<=((x6%x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	uint64_t x11 = 130192778552LLU;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = 63157;

	t2 = (x9<=((x10%x11)<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	int64_t x16 = -1LL;

	t3 = (x13<=((x14%x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 10055U;
	int32_t x19 = 26094809;
	uint16_t x20 = 30U;
	volatile int32_t t4 = -131;

	t4 = (x17<=((x18%x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	volatile uint8_t x22 = 5U;
	uint8_t x23 = 3U;
	int8_t x24 = 0;
	static volatile int32_t t5 = 8611240;

	t5 = (x21<=((x22%x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint32_t x26 = 16692U;
	int8_t x27 = -1;
	uint8_t x28 = 18U;
	volatile int32_t t6 = -2710769;

	t6 = (x25<=((x26%x27)<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 8735780383LLU;
	static int8_t x30 = INT8_MIN;
	volatile int16_t x31 = INT16_MIN;
	static int64_t x32 = INT64_MAX;
	int32_t t7 = -742380;

	t7 = (x29<=((x30%x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static volatile uint64_t x35 = 24634825863787LLU;
	static int64_t x36 = INT64_MIN;
	static int32_t t8 = 0;

	t8 = (x33<=((x34%x35)<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = INT16_MIN;
	int32_t t9 = -4140218;

	t9 = (x37<=((x38%x39)<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 562U;
	int16_t x42 = 16033;
	volatile int32_t x43 = -1;
	int8_t x44 = -13;
	volatile int32_t t10 = 758;

	t10 = (x41<=((x42%x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	uint16_t x46 = 598U;
	static uint8_t x48 = 44U;

	t11 = (x45<=((x46%x47)<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	volatile int64_t x50 = INT64_MIN;
	int32_t x51 = -2007;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t12 = 740;

	t12 = (x49<=((x50%x51)<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 201LL;
	int64_t x54 = INT64_MIN;
	int32_t t13 = 400;

	t13 = (x53<=((x54%x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile uint16_t x58 = UINT16_MAX;
	volatile uint64_t x59 = UINT64_MAX;

	t14 = (x57<=((x58%x59)<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 805331LLU;
	volatile uint64_t x63 = 1884481965LLU;
	static volatile int32_t t15 = 28;

	t15 = (x61<=((x62%x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int16_t x66 = -1;
	static int8_t x67 = -35;
	uint64_t x68 = 16491908839LLU;

	t16 = (x65<=((x66%x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 1U;
	int32_t x70 = -1;
	int8_t x71 = INT8_MAX;
	uint16_t x72 = 3306U;
	volatile int32_t t17 = 6487411;

	t17 = (x69<=((x70%x71)<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	volatile uint32_t x75 = 40U;
	volatile int16_t x76 = INT16_MAX;
	volatile int32_t t18 = -3776;

	t18 = (x73<=((x74%x75)<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MAX;
	int32_t t19 = 48995;

	t19 = (x77<=((x78%x79)<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -37;
	int16_t x83 = INT16_MIN;
	int8_t x84 = -1;

	t20 = (x81<=((x82%x83)<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	uint32_t x86 = 49U;
	static volatile int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 13;

	t21 = (x85<=((x86%x87)<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MAX;
	int32_t x92 = -56688309;

	t22 = (x89<=((x90%x91)<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x95 = 1815U;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = -51;

	t23 = (x93<=((x94%x95)<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	volatile uint16_t x98 = 31433U;
	int32_t x99 = INT32_MAX;
	int8_t x100 = -1;
	volatile int32_t t24 = -19;

	t24 = (x97<=((x98%x99)<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 924822071771908645LL;
	volatile int64_t x102 = INT64_MIN;
	int64_t x103 = 891LL;
	volatile uint32_t x104 = 93196588U;
	int32_t t25 = -22;

	t25 = (x101<=((x102%x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MIN;
	int8_t x107 = -3;
	static volatile int32_t t26 = -832588392;

	t26 = (x105<=((x106%x107)<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int64_t x110 = INT64_MIN;
	int64_t x111 = 1128086142702864238LL;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t27 = -8;

	t27 = (x109<=((x110%x111)<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x115 = -1LL;
	volatile uint32_t x116 = 470U;

	t28 = (x113<=((x114%x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -17161;
	uint8_t x118 = 3U;
	static int8_t x119 = 3;
	int64_t x120 = INT64_MIN;

	t29 = (x117<=((x118%x119)<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -40;
	int8_t x122 = -1;
	static int8_t x123 = -3;
	volatile int8_t x124 = 1;
	int32_t t30 = 6165802;

	t30 = (x121<=((x122%x123)<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 1385036583U;
	int32_t x126 = INT32_MAX;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = 1546192LLU;

	t31 = (x125<=((x126%x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	volatile uint32_t x130 = UINT32_MAX;
	int16_t x132 = 2;
	int32_t t32 = -7716736;

	t32 = (x129<=((x130%x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x135 = 9LL;
	static volatile uint32_t x136 = 6412794U;
	volatile int32_t t33 = 54645104;

	t33 = (x133<=((x134%x135)<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 0U;
	volatile uint64_t x138 = 825298LLU;
	volatile int64_t x139 = -234942979878118301LL;
	static int64_t x140 = INT64_MIN;
	static int32_t t34 = 183442;

	t34 = (x137<=((x138%x139)<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x142 = INT8_MAX;
	static int64_t x143 = -1LL;
	int64_t x144 = -1LL;
	static int32_t t35 = 1;

	t35 = (x141<=((x142%x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MAX;
	int8_t x146 = 3;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;

	t36 = (x145<=((x146%x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MAX;
	uint16_t x151 = UINT16_MAX;
	static int64_t x152 = INT64_MIN;
	int32_t t37 = 471;

	t37 = (x149<=((x150%x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = -5;
	static volatile int32_t t38 = 238733052;

	t38 = (x153<=((x154%x155)<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x158 = INT64_MAX;
	static int32_t x159 = 490;
	volatile int64_t x160 = -1LL;
	int32_t t39 = -13;

	t39 = (x157<=((x158%x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile uint16_t x162 = 1U;
	static int16_t x163 = -1;
	int32_t t40 = 24;

	t40 = (x161<=((x162%x163)<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 165U;
	volatile int64_t x168 = -1LL;
	static volatile int32_t t41 = 793724;

	t41 = (x165<=((x166%x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MAX;
	int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 250697925;

	t42 = (x169<=((x170%x171)<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -285757346920615203LL;
	volatile int8_t x175 = -3;
	uint64_t x176 = 69486280301505LLU;
	volatile int32_t t43 = 333;

	t43 = (x173<=((x174%x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -4226;
	uint16_t x180 = UINT16_MAX;
	static int32_t t44 = -22995;

	t44 = (x177<=((x178%x179)<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = 4648U;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = 1U;
	volatile uint64_t x184 = 16891LLU;
	volatile int32_t t45 = -3563;

	t45 = (x181<=((x182%x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 225U;
	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = INT8_MIN;
	uint32_t x188 = 25751U;
	int32_t t46 = 745627662;

	t46 = (x185<=((x186%x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = 0;
	uint16_t x190 = UINT16_MAX;
	uint16_t x191 = 24U;
	static uint32_t x192 = UINT32_MAX;
	volatile int32_t t47 = 615658966;

	t47 = (x189<=((x190%x191)<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	volatile uint32_t x194 = 103015395U;
	volatile uint8_t x195 = 15U;
	int16_t x196 = INT16_MIN;

	t48 = (x193<=((x194%x195)<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 768U;
	int32_t x198 = 5;
	static int16_t x199 = -1;
	int32_t x200 = INT32_MIN;

	t49 = (x197<=((x198%x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 2U;
	int16_t x204 = INT16_MIN;
	static int32_t t50 = 7;

	t50 = (x201<=((x202%x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -1LL;
	uint64_t x207 = 21301131695937925LLU;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = 49187;

	t51 = (x205<=((x206%x207)<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 67068403881LLU;
	int32_t x210 = -124845646;
	static volatile int8_t x211 = INT8_MIN;
	static volatile int8_t x212 = -46;
	int32_t t52 = -33910061;

	t52 = (x209<=((x210%x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -14635;
	int64_t x214 = -114887409681133LL;
	static volatile int16_t x215 = 1;
	uint8_t x216 = 26U;
	int32_t t53 = 25;

	t53 = (x213<=((x214%x215)<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	volatile int16_t x218 = -1;
	int16_t x220 = INT16_MIN;
	static int32_t t54 = 37006;

	t54 = (x217<=((x218%x219)<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	static uint32_t x222 = 416U;
	static int16_t x223 = INT16_MAX;
	static int16_t x224 = -23;
	volatile int32_t t55 = 169;

	t55 = (x221<=((x222%x223)<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x228 = -1;

	t56 = (x225<=((x226%x227)<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = 10;
	volatile int64_t x230 = 155899LL;
	int16_t x231 = -1486;
	uint8_t x232 = 24U;
	static volatile int32_t t57 = -25062093;

	t57 = (x229<=((x230%x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 18802U;
	static volatile int16_t x234 = -13930;
	int16_t x235 = INT16_MIN;
	int64_t x236 = -1598437367880LL;
	int32_t t58 = 1005435772;

	t58 = (x233<=((x234%x235)<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static int8_t x239 = -5;
	int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 389;

	t59 = (x237<=((x238%x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x243 = -1LL;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = -1;

	t60 = (x241<=((x242%x243)<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -1;
	static int64_t x247 = INT64_MIN;

	t61 = (x245<=((x246%x247)<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MIN;
	static uint64_t x250 = 8139408990214494750LLU;
	volatile int64_t x251 = INT64_MAX;
	static volatile int64_t x252 = 222098699067LL;

	t62 = (x249<=((x250%x251)<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 23;
	int64_t x255 = 137LL;
	int32_t t63 = 40127124;

	t63 = (x253<=((x254%x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	int8_t x258 = -4;
	int32_t t64 = -15709;

	t64 = (x257<=((x258%x259)<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 359229762LLU;
	static uint16_t x267 = 15U;
	static int32_t t65 = -83548797;

	t65 = (x265<=((x266%x267)<x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = 4;
	static volatile uint64_t x270 = 20LLU;
	int16_t x271 = -278;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t66 = 1717;

	t66 = (x269<=((x270%x271)<x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x273 = 161746369604028833LLU;
	volatile int32_t x274 = -287941255;
	static uint64_t x275 = 245810469931617419LLU;
	volatile uint16_t x276 = 10435U;
	int32_t t67 = -4693;

	t67 = (x273<=((x274%x275)<x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = -10;
	int32_t x278 = 997;
	int16_t x279 = 14303;
	int64_t x280 = 13585LL;
	int32_t t68 = 118;

	t68 = (x277<=((x278%x279)<x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x282 = UINT8_MAX;
	volatile int32_t t69 = -27;

	t69 = (x281<=((x282%x283)<x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MAX;
	uint8_t x288 = 13U;
	volatile int32_t t70 = -57680;

	t70 = (x285<=((x286%x287)<x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	uint64_t x292 = 54LLU;
	volatile int32_t t71 = 6384;

	t71 = (x289<=((x290%x291)<x292));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	uint32_t x294 = 2071800499U;
	int32_t x295 = -1;

	t72 = (x293<=((x294%x295)<x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x297 = -1;
	static uint32_t x299 = 106558U;
	uint32_t x300 = UINT32_MAX;
	int32_t t73 = 91160;

	t73 = (x297<=((x298%x299)<x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = -11;
	int8_t x302 = -28;
	uint64_t x304 = UINT64_MAX;
	int32_t t74 = -1852821;

	t74 = (x301<=((x302%x303)<x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x306 = 112779560U;
	int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;

	t75 = (x305<=((x306%x307)<x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	uint16_t x311 = 3402U;
	int32_t x312 = 1857;
	int32_t t76 = 11401684;

	t76 = (x309<=((x310%x311)<x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x313 = 313U;
	int64_t x315 = -1LL;
	volatile int32_t x316 = INT32_MIN;
	int32_t t77 = 3849;

	t77 = (x313<=((x314%x315)<x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x318 = INT64_MAX;
	static int8_t x319 = -1;
	int32_t x320 = -1;
	volatile int32_t t78 = -807511;

	t78 = (x317<=((x318%x319)<x320));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = 1402585068472964LL;
	uint32_t x322 = UINT32_MAX;
	volatile int64_t x323 = -1LL;
	int64_t x324 = -1LL;

	t79 = (x321<=((x322%x323)<x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x325 = INT32_MAX;
	static volatile int8_t x326 = INT8_MIN;
	int32_t x328 = INT32_MAX;
	volatile int32_t t80 = 467645;

	t80 = (x325<=((x326%x327)<x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MIN;
	static volatile int16_t x330 = INT16_MIN;
	volatile int8_t x331 = INT8_MIN;
	volatile int32_t x332 = -79;
	volatile int32_t t81 = -3785;

	t81 = (x329<=((x330%x331)<x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MAX;
	static uint16_t x334 = 683U;
	uint64_t x335 = 539153192659LLU;
	int32_t t82 = -1;

	t82 = (x333<=((x334%x335)<x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x337 = INT32_MIN;
	int64_t x339 = -132909LL;
	uint8_t x340 = UINT8_MAX;
	static int32_t t83 = 284;

	t83 = (x337<=((x338%x339)<x340));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MAX;
	static uint32_t x343 = 1104799016U;
	static uint32_t x344 = 84615U;

	t84 = (x341<=((x342%x343)<x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = -287;
	uint64_t x346 = 135764201886559153LLU;
	int32_t x347 = -1;
	volatile int64_t x348 = -1LL;
	static int32_t t85 = 223;

	t85 = (x345<=((x346%x347)<x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x350 = -2607LL;
	uint16_t x351 = UINT16_MAX;
	int32_t t86 = -2;

	t86 = (x349<=((x350%x351)<x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -1;
	int16_t x354 = -1;
	int64_t x355 = INT64_MIN;
	int64_t x356 = -50400LL;
	static int32_t t87 = 334;

	t87 = (x353<=((x354%x355)<x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = -1;
	int64_t x358 = INT64_MAX;
	int8_t x359 = -5;
	uint64_t x360 = UINT64_MAX;
	static int32_t t88 = 60650749;

	t88 = (x357<=((x358%x359)<x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x361 = 322463U;
	static int64_t x362 = INT64_MIN;

	t89 = (x361<=((x362%x363)<x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x366 = UINT64_MAX;
	int8_t x368 = INT8_MIN;
	volatile int32_t t90 = -14;

	t90 = (x365<=((x366%x367)<x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = INT16_MIN;
	int32_t x371 = INT32_MAX;
	int16_t x372 = -1;
	int32_t t91 = 82;

	t91 = (x369<=((x370%x371)<x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile uint8_t x374 = 3U;
	int64_t x375 = INT64_MAX;
	volatile int16_t x376 = 1;
	int32_t t92 = -27;

	t92 = (x373<=((x374%x375)<x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MIN;
	volatile int32_t x378 = INT32_MIN;
	uint8_t x379 = UINT8_MAX;

	t93 = (x377<=((x378%x379)<x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = UINT16_MAX;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t94 = 1000804937;

	t94 = (x381<=((x382%x383)<x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x386 = INT64_MIN;
	volatile int64_t x387 = INT64_MAX;
	volatile int8_t x388 = 0;
	volatile int32_t t95 = 370450;

	t95 = (x385<=((x386%x387)<x388));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = 531700663;
	int16_t x390 = 268;
	static int32_t x391 = -1;
	static int32_t t96 = 24300;

	t96 = (x389<=((x390%x391)<x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x394 = INT64_MAX;
	int32_t x395 = 1;
	int32_t t97 = 3;

	t97 = (x393<=((x394%x395)<x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = -1;
	int64_t x398 = 183298138LL;
	uint32_t x399 = 346U;
	uint64_t x400 = 75559918LLU;
	int32_t t98 = -3170446;

	t98 = (x397<=((x398%x399)<x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = INT8_MIN;
	uint8_t x402 = 126U;
	int64_t x403 = INT64_MIN;
	static volatile int32_t x404 = INT32_MIN;
	int32_t t99 = 119466208;

	t99 = (x401<=((x402%x403)<x404));

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

