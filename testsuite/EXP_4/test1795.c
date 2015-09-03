#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = 366;
uint32_t x14 = 22303728U;
int64_t x21 = INT64_MAX;
int64_t x35 = -2908096LL;
static int16_t x36 = 0;
int32_t t7 = -2;
static volatile uint8_t x45 = 0U;
int8_t x48 = INT8_MIN;
int32_t t10 = 18491949;
uint16_t x51 = 0U;
int8_t x53 = 7;
static int32_t x57 = INT32_MIN;
static int64_t x64 = -94635172853LL;
int32_t t14 = 3;
static int32_t x66 = 3726012;
int64_t x70 = INT64_MIN;
volatile int64_t x77 = 1657LL;
int64_t t18 = -220298265899LL;
int32_t x84 = INT32_MIN;
volatile int8_t x88 = INT8_MIN;
int8_t x89 = INT8_MAX;
uint64_t x92 = 2LLU;
int32_t t21 = 3174;
int32_t t23 = 3063;
uint8_t x108 = 62U;
int8_t x109 = -1;
volatile int64_t x110 = 2022LL;
int32_t x116 = INT32_MIN;
int32_t x132 = -1;
int32_t t29 = -10;
int32_t x134 = INT32_MAX;
static int32_t t32 = 11;
volatile uint32_t x148 = 3906U;
int32_t t34 = 3;
int32_t t35 = 1;
uint32_t x157 = 42830009U;
int8_t x160 = -1;
uint16_t x161 = UINT16_MAX;
int64_t x162 = -1LL;
int32_t x164 = INT32_MIN;
static int32_t t37 = 446;
int64_t x172 = INT64_MAX;
volatile int32_t t39 = 8273;
int64_t x173 = -1LL;
static uint64_t t42 = 36804281LLU;
int8_t x190 = -1;
volatile int64_t x192 = -6751687LL;
int32_t x194 = INT32_MIN;
int16_t x195 = 12;
volatile int32_t t44 = 5393;
static volatile uint32_t t45 = 18715157U;
static volatile uint16_t x205 = 1123U;
int32_t t47 = -358;
int16_t x213 = 1;
static uint32_t x215 = 42167U;
int32_t t53 = -23;
volatile int8_t x240 = -10;
int32_t x242 = 694109;
volatile int16_t x243 = -5;
uint64_t x246 = 13009528439152LLU;
volatile int32_t t57 = -5;
volatile uint64_t t58 = 2981524LLU;
int8_t x256 = INT8_MIN;
int64_t t60 = -46835LL;
static uint32_t x261 = 11314637U;
volatile uint64_t x276 = 31527LLU;
int32_t t65 = -79165977;
int8_t x283 = INT8_MAX;
uint64_t t66 = 56234910LLU;
static uint16_t x288 = UINT16_MAX;
int32_t t67 = -7156344;
static uint8_t x294 = UINT8_MAX;
volatile int64_t x296 = INT64_MIN;
volatile int32_t x297 = -1;
uint16_t x299 = 63U;
int32_t x306 = -2227;
int8_t x311 = -1;
int8_t x316 = INT8_MIN;
int16_t x325 = 0;
uint16_t x331 = 18316U;
volatile uint64_t t78 = 223680205242664LLU;
volatile int32_t t79 = -10051;
int8_t x337 = -1;
volatile int8_t x339 = 1;
int8_t x340 = 22;
uint64_t x341 = 103473790226LLU;
int64_t x344 = INT64_MAX;
volatile int64_t x346 = INT64_MIN;
int16_t x350 = -1;
int16_t x356 = INT16_MAX;
int64_t x362 = INT64_MIN;
int32_t t86 = -628946869;
static uint8_t x367 = UINT8_MAX;
int32_t x370 = INT32_MAX;
static volatile uint32_t x382 = UINT32_MAX;
volatile int16_t x384 = INT16_MAX;
static int16_t x387 = -1;
volatile int32_t x388 = 1336344;
uint16_t x389 = UINT16_MAX;
static volatile int8_t x393 = INT8_MAX;
static volatile uint32_t t95 = 22115U;


