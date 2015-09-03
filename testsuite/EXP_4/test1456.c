#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int8_t x4 = INT8_MAX;
int8_t x7 = INT8_MIN;
volatile int32_t x9 = 29402185;
volatile int32_t t2 = -15883253;
int8_t x21 = -28;
volatile int64_t x26 = INT64_MIN;
volatile uint64_t x28 = 29727364000743271LLU;
int64_t x33 = INT64_MIN;
volatile int64_t t8 = INT64_MIN;
int64_t x41 = INT64_MIN;
int16_t x47 = 15;
int32_t x57 = -481104859;
volatile int64_t x60 = -2583LL;
static volatile int32_t t14 = 126;
uint8_t x63 = 25U;
int8_t x67 = INT8_MAX;
int16_t x68 = -1;
volatile uint32_t t17 = 0U;
uint64_t x83 = 741650875LLU;
static int16_t x84 = INT16_MIN;
int32_t x88 = INT32_MIN;
int8_t x93 = 38;
volatile int64_t x105 = -92071476177543714LL;
int64_t t26 = 4201812572594LL;
uint32_t x111 = 722U;
int16_t x112 = INT16_MIN;
uint32_t t28 = UINT32_MAX;
int64_t x118 = -1LL;
int8_t x121 = INT8_MAX;
int16_t x126 = -6122;
int8_t x132 = -3;
static int32_t t33 = 1;
uint64_t t35 = 386414265997366LLU;
int8_t x146 = INT8_MIN;
int16_t x156 = 0;
uint64_t x158 = 7290978LLU;
int16_t x160 = -1;
int64_t t40 = 7269575762478LL;
uint32_t x170 = 936U;
uint8_t x171 = 20U;
int8_t x175 = -31;
int32_t t44 = -1;
volatile int32_t t45 = -514;
static int16_t x186 = 61;
int16_t x191 = INT16_MIN;
int64_t x195 = 31089804891697LL;
int8_t x198 = 1;
int64_t x206 = 29LL;
uint32_t x208 = 250600799U;
static int16_t x210 = INT16_MAX;
int32_t t52 = -355316711;
volatile uint32_t t53 = UINT32_MAX;
int64_t x219 = -34LL;
volatile uint64_t x224 = UINT64_MAX;
static uint64_t t56 = 355730809LLU;
int16_t x234 = INT16_MIN;
int16_t x235 = -1;
int8_t x236 = INT8_MAX;
int64_t x238 = -1LL;
static int16_t x239 = INT16_MAX;
uint32_t x245 = 23471668U;
int16_t x247 = 12012;
static int64_t x251 = INT64_MIN;
uint16_t x254 = 311U;
volatile int64_t x255 = INT64_MIN;
uint32_t t63 = 5526806U;
volatile int8_t x260 = INT8_MAX;
int32_t t64 = 41520437;
volatile int64_t x261 = -1874762LL;
uint64_t x263 = 15LLU;
int32_t x265 = 65802273;
int8_t x268 = 2;
int8_t x270 = INT8_MIN;
volatile int64_t t68 = -698865LL;
uint64_t x280 = UINT64_MAX;
uint16_t x282 = 30U;
int64_t x285 = -1LL;
volatile int64_t x288 = INT64_MAX;
int8_t x291 = -2;
uint32_t x292 = UINT32_MAX;
int32_t x293 = -1;
volatile int32_t t74 = 127;
static volatile int32_t x306 = -1;
uint8_t x307 = 0U;
int32_t t76 = 115275;
uint32_t x313 = 10U;
uint32_t x315 = 841235015U;
static int16_t x316 = INT16_MIN;
uint64_t t80 = UINT64_MAX;
int64_t x329 = INT64_MAX;
volatile uint32_t x333 = 5787U;
uint64_t x334 = UINT64_MAX;
int16_t x336 = 4270;
volatile uint32_t t83 = 6462348U;
uint8_t x337 = 19U;
int16_t x339 = -6;
volatile int8_t x341 = -1;
int64_t x346 = 249LL;
static uint16_t x351 = UINT16_MAX;
int16_t x352 = 1;
uint8_t x354 = 1U;
static int16_t x363 = -1;
int64_t x364 = INT64_MIN;
static int32_t x371 = 186932866;
static int8_t x372 = 0;
uint64_t t94 = 6265570115LLU;
int16_t x382 = INT16_MIN;
int16_t x394 = INT16_MIN;
int32_t x400 = INT32_MIN;


