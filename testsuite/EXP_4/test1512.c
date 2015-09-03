#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
volatile int32_t x7 = INT32_MAX;
static uint16_t x24 = UINT16_MAX;
static int16_t x32 = -1;
int8_t x35 = INT8_MAX;
static volatile int32_t t10 = 819443;
int32_t x46 = INT32_MAX;
volatile uint16_t x51 = 6532U;
int8_t x52 = 1;
int64_t t12 = 449118406014LL;
static volatile int32_t t13 = -6140232;
int64_t x59 = INT64_MIN;
int16_t x67 = 235;
volatile uint64_t x72 = 14797654537LLU;
static int16_t x74 = INT16_MIN;
int64_t x77 = 24994LL;
int64_t t19 = 9507LL;
volatile int32_t x81 = INT32_MIN;
static int8_t x82 = -5;
int16_t x83 = INT16_MAX;
int32_t t20 = -1343;
volatile int32_t t21 = 5679;
static int8_t x97 = INT8_MIN;
uint8_t x105 = UINT8_MAX;
int64_t x106 = -1005514835571021378LL;
uint16_t x108 = 3173U;
int64_t x110 = -1908444821544475LL;
int8_t x112 = 13;
volatile int64_t x113 = INT64_MAX;
volatile int64_t t27 = 185820719LL;
volatile int16_t x123 = -1;
volatile int32_t x125 = INT32_MIN;
volatile int64_t x126 = -17195LL;
int32_t t33 = 178;
volatile uint64_t x149 = 28LLU;
int64_t t39 = -125884LL;
int64_t x175 = 251825239051LL;
int8_t x179 = -1;
uint32_t t42 = 7U;
int64_t t43 = 2093577268130204LL;
int32_t x191 = -280134591;
volatile uint64_t t44 = 3LLU;
uint32_t x195 = 3430U;
int16_t x203 = -1;
uint32_t x205 = 6U;
uint16_t x210 = UINT16_MAX;
volatile int32_t x216 = -288508151;
volatile uint64_t t52 = 819104LLU;
uint64_t x225 = 68520923692801981LLU;
static uint64_t x233 = UINT64_MAX;
static uint64_t x238 = 82584627LLU;
volatile uint64_t t56 = 50024716511LLU;
static int8_t x241 = -31;
int32_t t58 = -27477;
int8_t x257 = INT8_MIN;
int32_t x275 = INT32_MIN;
volatile int16_t x277 = INT16_MAX;
int32_t x287 = -1;
volatile int32_t t67 = 558188;
uint32_t x291 = 11108879U;
int32_t x299 = INT32_MAX;
volatile int32_t x301 = INT32_MAX;
int16_t x303 = -1;
static int16_t x310 = -25;
volatile int32_t x315 = INT32_MIN;
uint16_t x316 = UINT16_MAX;
int64_t x318 = 33LL;
uint64_t x321 = UINT64_MAX;
uint8_t x327 = 15U;
int32_t x331 = 465;
static volatile int64_t x337 = INT64_MAX;
volatile int64_t t80 = INT64_MAX;
uint16_t x341 = 1625U;
int64_t x343 = -1LL;
int8_t x347 = INT8_MIN;
int16_t x376 = 9466;
int8_t x386 = INT8_MIN;
static int32_t x393 = INT32_MIN;
uint64_t t93 = 44LLU;
static uint32_t x401 = 511U;
int8_t x413 = -38;
static volatile uint16_t x417 = UINT16_MAX;
uint16_t x419 = 38U;
int16_t x420 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 11;

	t0 = (x1/(x2^(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 237U;
	uint16_t x6 = 6462U;
	static uint16_t x8 = 13522U;
	volatile uint32_t t1 = 206319190U;

	t1 = (x5/(x6^(x7<x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	volatile int8_t x10 = -10;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = 2370135LL;

	t2 = (x9/(x10^(x11<x12)));

	if (t2 != 1024819115206086200LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -582279255;
	int64_t x14 = 37479LL;
	volatile uint32_t x15 = UINT32_MAX;
	int32_t x16 = -1;
	int64_t t3 = 39068785143060013LL;

	t3 = (x13/(x14^(x15<x16)));

	if (t3 != -15536LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 2U;
	int64_t x18 = INT64_MIN;
	volatile int8_t x19 = 48;
	uint8_t x20 = UINT8_MAX;
	int64_t t4 = 1012743103400755LL;

	t4 = (x17/(x18^(x19<x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = -7764;
	int32_t x23 = 88212;
	static volatile int32_t t5 = 361374;

	t5 = (x21/(x22^(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	static int64_t x26 = -22333631157347675LL;
	int16_t x27 = INT16_MAX;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -140696398288659086LL;

	t6 = (x25/(x26^(x27<x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	uint16_t x30 = 263U;
	static uint8_t x31 = 1U;
	static volatile int32_t t7 = -13;

	t7 = (x29/(x30^(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	static int32_t x34 = INT32_MIN;
	int16_t x36 = -1;
	volatile int64_t t8 = -55519433LL;

	t8 = (x33/(x34^(x35<x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 0;
	int8_t x38 = -1;
	uint16_t x39 = 5U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -1706889;

	t9 = (x37/(x38^(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = 118U;
	int64_t x44 = 5420LL;

	t10 = (x41/(x42^(x43<x44)));

	if (t10 != 65538) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = 1;
	uint64_t x47 = 1109969868LLU;
	static volatile int8_t x48 = INT8_MIN;
	static int32_t t11 = -18;

	t11 = (x45/(x46^(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 10105195883610LL;
	volatile int64_t x50 = -126444680785806423LL;

	t12 = (x49/(x50^(x51<x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	volatile uint8_t x54 = UINT8_MAX;
	uint32_t x55 = 47745558U;
	static volatile int8_t x56 = INT8_MIN;

	t13 = (x53/(x54^(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -1;
	volatile int64_t x58 = INT64_MIN;
	int8_t x60 = INT8_MIN;
	volatile int64_t t14 = -1LL;

	t14 = (x57/(x58^(x59<x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	int8_t x62 = -1;
	uint32_t x63 = 21948U;
	static int16_t x64 = -1;
	int32_t t15 = -2;

	t15 = (x61/(x62^(x63<x64)));

	if (t15 != 64) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 3U;
	volatile int32_t x66 = 1027528;
	static int32_t x68 = INT32_MIN;
	int32_t t16 = -26478369;

	t16 = (x65/(x66^(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static volatile int64_t x70 = -1LL;
	uint64_t x71 = 231244221784057642LLU;
	int64_t t17 = -1296LL;

	t17 = (x69/(x70^(x71<x72)));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	static volatile int8_t x75 = 8;
	static uint32_t x76 = 1254618U;
	volatile int32_t t18 = 50080;

	t18 = (x73/(x74^(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	volatile int64_t x79 = 308583571957353LL;
	int8_t x80 = INT8_MAX;

	t19 = (x77/(x78^(x79<x80)));

	if (t19 != -24994LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x84 = INT32_MIN;

	t20 = (x81/(x82^(x83<x84)));

	if (t20 != 429496729) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 14911;
	static volatile int8_t x90 = -1;
	int8_t x91 = INT8_MIN;
	static uint32_t x92 = 21135U;

	t21 = (x89/(x90^(x91<x92)));

	if (t21 != -14911) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 65323558LLU;
	int8_t x94 = INT8_MIN;
	volatile int64_t x95 = -27418203LL;
	int64_t x96 = -1LL;
	volatile uint64_t t22 = 125643694372LLU;

	t22 = (x93/(x94^(x95<x96)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = INT16_MAX;
	volatile int8_t x99 = INT8_MIN;
	int64_t x100 = -75LL;
	static volatile int32_t t23 = 432;

	t23 = (x97/(x98^(x99<x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	volatile uint8_t x102 = 14U;
	static uint16_t x103 = UINT16_MAX;
	int64_t x104 = -15LL;
	int32_t t24 = 2;

	t24 = (x101/(x102^(x103<x104)));

	if (t24 != -9) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x107 = UINT16_MAX;
	int64_t t25 = 21550678LL;

	t25 = (x105/(x106^(x107<x108)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x109 = 0U;
	volatile int32_t x111 = -103197;
	int64_t t26 = -336890589184247190LL;

	t26 = (x109/(x110^(x111<x112)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = INT16_MAX;
	uint16_t x115 = UINT16_MAX;
	volatile uint32_t x116 = UINT32_MAX;

	t27 = (x113/(x114^(x115<x116)));

	if (t27 != 281492157628480LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -75;
	int8_t x118 = INT8_MAX;
	static int32_t x119 = -1;
	volatile uint64_t x120 = 3299034963416037LLU;
	int32_t t28 = -371431846;

	t28 = (x117/(x118^(x119<x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = INT16_MAX;
	volatile int32_t x122 = 87;
	int16_t x124 = INT16_MIN;
	static int32_t t29 = -9409478;

	t29 = (x121/(x122^(x123<x124)));

	if (t29 != 376) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x127 = 5;
	volatile uint64_t x128 = 63815164LLU;
	static int64_t t30 = 1740LL;

	t30 = (x125/(x126^(x127<x128)));

	if (t30 != 124882LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = -31;
	volatile int64_t x130 = -1LL;
	int32_t x131 = INT32_MAX;
	int16_t x132 = INT16_MIN;
	int64_t t31 = 68LL;

	t31 = (x129/(x130^(x131<x132)));

	if (t31 != 31LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	volatile int64_t x135 = 109668249416376520LL;
	volatile int8_t x136 = 7;
	volatile int32_t t32 = -680862;

	t32 = (x133/(x134^(x135<x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x137 = UINT8_MAX;
	uint16_t x138 = 6U;
	int32_t x139 = INT32_MIN;
	int8_t x140 = 5;

	t33 = (x137/(x138^(x139<x140)));

	if (t33 != 36) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	static int32_t x142 = 4163585;
	int16_t x143 = INT16_MIN;
	int16_t x144 = -5752;
	int32_t t34 = -110582045;

	t34 = (x141/(x142^(x143<x144)));

	if (t34 != -515) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	int64_t x148 = -1LL;
	uint32_t t35 = 240993807U;

	t35 = (x145/(x146^(x147<x148)));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x150 = -4;
	volatile int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	uint64_t t36 = 511119LLU;

	t36 = (x149/(x150^(x151<x152)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 34U;
	int8_t x154 = -1;
	int64_t x155 = 144710825700LL;
	int8_t x156 = INT8_MIN;
	uint32_t t37 = 80071302U;

	t37 = (x153/(x154^(x155<x156)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	volatile int64_t x158 = INT64_MIN;
	uint8_t x159 = 31U;
	int8_t x160 = -1;
	volatile int64_t t38 = 1972LL;

	t38 = (x157/(x158^(x159<x160)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x165 = -1;
	volatile int64_t x166 = -1LL;
	uint16_t x167 = 737U;
	uint16_t x168 = 14U;

	t39 = (x165/(x166^(x167<x168)));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MAX;
	static int32_t x176 = -8;
	static int64_t t40 = 111529201647567582LL;

	t40 = (x173/(x174^(x175<x176)));

	if (t40 != -4294967298LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = INT8_MIN;
	int16_t x180 = INT16_MAX;
	volatile int64_t t41 = -140676786714137833LL;

	t41 = (x177/(x178^(x179<x180)));

	if (t41 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = UINT16_MAX;
	uint32_t x182 = UINT32_MAX;
	static int32_t x183 = INT32_MIN;
	uint32_t x184 = 24828U;

	t42 = (x181/(x182^(x183<x184)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = 42;
	int64_t x186 = 50872LL;
	int8_t x187 = -11;
	static int32_t x188 = 152426;

	t43 = (x185/(x186^(x187<x188)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = -1;
	uint64_t x190 = 438297173010LLU;
	static int16_t x192 = INT16_MIN;

	t44 = (x189/(x190^(x191<x192)));

	if (t44 != 42087298LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = 28U;
	static int32_t x194 = INT32_MIN;
	static volatile int32_t x196 = INT32_MAX;
	static int32_t t45 = 323634;

	t45 = (x193/(x194^(x195<x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x197 = -1;
	static volatile int32_t x198 = INT32_MAX;
	int32_t x199 = 1;
	volatile int8_t x200 = INT8_MIN;
	int32_t t46 = 24206;

	t46 = (x197/(x198^(x199<x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x201 = 2219;
	static int16_t x202 = INT16_MAX;
	int32_t x204 = -1;
	int32_t t47 = -3;

	t47 = (x201/(x202^(x203<x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x206 = INT8_MIN;
	int32_t x207 = 494743117;
	int16_t x208 = INT16_MAX;
	volatile uint32_t t48 = 1147718387U;

	t48 = (x205/(x206^(x207<x208)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 24U;
	int32_t x211 = 12;
	uint64_t x212 = 1701700LLU;
	volatile int32_t t49 = 367022;

	t49 = (x209/(x210^(x211<x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = -10;
	int8_t x214 = 6;
	uint8_t x215 = 2U;
	int32_t t50 = -100144981;

	t50 = (x213/(x214^(x215<x216)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = UINT32_MAX;
	int8_t x218 = INT8_MAX;
	volatile int8_t x219 = -1;
	int32_t x220 = 12709883;
	static volatile uint32_t t51 = 4582U;

	t51 = (x217/(x218^(x219<x220)));

	if (t51 != 34087042U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x222 = INT16_MAX;
	static int32_t x223 = 10;
	volatile int8_t x224 = 27;

	t52 = (x221/(x222^(x223<x224)));

	if (t52 != 562984315256960LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x226 = 378063033690455476LLU;
	static int32_t x227 = INT32_MIN;
	volatile int64_t x228 = -1LL;
	static uint64_t t53 = 1146276726358795LLU;

	t53 = (x225/(x226^(x227<x228)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	int16_t x231 = INT16_MIN;
	static uint8_t x232 = 0U;
	static volatile int64_t t54 = 2193517228243758LL;

	t54 = (x229/(x230^(x231<x232)));

	if (t54 != 16384LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x234 = INT8_MIN;
	static uint64_t x235 = UINT64_MAX;
	int64_t x236 = -1LL;
	volatile uint64_t t55 = 948411842LLU;

	t55 = (x233/(x234^(x235<x236)));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	volatile uint16_t x239 = UINT16_MAX;
	static int8_t x240 = INT8_MAX;

	t56 = (x237/(x238^(x239<x240)));

	if (t56 != 223367771238LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x242 = 13153703LL;
	static int16_t x243 = 3499;
	static int16_t x244 = INT16_MIN;
	int64_t t57 = 6541484799LL;

	t57 = (x241/(x242^(x243<x244)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x245 = INT16_MAX;
	int32_t x246 = -169898;
	static int64_t x247 = INT64_MIN;
	uint64_t x248 = UINT64_MAX;

	t58 = (x245/(x246^(x247<x248)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = 10183086LLU;
	int32_t x250 = 277;
	int32_t x251 = 1865;
	int8_t x252 = -1;
	volatile uint64_t t59 = 2010LLU;

	t59 = (x249/(x250^(x251<x252)));

	if (t59 != 36762LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = -1;
	int8_t x255 = INT8_MIN;
	uint32_t x256 = UINT32_MAX;
	static volatile int32_t t60 = 14482998;

	t60 = (x253/(x254^(x255<x256)));

	if (t60 != 16384) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x258 = INT16_MIN;
	static uint64_t x259 = UINT64_MAX;
	volatile int16_t x260 = INT16_MAX;
	int32_t t61 = -51;

	t61 = (x257/(x258^(x259<x260)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x265 = 12414U;
	static uint64_t x266 = 9230LLU;
	int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MAX;
	uint64_t t62 = 1496558967667176LLU;

	t62 = (x265/(x266^(x267<x268)));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x269 = INT16_MIN;
	int16_t x270 = -1;
	uint64_t x271 = 1194495LLU;
	int16_t x272 = 127;
	volatile int32_t t63 = 1044469382;

	t63 = (x269/(x270^(x271<x272)));

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = 19;
	static int64_t x274 = INT64_MAX;
	int16_t x276 = INT16_MAX;
	int64_t t64 = -607050954LL;

	t64 = (x273/(x274^(x275<x276)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x278 = INT64_MAX;
	uint8_t x279 = 16U;
	volatile int8_t x280 = -1;
	volatile int64_t t65 = 479166134884424603LL;

	t65 = (x277/(x278^(x279<x280)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MAX;
	static int16_t x282 = INT16_MIN;
	uint64_t x283 = 5504254256046347453LLU;
	int16_t x284 = INT16_MAX;
	volatile int32_t t66 = -3591;

	t66 = (x281/(x282^(x283<x284)));

	if (t66 != -65535) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = INT32_MAX;
	int16_t x288 = 10382;

	t67 = (x285/(x286^(x287<x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1LL;
	int8_t x290 = 0;
	int32_t x292 = INT32_MIN;
	int64_t t68 = -1263183028059LL;

	t68 = (x289/(x290^(x291<x292)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	int64_t x295 = -56LL;
	int32_t x296 = -1;
	int64_t t69 = 76807LL;

	t69 = (x293/(x294^(x295<x296)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x297 = 16135;
	int64_t x298 = -2926364LL;
	int8_t x300 = INT8_MIN;
	volatile int64_t t70 = -2080580823742967LL;

	t70 = (x297/(x298^(x299<x300)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x302 = INT64_MAX;
	static uint16_t x304 = UINT16_MAX;
	int64_t t71 = 18LL;

	t71 = (x301/(x302^(x303<x304)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = -8364;
	int64_t x306 = 59180LL;
	int16_t x307 = INT16_MAX;
	static int64_t x308 = INT64_MAX;
	volatile int64_t t72 = 5250590729962057LL;

	t72 = (x305/(x306^(x307<x308)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x309 = INT8_MIN;
	int64_t x311 = INT64_MAX;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t73 = 1;

	t73 = (x309/(x310^(x311<x312)));

	if (t73 != 5) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	volatile int32_t t74 = -1999665;

	t74 = (x313/(x314^(x315<x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x317 = INT16_MIN;
	uint32_t x319 = 687575584U;
	volatile int16_t x320 = INT16_MIN;
	int64_t t75 = -10LL;

	t75 = (x317/(x318^(x319<x320)));

	if (t75 != -1024LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = INT32_MIN;
	volatile int32_t x323 = -1;
	uint64_t x324 = 25185983221818LLU;
	volatile uint64_t t76 = 2310506LLU;

	t76 = (x321/(x322^(x323<x324)));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = 7U;
	int8_t x326 = 3;
	int32_t x328 = -1;
	static volatile int32_t t77 = -16734469;

	t77 = (x325/(x326^(x327<x328)));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = -1;
	int32_t x330 = 13292;
	uint8_t x332 = 36U;
	int32_t t78 = 1;

	t78 = (x329/(x330^(x331<x332)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = INT8_MIN;
	volatile int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MAX;
	int32_t t79 = 14;

	t79 = (x333/(x334^(x335<x336)));

	if (t79 != 258) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x338 = 1U;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;

	t80 = (x337/(x338^(x339<x340)));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x342 = 5975U;
	int8_t x344 = -1;
	uint32_t t81 = 762845U;

	t81 = (x341/(x342^(x343<x344)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MIN;
	uint8_t x346 = UINT8_MAX;
	int64_t x348 = -1LL;
	int32_t t82 = -30486;

	t82 = (x345/(x346^(x347<x348)));

	if (t82 != -8454660) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MAX;
	uint16_t x350 = 201U;
	int8_t x351 = -1;
	int16_t x352 = -1099;
	volatile int32_t t83 = 598390;

	t83 = (x349/(x350^(x351<x352)));

	if (t83 != 10683998) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = 0;
	int64_t x354 = -106008LL;
	int64_t x355 = -67765420LL;
	int8_t x356 = -1;
	volatile int64_t t84 = -555168367265051LL;

	t84 = (x353/(x354^(x355<x356)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = INT16_MAX;
	int64_t x358 = INT64_MIN;
	uint64_t x359 = 834136LLU;
	int64_t x360 = -1LL;
	int64_t t85 = -2LL;

	t85 = (x357/(x358^(x359<x360)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = -1;
	int64_t x362 = 828117752LL;
	int32_t x363 = INT32_MIN;
	static volatile uint64_t x364 = 6649501LLU;
	int64_t t86 = -4182LL;

	t86 = (x361/(x362^(x363<x364)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = 25U;
	int64_t x370 = -1LL;
	volatile int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	static volatile int64_t t87 = 653423565006934LL;

	t87 = (x369/(x370^(x371<x372)));

	if (t87 != -25LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x373 = 5843U;
	static uint8_t x374 = 15U;
	int32_t x375 = INT32_MAX;
	static volatile int32_t t88 = -275;

	t88 = (x373/(x374^(x375<x376)));

	if (t88 != 389) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = 81U;
	static int8_t x378 = INT8_MIN;
	uint8_t x379 = UINT8_MAX;
	uint64_t x380 = 204851123626757LLU;
	volatile int32_t t89 = 4195477;

	t89 = (x377/(x378^(x379<x380)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x381 = INT16_MAX;
	int32_t x382 = INT32_MAX;
	uint8_t x383 = 4U;
	volatile int64_t x384 = -1LL;
	int32_t t90 = -341704854;

	t90 = (x381/(x382^(x383<x384)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x385 = INT64_MIN;
	static int64_t x387 = -4587653837343878441LL;
	int64_t x388 = INT64_MIN;
	int64_t t91 = -8807LL;

	t91 = (x385/(x386^(x387<x388)));

	if (t91 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x389 = 109U;
	uint16_t x390 = 23805U;
	uint8_t x391 = 0U;
	static int16_t x392 = INT16_MAX;
	int32_t t92 = -1519;

	t92 = (x389/(x390^(x391<x392)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x394 = 1978202244168249LLU;
	int8_t x395 = INT8_MIN;
	static int64_t x396 = INT64_MAX;

	t93 = (x393/(x394^(x395<x396)));

	if (t93 != 9325LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -1;
	int32_t x398 = -1;
	volatile uint8_t x399 = 0U;
	int8_t x400 = 18;
	int32_t t94 = -9672;

	t94 = (x397/(x398^(x399<x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x402 = -1;
	uint16_t x403 = 1U;
	volatile int64_t x404 = -1LL;
	volatile uint32_t t95 = 4496655U;

	t95 = (x401/(x402^(x403<x404)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x405 = INT16_MIN;
	int8_t x406 = -1;
	static int16_t x407 = INT16_MAX;
	static int64_t x408 = INT64_MIN;
	int32_t t96 = 15;

	t96 = (x405/(x406^(x407<x408)));

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = INT32_MIN;
	volatile int64_t x410 = -1LL;
	int32_t x411 = INT32_MIN;
	static volatile int64_t x412 = -69862131563LL;
	volatile int64_t t97 = -26340569511LL;

	t97 = (x409/(x410^(x411<x412)));

	if (t97 != 2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x414 = INT8_MIN;
	int8_t x415 = -6;
	uint16_t x416 = 21U;
	int32_t t98 = 11672824;

	t98 = (x413/(x414^(x415<x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x418 = INT8_MIN;
	volatile int32_t t99 = 2;

	t99 = (x417/(x418^(x419<x420)));

	if (t99 != -511) { NG(); } else { ; }
	
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

