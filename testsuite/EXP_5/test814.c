#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 95645213788720108LL;
volatile int32_t t0 = -83507;
uint16_t x6 = 240U;
int32_t x7 = INT32_MAX;
int32_t t1 = -1230;
int32_t x9 = INT32_MIN;
volatile uint32_t x11 = UINT32_MAX;
int16_t x14 = -11;
static int8_t x16 = INT8_MAX;
int32_t x19 = INT32_MAX;
volatile uint16_t x22 = 186U;
int8_t x25 = -1;
volatile int32_t t7 = -371;
volatile int8_t x37 = -61;
volatile int8_t x42 = 0;
int64_t x43 = INT64_MAX;
int8_t x52 = -1;
int8_t x55 = INT8_MAX;
volatile int8_t x57 = -1;
volatile int32_t t14 = -6961464;
volatile int16_t x61 = INT16_MAX;
static volatile uint8_t x67 = UINT8_MAX;
volatile int32_t t16 = 21418782;
int32_t x70 = 115385776;
int8_t x75 = INT8_MIN;
volatile int64_t x76 = -307LL;
volatile int32_t t18 = -139100;
uint8_t x79 = UINT8_MAX;
int32_t x80 = INT32_MIN;
uint32_t x82 = UINT32_MAX;
int8_t x83 = 1;
int32_t x86 = 21473;
uint64_t x91 = 233488405358LLU;
uint64_t x102 = 17231745263704682LLU;
static int16_t x103 = -257;
volatile int32_t t24 = 45855010;
int64_t x106 = INT64_MAX;
uint32_t x107 = 1786U;
uint64_t x110 = 3327850699497LLU;
uint8_t x115 = 2U;
uint8_t x117 = 50U;
volatile int32_t t28 = -3;
int16_t x122 = 0;
uint32_t x127 = 901184U;
int64_t x133 = -1LL;
static int32_t t34 = -120569423;
volatile int16_t x157 = 3176;
int64_t x158 = INT64_MAX;
volatile int32_t t39 = 13897741;
volatile int64_t x180 = -22775711045LL;
uint16_t x183 = 18U;
uint64_t x184 = 115302055LLU;
int32_t t44 = 251;
int8_t x189 = 0;
volatile uint64_t x190 = 2416809122706183LLU;
static uint16_t x194 = UINT16_MAX;
static int64_t x195 = -1LL;
static uint8_t x206 = 2U;
volatile int32_t x209 = 8014065;
static int64_t x210 = 0LL;
static int32_t t51 = 18;
int32_t t52 = -23318759;
int32_t x219 = INT32_MAX;
volatile uint32_t x220 = UINT32_MAX;
volatile int32_t t54 = -3;
int64_t x229 = INT64_MIN;
static int8_t x230 = INT8_MIN;
volatile int32_t t56 = -1049497286;
int16_t x236 = -707;
int64_t x239 = INT64_MIN;
volatile int32_t t58 = 140053;
static int32_t x242 = -1;
int16_t x260 = -1;
uint64_t x262 = 17240883LLU;
uint16_t x263 = 2U;
int32_t t64 = -1354359;
int32_t x265 = -1;
int16_t x273 = INT16_MIN;
int64_t x275 = -1LL;
uint64_t x279 = UINT64_MAX;
int8_t x297 = 4;
int16_t x300 = 15383;
int16_t x301 = -1057;
uint64_t x302 = UINT64_MAX;
volatile int8_t x304 = -1;
volatile int64_t x306 = -5630503632412LL;
uint64_t x311 = 140460175399967LLU;
uint16_t x317 = 857U;
int16_t x323 = INT16_MAX;
int16_t x327 = INT16_MAX;
int16_t x331 = -1;
int8_t x339 = INT8_MIN;
int16_t x340 = -1;
int32_t x347 = -1;
int8_t x355 = INT8_MIN;
int8_t x356 = INT8_MAX;
uint16_t x359 = 2U;
int16_t x368 = -1;
static int16_t x371 = INT16_MAX;
int32_t x385 = -1;
int32_t t97 = 0;
int8_t x398 = INT8_MIN;
int16_t x399 = -1;
int32_t t98 = 1;
int16_t x402 = INT16_MIN;
uint32_t x403 = UINT32_MAX;
int32_t x404 = INT32_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int8_t x3 = INT8_MIN;
	volatile int16_t x4 = 5;

	t0 = (x1==((x2%x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int16_t x8 = 22;

	t1 = (x5==((x6%x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = 20;
	int64_t x12 = -43318520919LL;
	int32_t t2 = 471519;

	t2 = (x9==((x10%x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	volatile int16_t x15 = INT16_MIN;
	volatile int32_t t3 = 2;

	t3 = (x13==((x14%x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 1U;
	uint8_t x18 = UINT8_MAX;
	int32_t x20 = -1;
	int32_t t4 = 1;

	t4 = (x17==((x18%x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	int32_t x23 = INT32_MAX;
	uint8_t x24 = 14U;
	int32_t t5 = -176969310;

	t5 = (x21==((x22%x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = 27;
	int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	int32_t t6 = -581761;

	t6 = (x25==((x26%x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = -1;
	static int64_t x31 = 123009793134464LL;
	uint32_t x32 = 1U;

	t7 = (x29==((x30%x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MAX;
	int16_t x36 = 1;
	int32_t t8 = 93210669;

	t8 = (x33==((x34%x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -105960;
	static uint16_t x39 = 33U;
	int64_t x40 = -77722595LL;
	volatile int32_t t9 = 91;

	t9 = (x37==((x38%x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 8006U;
	volatile int16_t x44 = INT16_MAX;
	int32_t t10 = -1;

	t10 = (x41==((x42%x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int8_t x46 = -10;
	uint16_t x47 = 212U;
	uint64_t x48 = 7741LLU;
	static int32_t t11 = 1042;

	t11 = (x45==((x46%x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	volatile int8_t x50 = 26;
	int32_t x51 = 7619440;
	static int32_t t12 = 48026;

	t12 = (x49==((x50%x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint8_t x54 = UINT8_MAX;
	uint64_t x56 = 760087314LLU;
	int32_t t13 = 58;

	t13 = (x53==((x54%x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MAX;
	int32_t x59 = INT32_MIN;
	int64_t x60 = -2248182229038363393LL;

	t14 = (x57==((x58%x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -1;
	int16_t x63 = -16379;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -224421;

	t15 = (x61==((x62%x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	static uint16_t x66 = 21U;
	int8_t x68 = INT8_MIN;

	t16 = (x65==((x66%x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int16_t x71 = 163;
	uint32_t x72 = UINT32_MAX;
	static volatile int32_t t17 = 4812;

	t17 = (x69==((x70%x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -1;
	int8_t x74 = INT8_MIN;

	t18 = (x73==((x74%x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 440363160;
	uint32_t x78 = UINT32_MAX;
	int32_t t19 = 520832;

	t19 = (x77==((x78%x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 3123;

	t20 = (x81==((x82%x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	static int64_t x87 = INT64_MAX;
	volatile int64_t x88 = INT64_MAX;
	volatile int32_t t21 = 2;

	t21 = (x85==((x86%x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	int8_t x90 = -1;
	int16_t x92 = -1;
	volatile int32_t t22 = -631659114;

	t22 = (x89==((x90%x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	volatile uint16_t x98 = UINT16_MAX;
	static int16_t x99 = -1;
	uint16_t x100 = 20933U;
	volatile int32_t t23 = 91;

	t23 = (x97==((x98%x99)&x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 247;
	static uint16_t x104 = 0U;

	t24 = (x101==((x102%x103)&x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 6U;
	int32_t x108 = -1;
	int32_t t25 = 44;

	t25 = (x105==((x106%x107)&x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = INT8_MIN;
	static volatile int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MAX;
	volatile int32_t t26 = -4721;

	t26 = (x109==((x110%x111)&x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 3U;
	int32_t x116 = -4971;
	int32_t t27 = -15;

	t27 = (x113==((x114%x115)&x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = INT64_MIN;
	int64_t x119 = 3397216852LL;
	volatile int32_t x120 = INT32_MAX;

	t28 = (x117==((x118%x119)&x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = INT32_MAX;
	uint8_t x123 = UINT8_MAX;
	static int8_t x124 = INT8_MIN;
	static volatile int32_t t29 = -15;

	t29 = (x121==((x122%x123)&x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -5080;
	int16_t x126 = -1;
	volatile int16_t x128 = INT16_MAX;
	int32_t t30 = -66830501;

	t30 = (x125==((x126%x127)&x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -3;
	static volatile int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MAX;
	int32_t t31 = -18756876;

	t31 = (x129==((x130%x131)&x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = 934;
	volatile int16_t x135 = -3373;
	int32_t x136 = 2;
	int32_t t32 = 759802948;

	t32 = (x133==((x134%x135)&x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = 29768550332189352LL;
	static int32_t x139 = INT32_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t33 = -35256303;

	t33 = (x137==((x138%x139)&x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	int64_t x142 = -1LL;
	static int16_t x143 = -1;
	int16_t x144 = -1555;

	t34 = (x141==((x142%x143)&x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = -1;
	static int8_t x146 = INT8_MIN;
	uint32_t x147 = 69069U;
	static uint32_t x148 = 447521758U;
	volatile int32_t t35 = 2;

	t35 = (x145==((x146%x147)&x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x149 = -1;
	volatile int64_t x150 = INT64_MIN;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MAX;
	static volatile int32_t t36 = -60295;

	t36 = (x149==((x150%x151)&x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -52;
	volatile uint8_t x154 = UINT8_MAX;
	uint16_t x155 = 925U;
	static uint8_t x156 = 1U;
	volatile int32_t t37 = 349594;

	t37 = (x153==((x154%x155)&x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x159 = UINT8_MAX;
	volatile int32_t x160 = INT32_MAX;
	int32_t t38 = -887501248;

	t38 = (x157==((x158%x159)&x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -202;
	int8_t x162 = INT8_MIN;
	uint8_t x163 = 3U;
	int64_t x164 = 65807096398934LL;

	t39 = (x161==((x162%x163)&x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MIN;
	uint64_t x166 = UINT64_MAX;
	static int8_t x167 = INT8_MAX;
	int32_t x168 = INT32_MAX;
	volatile int32_t t40 = -197477216;

	t40 = (x165==((x166%x167)&x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x169 = -1809;
	volatile uint64_t x170 = 63517533LLU;
	volatile int32_t x171 = INT32_MIN;
	static int8_t x172 = 0;
	static int32_t t41 = -202;

	t41 = (x169==((x170%x171)&x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -6645;
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	static int32_t t42 = 277;

	t42 = (x173==((x174%x175)&x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	volatile int16_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	int32_t t43 = -142;

	t43 = (x177==((x178%x179)&x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -1;
	static volatile uint8_t x182 = UINT8_MAX;

	t44 = (x181==((x182%x183)&x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x185 = 20244673U;
	uint32_t x186 = 2096779U;
	int8_t x187 = -1;
	uint8_t x188 = UINT8_MAX;
	int32_t t45 = 22606;

	t45 = (x185==((x186%x187)&x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x191 = 30U;
	int8_t x192 = INT8_MIN;
	volatile int32_t t46 = 146678493;

	t46 = (x189==((x190%x191)&x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MAX;
	int32_t x196 = INT32_MIN;
	volatile int32_t t47 = -465966;

	t47 = (x193==((x194%x195)&x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x197 = 13166U;
	int64_t x198 = -1LL;
	int32_t x199 = 2;
	int32_t x200 = -1;
	volatile int32_t t48 = -101;

	t48 = (x197==((x198%x199)&x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x201 = INT32_MIN;
	static uint32_t x202 = UINT32_MAX;
	static volatile int64_t x203 = 28968934494441LL;
	int64_t x204 = INT64_MAX;
	volatile int32_t t49 = 2219;

	t49 = (x201==((x202%x203)&x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x205 = -8265;
	uint32_t x207 = 15U;
	static int16_t x208 = INT16_MAX;
	int32_t t50 = -3307761;

	t50 = (x205==((x206%x207)&x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x211 = INT16_MIN;
	volatile int32_t x212 = -1;

	t51 = (x209==((x210%x211)&x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = 40U;
	volatile int8_t x214 = INT8_MIN;
	uint16_t x215 = 1003U;
	uint32_t x216 = 6U;

	t52 = (x213==((x214%x215)&x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x217 = 688U;
	volatile int8_t x218 = INT8_MAX;
	volatile int32_t t53 = 899214615;

	t53 = (x217==((x218%x219)&x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 57U;
	uint8_t x222 = UINT8_MAX;
	static uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MAX;

	t54 = (x221==((x222%x223)&x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = 13374318775805247LL;
	volatile int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MAX;
	static volatile int32_t x228 = -1;
	static volatile int32_t t55 = -3122;

	t55 = (x225==((x226%x227)&x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x231 = INT8_MIN;
	int32_t x232 = 349;

	t56 = (x229==((x230%x231)&x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	int8_t x234 = -19;
	static uint16_t x235 = 221U;
	volatile int32_t t57 = -51074475;

	t57 = (x233==((x234%x235)&x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x237 = 59014;
	volatile int8_t x238 = INT8_MAX;
	int64_t x240 = -8753LL;

	t58 = (x237==((x238%x239)&x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x241 = 29U;
	static int16_t x243 = INT16_MIN;
	volatile uint16_t x244 = UINT16_MAX;
	int32_t t59 = 39093;

	t59 = (x241==((x242%x243)&x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint32_t x246 = 6982U;
	int64_t x247 = INT64_MIN;
	volatile int64_t x248 = -1LL;
	volatile int32_t t60 = 260385;

	t60 = (x245==((x246%x247)&x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MAX;
	int64_t x251 = INT64_MIN;
	uint16_t x252 = 14U;
	int32_t t61 = 316;

	t61 = (x249==((x250%x251)&x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 21186U;
	volatile uint16_t x254 = 9228U;
	int32_t x255 = INT32_MIN;
	static volatile uint8_t x256 = UINT8_MAX;
	volatile int32_t t62 = 66504600;

	t62 = (x253==((x254%x255)&x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	static int64_t x258 = INT64_MAX;
	volatile int16_t x259 = INT16_MIN;
	volatile int32_t t63 = -16295852;

	t63 = (x257==((x258%x259)&x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	int16_t x264 = INT16_MIN;

	t64 = (x261==((x262%x263)&x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x266 = 30632U;
	uint8_t x267 = 15U;
	volatile int32_t x268 = -145031;
	static int32_t t65 = -24246796;

	t65 = (x265==((x266%x267)&x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	int64_t x271 = -1LL;
	uint64_t x272 = 4LLU;
	int32_t t66 = -366;

	t66 = (x269==((x270%x271)&x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x274 = 443767911LL;
	int8_t x276 = -1;
	volatile int32_t t67 = 187320;

	t67 = (x273==((x274%x275)&x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = UINT32_MAX;
	static int8_t x278 = INT8_MIN;
	static int8_t x280 = 33;
	volatile int32_t t68 = -3790450;

	t68 = (x277==((x278%x279)&x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 1U;
	static uint8_t x282 = 17U;
	volatile int32_t x283 = -442666040;
	uint64_t x284 = UINT64_MAX;
	int32_t t69 = -984607;

	t69 = (x281==((x282%x283)&x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x285 = UINT32_MAX;
	volatile uint32_t x286 = UINT32_MAX;
	static uint32_t x287 = 14U;
	int32_t x288 = -9;
	volatile int32_t t70 = -1094;

	t70 = (x285==((x286%x287)&x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = -1LL;
	int16_t x290 = 0;
	int64_t x291 = INT64_MAX;
	volatile uint32_t x292 = 5145U;
	volatile int32_t t71 = 444;

	t71 = (x289==((x290%x291)&x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	static int16_t x295 = -178;
	int64_t x296 = INT64_MAX;
	int32_t t72 = 5;

	t72 = (x293==((x294%x295)&x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	int32_t t73 = 165494;

	t73 = (x297==((x298%x299)&x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x303 = -1;
	static volatile int32_t t74 = -254541118;

	t74 = (x301==((x302%x303)&x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x305 = INT64_MIN;
	int32_t x307 = 12767;
	int8_t x308 = INT8_MIN;
	volatile int32_t t75 = 777;

	t75 = (x305==((x306%x307)&x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = UINT8_MAX;
	uint8_t x310 = 0U;
	static int8_t x312 = -2;
	volatile int32_t t76 = 16164656;

	t76 = (x309==((x310%x311)&x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = INT8_MAX;
	int8_t x314 = -1;
	uint16_t x315 = 2456U;
	static int16_t x316 = INT16_MIN;
	int32_t t77 = -102;

	t77 = (x313==((x314%x315)&x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x318 = -1LL;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = INT8_MIN;
	static int32_t t78 = -38662446;

	t78 = (x317==((x318%x319)&x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = INT8_MIN;
	static volatile int64_t x322 = -1LL;
	volatile int16_t x324 = -3;
	volatile int32_t t79 = -100417903;

	t79 = (x321==((x322%x323)&x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 517U;
	volatile uint64_t x326 = UINT64_MAX;
	uint8_t x328 = UINT8_MAX;
	int32_t t80 = -1812094;

	t80 = (x325==((x326%x327)&x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x329 = 27057119LLU;
	int16_t x330 = -1;
	uint32_t x332 = 1U;
	int32_t t81 = 2;

	t81 = (x329==((x330%x331)&x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	volatile int32_t x335 = INT32_MIN;
	int32_t x336 = -64495;
	volatile int32_t t82 = 50;

	t82 = (x333==((x334%x335)&x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MIN;
	uint32_t x338 = UINT32_MAX;
	int32_t t83 = 43;

	t83 = (x337==((x338%x339)&x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x341 = UINT32_MAX;
	static int32_t x342 = 565;
	int16_t x343 = -2;
	int64_t x344 = INT64_MIN;
	int32_t t84 = 110;

	t84 = (x341==((x342%x343)&x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x345 = 1140844U;
	int8_t x346 = INT8_MAX;
	volatile int32_t x348 = INT32_MIN;
	int32_t t85 = -71685;

	t85 = (x345==((x346%x347)&x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x349 = INT32_MAX;
	static int64_t x350 = INT64_MIN;
	uint64_t x351 = 94975695466006081LLU;
	int32_t x352 = INT32_MIN;
	int32_t t86 = -1;

	t86 = (x349==((x350%x351)&x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x353 = 654452501633871509LLU;
	static int32_t x354 = -1;
	volatile int32_t t87 = -193;

	t87 = (x353==((x354%x355)&x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = -42LL;
	static int16_t x360 = -1;
	volatile int32_t t88 = 24314907;

	t88 = (x357==((x358%x359)&x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x361 = INT16_MIN;
	static uint32_t x362 = 245156U;
	int8_t x363 = -1;
	volatile uint32_t x364 = 409U;
	int32_t t89 = -57229;

	t89 = (x361==((x362%x363)&x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x365 = 10392060LL;
	volatile uint8_t x366 = 6U;
	uint8_t x367 = UINT8_MAX;
	volatile int32_t t90 = -1;

	t90 = (x365==((x366%x367)&x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x369 = 5235U;
	int16_t x370 = INT16_MIN;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t91 = 4;

	t91 = (x369==((x370%x371)&x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = -44;
	volatile int8_t x374 = -8;
	int16_t x375 = -1;
	volatile uint32_t x376 = 3U;
	volatile int32_t t92 = -2298745;

	t92 = (x373==((x374%x375)&x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MAX;
	static int32_t x378 = 1140079;
	static int32_t x379 = 109;
	volatile int16_t x380 = -1;
	int32_t t93 = -59682;

	t93 = (x377==((x378%x379)&x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = -1LL;
	volatile int32_t x383 = -1;
	static volatile uint8_t x384 = UINT8_MAX;
	int32_t t94 = -381541;

	t94 = (x381==((x382%x383)&x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x386 = INT8_MAX;
	static int32_t x387 = 2383;
	int8_t x388 = INT8_MAX;
	volatile int32_t t95 = -402870459;

	t95 = (x385==((x386%x387)&x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = -1;
	static uint8_t x390 = 3U;
	int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	static int32_t t96 = 5247;

	t96 = (x389==((x390%x391)&x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = 6032U;
	int32_t x395 = -1;
	static volatile int64_t x396 = -25749349LL;

	t97 = (x393==((x394%x395)&x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x397 = UINT16_MAX;
	int64_t x400 = INT64_MIN;

	t98 = (x397==((x398%x399)&x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = 8838784104157LLU;
	volatile int32_t t99 = -534;

	t99 = (x401==((x402%x403)&x404));

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

