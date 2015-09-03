#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
volatile int64_t x5 = INT64_MIN;
volatile int16_t x6 = INT16_MIN;
int64_t t1 = -36925879770LL;
volatile int16_t x12 = 1077;
static int64_t x14 = INT64_MIN;
int8_t x17 = 61;
uint8_t x20 = 107U;
volatile int16_t x26 = -2841;
volatile int32_t t7 = -3774;
static int64_t t9 = -34926399280084LL;
uint8_t x54 = UINT8_MAX;
uint32_t x55 = 7385U;
uint16_t x58 = 25U;
volatile int32_t t13 = 83;
int16_t x65 = INT16_MIN;
volatile int32_t x68 = INT32_MIN;
volatile int64_t t19 = INT64_MIN;
static uint8_t x89 = 7U;
volatile uint8_t x90 = 97U;
static uint16_t x93 = 444U;
uint16_t x94 = 53U;
volatile uint8_t x95 = UINT8_MAX;
static int32_t t22 = 1031406698;
int8_t x100 = INT8_MIN;
static volatile int8_t x109 = -1;
int8_t x121 = -1;
volatile uint32_t x122 = 1U;
int32_t x131 = INT32_MAX;
volatile int16_t x136 = INT16_MIN;
volatile int32_t t32 = 1;
int64_t x152 = INT64_MIN;
static int16_t x154 = INT16_MAX;
int16_t x156 = INT16_MAX;
volatile int32_t t36 = 29497275;
volatile uint64_t x166 = UINT64_MAX;
static int16_t x168 = INT16_MAX;
uint32_t x170 = UINT32_MAX;
int64_t t39 = INT64_MIN;
static int16_t x173 = -7;
static volatile int16_t x176 = 1429;
static int64_t x179 = -1LL;
volatile int64_t x181 = 742735466LL;
int16_t x182 = INT16_MIN;
int64_t t42 = -26419853797752692LL;
uint8_t x189 = 0U;
volatile uint64_t x191 = 1091137081257236LLU;
int16_t x193 = INT16_MIN;
int32_t x194 = -3;
uint32_t t46 = 4268286U;
int32_t x207 = -1;
static uint32_t x208 = 60041U;
uint16_t x216 = UINT16_MAX;
int64_t t51 = INT64_MIN;
int32_t x221 = -7;
int32_t t52 = 2;
volatile int64_t x231 = -886400LL;
uint16_t x233 = UINT16_MAX;
volatile uint8_t x236 = UINT8_MAX;
int8_t x254 = INT8_MIN;
int16_t x258 = INT16_MIN;
uint32_t x259 = 1803582U;
volatile uint16_t x279 = 136U;
int32_t t67 = -1004;
uint64_t x285 = 60365177LLU;
uint32_t x293 = 11U;
volatile uint32_t t70 = 1U;
volatile int8_t x303 = INT8_MIN;
volatile int16_t x304 = 990;
int64_t x305 = -1LL;
int64_t x307 = 9LL;
static int64_t x308 = INT64_MIN;
uint32_t x319 = 467474416U;
int8_t x320 = INT8_MAX;
uint8_t x322 = 12U;
int64_t x323 = INT64_MAX;
static int32_t x328 = 10000;
static uint64_t x337 = 14838782LLU;
int32_t x340 = INT32_MIN;
int32_t x348 = -3289302;
volatile int16_t x361 = 15614;
uint16_t x365 = 125U;
static int16_t x377 = INT16_MIN;
volatile int16_t x382 = INT16_MAX;
volatile int32_t t91 = -15;
int16_t x394 = 800;
int32_t t92 = -28;
static int64_t t94 = -59582004695418LL;
int32_t x408 = -1;
int32_t t95 = -542383;
int32_t t97 = -1532822;
static uint16_t x417 = UINT16_MAX;
uint16_t x424 = 15445U;
uint64_t t99 = 59LLU;


