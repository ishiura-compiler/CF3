#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x18 = INT8_MIN;
int64_t x20 = INT64_MIN;
int32_t x23 = 106901;
uint32_t x24 = UINT32_MAX;
volatile uint8_t x26 = 1U;
int64_t x27 = INT64_MIN;
int8_t x31 = INT8_MIN;
volatile int32_t t7 = 210811;
uint16_t x37 = UINT16_MAX;
static int8_t x39 = -1;
static int64_t t10 = 433370110611985262LL;
static volatile int32_t x52 = INT32_MAX;
volatile int8_t x58 = INT8_MIN;
volatile int16_t x62 = INT16_MIN;
uint8_t x72 = UINT8_MAX;
int32_t x74 = INT32_MIN;
static int32_t t20 = -406000;
static uint8_t x92 = 2U;
uint32_t x96 = UINT32_MAX;
int64_t x106 = -1LL;
volatile uint64_t t26 = 169LLU;
uint8_t x111 = 29U;
static int8_t x113 = -9;
uint64_t x114 = 43501437740LLU;
static uint8_t x115 = UINT8_MAX;
uint64_t x123 = 474699839707141121LLU;
int64_t x130 = -1LL;
volatile uint8_t x132 = 12U;
uint16_t x133 = 10569U;
volatile int32_t x135 = -1;
static int16_t x136 = 7356;
uint16_t x140 = 1828U;
int8_t x147 = -6;
int8_t x155 = INT8_MAX;
int16_t x158 = INT16_MAX;
int32_t x180 = INT32_MIN;
int32_t x181 = -167730;
volatile int64_t x184 = -1LL;
uint64_t t45 = 3123227LLU;
static volatile int64_t t46 = -1600382780649358749LL;
int16_t x195 = INT16_MIN;
static int8_t x196 = INT8_MAX;
uint64_t t49 = 748002LLU;
volatile uint32_t t51 = 143266U;
int8_t x214 = 0;
int64_t x216 = -1LL;
static int16_t x219 = INT16_MIN;
int8_t x221 = INT8_MAX;
uint8_t x225 = UINT8_MAX;
volatile int64_t t56 = -67932500372612LL;
static int64_t x234 = INT64_MIN;
int64_t t59 = 192291662862393369LL;
uint64_t t61 = 1LLU;
int32_t x249 = -172146314;
volatile int32_t x263 = 391;
volatile uint16_t x267 = 2237U;
int16_t x276 = INT16_MIN;
int64_t x277 = INT64_MAX;
int8_t x278 = INT8_MIN;
volatile int8_t x279 = -1;
int64_t x280 = -1LL;
int64_t t69 = 24815438552LL;
static uint64_t x281 = 69LLU;
uint32_t x282 = UINT32_MAX;
uint16_t x286 = 692U;
uint32_t x290 = UINT32_MAX;
uint64_t x291 = UINT64_MAX;
static uint64_t t72 = 727585131LLU;
static volatile int16_t x296 = INT16_MAX;
volatile uint64_t t73 = 16112126614609LLU;
int8_t x297 = -1;
uint32_t x299 = UINT32_MAX;
volatile int8_t x300 = INT8_MIN;
int64_t x301 = -2519324920344366527LL;
static uint64_t x302 = UINT64_MAX;
int32_t x305 = -183630631;
uint32_t x308 = 150U;
volatile uint32_t t76 = 1814343U;
static volatile int64_t x310 = INT64_MIN;
int32_t x312 = -1;
int64_t x316 = INT64_MIN;
int32_t x320 = INT32_MIN;
static uint64_t t79 = 114419LLU;
int64_t t80 = -23931LL;
int16_t x328 = 3804;
volatile int64_t x330 = 89LL;
volatile int64_t t82 = -4LL;
int16_t x334 = -2;
volatile int16_t x338 = 0;
uint16_t x343 = 3029U;
int64_t t85 = 8254890LL;
static uint64_t t87 = 20454071302553944LLU;
int64_t t88 = -2LL;
uint64_t x364 = 28552LLU;
static int8_t x366 = -1;
uint8_t x367 = UINT8_MAX;
uint16_t x378 = UINT16_MAX;
int32_t x380 = INT32_MIN;
static volatile int64_t x382 = -282251975367LL;
int64_t t95 = -28828293LL;
static int8_t x388 = INT8_MIN;
static uint32_t x389 = UINT32_MAX;
volatile uint32_t x391 = 77580182U;
int16_t x395 = INT16_MIN;
volatile uint32_t x396 = 511034572U;