void f0(void) {
	uint32_t x2 = 22U;
	volatile int16_t x3 = 35;
	int32_t t0 = 11841;

	t0 = (x1^(x2==(x3<x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 4U;
	int64_t x6 = -1LL;
	int16_t x8 = 6707;
	static int32_t t1 = -1;

	t1 = (x5^(x6==(x7<x8)));

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	uint64_t x11 = 30505887LLU;
	static uint64_t x12 = 1327746827058LLU;

	t2 = (x9^(x10==(x11<x12)));

	if (t2 != 29402185) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 10954U;
	int16_t x14 = 1291;
	int16_t x15 = INT16_MIN;
	uint32_t x16 = 9169946U;
	static int32_t t3 = -36215;

	t3 = (x13^(x14==(x15<x16)));

	if (t3 != 10954) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	uint8_t x18 = 8U;
	int8_t x19 = -14;
	volatile uint32_t x20 = 228674U;
	volatile int32_t t4 = 144;

	t4 = (x17^(x18==(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	static uint32_t x23 = 1706377643U;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = 254;

	t5 = (x21^(x22==(x23<x24)));

	if (t5 != -28) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	int64_t x27 = INT64_MIN;
	int64_t t6 = -4078860729286436LL;

	t6 = (x25^(x26==(x27<x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 0U;
	int8_t x30 = 0;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = -113;

	t7 = (x29^(x30==(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	volatile int16_t x36 = 3180;

	t8 = (x33^(x34==(x35<x36)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int8_t x38 = 1;
	int8_t x39 = INT8_MIN;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = 232024943;

	t9 = (x37^(x38==(x39<x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	static int16_t x44 = -2816;
	volatile int64_t t10 = INT64_MIN;

	t10 = (x41^(x42==(x43<x44)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = -1LL;
	static uint16_t x46 = 27U;
	volatile int32_t x48 = INT32_MIN;
	int64_t t11 = -3109996808LL;

	t11 = (x45^(x46==(x47<x48)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -9254;
	int64_t x50 = INT64_MAX;
	int16_t x51 = -1;
	int32_t x52 = -1;
	volatile int32_t t12 = -11;

	t12 = (x49^(x50==(x51<x52)));

	if (t12 != -9254) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	static int16_t x54 = -1;
	static int64_t x55 = 6671701422LL;
	int16_t x56 = 15;
	volatile int32_t t13 = -2;

	t13 = (x53^(x54==(x55<x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = 292421408543654131LL;
	uint16_t x59 = 6594U;

	t14 = (x57^(x58==(x59<x60)));

	if (t14 != -481104859) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -20;
	volatile int8_t x62 = 1;
	int64_t x64 = -927LL;
	volatile int32_t t15 = 2001;

	t15 = (x61^(x62==(x63<x64)));

	if (t15 != -20) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 97U;
	int64_t x66 = -1LL;
	int32_t t16 = 1;

	t16 = (x65^(x66==(x67<x68)));

	if (t16 != 97) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 52370111U;
	uint32_t x70 = UINT32_MAX;
	static int32_t x71 = INT32_MIN;
	uint16_t x72 = 14U;

	t17 = (x69^(x70==(x71<x72)));

	if (t17 != 52370111U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 26;
	static int64_t x74 = INT64_MIN;
	uint16_t x75 = 34U;
	static int32_t x76 = INT32_MIN;
	int32_t t18 = 0;

	t18 = (x73^(x74==(x75<x76)));

	if (t18 != 26) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MIN;
	static uint16_t x79 = 11925U;
	volatile uint32_t x80 = 1004U;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (x77^(x78==(x79<x80)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 0U;
	int64_t x82 = INT64_MAX;
	volatile int32_t t20 = 1774;

	t20 = (x81^(x82==(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 4U;
	int16_t x86 = INT16_MAX;
	static uint64_t x87 = 180LLU;
	int32_t t21 = 24033;

	t21 = (x85^(x86==(x87<x88)));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	static int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MIN;
	uint16_t x92 = UINT16_MAX;
	uint32_t t22 = UINT32_MAX;

	t22 = (x89^(x90==(x91<x92)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MIN;
	static int8_t x95 = 56;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = -3084957;

	t23 = (x93^(x94==(x95<x96)));

	if (t23 != 38) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	int32_t x98 = -974465768;
	static volatile int8_t x99 = 10;
	int16_t x100 = INT16_MIN;
	volatile int64_t t24 = INT64_MIN;

	t24 = (x97^(x98==(x99<x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	uint64_t x102 = 3682814259780750683LLU;
	static int64_t x103 = 15417LL;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = -137568959;

	t25 = (x101^(x102==(x103<x104)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x106 = INT32_MAX;
	uint16_t x107 = 241U;
	static uint32_t x108 = 41U;

	t26 = (x105^(x106==(x107<x108)));

	if (t26 != -92071476177543714LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 0U;
	volatile int16_t x110 = INT16_MIN;
	static int32_t t27 = 42743629;

	t27 = (x109^(x110==(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = UINT32_MAX;
	volatile int8_t x114 = 12;
	int32_t x115 = -1869;
	uint32_t x116 = UINT32_MAX;

	t28 = (x113^(x114==(x115<x116)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 3102;
	static volatile int8_t x119 = -1;
	int32_t x120 = INT32_MAX;
	int32_t t29 = 24492552;

	t29 = (x117^(x118==(x119<x120)));

	if (t29 != 3102) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = -1LL;
	int64_t x123 = -1LL;
	volatile int64_t x124 = -1LL;
	volatile int32_t t30 = -15;

	t30 = (x121^(x122==(x123<x124)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x127 = 11U;
	int32_t x128 = INT32_MIN;
	int32_t t31 = INT32_MIN;

	t31 = (x125^(x126==(x127<x128)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static uint32_t x130 = 172886727U;
	static int16_t x131 = -1;
	uint64_t t32 = UINT64_MAX;

	t32 = (x129^(x130==(x131<x132)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int8_t x134 = INT8_MIN;
	static uint64_t x135 = 10320944269957LLU;
	uint32_t x136 = 11177550U;

	t33 = (x133^(x134==(x135<x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;
	int8_t x138 = INT8_MIN;
	int64_t x139 = -645071499LL;
	int64_t x140 = 86653706391539LL;
	volatile int32_t t34 = -355147393;

	t34 = (x137^(x138==(x139<x140)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 240117856216383596LLU;
	uint64_t x142 = 885861847814808LLU;
	int64_t x143 = -1LL;
	uint8_t x144 = 30U;

	t35 = (x141^(x142==(x143<x144)));

	if (t35 != 240117856216383596LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x147 = 4LLU;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = 106540854;

	t36 = (x145^(x146==(x147<x148)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 12U;
	static int16_t x150 = -1;
	static int64_t x151 = INT64_MIN;
	uint16_t x152 = 29653U;
	static int32_t t37 = -34067;

	t37 = (x149^(x150==(x151<x152)));

	if (t37 != 12) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	int8_t x155 = -1;
	uint64_t t38 = UINT64_MAX;

	t38 = (x153^(x154==(x155<x156)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int8_t x159 = INT8_MIN;
	int32_t t39 = 3;

	t39 = (x157^(x158==(x159<x160)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = 38221LL;
	volatile int64_t x162 = -440224423038630490LL;
	uint64_t x163 = 86477187LLU;
	volatile int8_t x164 = INT8_MIN;

	t40 = (x161^(x162==(x163<x164)));

	if (t40 != 38221LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = UINT16_MAX;
	uint32_t x168 = 358934U;
	int32_t t41 = 667;

	t41 = (x165^(x166==(x167<x168)));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile uint64_t x172 = UINT64_MAX;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x169^(x170==(x171<x172)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	static uint8_t x174 = UINT8_MAX;
	static int8_t x176 = -1;
	int32_t t43 = -14;

	t43 = (x173^(x174==(x175<x176)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 22U;
	int32_t x178 = -1;
	static uint16_t x179 = 36U;
	volatile uint64_t x180 = 667007LLU;

	t44 = (x177^(x178==(x179<x180)));

	if (t44 != 22) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 63U;
	volatile uint8_t x182 = 30U;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MIN;

	t45 = (x181^(x182==(x183<x184)));

	if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int8_t x187 = INT8_MIN;
	int32_t x188 = 1659891;
	int32_t t46 = -8001574;

	t46 = (x185^(x186==(x187<x188)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = -6;
	int8_t x190 = INT8_MAX;
	int8_t x192 = 3;
	int32_t t47 = 1;

	t47 = (x189^(x190==(x191<x192)));

	if (t47 != -6) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	volatile int8_t x194 = INT8_MAX;
	static int64_t x196 = INT64_MAX;
	int32_t t48 = INT32_MIN;

	t48 = (x193^(x194==(x195<x196)));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 2U;
	int8_t x199 = INT8_MAX;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t49 = -504393;

	t49 = (x197^(x198==(x199<x200)));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 2U;
	int64_t x202 = 22LL;
	uint64_t x203 = UINT64_MAX;
	volatile int64_t x204 = 486148809LL;
	int32_t t50 = 17960;

	t50 = (x201^(x202==(x203<x204)));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	volatile uint64_t x207 = 61706465203LLU;
	volatile int32_t t51 = -15598464;

	t51 = (x205^(x206==(x207<x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = 263U;
	int8_t x211 = INT8_MAX;
	volatile int64_t x212 = INT64_MIN;

	t52 = (x209^(x210==(x211<x212)));

	if (t52 != 263) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	uint8_t x214 = 18U;
	int32_t x215 = -1;
	int32_t x216 = INT32_MIN;

	t53 = (x213^(x214==(x215<x216)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x218 = 2823479U;
	static int8_t x220 = INT8_MAX;
	int32_t t54 = 2463457;

	t54 = (x217^(x218==(x219<x220)));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 13594U;
	volatile int8_t x222 = 9;
	volatile int64_t x223 = -423LL;
	int32_t t55 = 8060719;

	t55 = (x221^(x222==(x223<x224)));

	if (t55 != 13594) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 962972096228458784LLU;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = -25136745957977LL;
	static int16_t x228 = INT16_MAX;

	t56 = (x225^(x226==(x227<x228)));

	if (t56 != 962972096228458784LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 1414646518582LLU;
	int16_t x230 = INT16_MIN;
	static int8_t x231 = -1;
	int8_t x232 = 1;
	volatile uint64_t t57 = 13813940326523109LLU;

	t57 = (x229^(x230==(x231<x232)));

	if (t57 != 1414646518582LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x233^(x234==(x235<x236)));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	int16_t x240 = INT16_MIN;
	int64_t t59 = INT64_MAX;

	t59 = (x237^(x238==(x239<x240)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 580U;
	int8_t x242 = INT8_MIN;
	int64_t x243 = 16LL;
	volatile int16_t x244 = INT16_MIN;
	int32_t t60 = 751947374;

	t60 = (x241^(x242==(x243<x244)));

	if (t60 != 580) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = -1;
	uint64_t x248 = 7549LLU;
	volatile uint32_t t61 = 1534U;

	t61 = (x245^(x246==(x247<x248)));

	if (t61 != 23471668U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 1402;
	volatile uint64_t x250 = 910839737997LLU;
	static int8_t x252 = INT8_MAX;
	static int32_t t62 = 4;

	t62 = (x249^(x250==(x251<x252)));

	if (t62 != 1402) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 61456539U;
	static int64_t x256 = -1LL;

	t63 = (x253^(x254==(x255<x256)));

	if (t63 != 61456539U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 3U;
	int32_t x258 = 6364389;
	int64_t x259 = -220312131068186LL;

	t64 = (x257^(x258==(x259<x260)));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = 26730U;
	int32_t x264 = 1477486;
	int64_t t65 = -6757061915LL;

	t65 = (x261^(x262==(x263<x264)));

	if (t65 != -1874762LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MIN;
	static int32_t t66 = -83875;

	t66 = (x265^(x266==(x267<x268)));

	if (t66 != 65802273) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	int64_t x271 = INT64_MAX;
	uint32_t x272 = UINT32_MAX;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x269^(x270==(x271<x272)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 11329LL;
	int16_t x274 = -1922;
	uint8_t x275 = 2U;
	static uint32_t x276 = UINT32_MAX;

	t68 = (x273^(x274==(x275<x276)));

	if (t68 != 11329LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = 8;
	volatile int32_t x278 = 3469;
	static uint16_t x279 = 67U;
	int32_t t69 = 32362711;

	t69 = (x277^(x278==(x279<x280)));

	if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int32_t x283 = -1;
	int64_t x284 = INT64_MAX;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x281^(x282==(x283<x284)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = 94942U;
	uint8_t x287 = 25U;
	int64_t t71 = -1438941025465LL;

	t71 = (x285^(x286==(x287<x288)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 55U;
	uint16_t x290 = 0U;
	uint32_t t72 = 2769U;

	t72 = (x289^(x290==(x291<x292)));

	if (t72 != 55U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x294 = INT8_MAX;
	int16_t x295 = 1;
	static int16_t x296 = 2000;
	static int32_t t73 = 243;

	t73 = (x293^(x294==(x295<x296)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 27U;
	int8_t x298 = INT8_MAX;
	uint8_t x299 = 116U;
	static volatile int8_t x300 = INT8_MIN;

	t74 = (x297^(x298==(x299<x300)));

	if (t74 != 27) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	static volatile int32_t x302 = -1;
	int8_t x303 = -1;
	int64_t x304 = INT64_MAX;
	static volatile int32_t t75 = INT32_MIN;

	t75 = (x301^(x302==(x303<x304)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int64_t x308 = INT64_MIN;

	t76 = (x305^(x306==(x307<x308)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MIN;
	int16_t x310 = 2996;
	static volatile int64_t x311 = 1416863828013187560LL;
	uint8_t x312 = 46U;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x309^(x310==(x311<x312)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 15960549603437015LLU;
	uint32_t t78 = 13417U;

	t78 = (x313^(x314==(x315<x316)));

	if (t78 != 10U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	int8_t x318 = -14;
	uint8_t x319 = 70U;
	uint64_t x320 = 152183LLU;
	int64_t t79 = INT64_MIN;

	t79 = (x317^(x318==(x319<x320)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MIN;
	int8_t x323 = 1;
	uint8_t x324 = 7U;

	t80 = (x321^(x322==(x323<x324)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = 13;
	volatile uint16_t x327 = 2880U;
	volatile int8_t x328 = 2;
	int32_t t81 = 272391663;

	t81 = (x325^(x326==(x327<x328)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = -1LL;
	volatile int32_t x331 = -33798;
	static int64_t x332 = INT64_MIN;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x329^(x330==(x331<x332)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x335 = INT32_MIN;

	t83 = (x333^(x334==(x335<x336)));

	if (t83 != 5787U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x338 = INT8_MIN;
	static int64_t x340 = INT64_MIN;
	static int32_t t84 = -509701;

	t84 = (x337^(x338==(x339<x340)));

	if (t84 != 19) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = INT64_MIN;
	static volatile int16_t x343 = -412;
	int32_t x344 = INT32_MAX;
	int32_t t85 = -7664036;

	t85 = (x341^(x342==(x343<x344)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x347 = -2;
	volatile uint16_t x348 = 887U;
	static int32_t t86 = -19656150;

	t86 = (x345^(x346==(x347<x348)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	static uint8_t x350 = UINT8_MAX;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (x349^(x350==(x351<x352)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	uint8_t x355 = 1U;
	volatile int64_t x356 = INT64_MAX;
	volatile uint32_t t88 = 38176953U;

	t88 = (x353^(x354==(x355<x356)));

	if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x357 = 804781102500LLU;
	int16_t x358 = INT16_MAX;
	volatile uint32_t x359 = 469762U;
	uint32_t x360 = UINT32_MAX;
	uint64_t t89 = 44897488LLU;

	t89 = (x357^(x358==(x359<x360)));

	if (t89 != 804781102500LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -3007820298243370LL;
	static uint8_t x362 = 0U;
	int64_t t90 = 85LL;

	t90 = (x361^(x362==(x363<x364)));

	if (t90 != -3007820298243369LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x365 = 6;
	int16_t x366 = INT16_MIN;
	int16_t x367 = 69;
	static int64_t x368 = -22489079012557185LL;
	volatile int32_t t91 = -472923;

	t91 = (x365^(x366==(x367<x368)));

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 50U;
	int16_t x370 = INT16_MIN;
	volatile int32_t t92 = 596;

	t92 = (x369^(x370==(x371<x372)));

	if (t92 != 50) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x374 = INT64_MAX;
	uint16_t x375 = 17U;
	static int32_t x376 = 3210;
	volatile int32_t t93 = -12;

	t93 = (x373^(x374==(x375<x376)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 101940853LLU;
	int32_t x378 = INT32_MIN;
	volatile int16_t x379 = INT16_MIN;
	static int32_t x380 = -1;

	t94 = (x377^(x378==(x379<x380)));

	if (t94 != 101940853LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = UINT8_MAX;
	uint8_t x383 = 4U;
	uint32_t x384 = UINT32_MAX;
	int32_t t95 = -209180849;

	t95 = (x381^(x382==(x383<x384)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 114720LLU;
	volatile int64_t x386 = -1LL;
	int32_t x387 = INT32_MIN;
	int8_t x388 = INT8_MAX;
	uint64_t t96 = 647948872LLU;

	t96 = (x385^(x386==(x387<x388)));

	if (t96 != 114720LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 4054U;
	static int8_t x390 = -1;
	int16_t x391 = INT16_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 1;

	t97 = (x389^(x390==(x391<x392)));

	if (t97 != 4054) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 93LLU;
	volatile int8_t x395 = INT8_MAX;
	int8_t x396 = INT8_MIN;
	uint64_t t98 = 7535LLU;

	t98 = (x393^(x394==(x395<x396)));

	if (t98 != 93LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 28U;
	int64_t x398 = INT64_MIN;
	int16_t x399 = 0;
	int32_t t99 = -24;

	t99 = (x397^(x398==(x399<x400)));

	if (t99 != 28) { NG(); } else { ; }
	
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