void f0(void) {
	static volatile int16_t x1 = INT16_MAX;
	static uint8_t x2 = UINT8_MAX;
	volatile int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 61;

	t0 = (x1^(x2<(x3/x4)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x7 = INT16_MIN;
	int32_t x8 = 526;

	t1 = (x5^(x6<(x7/x8)));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 255U;
	int64_t x10 = INT64_MIN;
	int64_t x11 = -1996LL;
	static volatile uint32_t t2 = 1642U;

	t2 = (x9^(x10<(x11/x12)));

	if (t2 != 254U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 0;
	uint64_t x15 = 111LLU;
	static int16_t x16 = -1;
	static int32_t t3 = -670748962;

	t3 = (x13^(x14<(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x18 = INT16_MIN;
	int32_t x19 = -778;
	int32_t t4 = 1763103;

	t4 = (x17^(x18<(x19/x20)));

	if (t4 != 60) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 2U;
	uint16_t x22 = 0U;
	int8_t x23 = 3;
	int32_t x24 = -1;
	int32_t t5 = 746198756;

	t5 = (x21^(x22<(x23/x24)));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int64_t x27 = -23565320001606LL;
	int32_t x28 = -886122758;
	volatile int32_t t6 = -200;

	t6 = (x25^(x26<(x27/x28)));

	if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 63U;
	int8_t x30 = INT8_MIN;
	volatile int8_t x31 = INT8_MIN;
	int64_t x32 = -26169269562764LL;

	t7 = (x29^(x30<(x31/x32)));

	if (t7 != 62) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MAX;
	int32_t x34 = INT32_MAX;
	int8_t x35 = -1;
	static volatile int16_t x36 = -1;
	volatile int64_t t8 = INT64_MAX;

	t8 = (x33^(x34<(x35/x36)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	static volatile uint64_t x38 = UINT64_MAX;
	int16_t x39 = 1;
	int32_t x40 = -122;

	t9 = (x37^(x38<(x39/x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -17;
	static int16_t x42 = 119;
	int64_t x43 = -1LL;
	uint8_t x44 = 2U;
	volatile int32_t t10 = -125989009;

	t10 = (x41^(x42<(x43/x44)));

	if (t10 != -17) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = 27;
	int16_t x46 = -1;
	volatile int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -141;

	t11 = (x45^(x46<(x47/x48)));

	if (t11 != 27) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 226975U;
	int16_t x56 = -8080;
	volatile uint32_t t12 = 209806633U;

	t12 = (x53^(x54<(x55/x56)));

	if (t12 != 226975U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x57 = INT16_MAX;
	uint32_t x59 = 6U;
	int16_t x60 = INT16_MIN;

	t13 = (x57^(x58<(x59/x60)));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = -422;
	int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MAX;
	static int32_t t14 = -2397345;

	t14 = (x61^(x62<(x63/x64)));

	if (t14 != -421) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MIN;
	int32_t t15 = 0;

	t15 = (x65^(x66<(x67/x68)));

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 874655372LLU;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = UINT16_MAX;
	volatile uint64_t x72 = 944220350511239LLU;
	volatile uint64_t t16 = 8539054039986LLU;

	t16 = (x69^(x70<(x71/x72)));

	if (t16 != 874655372LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = -1;
	int64_t x75 = INT64_MIN;
	static volatile int8_t x76 = INT8_MIN;
	volatile int32_t t17 = -215234567;

	t17 = (x73^(x74<(x75/x76)));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = 1;
	int64_t x78 = INT64_MIN;
	int16_t x79 = -2847;
	int64_t x80 = -1LL;
	static int32_t t18 = 1;

	t18 = (x77^(x78<(x79/x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int8_t x82 = -11;
	uint32_t x83 = 1U;
	volatile int32_t x84 = 4;

	t19 = (x81^(x82<(x83/x84)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x85 = 0U;
	int8_t x86 = -1;
	int8_t x87 = INT8_MIN;
	static volatile int64_t x88 = INT64_MIN;
	uint32_t t20 = 9U;

	t20 = (x85^(x86<(x87/x88)));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x91 = INT64_MAX;
	static int16_t x92 = INT16_MAX;
	int32_t t21 = -1;

	t21 = (x89^(x90<(x91/x92)));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x96 = 8;

	t22 = (x93^(x94<(x95/x96)));

	if (t22 != 444) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MIN;
	static uint32_t x99 = 148U;
	int32_t t23 = 19;

	t23 = (x97^(x98<(x99/x100)));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = -40;
	int16_t x102 = INT16_MAX;
	static volatile int16_t x103 = -235;
	static int16_t x104 = INT16_MIN;
	int32_t t24 = -36516475;

	t24 = (x101^(x102<(x103/x104)));

	if (t24 != -40) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = 0;
	static int16_t x107 = INT16_MAX;
	int64_t x108 = -975376LL;
	volatile int32_t t25 = 132805;

	t25 = (x105^(x106<(x107/x108)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x110 = INT32_MIN;
	uint8_t x111 = UINT8_MAX;
	static int64_t x112 = -3996968477LL;
	int32_t t26 = 1972;

	t26 = (x109^(x110<(x111/x112)));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = 2;
	static uint64_t x118 = 145192633955322LLU;
	int16_t x119 = -309;
	uint64_t x120 = 89186863LLU;
	volatile int32_t t27 = -1004092855;

	t27 = (x117^(x118<(x119/x120)));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x123 = INT16_MAX;
	int32_t x124 = INT32_MIN;
	volatile int32_t t28 = -1;

	t28 = (x121^(x122<(x123/x124)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MAX;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = -1;
	int32_t x128 = 458363806;
	static volatile int32_t t29 = INT32_MAX;

	t29 = (x125^(x126<(x127/x128)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x129 = INT16_MAX;
	int64_t x130 = -1LL;
	volatile uint8_t x132 = 2U;
	static int32_t t30 = 33;

	t30 = (x129^(x130<(x131/x132)));

	if (t30 != 32766) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 193U;
	volatile int16_t x134 = INT16_MIN;
	uint64_t x135 = 629292822629031292LLU;
	int32_t t31 = 420401;

	t31 = (x133^(x134<(x135/x136)));

	if (t31 != 193) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x141 = INT16_MAX;
	volatile uint32_t x142 = UINT32_MAX;
	int32_t x143 = -7;
	int64_t x144 = -1LL;

	t32 = (x141^(x142<(x143/x144)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x145 = -12;
	volatile uint8_t x146 = 0U;
	static volatile int16_t x147 = 5;
	int16_t x148 = INT16_MAX;
	volatile int32_t t33 = 26613636;

	t33 = (x145^(x146<(x147/x148)));

	if (t33 != -12) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = -1;
	static int8_t x150 = -1;
	static int32_t x151 = INT32_MIN;
	volatile int32_t t34 = 5862664;

	t34 = (x149^(x150<(x151/x152)));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x153 = UINT32_MAX;
	int16_t x155 = -55;
	static uint32_t t35 = UINT32_MAX;

	t35 = (x153^(x154<(x155/x156)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = 2;
	uint64_t x158 = UINT64_MAX;
	volatile uint64_t x159 = 31105LLU;
	volatile int16_t x160 = INT16_MIN;

	t36 = (x157^(x158<(x159/x160)));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MAX;
	uint32_t x162 = 2362U;
	volatile int64_t x163 = -1LL;
	int32_t x164 = -592;
	int32_t t37 = INT32_MAX;

	t37 = (x161^(x162<(x163/x164)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x165 = 392LLU;
	volatile int32_t x167 = 3;
	static uint64_t t38 = 11729330770LLU;

	t38 = (x165^(x166<(x167/x168)));

	if (t38 != 392LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x169 = INT64_MIN;
	int64_t x171 = -1LL;
	volatile int32_t x172 = INT32_MIN;

	t39 = (x169^(x170<(x171/x172)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x174 = -1;
	static int16_t x175 = -22;
	int32_t t40 = -715142;

	t40 = (x173^(x174<(x175/x176)));

	if (t40 != -8) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -1;
	static uint64_t x178 = 8265133978534154061LLU;
	volatile uint8_t x180 = 1U;
	static int32_t t41 = -683861;

	t41 = (x177^(x178<(x179/x180)));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x183 = UINT8_MAX;
	static uint16_t x184 = 7820U;

	t42 = (x181^(x182<(x183/x184)));

	if (t42 != 742735467LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = 9473U;
	uint8_t x186 = 14U;
	volatile uint8_t x187 = 5U;
	volatile int64_t x188 = INT64_MIN;
	volatile uint32_t t43 = 57587619U;

	t43 = (x185^(x186<(x187/x188)));

	if (t43 != 9473U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x190 = UINT32_MAX;
	uint64_t x192 = 2LLU;
	volatile int32_t t44 = 97;

	t44 = (x189^(x190<(x191/x192)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x195 = 793U;
	static uint8_t x196 = UINT8_MAX;
	int32_t t45 = 10726138;

	t45 = (x193^(x194<(x195/x196)));

	if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 1952U;
	static int16_t x198 = -435;
	int32_t x199 = -1;
	int16_t x200 = INT16_MAX;

	t46 = (x197^(x198<(x199/x200)));

	if (t46 != 1953U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	static volatile uint64_t x202 = 105018733LLU;
	int16_t x203 = INT16_MAX;
	uint64_t x204 = UINT64_MAX;
	volatile int64_t t47 = INT64_MIN;

	t47 = (x201^(x202<(x203/x204)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = UINT8_MAX;
	uint64_t x206 = 44578940391LLU;
	int32_t t48 = 46429332;

	t48 = (x205^(x206<(x207/x208)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 1U;
	uint32_t x210 = UINT32_MAX;
	uint8_t x211 = 11U;
	int64_t x212 = INT64_MAX;
	int32_t t49 = -512681;

	t49 = (x209^(x210<(x211/x212)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x213 = UINT32_MAX;
	volatile int64_t x214 = INT64_MIN;
	int16_t x215 = INT16_MAX;
	uint32_t t50 = 14922712U;

	t50 = (x213^(x214<(x215/x216)));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x217 = INT64_MIN;
	uint8_t x218 = 7U;
	int64_t x219 = 7LL;
	static uint32_t x220 = 3028341U;

	t51 = (x217^(x218<(x219/x220)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	uint32_t x224 = 263077828U;

	t52 = (x221^(x222<(x223/x224)));

	if (t52 != -7) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = -3;
	int32_t x226 = INT32_MAX;
	uint16_t x227 = UINT16_MAX;
	static int8_t x228 = INT8_MIN;
	int32_t t53 = 461944;

	t53 = (x225^(x226<(x227/x228)));

	if (t53 != -3) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = 27297;
	volatile int64_t x230 = -493536474659256LL;
	volatile uint8_t x232 = UINT8_MAX;
	int32_t t54 = 1;

	t54 = (x229^(x230<(x231/x232)));

	if (t54 != 27296) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x234 = INT8_MIN;
	uint16_t x235 = UINT16_MAX;
	static int32_t t55 = -255028;

	t55 = (x233^(x234<(x235/x236)));

	if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x237 = -1LL;
	int64_t x238 = 755364160948273LL;
	static int8_t x239 = INT8_MIN;
	volatile uint16_t x240 = 1U;
	volatile int64_t t56 = 2862106464LL;

	t56 = (x237^(x238<(x239/x240)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MIN;
	static uint32_t x242 = 608712U;
	int64_t x243 = INT64_MAX;
	static uint8_t x244 = 20U;
	static int32_t t57 = 22;

	t57 = (x241^(x242<(x243/x244)));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x245 = UINT64_MAX;
	int8_t x246 = 0;
	uint32_t x247 = 1558903488U;
	uint8_t x248 = 2U;
	volatile uint64_t t58 = 827LLU;

	t58 = (x245^(x246<(x247/x248)));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = -1LL;
	int32_t x250 = -1;
	int64_t x251 = -1LL;
	uint64_t x252 = 11460335244LLU;
	volatile int64_t t59 = -32870475619015977LL;

	t59 = (x249^(x250<(x251/x252)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = UINT64_MAX;
	int64_t x255 = -1LL;
	static uint16_t x256 = UINT16_MAX;
	static uint64_t t60 = 10586115289680946LLU;

	t60 = (x253^(x254<(x255/x256)));

	if (t60 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = -1LL;
	uint8_t x260 = UINT8_MAX;
	static volatile int64_t t61 = 994987262824792LL;

	t61 = (x257^(x258<(x259/x260)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = 6661549294LL;
	uint32_t x262 = 4092545U;
	static int32_t x263 = INT32_MAX;
	static int32_t x264 = INT32_MAX;
	static volatile int64_t t62 = 32174155574161858LL;

	t62 = (x261^(x262<(x263/x264)));

	if (t62 != 6661549294LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = -1LL;
	uint8_t x266 = 0U;
	int32_t x267 = -242976;
	int16_t x268 = INT16_MAX;
	int64_t t63 = -136634113078679076LL;

	t63 = (x265^(x266<(x267/x268)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x269 = 1169U;
	int32_t x270 = -1;
	int64_t x271 = -475055835LL;
	static uint32_t x272 = 2929755U;
	volatile int32_t t64 = 473401;

	t64 = (x269^(x270<(x271/x272)));

	if (t64 != 1169) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MIN;
	static int16_t x275 = 3;
	volatile int16_t x276 = -367;
	int32_t t65 = -618901;

	t65 = (x273^(x274<(x275/x276)));

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = 0U;
	volatile int8_t x278 = -1;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t66 = -8;

	t66 = (x277^(x278<(x279/x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = 39306;
	int64_t x282 = 2LL;
	int16_t x283 = 2585;
	int8_t x284 = INT8_MIN;

	t67 = (x281^(x282<(x283/x284)));

	if (t67 != 39306) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x286 = UINT32_MAX;
	volatile int8_t x287 = INT8_MIN;
	int8_t x288 = -10;
	uint64_t t68 = 11027333778585LLU;

	t68 = (x285^(x286<(x287/x288)));

	if (t68 != 60365177LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = UINT64_MAX;
	int8_t x290 = -3;
	int16_t x291 = INT16_MIN;
	volatile uint16_t x292 = 7U;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x289^(x290<(x291/x292)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MAX;

	t70 = (x293^(x294<(x295/x296)));

	if (t70 != 10U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = INT16_MIN;
	uint32_t x298 = 0U;
	int8_t x299 = 2;
	int32_t x300 = -454093;
	static volatile int32_t t71 = 0;

	t71 = (x297^(x298<(x299/x300)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = -1;
	int64_t x302 = 682775894570LL;
	int32_t t72 = -2;

	t72 = (x301^(x302<(x303/x304)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x306 = INT32_MAX;
	int64_t t73 = -92155LL;

	t73 = (x305^(x306<(x307/x308)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x313 = UINT64_MAX;
	int32_t x314 = INT32_MAX;
	uint32_t x315 = UINT32_MAX;
	static int32_t x316 = INT32_MIN;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x313^(x314<(x315/x316)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x317 = 3U;
	int16_t x318 = INT16_MAX;
	volatile int32_t t75 = 0;

	t75 = (x317^(x318<(x319/x320)));

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = -1;
	volatile uint64_t x324 = 2246LLU;
	static int32_t t76 = 628;

	t76 = (x321^(x322<(x323/x324)));

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = 314929U;
	static int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MAX;
	static uint32_t t77 = 124U;

	t77 = (x325^(x326<(x327/x328)));

	if (t77 != 314929U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x329 = 20LLU;
	int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MAX;
	uint8_t x332 = 109U;
	uint64_t t78 = 1LLU;

	t78 = (x329^(x330<(x331/x332)));

	if (t78 != 21LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x333 = 129570U;
	uint32_t x334 = UINT32_MAX;
	int64_t x335 = -19049010661410529LL;
	static int32_t x336 = -103841;
	uint32_t t79 = 1064U;

	t79 = (x333^(x334<(x335/x336)));

	if (t79 != 129571U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x338 = 1U;
	int16_t x339 = -19;
	volatile uint64_t t80 = 1264895167LLU;

	t80 = (x337^(x338<(x339/x340)));

	if (t80 != 14838782LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = 3148U;
	int32_t x342 = INT32_MIN;
	int64_t x343 = -1LL;
	int8_t x344 = INT8_MAX;
	volatile int32_t t81 = -46864009;

	t81 = (x341^(x342<(x343/x344)));

	if (t81 != 3149) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x345 = 5311386212045534995LLU;
	int8_t x346 = 0;
	volatile int16_t x347 = -1;
	volatile uint64_t t82 = 164955919LLU;

	t82 = (x345^(x346<(x347/x348)));

	if (t82 != 5311386212045534995LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MAX;
	uint64_t x350 = 208092LLU;
	int8_t x351 = INT8_MIN;
	int64_t x352 = 248744653871LL;
	volatile int32_t t83 = INT32_MAX;

	t83 = (x349^(x350<(x351/x352)));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = -1;
	int64_t x354 = -1LL;
	volatile int64_t x355 = INT64_MIN;
	static volatile uint8_t x356 = UINT8_MAX;
	volatile int32_t t84 = -177;

	t84 = (x353^(x354<(x355/x356)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x362 = -1061653403LL;
	static volatile int16_t x363 = INT16_MIN;
	static volatile uint64_t x364 = 1868513433234027419LLU;
	int32_t t85 = -965977;

	t85 = (x361^(x362<(x363/x364)));

	if (t85 != 15614) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x366 = 1208U;
	static uint16_t x367 = 3716U;
	int64_t x368 = -499791438796LL;
	int32_t t86 = 12441;

	t86 = (x365^(x366<(x367/x368)));

	if (t86 != 125) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = 4108;
	uint32_t x370 = UINT32_MAX;
	uint8_t x371 = 18U;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t87 = 897574941;

	t87 = (x369^(x370<(x371/x372)));

	if (t87 != 4108) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x373 = 8LL;
	int32_t x374 = 2;
	static int32_t x375 = -82;
	int16_t x376 = INT16_MIN;
	int64_t t88 = -87LL;

	t88 = (x373^(x374<(x375/x376)));

	if (t88 != 8LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x378 = INT64_MAX;
	uint8_t x379 = UINT8_MAX;
	uint64_t x380 = UINT64_MAX;
	static int32_t t89 = 1;

	t89 = (x377^(x378<(x379/x380)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = 12386U;
	int16_t x383 = INT16_MAX;
	int64_t x384 = INT64_MIN;
	volatile int32_t t90 = 6;

	t90 = (x381^(x382<(x383/x384)));

	if (t90 != 12386) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MAX;
	int16_t x387 = -6;
	uint8_t x388 = UINT8_MAX;

	t91 = (x385^(x386<(x387/x388)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x393 = -1;
	int32_t x395 = INT32_MIN;
	uint32_t x396 = UINT32_MAX;

	t92 = (x393^(x394<(x395/x396)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = INT16_MAX;
	uint32_t x398 = 24U;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	volatile int32_t t93 = -69310850;

	t93 = (x397^(x398<(x399/x400)));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = INT64_MAX;
	int8_t x402 = -1;
	int8_t x403 = INT8_MIN;
	volatile int16_t x404 = -1;

	t94 = (x401^(x402<(x403/x404)));

	if (t94 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x405 = -1;
	int32_t x406 = -31;
	int16_t x407 = 529;

	t95 = (x405^(x406<(x407/x408)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MIN;
	int16_t x410 = 1040;
	int16_t x411 = INT16_MIN;
	uint32_t x412 = UINT32_MAX;
	volatile int32_t t96 = -37508;

	t96 = (x409^(x410<(x411/x412)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x413 = 29U;
	int8_t x414 = -4;
	int16_t x415 = INT16_MIN;
	uint32_t x416 = 12558U;

	t97 = (x413^(x414<(x415/x416)));

	if (t97 != 29) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x418 = INT8_MIN;
	int32_t x419 = INT32_MAX;
	int16_t x420 = INT16_MAX;
	int32_t t98 = 97521256;

	t98 = (x417^(x418<(x419/x420)));

	if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = UINT64_MAX;
	uint32_t x422 = 3936903U;
	static volatile int16_t x423 = INT16_MIN;

	t99 = (x421^(x422<(x423/x424)));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