void f0(void) {
	int32_t x1 = 3675416;
	int64_t x2 = INT64_MIN;
	static int8_t x3 = INT8_MIN;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = 2297LL;

	t0 = ((x1|x2)%(x3|x4));

	if (t0 != -104LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int64_t x6 = INT64_MIN;
	static int32_t x7 = INT32_MAX;
	uint32_t x8 = 29395832U;
	int64_t t1 = -74201631592LL;

	t1 = ((x5|x6)%(x7|x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 57343U;
	static volatile int16_t x10 = INT16_MAX;
	static volatile uint8_t x11 = UINT8_MAX;
	int32_t x12 = 1353451;
	static uint32_t t2 = 21672U;

	t2 = ((x9|x10)%(x11|x12));

	if (t2 != 65535U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -24855418;
	uint32_t x14 = 15124042U;
	int8_t x15 = 29;
	int8_t x16 = INT8_MAX;
	uint32_t t3 = 0U;

	t3 = ((x13|x14)%(x15|x16));

	if (t3 != 110U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int32_t x19 = -1;
	int64_t t4 = 2862192LL;

	t4 = ((x17|x18)%(x19|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 0U;
	int8_t x22 = 1;
	volatile uint32_t t5 = 83U;

	t5 = ((x21|x22)%(x23|x24));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 0LL;
	static int8_t x28 = INT8_MIN;
	volatile int64_t t6 = 53679LL;

	t6 = ((x25|x26)%(x27|x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -106;
	static int32_t x30 = -1;
	int32_t x32 = -179290;

	t7 = ((x29|x30)%(x31|x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int16_t x34 = INT16_MIN;
	volatile uint8_t x35 = UINT8_MAX;
	uint16_t x36 = 21931U;
	volatile int32_t t8 = -517941;

	t8 = ((x33|x34)%(x35|x36));

	if (t8 != -10753) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -7;
	uint16_t x40 = 4U;
	static volatile int32_t t9 = -432;

	t9 = ((x37|x38)%(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	static int64_t x42 = 884581339112020LL;
	int8_t x43 = -1;
	static int32_t x44 = INT32_MIN;

	t10 = ((x41|x42)%(x43|x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 11;
	int64_t x46 = INT64_MIN;
	uint8_t x47 = 1U;
	uint16_t x48 = 0U;
	int64_t t11 = 113LL;

	t11 = ((x45|x46)%(x47|x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	int32_t x50 = INT32_MAX;
	int64_t x51 = INT64_MAX;
	int64_t t12 = -5780445LL;

	t12 = ((x49|x50)%(x51|x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint8_t x54 = 9U;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 608847882030789003LL;

	t13 = ((x53|x54)%(x55|x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 31U;
	int8_t x59 = INT8_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -9;

	t14 = ((x57|x58)%(x59|x60));

	if (t14 != -97) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = 699LL;
	volatile uint64_t x63 = UINT64_MAX;
	volatile uint64_t x64 = UINT64_MAX;
	volatile uint64_t t15 = 2273LLU;

	t15 = ((x61|x62)%(x63|x64));

	if (t15 != 18446744073709519547LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	static volatile uint32_t x66 = 1897183052U;
	int8_t x67 = -1;
	volatile int8_t x68 = 1;
	uint32_t t16 = 274U;

	t16 = ((x65|x66)%(x67|x68));

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	int16_t x70 = 2;
	uint16_t x71 = 352U;
	int32_t t17 = 77390645;

	t17 = ((x69|x70)%(x71|x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 1U;
	static int32_t x75 = INT32_MIN;
	uint32_t x76 = 6328901U;
	uint32_t t18 = 48122223U;

	t18 = ((x73|x74)%(x75|x76));

	if (t18 != 2147483649U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint8_t x78 = UINT8_MAX;
	uint8_t x79 = 1U;
	uint8_t x80 = UINT8_MAX;
	static int64_t t19 = -15LL;

	t19 = ((x77|x78)%(x79|x80));

	if (t19 != -128LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -14861;
	static int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	int8_t x84 = -1;

	t20 = ((x81|x82)%(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 3661U;
	volatile int8_t x86 = -1;
	int16_t x87 = 186;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = -3387997;

	t21 = ((x85|x86)%(x87|x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	uint64_t x91 = 6592123288446LLU;
	volatile uint64_t t22 = 143560579534804LLU;

	t22 = ((x89|x90)%(x91|x92));

	if (t22 != 5475651077048LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -3;
	int64_t x94 = INT64_MIN;
	static int32_t x95 = INT32_MAX;
	static volatile int64_t t23 = -11225583594LL;

	t23 = ((x93|x94)%(x95|x96));

	if (t23 != -3LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -159940054;
	volatile int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	int32_t x100 = INT32_MIN;
	static volatile int64_t t24 = 102927419675256165LL;

	t24 = ((x97|x98)%(x99|x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = 121U;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = -1;
	int64_t x104 = -20709262126919LL;
	volatile int64_t t25 = -13523LL;

	t25 = ((x101|x102)%(x103|x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 21;
	int32_t x107 = -69079203;
	static volatile uint64_t x108 = 165650LLU;

	t26 = ((x105|x106)%(x107|x108));

	if (t26 != 68948128LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x110 = INT64_MIN;
	static uint32_t x112 = 501U;
	int64_t t27 = 2428727812237123LL;

	t27 = ((x109|x110)%(x111|x112));

	if (t27 != -277LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x116 = 25307261494080LLU;
	volatile uint64_t t28 = 1190LLU;

	t28 = ((x113|x114)%(x115|x116));

	if (t28 != 2790658982734LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	uint64_t x118 = 1432935285LLU;
	int64_t x119 = INT64_MAX;
	int8_t x120 = INT8_MAX;
	uint64_t t29 = 99312164328LLU;

	t29 = ((x117|x118)%(x119|x120));

	if (t29 != 9223372036140227446LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MAX;
	uint64_t x122 = UINT64_MAX;
	int8_t x124 = -1;
	static volatile uint64_t t30 = 5457LLU;

	t30 = ((x121|x122)%(x123|x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int64_t x126 = INT64_MIN;
	uint32_t x127 = UINT32_MAX;
	int16_t x128 = -1;
	uint64_t t31 = 9236421LLU;

	t31 = ((x125|x126)%(x127|x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	volatile uint16_t x131 = 147U;
	volatile int64_t t32 = -678889059857LL;

	t32 = ((x129|x130)%(x131|x132));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x134 = -1;
	int32_t t33 = 15183905;

	t33 = ((x133|x134)%(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 400LLU;
	static int32_t x138 = 1;
	int16_t x139 = INT16_MIN;
	static volatile uint64_t t34 = 3883134949395LLU;

	t34 = ((x137|x138)%(x139|x140));

	if (t34 != 401LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 987279638111403273LLU;
	volatile int16_t x142 = INT16_MIN;
	volatile int8_t x143 = INT8_MIN;
	int32_t x144 = -105570545;
	uint64_t t35 = 69464LLU;

	t35 = ((x141|x142)%(x143|x144));

	if (t35 != 18446744073709534473LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -12143;
	int16_t x146 = -3196;
	int64_t x148 = 165424177962LL;
	int64_t t36 = -186618LL;

	t36 = ((x145|x146)%(x147|x148));

	if (t36 != -5LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	static int16_t x150 = INT16_MIN;
	static volatile int8_t x151 = INT8_MIN;
	uint16_t x152 = 2U;
	volatile int32_t t37 = -57482;

	t37 = ((x149|x150)%(x151|x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = -1;
	static int64_t x156 = INT64_MIN;
	volatile int64_t t38 = -192LL;

	t38 = ((x153|x154)%(x155|x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x159 = 3U;
	int16_t x160 = 3;
	int32_t t39 = -1;

	t39 = ((x157|x158)%(x159|x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -21735;
	int16_t x162 = INT16_MIN;
	volatile uint32_t x163 = 234U;
	int16_t x164 = INT16_MIN;
	uint32_t t40 = 523752U;

	t40 = ((x161|x162)%(x163|x164));

	if (t40 != 10799U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -21733754629LL;
	uint64_t x166 = 295255902LLU;
	uint8_t x167 = UINT8_MAX;
	int8_t x168 = INT8_MIN;
	uint64_t t41 = 24LLU;

	t41 = ((x165|x166)%(x167|x168));

	if (t41 != 18446744051993100287LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x170 = INT64_MIN;
	int16_t x171 = -18;
	int32_t x172 = -37153474;
	volatile int64_t t42 = -21LL;

	t42 = ((x169|x170)%(x171|x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -130699796269LL;
	static int64_t x174 = -1LL;
	int16_t x175 = INT16_MAX;
	int8_t x176 = INT8_MAX;
	volatile int64_t t43 = 1LL;

	t43 = ((x173|x174)%(x175|x176));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 5302U;
	int32_t x178 = 165406124;
	uint64_t x179 = UINT64_MAX;
	uint64_t t44 = 182118960568255LLU;

	t44 = ((x177|x178)%(x179|x180));

	if (t44 != 165410238LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x182 = 20LLU;
	uint16_t x183 = 13U;

	t45 = ((x181|x182)%(x183|x184));

	if (t45 != 18446744073709383902LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 0U;
	int64_t x186 = INT64_MAX;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = 3LL;

	t46 = ((x185|x186)%(x187|x188));

	if (t46 != 127LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	volatile uint8_t x190 = UINT8_MAX;
	int16_t x191 = -1;
	volatile int16_t x192 = -2;
	int32_t t47 = -1947;

	t47 = ((x189|x190)%(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 17134091887137LLU;
	static uint64_t x194 = 8429376241LLU;
	static uint64_t t48 = 121290791376322LLU;

	t48 = ((x193|x194)%(x195|x196));

	if (t48 != 17136776901361LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 939LLU;
	volatile uint16_t x198 = 26U;
	int64_t x199 = 3060157301700LL;
	int64_t x200 = INT64_MIN;

	t49 = ((x197|x198)%(x199|x200));

	if (t49 != 955LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	volatile int16_t x202 = INT16_MAX;
	volatile int8_t x203 = INT8_MAX;
	int8_t x204 = INT8_MAX;
	int64_t t50 = 7LL;

	t50 = ((x201|x202)%(x203|x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 3;
	int32_t x206 = INT32_MAX;
	static uint32_t x207 = UINT32_MAX;
	uint32_t x208 = 13179U;

	t51 = ((x205|x206)%(x207|x208));

	if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	static int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MAX;
	int64_t x212 = INT64_MAX;
	static int64_t t52 = 239402110108512864LL;

	t52 = ((x209|x210)%(x211|x212));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	int8_t x215 = INT8_MIN;
	volatile int64_t t53 = 62076186960882186LL;

	t53 = ((x213|x214)%(x215|x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 126996LLU;
	uint64_t x218 = 2486651830235043793LLU;
	int16_t x220 = INT16_MIN;
	volatile uint64_t t54 = 1568744066LLU;

	t54 = ((x217|x218)%(x219|x220));

	if (t54 != 2486651830235166677LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x222 = -1;
	int8_t x223 = 1;
	int8_t x224 = -1;
	volatile int32_t t55 = 103;

	t55 = ((x221|x222)%(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = UINT32_MAX;
	int64_t x227 = INT64_MIN;
	uint32_t x228 = 4015598U;

	t56 = ((x225|x226)%(x227|x228));

	if (t56 != 4294967295LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 0;
	int8_t x230 = -15;
	int8_t x231 = INT8_MAX;
	static uint32_t x232 = 7U;
	static volatile uint32_t t57 = 2009747887U;

	t57 = ((x229|x230)%(x231|x232));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MIN;
	volatile int64_t t58 = -1920018897061536LL;

	t58 = ((x233|x234)%(x235|x236));

	if (t58 != -32767LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MIN;
	uint16_t x240 = 0U;

	t59 = ((x237|x238)%(x239|x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int32_t x242 = -1;
	int16_t x243 = INT16_MIN;
	static int32_t x244 = INT32_MAX;
	volatile uint64_t t60 = 2079190780289588LLU;

	t60 = ((x241|x242)%(x243|x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = -1;
	static volatile uint8_t x248 = 0U;

	t61 = ((x245|x246)%(x247|x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = -1;
	uint8_t x251 = 5U;
	volatile uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = 4640;

	t62 = ((x249|x250)%(x251|x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MAX;
	static int32_t x256 = -1;
	int32_t t63 = 29899;

	t63 = ((x253|x254)%(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = -8289;
	int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	uint16_t x260 = 68U;
	volatile int32_t t64 = -5737380;

	t64 = ((x257|x258)%(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int64_t x262 = -1LL;
	volatile int8_t x264 = -1;
	static volatile uint64_t t65 = 36085526937256155LLU;

	t65 = ((x261|x262)%(x263|x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 13U;
	int32_t x266 = 30734424;
	uint8_t x268 = 7U;
	volatile int32_t t66 = -15473032;

	t66 = ((x265|x266)%(x267|x268));

	if (t66 != 1915) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 3104LL;
	static uint32_t x270 = UINT32_MAX;
	volatile int32_t x271 = INT32_MAX;
	int32_t x272 = -517979;
	volatile int64_t t67 = -1408572934542003LL;

	t67 = ((x269|x270)%(x271|x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 57329U;
	int64_t x274 = INT64_MIN;
	int16_t x275 = -1;
	volatile int64_t t68 = -881327357561394602LL;

	t68 = ((x273|x274)%(x275|x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {


	t69 = ((x277|x278)%(x279|x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x283 = -1LL;
	uint32_t x284 = UINT32_MAX;
	volatile uint64_t t70 = 22745799171126LLU;

	t70 = ((x281|x282)%(x283|x284));

	if (t70 != 4294967295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	volatile uint16_t x287 = UINT16_MAX;
	int32_t x288 = INT32_MAX;
	static volatile int32_t t71 = -650102;

	t71 = ((x285|x286)%(x287|x288));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	uint16_t x292 = 2U;

	t72 = ((x289|x290)%(x291|x292));

	if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = 727756674;
	static int64_t x294 = INT64_MIN;
	static uint64_t x295 = UINT64_MAX;

	t73 = ((x293|x294)%(x295|x296));

	if (t73 != 9223372037582532482LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x298 = UINT64_MAX;
	volatile uint64_t t74 = 8544353401LLU;

	t74 = ((x297|x298)%(x299|x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x303 = 10682;
	int8_t x304 = INT8_MIN;
	uint64_t t75 = 231804570338246LLU;

	t75 = ((x301|x302)%(x303|x304));

	if (t75 != 69LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MIN;

	t76 = ((x305|x306)%(x307|x308));

	if (t76 != 4294935769U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	volatile int16_t x311 = -1;
	static volatile int64_t t77 = -16441050LL;

	t77 = ((x309|x310)%(x311|x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	int64_t x314 = -1LL;
	int32_t x315 = -1;
	volatile int64_t t78 = -25926373LL;

	t78 = ((x313|x314)%(x315|x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	volatile uint64_t x318 = 1906262526LLU;
	volatile int32_t x319 = INT32_MIN;

	t79 = ((x317|x318)%(x319|x320));

	if (t79 != 1906262526LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -1LL;
	volatile int32_t x322 = 918872921;
	uint32_t x323 = 9U;
	static int16_t x324 = INT16_MAX;

	t80 = ((x321|x322)%(x323|x324));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MIN;
	static int16_t x327 = -14;
	static int32_t t81 = 427241;

	t81 = ((x325|x326)%(x327|x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 9U;
	int32_t x331 = 2126794;
	int32_t x332 = 0;

	t82 = ((x329|x330)%(x331|x332));

	if (t82 != 89LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	uint8_t x335 = 76U;
	uint64_t x336 = UINT64_MAX;
	static volatile uint64_t t83 = 4743611670857LLU;

	t83 = ((x333|x334)%(x335|x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int64_t t84 = -112221939773307974LL;

	t84 = ((x337|x338)%(x339|x340));

	if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	volatile int32_t x342 = -459787285;
	int64_t x344 = INT64_MIN;

	t85 = ((x341|x342)%(x343|x344));

	if (t85 != -19477LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	uint16_t x346 = 3U;
	int8_t x347 = -1;
	int8_t x348 = -3;
	static int64_t t86 = 840LL;

	t86 = ((x345|x346)%(x347|x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 664479LLU;
	int16_t x350 = INT16_MAX;
	static int16_t x351 = INT16_MIN;
	volatile uint8_t x352 = 0U;

	t87 = ((x349|x350)%(x351|x352));

	if (t87 != 688127LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 10133;
	int64_t x354 = -3548340626LL;
	int64_t x355 = -11022LL;
	volatile int32_t x356 = INT32_MIN;

	t88 = ((x353|x354)%(x355|x356));

	if (t88 != -8551LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = INT64_MAX;
	static volatile uint8_t x359 = 120U;
	uint32_t x360 = UINT32_MAX;
	int64_t t89 = 834462203LL;

	t89 = ((x357|x358)%(x359|x360));

	if (t89 != 2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	int16_t x363 = -1;
	static uint64_t t90 = 29055942919LLU;

	t90 = ((x361|x362)%(x363|x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 84786;
	uint8_t x368 = UINT8_MAX;
	static volatile int32_t t91 = 2081911;

	t91 = ((x365|x366)%(x367|x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x369 = UINT16_MAX;
	uint32_t x370 = 37U;
	int8_t x371 = INT8_MIN;
	volatile uint8_t x372 = 4U;
	uint32_t t92 = 2626U;

	t92 = ((x369|x370)%(x371|x372));

	if (t92 != 65535U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 10677U;
	static int64_t x374 = INT64_MAX;
	int16_t x375 = 1751;
	int8_t x376 = -27;
	int64_t t93 = -782309LL;

	t93 = ((x373|x374)%(x375|x376));

	if (t93 != 7LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 24655U;
	volatile uint64_t x379 = UINT64_MAX;
	volatile uint64_t t94 = 1414LLU;

	t94 = ((x377|x378)%(x379|x380));

	if (t94 != 65535LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	int32_t x383 = INT32_MIN;
	int64_t x384 = -184082318267030LL;

	t95 = ((x381|x382)%(x383|x384));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	uint16_t x386 = 1U;
	int16_t x387 = -1;
	volatile int32_t t96 = -3;

	t96 = ((x385|x386)%(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = -98269164;
	uint8_t x392 = UINT8_MAX;
	static volatile uint32_t t97 = 460U;

	t97 = ((x389|x390)%(x391|x392));

	if (t97 != 28051510U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	uint64_t x394 = 54LLU;
	volatile uint64_t t98 = 634617831LLU;

	t98 = ((x393|x394)%(x395|x396));

	if (t98 != 229704335LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = 1325580468U;
	volatile int8_t x398 = -1;
	int64_t x399 = 3212027274664612LL;
	volatile int8_t x400 = -28;
	int64_t t99 = -15LL;

	t99 = ((x397|x398)%(x399|x400));

	if (t99 != 3LL) { NG(); } else { ; }
	
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