void f0(void) {
	int64_t x1 = 4LL;
	int16_t x2 = 1922;
	static volatile int32_t x3 = 20;
	volatile uint64_t x4 = 1636845702764LLU;
	static volatile int64_t t0 = 19594LL;

	t0 = (x1+(x2<(x3&x4)));

	if (t0 != 4LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	int32_t x6 = -1;
	int32_t x7 = INT32_MIN;
	volatile int64_t x8 = -1LL;
	volatile int32_t t1 = INT32_MIN;

	t1 = (x5+(x6<(x7&x8)));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	uint8_t x11 = 3U;
	volatile uint64_t x12 = UINT64_MAX;
	int32_t t2 = 115374;

	t2 = (x9+(x10<(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static uint64_t x15 = 19LLU;
	uint64_t x16 = 1085144273LLU;
	int32_t t3 = 5;

	t3 = (x13+(x14<(x15&x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x22 = INT32_MAX;
	static int8_t x23 = INT8_MIN;
	int8_t x24 = 26;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x21+(x22<(x23&x24)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 0;
	uint16_t x26 = UINT16_MAX;
	static uint8_t x27 = 22U;
	int64_t x28 = -1LL;
	int32_t t5 = -497460853;

	t5 = (x25+(x26<(x27&x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 1U;
	int16_t x30 = -3632;
	static int64_t x31 = INT64_MAX;
	static int32_t x32 = -36;
	volatile uint32_t t6 = 693734U;

	t6 = (x29+(x30<(x31&x32)));

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 6U;
	int64_t x34 = INT64_MIN;

	t7 = (x33+(x34<(x35&x36)));

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x37 = 259204LLU;
	int8_t x38 = -63;
	int8_t x39 = -1;
	volatile int32_t x40 = 21117517;
	volatile uint64_t t8 = 589LLU;

	t8 = (x37+(x38<(x39&x40)));

	if (t8 != 259205LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	int16_t x44 = -1;
	int32_t t9 = -54;

	t9 = (x41+(x42<(x43&x44)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x46 = -1;
	uint16_t x47 = 762U;

	t10 = (x45+(x46<(x47&x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 6;
	volatile int8_t x50 = 7;
	uint16_t x52 = 22U;
	volatile int32_t t11 = -326;

	t11 = (x49+(x50<(x51&x52)));

	if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = INT64_MIN;
	static volatile uint16_t x55 = UINT16_MAX;
	int8_t x56 = -5;
	int32_t t12 = 586;

	t12 = (x53+(x54<(x55&x56)));

	if (t12 != 8) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = -1;
	volatile int16_t x59 = 15;
	int8_t x60 = -1;
	static volatile int32_t t13 = 0;

	t13 = (x57+(x58<(x59&x60)));

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = UINT8_MAX;
	volatile uint32_t x62 = 0U;
	int32_t x63 = -51131;

	t14 = (x61+(x62<(x63&x64)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MAX;
	int32_t x67 = 25875;
	int16_t x68 = -130;
	int64_t t15 = INT64_MAX;

	t15 = (x65+(x66<(x67&x68)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = 10U;
	static int32_t x71 = -1068;
	uint64_t x72 = 61243880236623297LLU;
	static int32_t t16 = -20325766;

	t16 = (x69+(x70<(x71&x72)));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x73 = 3U;
	int8_t x74 = INT8_MAX;
	volatile int64_t x75 = 721276798LL;
	static volatile int8_t x76 = -1;
	volatile int32_t t17 = 249509367;

	t17 = (x73+(x74<(x75&x76)));

	if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = INT32_MAX;
	volatile int8_t x79 = 13;
	volatile int64_t x80 = 1756LL;

	t18 = (x77+(x78<(x79&x80)));

	if (t18 != 1657LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = -1;
	int8_t x83 = -1;
	volatile int32_t t19 = 1272;

	t19 = (x81+(x82<(x83&x84)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = 1U;
	uint32_t x86 = 301540U;
	int64_t x87 = INT64_MAX;
	static int32_t t20 = -123795071;

	t20 = (x85+(x86<(x87&x88)));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x90 = INT8_MIN;
	uint16_t x91 = 8821U;

	t21 = (x89+(x90<(x91&x92)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = INT32_MIN;
	volatile int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	int8_t x96 = INT8_MIN;
	static int32_t t22 = -517648;

	t22 = (x93+(x94<(x95&x96)));

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -1;
	int64_t x102 = INT64_MAX;
	int64_t x103 = -1LL;
	uint16_t x104 = UINT16_MAX;

	t23 = (x101+(x102<(x103&x104)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	static int64_t x106 = -255481939812105312LL;
	int8_t x107 = INT8_MAX;
	int32_t t24 = 272818;

	t24 = (x105+(x106<(x107&x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x111 = INT64_MAX;
	static int64_t x112 = INT64_MAX;
	int32_t t25 = -816381058;

	t25 = (x109+(x110<(x111&x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x113 = 2U;
	int64_t x114 = -7LL;
	static uint8_t x115 = UINT8_MAX;
	volatile uint32_t t26 = 792630U;

	t26 = (x113+(x114<(x115&x116)));

	if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = INT8_MIN;
	volatile int32_t x118 = INT32_MIN;
	int64_t x119 = -1LL;
	uint16_t x120 = UINT16_MAX;
	int32_t t27 = 145320;

	t27 = (x117+(x118<(x119&x120)));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x125 = -1;
	volatile int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	volatile int16_t x128 = -948;
	int32_t t28 = 13927;

	t28 = (x125+(x126<(x127&x128)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = 1;
	int16_t x130 = INT16_MIN;
	int16_t x131 = -2;

	t29 = (x129+(x130<(x131&x132)));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x133 = INT8_MAX;
	int16_t x135 = INT16_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t30 = -1;

	t30 = (x133+(x134<(x135&x136)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x137 = INT64_MIN;
	static volatile uint64_t x138 = UINT64_MAX;
	static int64_t x139 = -1LL;
	int64_t x140 = 5LL;
	volatile int64_t t31 = INT64_MIN;

	t31 = (x137+(x138<(x139&x140)));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x141 = -1;
	int32_t x142 = INT32_MIN;
	uint64_t x143 = UINT64_MAX;
	volatile int64_t x144 = -2346702LL;

	t32 = (x141+(x142<(x143&x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = -1;
	uint32_t x146 = 4826260U;
	static int32_t x147 = 1;
	volatile int32_t t33 = -292;

	t33 = (x145+(x146<(x147&x148)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -743;
	int16_t x150 = INT16_MIN;
	volatile int64_t x151 = INT64_MIN;
	volatile uint8_t x152 = 2U;

	t34 = (x149+(x150<(x151&x152)));

	if (t34 != -742) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	static volatile int16_t x154 = -1;
	volatile int32_t x155 = INT32_MIN;
	uint64_t x156 = 54240916253082LLU;

	t35 = (x153+(x154<(x155&x156)));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x158 = -22;
	int64_t x159 = 27073382806387579LL;
	volatile uint32_t t36 = 15966689U;

	t36 = (x157+(x158<(x159&x160)));

	if (t36 != 42830010U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x163 = INT64_MIN;

	t37 = (x161+(x162<(x163&x164)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = INT8_MAX;
	uint64_t x166 = 458096LLU;
	volatile int8_t x167 = INT8_MIN;
	int64_t x168 = INT64_MIN;
	int32_t t38 = -5464;

	t38 = (x165+(x166<(x167&x168)));

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x169 = 117U;
	uint32_t x170 = UINT32_MAX;
	volatile uint8_t x171 = 47U;

	t39 = (x169+(x170<(x171&x172)));

	if (t39 != 117) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = INT64_MIN;
	uint64_t x175 = 451LLU;
	uint32_t x176 = 51778472U;
	static int64_t t40 = 78982214707940LL;

	t40 = (x173+(x174<(x175&x176)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 19U;
	uint8_t x182 = UINT8_MAX;
	int32_t x183 = INT32_MIN;
	volatile uint32_t x184 = 208U;
	int32_t t41 = 7;

	t41 = (x181+(x182<(x183&x184)));

	if (t41 != 19) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x185 = 15572911795669028LLU;
	volatile int64_t x186 = -1LL;
	int8_t x187 = INT8_MIN;
	int8_t x188 = -1;

	t42 = (x185+(x186<(x187&x188)));

	if (t42 != 15572911795669028LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x189 = 244264729800LLU;
	uint32_t x191 = 255347U;
	static uint64_t t43 = 485175LLU;

	t43 = (x189+(x190<(x191&x192)));

	if (t43 != 244264729801LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -12;
	int32_t x196 = 0;

	t44 = (x193+(x194<(x195&x196)));

	if (t44 != -11) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x197 = 216666459U;
	uint64_t x198 = UINT64_MAX;
	uint8_t x199 = 1U;
	volatile uint8_t x200 = UINT8_MAX;

	t45 = (x197+(x198<(x199&x200)));

	if (t45 != 216666459U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	static int16_t x202 = -1;
	static uint32_t x203 = 1343823237U;
	int64_t x204 = -1LL;
	volatile int32_t t46 = -430079;

	t46 = (x201+(x202<(x203&x204)));

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x206 = UINT64_MAX;
	int8_t x207 = -1;
	static uint32_t x208 = UINT32_MAX;

	t47 = (x205+(x206<(x207&x208)));

	if (t47 != 1123) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x209 = 2U;
	volatile int16_t x210 = -1;
	volatile int8_t x211 = INT8_MIN;
	uint32_t x212 = 151432U;
	static volatile int32_t t48 = 51402;

	t48 = (x209+(x210<(x211&x212)));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x214 = INT16_MAX;
	int64_t x216 = -1LL;
	volatile int32_t t49 = -6607;

	t49 = (x213+(x214<(x215&x216)));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = 4259280210318LLU;
	int16_t x218 = -269;
	int8_t x219 = -49;
	static int32_t x220 = -58;
	volatile uint64_t t50 = 210033955088LLU;

	t50 = (x217+(x218<(x219&x220)));

	if (t50 != 4259280210319LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x221 = 3483274289212LL;
	volatile int32_t x222 = INT32_MIN;
	static int16_t x223 = -1;
	static volatile int32_t x224 = -1;
	static int64_t t51 = 247540837LL;

	t51 = (x221+(x222<(x223&x224)));

	if (t51 != 3483274289213LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x225 = INT32_MIN;
	uint64_t x226 = UINT64_MAX;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = -1;
	static volatile int32_t t52 = INT32_MIN;

	t52 = (x225+(x226<(x227&x228)));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -1;
	volatile int64_t x230 = INT64_MIN;
	volatile int64_t x231 = INT64_MIN;
	uint64_t x232 = 202623912848LLU;

	t53 = (x229+(x230<(x231&x232)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = UINT32_MAX;
	int8_t x234 = INT8_MIN;
	uint64_t x235 = UINT64_MAX;
	uint8_t x236 = 13U;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x233+(x234<(x235&x236)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = 74536759;
	int64_t x238 = 133436125LL;
	int32_t x239 = -1;
	static int32_t t55 = 778304;

	t55 = (x237+(x238<(x239&x240)));

	if (t55 != 74536759) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 223461136U;
	static int32_t x244 = -1;
	uint32_t t56 = 1560U;

	t56 = (x241+(x242<(x243&x244)));

	if (t56 != 223461136U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	int64_t x247 = INT64_MIN;
	volatile int64_t x248 = INT64_MIN;

	t57 = (x245+(x246<(x247&x248)));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x249 = 35584476675431946LLU;
	volatile uint16_t x250 = UINT16_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile int32_t x252 = INT32_MIN;

	t58 = (x249+(x250<(x251&x252)));

	if (t58 != 35584476675431947LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MIN;
	uint64_t x254 = 2733328940807LLU;
	uint16_t x255 = 27U;
	volatile int32_t t59 = INT32_MIN;

	t59 = (x253+(x254<(x255&x256)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = -121683268LL;
	static uint32_t x258 = UINT32_MAX;
	int8_t x259 = INT8_MIN;
	static volatile int64_t x260 = INT64_MIN;

	t60 = (x257+(x258<(x259&x260)));

	if (t60 != -121683268LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x262 = 3303115902456LLU;
	static int32_t x263 = -5477878;
	int8_t x264 = -1;
	uint32_t t61 = 730294195U;

	t61 = (x261+(x262<(x263&x264)));

	if (t61 != 11314638U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = 54087633U;
	int16_t x266 = -1;
	int32_t x267 = -1;
	uint8_t x268 = 6U;
	uint32_t t62 = 1270223491U;

	t62 = (x265+(x266<(x267&x268)));

	if (t62 != 54087634U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -3897LL;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	static int64_t x272 = INT64_MAX;
	int64_t t63 = -783LL;

	t63 = (x269+(x270<(x271&x272)));

	if (t63 != -3896LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = 276;
	uint8_t x274 = 0U;
	int64_t x275 = -48302178717423LL;
	int32_t t64 = -1;

	t64 = (x273+(x274<(x275&x276)));

	if (t64 != 277) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	static volatile uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;

	t65 = (x277+(x278<(x279&x280)));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x281 = 1LLU;
	volatile int64_t x282 = -1LL;
	int32_t x284 = -1;

	t66 = (x281+(x282<(x283&x284)));

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = UINT8_MAX;
	uint64_t x286 = 94268578LLU;
	volatile int32_t x287 = INT32_MAX;

	t67 = (x285+(x286<(x287&x288)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = 4U;
	static volatile uint16_t x290 = UINT16_MAX;
	uint8_t x291 = 1U;
	int8_t x292 = INT8_MIN;
	int32_t t68 = -276476;

	t68 = (x289+(x290<(x291&x292)));

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x293 = -1LL;
	int32_t x295 = -6;
	volatile int64_t t69 = -528731283LL;

	t69 = (x293+(x294<(x295&x296)));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x298 = INT32_MIN;
	int64_t x300 = -1LL;
	int32_t t70 = 109739;

	t70 = (x297+(x298<(x299&x300)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = 34U;
	static int8_t x302 = -1;
	static int16_t x303 = 1106;
	static volatile int8_t x304 = INT8_MIN;
	int32_t t71 = 31394793;

	t71 = (x301+(x302<(x303&x304)));

	if (t71 != 35) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = -16173;
	int64_t x307 = 466LL;
	static int64_t x308 = -1LL;
	volatile int32_t t72 = -88;

	t72 = (x305+(x306<(x307&x308)));

	if (t72 != -16172) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x309 = INT32_MIN;
	volatile uint32_t x310 = 7581U;
	volatile int64_t x312 = -1LL;
	int32_t t73 = INT32_MIN;

	t73 = (x309+(x310<(x311&x312)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	int8_t x315 = -1;
	int32_t t74 = 10171082;

	t74 = (x313+(x314<(x315&x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MAX;
	int32_t x318 = 390026956;
	static int32_t x319 = INT32_MAX;
	uint64_t x320 = 4607810LLU;
	volatile int64_t t75 = INT64_MAX;

	t75 = (x317+(x318<(x319&x320)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MIN;
	static volatile int64_t x322 = -194438687827119LL;
	static int8_t x323 = INT8_MIN;
	uint32_t x324 = UINT32_MAX;
	int32_t t76 = -16357;

	t76 = (x321+(x322<(x323&x324)));

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x326 = 2207464LLU;
	int16_t x327 = -1;
	int16_t x328 = -1116;
	static volatile int32_t t77 = 18415375;

	t77 = (x325+(x326<(x327&x328)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x329 = 5922769516LLU;
	int64_t x330 = INT64_MIN;
	int64_t x332 = -1LL;

	t78 = (x329+(x330<(x331&x332)));

	if (t78 != 5922769517LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x333 = -1;
	static int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MAX;

	t79 = (x333+(x334<(x335&x336)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x338 = 908U;
	volatile int32_t t80 = -521016469;

	t80 = (x337+(x338<(x339&x340)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x342 = -1LL;
	static volatile int8_t x343 = -1;
	static volatile uint64_t t81 = 3421380418515LLU;

	t81 = (x341+(x342<(x343&x344)));

	if (t81 != 103473790227LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = -639244LL;
	volatile int64_t x347 = INT64_MAX;
	int64_t x348 = -1LL;
	static int64_t t82 = -1LL;

	t82 = (x345+(x346<(x347&x348)));

	if (t82 != -639243LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x349 = -1;
	int8_t x351 = INT8_MIN;
	int8_t x352 = 16;
	int32_t t83 = 3809800;

	t83 = (x349+(x350<(x351&x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x353 = 0;
	volatile uint32_t x354 = UINT32_MAX;
	volatile uint16_t x355 = UINT16_MAX;
	volatile int32_t t84 = 15525;

	t84 = (x353+(x354<(x355&x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = INT16_MAX;
	static int8_t x358 = -21;
	int32_t x359 = -1;
	static int64_t x360 = -1LL;
	volatile int32_t t85 = -55779289;

	t85 = (x357+(x358<(x359&x360)));

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = -1;
	int32_t x363 = INT32_MIN;
	uint64_t x364 = 8601192310022LLU;

	t86 = (x361+(x362<(x363&x364)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = 6058U;
	volatile uint32_t x366 = 430547754U;
	int8_t x368 = -1;
	int32_t t87 = 14688755;

	t87 = (x365+(x366<(x367&x368)));

	if (t87 != 6058) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = INT16_MIN;
	int8_t x371 = INT8_MIN;
	volatile uint32_t x372 = 351U;
	int32_t t88 = 117302630;

	t88 = (x369+(x370<(x371&x372)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x373 = 6206159LLU;
	uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MAX;
	int8_t x376 = 1;
	static volatile uint64_t t89 = 48979903309LLU;

	t89 = (x373+(x374<(x375&x376)));

	if (t89 != 6206159LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x377 = 155U;
	uint64_t x378 = UINT64_MAX;
	int64_t x379 = INT64_MIN;
	static int16_t x380 = -1591;
	static volatile uint32_t t90 = 2809U;

	t90 = (x377+(x378<(x379&x380)));

	if (t90 != 155U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x381 = 59;
	int8_t x383 = -42;
	volatile int32_t t91 = -1;

	t91 = (x381+(x382<(x383&x384)));

	if (t91 != 59) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MAX;
	static int32_t t92 = 12;

	t92 = (x385+(x386<(x387&x388)));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x390 = -2;
	int32_t x391 = 3061;
	static uint8_t x392 = UINT8_MAX;
	volatile int32_t t93 = -439213;

	t93 = (x389+(x390<(x391&x392)));

	if (t93 != 65536) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x394 = 543746297LL;
	volatile int32_t x395 = INT32_MIN;
	uint8_t x396 = UINT8_MAX;
	static int32_t t94 = -283;

	t94 = (x393+(x394<(x395&x396)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 1270275U;
	static uint16_t x398 = UINT16_MAX;
	int32_t x399 = 274;
	int64_t x400 = -1LL;

	t95 = (x397+(x398<(x399&x400)));

	if (t95 != 1270275U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x401 = 5U;
	uint16_t x402 = 3124U;
	static volatile int16_t x403 = INT16_MAX;
	int32_t x404 = -122;
	volatile int32_t t96 = -4802;

	t96 = (x401+(x402<(x403&x404)));

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x405 = 1U;
	volatile int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MIN;
	uint16_t x408 = 34U;
	int32_t t97 = -466;

	t97 = (x405+(x406<(x407&x408)));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x409 = 356927496;
	uint64_t x410 = 74049068509618126LLU;
	uint8_t x411 = UINT8_MAX;
	static int64_t x412 = INT64_MIN;
	volatile int32_t t98 = 41978;

	t98 = (x409+(x410<(x411&x412)));

	if (t98 != 356927496) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = UINT8_MAX;
	volatile uint32_t x414 = 1060383U;
	int32_t x415 = 926191;
	static int64_t x416 = 196967125270882266LL;
	volatile int32_t t99 = -2;

	t99 = (x413+(x414<(x415&x416)));

	if (t99 != 255) { NG(); } else { ; }
	
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

