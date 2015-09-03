#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = 2002;
uint64_t t0 = 5LLU;
int64_t x11 = INT64_MAX;
int8_t x15 = 38;
static uint16_t x23 = 5U;
uint32_t x25 = UINT32_MAX;
uint8_t x31 = 8U;
volatile uint8_t x33 = 6U;
int64_t x35 = INT64_MIN;
uint32_t x38 = UINT32_MAX;
uint64_t x41 = 129990LLU;
int16_t x49 = INT16_MIN;
uint64_t x50 = 3950395228LLU;
volatile uint64_t t13 = 183057LLU;
int8_t x71 = 0;
int8_t x74 = -1;
volatile int64_t x88 = 10291932210750LL;
volatile uint8_t x112 = 0U;
int32_t x113 = INT32_MIN;
int32_t x115 = INT32_MAX;
int8_t x116 = -1;
int32_t x123 = INT32_MAX;
int64_t x134 = 330377243185LL;
static int32_t x136 = INT32_MIN;
static int32_t x155 = INT32_MIN;
int32_t x157 = 14;
uint32_t x158 = UINT32_MAX;
int32_t x160 = INT32_MAX;
static uint64_t x161 = 8187616890000LLU;
int8_t x163 = -37;
int16_t x165 = INT16_MIN;
static uint64_t t31 = 377LLU;
int16_t x183 = INT16_MIN;
uint64_t x184 = UINT64_MAX;
int32_t x188 = INT32_MIN;
int64_t x189 = INT64_MAX;
int32_t x191 = INT32_MIN;
volatile uint64_t x192 = 3319498302321LLU;
uint64_t t35 = 1278LLU;
static uint64_t x193 = UINT64_MAX;
uint16_t x196 = 9U;
uint64_t t36 = 555432364995889944LLU;
int8_t x205 = 1;
uint64_t t38 = 1886863LLU;
int32_t x213 = INT32_MIN;
uint8_t x214 = 6U;
int64_t x219 = INT64_MIN;
static volatile int64_t t40 = 0LL;
volatile uint8_t x221 = UINT8_MAX;
volatile uint8_t x227 = 6U;
int64_t x233 = -1LL;
static volatile uint64_t x234 = 6559LLU;
int64_t x248 = -1LL;
static int8_t x253 = -1;
static uint64_t x256 = 35040571LLU;
volatile uint64_t t48 = 171897LLU;
int32_t x258 = INT32_MAX;
uint32_t x259 = 1231621U;
int8_t x260 = INT8_MIN;
volatile int16_t x262 = INT16_MIN;
static uint8_t x264 = UINT8_MAX;
uint8_t x266 = 4U;
static int32_t x271 = -358464362;
volatile uint16_t x272 = UINT16_MAX;
int32_t t52 = 130072076;
volatile int8_t x275 = INT8_MIN;
static int16_t x285 = 210;
int64_t x287 = -505888962462410347LL;
static int32_t x294 = INT32_MAX;
static uint8_t x300 = 99U;
int16_t x301 = -133;
static volatile uint32_t x302 = 1961U;
static volatile int16_t x309 = -7449;
volatile uint32_t x314 = 535146861U;
int32_t x322 = -1;
int64_t x324 = INT64_MAX;
volatile int64_t t62 = 49616916650584087LL;
int16_t x325 = -1;
int32_t x328 = -5;
volatile int64_t t63 = -257097LL;
int32_t t64 = -5;
int8_t x345 = -39;
int64_t x352 = INT64_MIN;
volatile uint64_t x357 = 1023696263739325LLU;
volatile uint64_t t71 = 1488717911LLU;
volatile int8_t x372 = INT8_MAX;
int64_t t72 = -644336300118290840LL;
volatile int16_t x383 = INT16_MIN;
int16_t x391 = 58;
int32_t t75 = 2046586;
volatile uint64_t x393 = 2LLU;
int16_t x408 = 0;
int64_t x427 = INT64_MIN;
int64_t t80 = 1LL;
volatile uint64_t x429 = 1797032876662410LLU;
int64_t x430 = INT64_MIN;
uint32_t x436 = 0U;
volatile uint64_t t82 = 7464600180LLU;
int32_t x444 = INT32_MAX;
int8_t x445 = -1;
static volatile int32_t x448 = INT32_MIN;
int64_t x478 = -831LL;
int32_t x484 = -1;
uint32_t x486 = 2373090U;
volatile int32_t t95 = 3830;
volatile int8_t x499 = -1;
int64_t t97 = -126LL;
uint32_t x510 = 5295403U;
static volatile int32_t x511 = INT32_MIN;
uint8_t x512 = 14U;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	static volatile int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MAX;

	t0 = (x5%(x6&(x7^x8)));

	if (t0 != 15LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 44243593811LLU;
	volatile int32_t x10 = -108411;
	int32_t x12 = 2528;
	volatile uint64_t t1 = 26682LLU;

	t1 = (x9%(x10&(x11^x12)));

	if (t1 != 44243593811LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MIN;
	int32_t x16 = INT32_MIN;
	int64_t t2 = -2647LL;

	t2 = (x13%(x14&(x15^x16)));

	if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	static int16_t x18 = 1;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = INT16_MIN;
	volatile uint64_t t3 = 9LLU;

	t3 = (x17%(x18&(x19^x20)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = -206510961LL;
	int16_t x24 = INT16_MIN;
	int64_t t4 = 10129LL;

	t4 = (x21%(x22&(x23^x24)));

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	int32_t x28 = -1;
	int64_t t5 = -156429LL;

	t5 = (x25%(x26&(x27^x28)));

	if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x29 = INT8_MIN;
	static uint16_t x30 = UINT16_MAX;
	int16_t x32 = INT16_MIN;
	int32_t t6 = 163366953;

	t6 = (x29%(x30&(x31^x32)));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x34 = INT8_MAX;
	uint32_t x36 = 5582431U;
	int64_t t7 = 38111985368131896LL;

	t7 = (x33%(x34&(x35^x36)));

	if (t7 != 6LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = 5059U;
	uint64_t x39 = 10865001999185LLU;
	int16_t x40 = 20;
	volatile uint64_t t8 = 12703492011LLU;

	t8 = (x37%(x38&(x39^x40)));

	if (t8 != 5059LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -1LL;
	int64_t x43 = INT64_MAX;
	static int64_t x44 = INT64_MIN;
	volatile uint64_t t9 = 62152LLU;

	t9 = (x41%(x42&(x43^x44)));

	if (t9 != 129990LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x51 = 0;
	int16_t x52 = INT16_MIN;
	uint64_t t10 = 216LLU;

	t10 = (x49%(x50&(x51^x52)));

	if (t10 != 3447422976LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	volatile uint16_t x54 = 121U;
	volatile uint32_t x55 = UINT32_MAX;
	uint32_t x56 = 1239658U;
	volatile int64_t t11 = -28097975LL;

	t11 = (x53%(x54&(x55^x56)));

	if (t11 != -9LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = 21;
	volatile int64_t x59 = -1LL;
	int64_t x60 = INT64_MIN;
	volatile int64_t t12 = 852385960LL;

	t12 = (x57%(x58&(x59^x60)));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 373938U;
	uint8_t x66 = 9U;
	uint32_t x67 = 28U;
	uint64_t x68 = UINT64_MAX;

	t13 = (x65%(x66&(x67^x68)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MAX;
	int16_t x72 = INT16_MAX;
	int64_t t14 = 6LL;

	t14 = (x69%(x70&(x71^x72)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 19157U;
	int64_t x75 = 1LL;
	volatile int16_t x76 = -1;
	volatile int64_t t15 = -2438890LL;

	t15 = (x73%(x74&(x75^x76)));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = 12745;
	uint32_t x78 = 15207946U;
	int16_t x79 = 14;
	static int8_t x80 = INT8_MIN;
	static uint32_t t16 = 1648U;

	t16 = (x77%(x78&(x79^x80)));

	if (t16 != 12745U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 7268872798471LLU;
	volatile int64_t x82 = -1LL;
	int16_t x83 = -1;
	int32_t x84 = -533213;
	volatile uint64_t t17 = 731369216LLU;

	t17 = (x81%(x82&(x83^x84)));

	if (t17 != 443227LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -1LL;
	int16_t x86 = -1;
	static int8_t x87 = 28;
	int64_t t18 = -20386408586247LL;

	t18 = (x85%(x86&(x87^x88)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = -1;
	static volatile int16_t x90 = INT16_MAX;
	int32_t x91 = INT32_MIN;
	uint8_t x92 = 105U;
	int32_t t19 = -39384;

	t19 = (x89%(x90&(x91^x92)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MAX;
	int64_t x94 = -1LL;
	static uint8_t x95 = UINT8_MAX;
	uint8_t x96 = 6U;
	volatile int64_t t20 = 14LL;

	t20 = (x93%(x94&(x95^x96)));

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 22U;
	uint32_t x102 = 63U;
	volatile uint16_t x103 = 123U;
	volatile int8_t x104 = INT8_MIN;
	uint32_t t21 = 2809U;

	t21 = (x101%(x102&(x103^x104)));

	if (t21 != 22U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x109 = 1;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = -1;
	static volatile int32_t t22 = 199007;

	t22 = (x109%(x110&(x111^x112)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = -1LL;
	volatile int64_t t23 = 9LL;

	t23 = (x113%(x114&(x115^x116)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x121 = INT16_MIN;
	uint32_t x122 = UINT32_MAX;
	volatile uint32_t x124 = 2369137U;
	uint32_t t24 = 213987791U;

	t24 = (x121%(x122&(x123^x124)));

	if (t24 != 4705508U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = -1;
	int8_t x131 = -46;
	int64_t x132 = INT64_MIN;
	volatile int64_t t25 = 0LL;

	t25 = (x129%(x130&(x131^x132)));

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x133 = -1;
	uint16_t x135 = 3426U;
	int64_t t26 = -24407668LL;

	t26 = (x133%(x134&(x135^x136)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x153 = -1;
	int32_t x154 = -55;
	int64_t x156 = -86646LL;
	static volatile int64_t t27 = -1550924701980LL;

	t27 = (x153%(x154&(x155^x156)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x159 = -1LL;
	static volatile int64_t t28 = -10097LL;

	t28 = (x157%(x158&(x159^x160)));

	if (t28 != 14LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x162 = UINT8_MAX;
	uint16_t x164 = 760U;
	uint64_t t29 = 3395LLU;

	t29 = (x161%(x162&(x163^x164)));

	if (t29 != 30LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x166 = 1;
	uint16_t x167 = UINT16_MAX;
	uint16_t x168 = 98U;
	volatile int32_t t30 = 10191503;

	t30 = (x165%(x166&(x167^x168)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x169 = 2LLU;
	uint8_t x170 = UINT8_MAX;
	volatile int16_t x171 = -1;
	volatile int16_t x172 = 0;

	t31 = (x169%(x170&(x171^x172)));

	if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x173 = 3736U;
	static int8_t x174 = -17;
	int16_t x175 = -1;
	int64_t x176 = INT64_MAX;
	volatile int64_t t32 = 5697LL;

	t32 = (x173%(x174&(x175^x176)));

	if (t32 != 3736LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x181 = INT64_MIN;
	int8_t x182 = -14;
	static uint64_t t33 = 2142242340LLU;

	t33 = (x181%(x182&(x183^x184)));

	if (t33 != 12542LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = 7148810LL;
	uint32_t x187 = 2264059U;
	int64_t t34 = 69185113629676LL;

	t34 = (x185%(x186&(x187^x188)));

	if (t34 != -55666LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x190 = INT32_MAX;

	t35 = (x189%(x190&(x191^x192)));

	if (t35 != 45570544LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x194 = -1;
	volatile int32_t x195 = INT32_MIN;

	t36 = (x193%(x194&(x195^x196)));

	if (t36 != 2147483638LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x206 = 36736U;
	volatile int64_t x207 = -617314636859LL;
	int64_t x208 = 277LL;
	static int64_t t37 = -7892661LL;

	t37 = (x205%(x206&(x207^x208)));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MIN;
	volatile int8_t x211 = 1;
	static volatile uint64_t x212 = UINT64_MAX;

	t38 = (x209%(x210&(x211^x212)));

	if (t38 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x215 = 29832624211LLU;
	static uint16_t x216 = 1U;
	uint64_t t39 = 1LLU;

	t39 = (x213%(x214&(x215^x216)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x217 = 12;
	static int64_t x218 = INT64_MIN;
	volatile int64_t x220 = INT64_MAX;

	t40 = (x217%(x218&(x219^x220)));

	if (t40 != 12LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x222 = -26;
	int8_t x223 = INT8_MAX;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t41 = 5669071307LLU;

	t41 = (x221%(x222&(x223^x224)));

	if (t41 != 255LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x225 = 0;
	int8_t x226 = -1;
	int64_t x228 = 10540456027240LL;
	volatile int64_t t42 = 34161019790LL;

	t42 = (x225%(x226&(x227^x228)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x229 = 190594889215054112LL;
	uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 8154U;
	static uint32_t x232 = UINT32_MAX;
	static int64_t t43 = -235006642LL;

	t43 = (x229%(x230&(x231^x232)));

	if (t43 != 4260953738LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x235 = 35U;
	uint64_t x236 = 9638462954LLU;
	uint64_t t44 = 5883LLU;

	t44 = (x233%(x234&(x235^x236)));

	if (t44 != 195LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x241 = -1;
	int64_t x242 = -1LL;
	volatile int8_t x243 = -8;
	static uint8_t x244 = 0U;
	volatile int64_t t45 = 79934091LL;

	t45 = (x241%(x242&(x243^x244)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = -1;
	volatile int64_t x246 = INT64_MAX;
	uint16_t x247 = 80U;
	volatile int64_t t46 = 130696579719838496LL;

	t46 = (x245%(x246&(x247^x248)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x249 = 89U;
	uint64_t x250 = 1871560730708294965LLU;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = 0;
	uint64_t t47 = 5399505592514764LLU;

	t47 = (x249%(x250&(x251^x252)));

	if (t47 != 89LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x254 = UINT64_MAX;
	volatile uint16_t x255 = UINT16_MAX;

	t48 = (x253%(x254&(x255^x256)));

	if (t48 != 24952723LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x257 = -47484885;
	volatile uint32_t t49 = 17U;

	t49 = (x257%(x258&(x259^x260)));

	if (t49 != 2101230502U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x261 = -39084178312341094LL;
	volatile int16_t x263 = INT16_MIN;
	static int64_t t50 = 0LL;

	t50 = (x261%(x262&(x263^x264)));

	if (t50 != -9830LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = -1;
	static int64_t x267 = -1LL;
	volatile int16_t x268 = INT16_MIN;
	static volatile int64_t t51 = -448575535877148LL;

	t51 = (x265%(x266&(x267^x268)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x269 = -1;
	int32_t x270 = INT32_MAX;

	t52 = (x269%(x270&(x271^x272)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x273 = 2U;
	static int16_t x274 = -45;
	int32_t x276 = INT32_MAX;
	volatile uint32_t t53 = 67U;

	t53 = (x273%(x274&(x275^x276)));

	if (t53 != 2U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = INT8_MAX;
	int16_t x282 = INT16_MIN;
	volatile int32_t x283 = -1;
	int8_t x284 = 21;
	volatile int32_t t54 = 10124985;

	t54 = (x281%(x282&(x283^x284)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x286 = -1;
	uint8_t x288 = UINT8_MAX;
	int64_t t55 = -8153643100LL;

	t55 = (x285%(x286&(x287^x288)));

	if (t55 != 210LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x293 = 0U;
	volatile uint8_t x295 = 4U;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t56 = -34783901;

	t56 = (x293%(x294&(x295^x296)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x297 = 47U;
	volatile int8_t x298 = INT8_MIN;
	static int64_t x299 = INT64_MIN;
	static int64_t t57 = -306452640880898582LL;

	t57 = (x297%(x298&(x299^x300)));

	if (t57 != 47LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x303 = 407434907U;
	int64_t x304 = INT64_MIN;
	static volatile int64_t t58 = 14LL;

	t58 = (x301%(x302&(x303^x304)));

	if (t58 != -133LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x305 = UINT64_MAX;
	int16_t x306 = INT16_MIN;
	uint64_t x307 = 100553348916189LLU;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t59 = 1692977LLU;

	t59 = (x305%(x306&(x307^x308)));

	if (t59 != 100553348939775LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x310 = INT8_MAX;
	volatile int32_t x311 = 59;
	static int8_t x312 = INT8_MAX;
	volatile int32_t t60 = 0;

	t60 = (x309%(x310&(x311^x312)));

	if (t60 != -37) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x313 = INT32_MAX;
	static volatile uint64_t x315 = 998027442549LLU;
	volatile uint32_t x316 = 15118U;
	volatile uint64_t t61 = 1888246303422394257LLU;

	t61 = (x313%(x314&(x315^x316)));

	if (t61 != 67108443LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = INT8_MIN;
	int8_t x323 = 0;

	t62 = (x321%(x322&(x323^x324)));

	if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x326 = 45U;
	int64_t x327 = -1LL;

	t63 = (x325%(x326&(x327^x328)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x329 = 16774U;
	int16_t x330 = 345;
	uint16_t x331 = UINT16_MAX;
	int32_t x332 = -60;

	t64 = (x329%(x330&(x331^x332)));

	if (t64 != 24) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x333 = UINT16_MAX;
	int32_t x334 = 4594999;
	int64_t x335 = -60590137985LL;
	static uint64_t x336 = UINT64_MAX;
	volatile uint64_t t65 = 665372LLU;

	t65 = (x333%(x334&(x335^x336)));

	if (t65 != 65535LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = -1533;
	int64_t x338 = INT64_MAX;
	int64_t x339 = INT64_MIN;
	static int32_t x340 = -20;
	volatile int64_t t66 = 3156897339LL;

	t66 = (x337%(x338&(x339^x340)));

	if (t66 != -1533LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = -256;
	static int16_t x342 = INT16_MIN;
	static int64_t x343 = INT64_MIN;
	uint16_t x344 = 1U;
	int64_t t67 = 8083566LL;

	t67 = (x341%(x342&(x343^x344)));

	if (t67 != -256LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x346 = 266767U;
	volatile int16_t x347 = -4;
	uint8_t x348 = UINT8_MAX;
	uint32_t t68 = 534302914U;

	t68 = (x345%(x346&(x347^x348)));

	if (t68 != 211757U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = -2;
	int16_t x350 = INT16_MIN;
	static uint64_t x351 = 489LLU;
	static uint64_t t69 = 1356LLU;

	t69 = (x349%(x350&(x351^x352)));

	if (t69 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MIN;
	int16_t x355 = INT16_MAX;
	int32_t x356 = -85;
	volatile uint64_t t70 = 2779676LLU;

	t70 = (x353%(x354&(x355^x356)));

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x358 = 337999097314LL;
	int64_t x359 = -316700LL;
	int8_t x360 = INT8_MIN;

	t71 = (x357%(x358&(x359^x360)));

	if (t71 != 8989LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x369 = 0U;
	int64_t x370 = INT64_MAX;
	int8_t x371 = 3;

	t72 = (x369%(x370&(x371^x372)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x373 = 2066713614U;
	uint32_t x374 = 894072287U;
	int8_t x375 = 0;
	volatile int64_t x376 = INT64_MAX;
	int64_t t73 = 1919480784544067056LL;

	t73 = (x373%(x374&(x375^x376)));

	if (t73 != 278569040LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x381 = -1;
	uint16_t x382 = 79U;
	volatile int32_t x384 = -4;
	static volatile int32_t t74 = -33;

	t74 = (x381%(x382&(x383^x384)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x389 = -1;
	int8_t x390 = 1;
	static volatile int16_t x392 = INT16_MAX;

	t75 = (x389%(x390&(x391^x392)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x394 = 3U;
	uint32_t x395 = 59385684U;
	int32_t x396 = INT32_MAX;
	volatile uint64_t t76 = 10928602LLU;

	t76 = (x393%(x394&(x395^x396)));

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x401 = INT64_MIN;
	static int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	volatile uint8_t x404 = UINT8_MAX;
	volatile int64_t t77 = -1942596536322LL;

	t77 = (x401%(x402&(x403^x404)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x405 = 296;
	uint32_t x406 = 507547U;
	int8_t x407 = -60;
	volatile uint32_t t78 = 41511130U;

	t78 = (x405%(x406&(x407^x408)));

	if (t78 != 296U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x421 = 1886LLU;
	static uint16_t x422 = 44U;
	static int8_t x423 = INT8_MAX;
	int8_t x424 = INT8_MIN;
	uint64_t t79 = 43546397LLU;

	t79 = (x421%(x422&(x423^x424)));

	if (t79 != 38LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x425 = INT16_MAX;
	uint8_t x426 = 17U;
	int64_t x428 = -108LL;

	t80 = (x425%(x426&(x427^x428)));

	if (t80 != 15LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MAX;
	volatile uint64_t t81 = 883058921LLU;

	t81 = (x429%(x430&(x431^x432)));

	if (t81 != 1797032876662410LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x433 = INT64_MIN;
	int16_t x434 = INT16_MAX;
	static uint64_t x435 = 3008824218LLU;

	t82 = (x433%(x434&(x435^x436)));

	if (t82 != 646LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x441 = INT64_MAX;
	int16_t x442 = -1;
	int64_t x443 = INT64_MIN;
	int64_t t83 = -113547897973LL;

	t83 = (x441%(x442&(x443^x444)));

	if (t83 != 2147483646LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x446 = 1626335467401101LLU;
	volatile int64_t x447 = -4710751512549405LL;
	static volatile uint64_t t84 = 182235746LLU;

	t84 = (x445%(x446&(x447^x448)));

	if (t84 != 19958767020555LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x449 = 102459194;
	uint8_t x450 = 5U;
	static volatile uint32_t x451 = 54519387U;
	int32_t x452 = INT32_MIN;
	volatile uint32_t t85 = 2657U;

	t85 = (x449%(x450&(x451^x452)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x457 = -1;
	int64_t x458 = -1LL;
	volatile int16_t x459 = -1;
	volatile int16_t x460 = INT16_MIN;
	volatile int64_t t86 = -2578556451LL;

	t86 = (x457%(x458&(x459^x460)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x461 = 7;
	int8_t x462 = -1;
	int64_t x463 = INT64_MAX;
	uint16_t x464 = 27U;
	int64_t t87 = -1LL;

	t87 = (x461%(x462&(x463^x464)));

	if (t87 != 7LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x465 = 844672590846LL;
	uint8_t x466 = 114U;
	volatile uint64_t x467 = 264867519781LLU;
	uint64_t x468 = 1079516551390335LLU;
	volatile uint64_t t88 = 28LLU;

	t88 = (x465%(x466&(x467^x468)));

	if (t88 != 18LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x469 = 21U;
	int32_t x470 = -201;
	int64_t x471 = 511066801881241LL;
	static int32_t x472 = INT32_MAX;
	int64_t t89 = 1812LL;

	t89 = (x469%(x470&(x471^x472)));

	if (t89 != 21LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = INT32_MIN;
	int8_t x474 = INT8_MIN;
	int16_t x475 = 5488;
	volatile int8_t x476 = -1;
	int32_t t90 = 435669309;

	t90 = (x473%(x474&(x475^x476)));

	if (t90 != -4480) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x477 = INT64_MIN;
	int16_t x479 = -1;
	volatile int64_t x480 = 42638351LL;
	int64_t t91 = -867966462349660LL;

	t91 = (x477%(x478&(x479^x480)));

	if (t91 != -28564544LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x481 = INT64_MAX;
	uint32_t x482 = 811602U;
	int64_t x483 = INT64_MIN;
	static volatile int64_t t92 = -51719983270LL;

	t92 = (x481%(x482&(x483^x484)));

	if (t92 != 522727LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x485 = INT64_MAX;
	static volatile int32_t x487 = INT32_MIN;
	int16_t x488 = INT16_MIN;
	static int64_t t93 = 2509485446041179LL;

	t93 = (x485%(x486&(x487^x488)));

	if (t93 != 2097151LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x489 = 1504U;
	uint8_t x490 = 91U;
	volatile int32_t x491 = -27;
	static uint64_t x492 = 2104551LLU;
	uint64_t t94 = 110LLU;

	t94 = (x489%(x490&(x491^x492)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x493 = 0U;
	int32_t x494 = -1;
	static volatile int8_t x495 = INT8_MIN;
	static int8_t x496 = -1;

	t95 = (x493%(x494&(x495^x496)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x497 = INT32_MAX;
	volatile int16_t x498 = INT16_MIN;
	int8_t x500 = 1;
	volatile int32_t t96 = -2695;

	t96 = (x497%(x498&(x499^x500)));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x501 = 1822842U;
	volatile int64_t x502 = INT64_MIN;
	volatile int64_t x503 = -95390522936492LL;
	int64_t x504 = 2LL;

	t97 = (x501%(x502&(x503^x504)));

	if (t97 != 1822842LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x505 = -1;
	int32_t x506 = INT32_MIN;
	uint16_t x507 = 29U;
	static int32_t x508 = INT32_MIN;
	int32_t t98 = -21349;

	t98 = (x505%(x506&(x507^x508)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x509 = -12;
	volatile uint32_t t99 = 98295777U;

	t99 = (x509%(x510&(x511^x512)));

	if (t99 != 4U) { NG(); } else { ; }
	
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

