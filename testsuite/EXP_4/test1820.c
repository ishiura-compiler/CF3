#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x3 = INT64_MIN;
uint16_t x5 = 223U;
int8_t x8 = INT8_MIN;
uint16_t x10 = UINT16_MAX;
uint8_t x22 = UINT8_MAX;
int64_t x23 = INT64_MAX;
uint32_t x29 = 198054U;
volatile int16_t x30 = INT16_MIN;
int32_t x37 = INT32_MIN;
volatile int32_t t9 = INT32_MIN;
int32_t x56 = -2802;
static int32_t t13 = INT32_MIN;
volatile uint8_t x57 = 24U;
static uint16_t x65 = 94U;
uint32_t x69 = 51442U;
volatile uint32_t t17 = 91U;
int64_t x75 = -1LL;
volatile uint8_t x80 = 56U;
int8_t x82 = INT8_MIN;
int32_t t20 = 1;
int64_t x89 = -1LL;
int64_t t22 = -5355616752LL;
uint32_t x94 = UINT32_MAX;
int8_t x100 = 2;
static volatile uint8_t x101 = 4U;
int8_t x107 = -25;
uint64_t x108 = UINT64_MAX;
static uint64_t x112 = 95LLU;
volatile int32_t t27 = -1;
static int16_t x117 = INT16_MIN;
int64_t x119 = INT64_MAX;
int8_t x121 = -1;
int32_t x122 = INT32_MAX;
uint32_t x128 = 1U;
volatile int32_t t31 = 252320428;
int32_t x132 = -50800842;
volatile int32_t t32 = 3836725;
static uint8_t x139 = 14U;
int64_t t34 = -2744LL;
int32_t x142 = 27;
int32_t x143 = -244096761;
uint32_t t37 = UINT32_MAX;
volatile int32_t t38 = 5134853;
volatile uint64_t t41 = 228675252LLU;
int8_t x175 = INT8_MAX;
volatile uint32_t t43 = UINT32_MAX;
static volatile int8_t x179 = INT8_MAX;
int64_t t44 = -675693144810449LL;
static int64_t x183 = 1452415LL;
int16_t x186 = 57;
static volatile int16_t x191 = INT16_MIN;
volatile uint16_t x193 = UINT16_MAX;
uint8_t x194 = UINT8_MAX;
volatile int16_t x198 = INT16_MIN;
volatile int32_t x208 = INT32_MIN;
int32_t t51 = -153698;
static uint8_t x211 = 2U;
int64_t x215 = 415LL;
int16_t x225 = INT16_MIN;
int8_t x226 = INT8_MAX;
static int16_t x232 = INT16_MAX;
static int32_t t57 = 538;
int16_t x233 = INT16_MIN;
int8_t x237 = INT8_MIN;
uint64_t x240 = 953962054534459489LLU;
int32_t t59 = 2559;
static int64_t t60 = 237569470436589LL;
int32_t t61 = 178;
static int32_t t62 = 20;
int64_t t63 = 2433683762LL;
static int16_t x260 = 2;
static volatile int32_t t64 = 3;
int8_t x264 = INT8_MIN;
static volatile uint32_t t65 = 6180U;
volatile int32_t t66 = 10495;
uint16_t x271 = 199U;
int32_t x278 = -3000389;
volatile int32_t t71 = 194542;
int16_t x290 = INT16_MIN;
int8_t x293 = INT8_MIN;
volatile int32_t t73 = 55;
int32_t x297 = -1;
int32_t x300 = 3;
volatile uint16_t x328 = 1715U;
volatile int16_t x338 = INT16_MAX;
int32_t t84 = INT32_MIN;
int16_t x343 = INT16_MAX;
int64_t x353 = -866868LL;
volatile int64_t x356 = INT64_MAX;
int64_t t88 = 2776447LL;
volatile int32_t t89 = 61487;
int64_t x361 = INT64_MIN;
volatile int64_t t90 = -83869928974LL;
int16_t x365 = 53;
int32_t x383 = INT32_MIN;
int32_t t95 = 2742;
int64_t x385 = 703504073472LL;
int64_t x387 = INT64_MAX;
int16_t x391 = -7;
volatile uint64_t t98 = UINT64_MAX;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	volatile uint32_t x2 = 7937254U;
	int8_t x4 = INT8_MAX;
	static int32_t t0 = INT32_MAX;

	t0 = (x1^(x2<=(x3&x4)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 41983945432793810LLU;
	int32_t x7 = -311;
	volatile int32_t t1 = 3398;

	t1 = (x5^(x6<=(x7&x8)));

	if (t1 != 222) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint8_t x11 = 5U;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = 624971;

	t2 = (x9^(x10<=(x11&x12)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile uint64_t x14 = 126645872495153LLU;
	volatile int32_t x15 = INT32_MIN;
	static int64_t x16 = INT64_MAX;
	volatile int32_t t3 = 340423;

	t3 = (x13^(x14<=(x15&x16)));

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 60721770LLU;
	int64_t x18 = 120166824820754825LL;
	int8_t x19 = 4;
	volatile uint8_t x20 = UINT8_MAX;
	volatile uint64_t t4 = 49202658LLU;

	t4 = (x17^(x18<=(x19&x20)));

	if (t4 != 60721770LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int16_t x24 = 661;
	int32_t t5 = -17362542;

	t5 = (x21^(x22<=(x23&x24)));

	if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int8_t x26 = 21;
	int32_t x27 = INT32_MIN;
	static uint32_t x28 = 0U;
	volatile int64_t t6 = 29988368617LL;

	t6 = (x25^(x26<=(x27&x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x31 = UINT16_MAX;
	static uint16_t x32 = 1984U;
	volatile uint32_t t7 = 3U;

	t7 = (x29^(x30<=(x31&x32)));

	if (t7 != 198055U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	uint32_t x34 = 5311306U;
	int64_t x35 = INT64_MIN;
	static int32_t x36 = 129924;
	int32_t t8 = 5;

	t8 = (x33^(x34<=(x35&x36)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = 47865LL;
	int8_t x39 = -42;
	int8_t x40 = -9;

	t9 = (x37^(x38<=(x39&x40)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	static uint8_t x42 = 0U;
	static uint8_t x43 = 1U;
	volatile int32_t x44 = INT32_MIN;
	int32_t t10 = -2540577;

	t10 = (x41^(x42<=(x43&x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 68;
	uint64_t x46 = 222LLU;
	int32_t x47 = -1;
	volatile uint8_t x48 = 23U;
	int32_t t11 = 29;

	t11 = (x45^(x46<=(x47&x48)));

	if (t11 != 68) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	volatile int32_t x50 = INT32_MIN;
	volatile uint32_t x51 = 240696U;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 5334905;

	t12 = (x49^(x50<=(x51&x52)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile int8_t x54 = 28;
	volatile uint16_t x55 = 1U;

	t13 = (x53^(x54<=(x55&x56)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x58 = -478;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = 3000132688541LL;
	volatile int32_t t14 = 16050;

	t14 = (x57^(x58<=(x59&x60)));

	if (t14 != 25) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MAX;
	uint64_t x63 = 194950260377110478LLU;
	int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = 823088;

	t15 = (x61^(x62<=(x63&x64)));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	static uint32_t x67 = UINT32_MAX;
	int16_t x68 = 20;
	volatile int32_t t16 = 315855686;

	t16 = (x65^(x66<=(x67&x68)));

	if (t16 != 94) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MAX;
	uint16_t x71 = 12025U;
	uint32_t x72 = 238264U;

	t17 = (x69^(x70<=(x71&x72)));

	if (t17 != 51442U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	int64_t x74 = -1LL;
	int32_t x76 = -1;
	int32_t t18 = -199066;

	t18 = (x73^(x74<=(x75&x76)));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	static volatile int16_t x78 = INT16_MIN;
	static int8_t x79 = -1;
	int32_t t19 = 1291904;

	t19 = (x77^(x78<=(x79&x80)));

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = INT16_MIN;
	int8_t x83 = -1;
	uint32_t x84 = 95936442U;

	t20 = (x81^(x82<=(x83&x84)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 14U;
	int16_t x86 = INT16_MAX;
	volatile int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 3;

	t21 = (x85^(x86<=(x87&x88)));

	if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -4388661027LL;
	static uint32_t x91 = UINT32_MAX;
	uint16_t x92 = 37U;

	t22 = (x89^(x90<=(x91&x92)));

	if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -7308580518846344LL;
	uint32_t x95 = UINT32_MAX;
	static int64_t x96 = -1LL;
	int64_t t23 = -5918LL;

	t23 = (x93^(x94<=(x95&x96)));

	if (t23 != -7308580518846343LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 900347160LLU;
	static volatile int64_t x98 = INT64_MIN;
	static volatile int32_t x99 = INT32_MIN;
	uint64_t t24 = 840713487LLU;

	t24 = (x97^(x98<=(x99&x100)));

	if (t24 != 900347161LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x102 = -10262;
	int16_t x103 = -10;
	static volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -7278;

	t25 = (x101^(x102<=(x103&x104)));

	if (t25 != 5) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int32_t x106 = INT32_MIN;
	static int32_t t26 = 96;

	t26 = (x105^(x106<=(x107&x108)));

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = UINT8_MAX;
	uint16_t x111 = 385U;

	t27 = (x109^(x110<=(x111&x112)));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 434616498990042537LL;
	volatile int64_t x114 = 567315526475149LL;
	int16_t x115 = INT16_MIN;
	int64_t x116 = 775852947166LL;
	int64_t t28 = 51018733692129020LL;

	t28 = (x113^(x114<=(x115&x116)));

	if (t28 != 434616498990042537LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x118 = INT64_MIN;
	static uint8_t x120 = 0U;
	int32_t t29 = 183485;

	t29 = (x117^(x118<=(x119&x120)));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x123 = 1;
	uint16_t x124 = 254U;
	volatile int32_t t30 = 348022402;

	t30 = (x121^(x122<=(x123&x124)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 24979U;
	static int8_t x126 = INT8_MAX;
	uint8_t x127 = 8U;

	t31 = (x125^(x126<=(x127&x128)));

	if (t31 != 24979) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = UINT16_MAX;
	static int32_t x130 = INT32_MIN;
	int16_t x131 = 4074;

	t32 = (x129^(x130<=(x131&x132)));

	if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -6;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = 11U;
	int32_t x136 = 0;
	volatile int32_t t33 = -53154328;

	t33 = (x133^(x134<=(x135&x136)));

	if (t33 != -5) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -39987629LL;
	static int16_t x138 = 27;
	int16_t x140 = -1;

	t34 = (x137^(x138<=(x139&x140)));

	if (t34 != -39987629LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -834888LL;
	int8_t x144 = INT8_MIN;
	volatile int64_t t35 = 96473048520412366LL;

	t35 = (x141^(x142<=(x143&x144)));

	if (t35 != -834888LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = 10U;
	int64_t x147 = -1LL;
	int64_t x148 = 0LL;
	static volatile int32_t t36 = -2;

	t36 = (x145^(x146<=(x147&x148)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = UINT32_MAX;
	uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MIN;

	t37 = (x149^(x150<=(x151&x152)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = 14678;
	static int64_t x154 = INT64_MIN;
	uint64_t x155 = 0LLU;
	volatile int8_t x156 = INT8_MIN;

	t38 = (x153^(x154<=(x155&x156)));

	if (t38 != 14678) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x157 = 528U;
	int8_t x158 = INT8_MAX;
	volatile int8_t x159 = -1;
	uint32_t x160 = 95U;
	static int32_t t39 = -3790;

	t39 = (x157^(x158<=(x159&x160)));

	if (t39 != 528) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 3573;
	static volatile int16_t x162 = -1;
	static int32_t x163 = INT32_MAX;
	uint8_t x164 = 3U;
	volatile int32_t t40 = 3;

	t40 = (x161^(x162<=(x163&x164)));

	if (t40 != 3572) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = UINT64_MAX;
	int64_t x166 = -5560642849LL;
	int32_t x167 = -1;
	int32_t x168 = INT32_MAX;

	t41 = (x165^(x166<=(x167&x168)));

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -568405412;
	volatile int16_t x170 = -1;
	int8_t x171 = INT8_MAX;
	uint8_t x172 = UINT8_MAX;
	int32_t t42 = -866111;

	t42 = (x169^(x170<=(x171&x172)));

	if (t42 != -568405411) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int32_t x174 = 4651;
	int8_t x176 = 0;

	t43 = (x173^(x174<=(x175&x176)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MAX;
	static int64_t x178 = -85129LL;
	int16_t x180 = INT16_MAX;

	t44 = (x177^(x178<=(x179&x180)));

	if (t44 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = -1;
	uint8_t x182 = 42U;
	int8_t x184 = 1;
	int32_t t45 = 189;

	t45 = (x181^(x182<=(x183&x184)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	volatile int16_t x187 = 230;
	uint8_t x188 = 23U;
	volatile int32_t t46 = 0;

	t46 = (x185^(x186<=(x187&x188)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MIN;
	int16_t x190 = 3458;
	volatile int16_t x192 = -4161;
	int32_t t47 = INT32_MIN;

	t47 = (x189^(x190<=(x191&x192)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x195 = 26LLU;
	static int16_t x196 = 1;
	volatile int32_t t48 = 5143;

	t48 = (x193^(x194<=(x195&x196)));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 5341513U;
	static int8_t x199 = INT8_MIN;
	int32_t x200 = -1292145;
	uint32_t t49 = 1441U;

	t49 = (x197^(x198<=(x199&x200)));

	if (t49 != 5341513U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -1;
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -1;

	t50 = (x201^(x202<=(x203&x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -114;
	static int16_t x206 = 126;
	int8_t x207 = -11;

	t51 = (x205^(x206<=(x207&x208)));

	if (t51 != -114) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	int16_t x212 = -1;
	volatile int32_t t52 = -23383223;

	t52 = (x209^(x210<=(x211&x212)));

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	volatile uint8_t x214 = 2U;
	uint32_t x216 = 67108180U;
	int32_t t53 = 1255;

	t53 = (x213^(x214<=(x215&x216)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	volatile int32_t x218 = -695093871;
	int64_t x219 = 280412LL;
	volatile int8_t x220 = 26;
	volatile int64_t t54 = -662680862599LL;

	t54 = (x217^(x218<=(x219&x220)));

	if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MIN;
	uint8_t x222 = UINT8_MAX;
	int64_t x223 = 1071792374LL;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -2605;

	t55 = (x221^(x222<=(x223&x224)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x227 = -6370;
	volatile int64_t x228 = 2340261046809401016LL;
	volatile int32_t t56 = -306;

	t56 = (x225^(x226<=(x227&x228)));

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MAX;

	t57 = (x229^(x230<=(x231&x232)));

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MIN;
	static int16_t x235 = -1;
	volatile uint32_t x236 = UINT32_MAX;
	static volatile int32_t t58 = 238795837;

	t58 = (x233^(x234<=(x235&x236)));

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = -28;
	int64_t x239 = -834LL;

	t59 = (x237^(x238<=(x239&x240)));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MIN;
	volatile int8_t x242 = 36;
	uint8_t x243 = 60U;
	int64_t x244 = 24757036074LL;

	t60 = (x241^(x242<=(x243&x244)));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 40U;
	int64_t x246 = 241144179015LL;
	int32_t x247 = INT32_MIN;
	volatile int16_t x248 = 3;

	t61 = (x245^(x246<=(x247&x248)));

	if (t61 != 40) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -1;
	int64_t x250 = -1LL;
	int8_t x251 = INT8_MAX;
	volatile int64_t x252 = INT64_MIN;

	t62 = (x249^(x250<=(x251&x252)));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = -1LL;
	int8_t x255 = -1;
	int32_t x256 = INT32_MAX;

	t63 = (x253^(x254<=(x255&x256)));

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MAX;
	uint16_t x259 = 7282U;

	t64 = (x257^(x258<=(x259&x260)));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 1550409U;
	volatile int16_t x262 = -1;
	int8_t x263 = INT8_MAX;

	t65 = (x261^(x262<=(x263&x264)));

	if (t65 != 1550408U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = 1359U;
	int64_t x266 = 0LL;
	uint16_t x267 = UINT16_MAX;
	static int8_t x268 = 28;

	t66 = (x265^(x266<=(x267&x268)));

	if (t66 != 1358) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = UINT32_MAX;
	volatile uint16_t x270 = 4U;
	static int8_t x272 = INT8_MAX;
	volatile uint32_t t67 = 7U;

	t67 = (x269^(x270<=(x271&x272)));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 0U;
	volatile uint8_t x274 = 24U;
	int8_t x275 = 1;
	int64_t x276 = INT64_MIN;
	int32_t t68 = -3634;

	t68 = (x273^(x274<=(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -1;
	int32_t x279 = 906103;
	static uint64_t x280 = 27871LLU;
	int32_t t69 = -742553978;

	t69 = (x277^(x278<=(x279&x280)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 3093LLU;
	int16_t x282 = -2435;
	int64_t x283 = -26LL;
	uint32_t x284 = 117672U;
	static uint64_t t70 = 2975665699003223311LLU;

	t70 = (x281^(x282<=(x283&x284)));

	if (t70 != 3092LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 4429;
	static int8_t x286 = INT8_MIN;
	int64_t x287 = -1LL;
	int64_t x288 = INT64_MIN;

	t71 = (x285^(x286<=(x287&x288)));

	if (t71 != 4429) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 6U;
	int32_t t72 = 5035172;

	t72 = (x289^(x290<=(x291&x292)));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = INT8_MAX;
	int64_t x295 = 132669982686242LL;
	uint64_t x296 = UINT64_MAX;

	t73 = (x293^(x294<=(x295&x296)));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = INT32_MAX;
	int32_t t74 = 49973051;

	t74 = (x297^(x298<=(x299&x300)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 570505181LL;
	int16_t x302 = INT16_MAX;
	int8_t x303 = 8;
	int64_t x304 = INT64_MIN;
	int64_t t75 = -58947LL;

	t75 = (x301^(x302<=(x303&x304)));

	if (t75 != 570505181LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = 27;
	static volatile uint32_t x306 = 343U;
	int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t76 = -103;

	t76 = (x305^(x306<=(x307&x308)));

	if (t76 != 26) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 1;
	static int8_t x310 = INT8_MIN;
	volatile uint8_t x311 = 84U;
	static uint8_t x312 = UINT8_MAX;
	int32_t t77 = 234803918;

	t77 = (x309^(x310<=(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = 280;
	volatile int16_t x315 = 807;
	uint8_t x316 = 3U;
	int64_t t78 = INT64_MIN;

	t78 = (x313^(x314<=(x315&x316)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = 940451LLU;
	int8_t x318 = INT8_MAX;
	int64_t x319 = -1LL;
	volatile int64_t x320 = INT64_MIN;
	volatile uint64_t t79 = 2LLU;

	t79 = (x317^(x318<=(x319&x320)));

	if (t79 != 940451LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 18310334397LLU;
	volatile uint64_t x322 = 114LLU;
	int16_t x323 = INT16_MIN;
	int32_t x324 = INT32_MIN;
	uint64_t t80 = 2853257325663LLU;

	t80 = (x321^(x322<=(x323&x324)));

	if (t80 != 18310334396LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	volatile int64_t x326 = 2211686144LL;
	uint64_t x327 = 29938LLU;
	int32_t t81 = -236;

	t81 = (x325^(x326<=(x327&x328)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = UINT64_MAX;
	uint8_t x330 = UINT8_MAX;
	static int32_t x331 = INT32_MIN;
	volatile int64_t x332 = INT64_MIN;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x329^(x330<=(x331&x332)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -588LL;
	volatile uint32_t x334 = UINT32_MAX;
	static int16_t x335 = -5;
	static int8_t x336 = -1;
	volatile int64_t t83 = -56587LL;

	t83 = (x333^(x334<=(x335&x336)));

	if (t83 != -588LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	int8_t x339 = INT8_MAX;
	int16_t x340 = -3044;

	t84 = (x337^(x338<=(x339&x340)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	uint16_t x342 = UINT16_MAX;
	int8_t x344 = -1;
	int32_t t85 = INT32_MIN;

	t85 = (x341^(x342<=(x343&x344)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	uint64_t x346 = 3LLU;
	volatile int32_t x347 = INT32_MIN;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 16314486;

	t86 = (x345^(x346<=(x347&x348)));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -2137849956254497LL;
	uint64_t x350 = UINT64_MAX;
	int8_t x351 = 1;
	volatile int8_t x352 = 12;
	static volatile int64_t t87 = -8345304647465604LL;

	t87 = (x349^(x350<=(x351&x352)));

	if (t87 != -2137849956254497LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MIN;
	static uint64_t x355 = 127108215204912864LLU;

	t88 = (x353^(x354<=(x355&x356)));

	if (t88 != -866868LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MIN;
	volatile uint16_t x358 = 6U;
	volatile int64_t x359 = INT64_MAX;
	volatile int16_t x360 = -1;

	t89 = (x357^(x358<=(x359&x360)));

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x362 = -1;
	int32_t x363 = 347;
	int16_t x364 = INT16_MIN;

	t90 = (x361^(x362<=(x363&x364)));

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = -1;
	volatile int64_t x367 = INT64_MIN;
	int32_t x368 = 176731;
	volatile int32_t t91 = -198;

	t91 = (x365^(x366<=(x367&x368)));

	if (t91 != 52) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 31;
	int16_t x370 = INT16_MAX;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	int32_t t92 = -20;

	t92 = (x369^(x370<=(x371&x372)));

	if (t92 != 31) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 52207528LL;
	volatile uint64_t x374 = UINT64_MAX;
	int64_t x375 = -9141862495565380LL;
	uint8_t x376 = 16U;
	int64_t t93 = 1936099051654236LL;

	t93 = (x373^(x374<=(x375&x376)));

	if (t93 != 52207528LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	static volatile uint8_t x378 = 22U;
	int16_t x379 = -544;
	static uint32_t x380 = 1708473U;
	int32_t t94 = 712057363;

	t94 = (x377^(x378<=(x379&x380)));

	if (t94 != 254) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 154;
	uint16_t x382 = 0U;
	int8_t x384 = INT8_MAX;

	t95 = (x381^(x382<=(x383&x384)));

	if (t95 != 155) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = 199945U;
	int32_t x388 = -2551415;
	int64_t t96 = 1946LL;

	t96 = (x385^(x386<=(x387&x388)));

	if (t96 != 703504073473LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	volatile int8_t x392 = INT8_MIN;
	static volatile int32_t t97 = INT32_MIN;

	t97 = (x389^(x390<=(x391&x392)));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	uint64_t x394 = UINT64_MAX;
	static int64_t x395 = 14545371101473766LL;
	uint8_t x396 = 0U;

	t98 = (x393^(x394<=(x395&x396)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x397 = 14281U;
	static int32_t x398 = 409409;
	int32_t x399 = -1;
	uint32_t x400 = 1020351U;
	static volatile uint32_t t99 = 458000791U;

	t99 = (x397^(x398<=(x399&x400)));

	if (t99 != 14280U) { NG(); } else { ; }
	
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

