#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
int16_t x9 = 5;
static volatile uint8_t x11 = 27U;
uint16_t x22 = UINT16_MAX;
uint8_t x24 = UINT8_MAX;
int16_t x25 = -1;
uint64_t x27 = 8669973614463LLU;
static volatile int64_t t7 = -30096010LL;
int8_t x33 = INT8_MAX;
int32_t x34 = -1;
uint32_t t10 = 92618743U;
static volatile int16_t x48 = INT16_MAX;
uint32_t t14 = 20868911U;
uint32_t x62 = UINT32_MAX;
uint32_t x66 = UINT32_MAX;
static int32_t x68 = -194;
uint8_t x69 = 65U;
int64_t x70 = INT64_MAX;
uint64_t x73 = 52LLU;
int32_t x79 = -2617;
int64_t x81 = -53LL;
int32_t x85 = -236;
static int32_t t21 = 0;
static int32_t x92 = INT32_MIN;
int64_t x96 = -1LL;
uint16_t x101 = 7459U;
uint8_t x103 = UINT8_MAX;
int32_t x108 = 0;
int16_t x109 = 51;
uint8_t x112 = UINT8_MAX;
int64_t t27 = -121763427511612231LL;
int32_t x114 = -1;
int32_t x120 = INT32_MIN;
int64_t x124 = -1LL;
int64_t x127 = 101438LL;
static volatile int64_t x135 = INT64_MAX;
int64_t x136 = INT64_MIN;
int64_t x143 = INT64_MIN;
int8_t x144 = INT8_MIN;
volatile int64_t t36 = -55547936407731120LL;
static int64_t x150 = -126651211490711LL;
volatile int32_t x151 = 8169130;
int64_t t37 = 1690LL;
volatile int32_t t39 = -81;
int8_t x161 = -57;
int32_t x162 = INT32_MIN;
int32_t x165 = 3;
static uint8_t x179 = UINT8_MAX;
static volatile int32_t t44 = -5601280;
volatile uint16_t x181 = UINT16_MAX;
uint64_t x184 = 13088262216011917LLU;
volatile int16_t x188 = -3083;
int32_t x196 = INT32_MAX;
volatile uint64_t t48 = 243838279775075LLU;
int64_t x199 = -1LL;
int64_t x201 = INT64_MIN;
uint64_t x204 = UINT64_MAX;
static uint8_t x205 = 1U;
volatile int8_t x208 = INT8_MIN;
int64_t x209 = INT64_MAX;
volatile int32_t x211 = INT32_MAX;
uint64_t x212 = UINT64_MAX;
int64_t x214 = INT64_MIN;
int64_t x219 = 152713365158659LL;
uint64_t x220 = 51529459321LLU;
uint16_t x225 = 1U;
int8_t x227 = -1;
volatile uint8_t x232 = 33U;
volatile int8_t x234 = INT8_MIN;
static volatile int8_t x259 = -1;
uint64_t x260 = 516833123857385LLU;
volatile int64_t t64 = 872954066318330423LL;
uint16_t x263 = UINT16_MAX;
static int32_t t65 = 213;
uint8_t x265 = 44U;
static int32_t x267 = INT32_MIN;
int64_t t66 = 33563470480949040LL;
static volatile uint32_t x270 = 238777U;
static uint64_t x271 = 98343191760LLU;
uint16_t x276 = 2U;
static uint16_t x278 = 116U;
int64_t x284 = 109306923278LL;
int64_t x287 = INT64_MIN;
int64_t x290 = INT64_MIN;
static uint32_t x292 = 1072654U;
volatile int64_t t73 = 1LL;
static uint32_t x304 = 87U;
uint8_t x311 = 60U;
int16_t x314 = -1;
uint32_t x316 = 2U;
uint64_t x320 = UINT64_MAX;
int64_t t79 = -26713706907955LL;
static uint32_t x321 = 63196400U;
int16_t x333 = INT16_MAX;
uint32_t x334 = UINT32_MAX;
volatile uint32_t t83 = 2U;
int64_t x337 = INT64_MIN;
volatile int8_t x338 = 0;
uint8_t x341 = 3U;
int16_t x344 = INT16_MAX;
static int32_t x345 = INT32_MIN;
int32_t x346 = INT32_MIN;
int32_t t86 = -5;
int16_t x357 = 2;
uint16_t x358 = 8U;
static int8_t x359 = INT8_MAX;
int32_t t89 = 51861;
static int32_t x361 = INT32_MIN;
static int32_t t90 = -124841;
uint16_t x368 = 27129U;
volatile int8_t x370 = 1;
uint16_t x384 = 0U;
volatile int64_t t95 = -873523LL;
uint64_t x393 = 748216922LLU;
uint8_t x395 = 0U;


void f0(void) {
	uint8_t x1 = 0U;
	uint16_t x2 = UINT16_MAX;
	uint64_t x3 = UINT64_MAX;
	int32_t t0 = 1151;

	t0 = ((x1^x2)*(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -46;
	int64_t x6 = -37374343702767LL;
	int16_t x7 = -1;
	int16_t x8 = -1;
	int64_t t1 = 9616267LL;

	t1 = ((x5^x6)*(x7<x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	static int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = -5581;

	t2 = ((x9^x10)*(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int8_t x14 = INT8_MAX;
	volatile uint16_t x15 = 4383U;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 1238136;

	t3 = ((x13^x14)*(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 684187983092LLU;
	int64_t x18 = -1LL;
	int64_t x19 = INT64_MIN;
	int16_t x20 = 1;
	uint64_t t4 = 439662320LLU;

	t4 = ((x17^x18)*(x19<x20));

	if (t4 != 18446743389521568523LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static int16_t x23 = INT16_MIN;
	volatile uint64_t t5 = 2046423LLU;

	t5 = ((x21^x22)*(x23<x24));

	if (t5 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = INT64_MAX;
	int8_t x28 = 2;
	volatile int64_t t6 = 4409517855392439011LL;

	t6 = ((x25^x26)*(x27<x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 9597203115347LL;
	static uint8_t x30 = 90U;
	int16_t x31 = -1;
	int8_t x32 = INT8_MIN;

	t7 = ((x29^x30)*(x31<x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = INT8_MIN;
	static uint32_t x36 = 197946U;
	volatile int32_t t8 = -937691393;

	t8 = ((x33^x34)*(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 3450040U;
	int64_t x38 = 4901253238129LL;
	int16_t x39 = INT16_MAX;
	static uint32_t x40 = UINT32_MAX;
	int64_t t9 = -1691042140147798LL;

	t9 = ((x37^x38)*(x39<x40));

	if (t9 != 4901249870281LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = -1;
	int64_t x43 = -10051193760LL;
	int16_t x44 = INT16_MIN;

	t10 = ((x41^x42)*(x43<x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	static uint64_t x47 = 32105898684602LLU;
	int32_t t11 = 12;

	t11 = ((x45^x46)*(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = 12530590;
	int32_t x51 = 2828894;
	static volatile int16_t x52 = INT16_MIN;
	int32_t t12 = 3091;

	t12 = ((x49^x50)*(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint8_t x54 = 122U;
	static uint8_t x55 = 5U;
	int32_t x56 = -19954;
	int32_t t13 = -1;

	t13 = ((x53^x54)*(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 316063U;
	int8_t x58 = INT8_MAX;
	uint64_t x59 = 400149299633LLU;
	static volatile int64_t x60 = INT64_MIN;

	t14 = ((x57^x58)*(x59<x60));

	if (t14 != 316128U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 27852483U;
	int64_t x63 = -51386LL;
	static uint64_t x64 = 124LLU;
	static volatile uint32_t t15 = 1U;

	t15 = ((x61^x62)*(x63<x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -16315581;
	uint8_t x67 = UINT8_MAX;
	volatile uint32_t t16 = 33372642U;

	t16 = ((x65^x66)*(x67<x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x71 = UINT32_MAX;
	static int16_t x72 = INT16_MIN;
	volatile int64_t t17 = -10596708952LL;

	t17 = ((x69^x70)*(x71<x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MAX;
	static int32_t x76 = INT32_MIN;
	volatile uint64_t t18 = 11327254458001095LLU;

	t18 = ((x73^x74)*(x75<x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = 14687;
	volatile int32_t x78 = 1;
	volatile int16_t x80 = -1;
	static volatile int32_t t19 = -72206124;

	t19 = ((x77^x78)*(x79<x80));

	if (t19 != 14686) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x82 = 11;
	uint64_t x83 = 15523435335196747LLU;
	static uint64_t x84 = 556892LLU;
	volatile int64_t t20 = 22641078228404536LL;

	t20 = ((x81^x82)*(x83<x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MAX;
	static int8_t x87 = 25;
	static volatile int8_t x88 = INT8_MAX;

	t21 = ((x85^x86)*(x87<x88));

	if (t21 != -149) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	static int64_t x90 = 205465LL;
	int64_t x91 = INT64_MIN;
	static volatile int64_t t22 = 53953058230LL;

	t22 = ((x89^x90)*(x91<x92));

	if (t22 != -205466LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 454228U;
	uint64_t x94 = 2718809162LLU;
	volatile int16_t x95 = 3;
	volatile uint64_t t23 = 211059290LLU;

	t23 = ((x93^x94)*(x95<x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 0;
	uint32_t x98 = UINT32_MAX;
	static volatile uint8_t x99 = 2U;
	static volatile uint64_t x100 = UINT64_MAX;
	uint32_t t24 = UINT32_MAX;

	t24 = ((x97^x98)*(x99<x100));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x102 = 0U;
	volatile int16_t x104 = INT16_MAX;
	int32_t t25 = 14659429;

	t25 = ((x101^x102)*(x103<x104));

	if (t25 != 7459) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 820U;
	volatile int8_t x106 = INT8_MAX;
	static volatile uint64_t x107 = UINT64_MAX;
	uint32_t t26 = 34010U;

	t26 = ((x105^x106)*(x107<x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = 0LL;
	static int32_t x111 = 5;

	t27 = ((x109^x110)*(x111<x112));

	if (t27 != 51LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -94980037105010LL;
	static int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MAX;
	volatile int64_t t28 = -3168975877169846LL;

	t28 = ((x113^x114)*(x115<x116));

	if (t28 != 94980037105009LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 183178;
	int64_t x118 = -549893377205553LL;
	int64_t x119 = INT64_MIN;
	int64_t t29 = -1LL;

	t29 = ((x117^x118)*(x119<x120));

	if (t29 != -549893377322683LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -28;
	uint64_t x122 = 132461518505819LLU;
	int8_t x123 = -1;
	volatile uint64_t t30 = 1694605LLU;

	t30 = ((x121^x122)*(x123<x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MIN;
	static int64_t x128 = INT64_MIN;
	volatile int32_t t31 = 32;

	t31 = ((x125^x126)*(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 133605451878LL;
	int32_t x130 = -218788247;
	static int8_t x131 = 10;
	int32_t x132 = INT32_MIN;
	int64_t t32 = 1LL;

	t32 = ((x129^x130)*(x131<x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	static int16_t x134 = 46;
	int32_t t33 = -3037;

	t33 = ((x133^x134)*(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = -3;
	int8_t x138 = -22;
	uint32_t x139 = 1U;
	static volatile uint8_t x140 = 49U;
	int32_t t34 = -196;

	t34 = ((x137^x138)*(x139<x140));

	if (t34 != 23) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = -5;
	int64_t t35 = 1410LL;

	t35 = ((x141^x142)*(x143<x144));

	if (t35 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	int64_t x146 = -91LL;
	static int8_t x147 = -1;
	static volatile int16_t x148 = -9429;

	t36 = ((x145^x146)*(x147<x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MAX;
	int16_t x152 = 1849;

	t37 = ((x149^x150)*(x151<x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -1;
	static volatile int64_t x154 = -1LL;
	int16_t x155 = 924;
	uint8_t x156 = 7U;
	volatile int64_t t38 = -56919615955212LL;

	t38 = ((x153^x154)*(x155<x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	static int32_t x158 = INT32_MAX;
	int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MIN;

	t39 = ((x157^x158)*(x159<x160));

	if (t39 != 2147418112) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x163 = UINT16_MAX;
	uint16_t x164 = 3U;
	volatile int32_t t40 = 387;

	t40 = ((x161^x162)*(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = UINT32_MAX;
	int32_t x167 = INT32_MAX;
	static uint32_t x168 = UINT32_MAX;
	volatile uint32_t t41 = 44U;

	t41 = ((x165^x166)*(x167<x168));

	if (t41 != 4294967292U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	static int16_t x170 = 182;
	int16_t x171 = 341;
	volatile int32_t x172 = -1;
	volatile int32_t t42 = 12072216;

	t42 = ((x169^x170)*(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = UINT16_MAX;
	int16_t x174 = 0;
	int8_t x175 = INT8_MIN;
	static int64_t x176 = INT64_MIN;
	static int32_t t43 = -75;

	t43 = ((x173^x174)*(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = -1;
	int8_t x180 = INT8_MIN;

	t44 = ((x177^x178)*(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x182 = -1;
	int8_t x183 = 51;
	volatile int32_t t45 = -51285;

	t45 = ((x181^x182)*(x183<x184));

	if (t45 != -65536) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int8_t x186 = -6;
	int8_t x187 = INT8_MAX;
	static int32_t t46 = -414006;

	t46 = ((x185^x186)*(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1;
	volatile uint32_t x190 = UINT32_MAX;
	int16_t x191 = -1;
	int16_t x192 = -1;
	uint32_t t47 = 127U;

	t47 = ((x189^x190)*(x191<x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	volatile uint64_t x194 = UINT64_MAX;
	int16_t x195 = INT16_MIN;

	t48 = ((x193^x194)*(x195<x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = 6924229LL;
	volatile uint16_t x198 = 15119U;
	int8_t x200 = 22;
	volatile int64_t t49 = -526506LL;

	t49 = ((x197^x198)*(x199<x200));

	if (t49 != 6921418LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x202 = 270U;
	static int8_t x203 = -1;
	int64_t t50 = 867657587LL;

	t50 = ((x201^x202)*(x203<x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MAX;
	int64_t t51 = -253935694428754573LL;

	t51 = ((x205^x206)*(x207<x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = -1;
	static volatile int64_t t52 = INT64_MIN;

	t52 = ((x209^x210)*(x211<x212));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static uint32_t x215 = 43U;
	int32_t x216 = INT32_MAX;
	volatile int64_t t53 = 2901311149422172LL;

	t53 = ((x213^x214)*(x215<x216));

	if (t53 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile int32_t x218 = 108722;
	int64_t t54 = 234LL;

	t54 = ((x217^x218)*(x219<x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 30U;
	static int64_t x222 = INT64_MIN;
	uint64_t x223 = 429328836796LLU;
	static volatile uint32_t x224 = 23831U;
	volatile int64_t t55 = 5574970LL;

	t55 = ((x221^x222)*(x223<x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x226 = UINT8_MAX;
	uint64_t x228 = 3LLU;
	int32_t t56 = 5873753;

	t56 = ((x225^x226)*(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = INT64_MIN;
	static int8_t x231 = INT8_MIN;
	int64_t t57 = 28329940758381026LL;

	t57 = ((x229^x230)*(x231<x232));

	if (t57 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 4108U;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -279;

	t58 = ((x233^x234)*(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x238 = 47U;
	uint8_t x239 = 3U;
	static volatile int16_t x240 = INT16_MIN;
	volatile uint32_t t59 = 617426U;

	t59 = ((x237^x238)*(x239<x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = 3;
	int32_t x242 = INT32_MAX;
	volatile int16_t x243 = -531;
	int8_t x244 = -1;
	volatile int32_t t60 = 0;

	t60 = ((x241^x242)*(x243<x244));

	if (t60 != 2147483644) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -1;
	uint8_t x246 = 19U;
	int32_t x247 = INT32_MIN;
	static int32_t x248 = -86;
	volatile int32_t t61 = -4;

	t61 = ((x245^x246)*(x247<x248));

	if (t61 != -20) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	static uint16_t x250 = 11025U;
	int16_t x251 = 1;
	int8_t x252 = -1;
	volatile int32_t t62 = 1;

	t62 = ((x249^x250)*(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	int16_t x254 = -1;
	int64_t x255 = INT64_MIN;
	volatile int8_t x256 = 0;
	volatile int32_t t63 = INT32_MIN;

	t63 = ((x253^x254)*(x255<x256));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = UINT32_MAX;
	int64_t x258 = INT64_MIN;

	t64 = ((x257^x258)*(x259<x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 13U;
	static int32_t x262 = INT32_MAX;
	int16_t x264 = INT16_MIN;

	t65 = ((x261^x262)*(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = 1121486482489LL;
	static int8_t x268 = -1;

	t66 = ((x265^x266)*(x267<x268));

	if (t66 != 1121486482453LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	static int8_t x272 = -1;
	uint32_t t67 = 185271706U;

	t67 = ((x269^x270)*(x271<x272));

	if (t67 != 238790U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = INT16_MAX;
	uint8_t x274 = 0U;
	int16_t x275 = INT16_MAX;
	int32_t t68 = 1698;

	t68 = ((x273^x274)*(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	uint64_t x279 = 50112217278090187LLU;
	static volatile int64_t x280 = -1LL;
	int64_t t69 = -464473764009LL;

	t69 = ((x277^x278)*(x279<x280));

	if (t69 != 9223372036854775691LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MIN;
	static volatile int64_t x282 = -1LL;
	uint16_t x283 = 132U;
	int64_t t70 = INT64_MAX;

	t70 = ((x281^x282)*(x283<x284));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = INT32_MIN;
	volatile int32_t x288 = -1923;
	volatile int32_t t71 = -221329;

	t71 = ((x285^x286)*(x287<x288));

	if (t71 != 2147450880) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint8_t x291 = 31U;
	volatile int64_t t72 = -1LL;

	t72 = ((x289^x290)*(x291<x292));

	if (t72 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 45364U;
	int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MAX;
	uint8_t x296 = 2U;

	t73 = ((x293^x294)*(x295<x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	int64_t x298 = 4994LL;
	int16_t x299 = INT16_MIN;
	static int32_t x300 = -1;
	int64_t t74 = -12474463719217LL;

	t74 = ((x297^x298)*(x299<x300));

	if (t74 != 60541LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = 3794LL;
	volatile int32_t t75 = -7670;

	t75 = ((x301^x302)*(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = -1;
	int8_t x307 = -1;
	static uint32_t x308 = 12802U;
	static volatile int32_t t76 = 72331350;

	t76 = ((x305^x306)*(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	volatile int64_t x310 = INT64_MAX;
	volatile uint8_t x312 = 68U;
	static int64_t t77 = 13537601028627084LL;

	t77 = ((x309^x310)*(x311<x312));

	if (t77 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = -1LL;
	int8_t x315 = INT8_MAX;
	volatile int64_t t78 = -42998LL;

	t78 = ((x313^x314)*(x315<x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -371;
	static volatile int64_t x318 = -1LL;
	static volatile int16_t x319 = INT16_MIN;

	t79 = ((x317^x318)*(x319<x320));

	if (t79 != 370LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x322 = 3;
	int8_t x323 = INT8_MIN;
	volatile uint64_t x324 = UINT64_MAX;
	volatile uint32_t t80 = 7U;

	t80 = ((x321^x322)*(x323<x324));

	if (t80 != 63196403U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int32_t x326 = INT32_MIN;
	uint32_t x327 = UINT32_MAX;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t81 = 4358475935003301402LLU;

	t81 = ((x325^x326)*(x327<x328));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	static volatile int32_t x332 = INT32_MIN;
	volatile uint32_t t82 = 70719U;

	t82 = ((x329^x330)*(x331<x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x335 = UINT8_MAX;
	int8_t x336 = -9;

	t83 = ((x333^x334)*(x335<x336));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x339 = 737U;
	int32_t x340 = INT32_MIN;
	static volatile int64_t t84 = 1LL;

	t84 = ((x337^x338)*(x339<x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MIN;
	uint8_t x343 = 26U;
	volatile int32_t t85 = -7956412;

	t85 = ((x341^x342)*(x343<x344));

	if (t85 != -125) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x347 = INT64_MIN;
	int32_t x348 = INT32_MIN;

	t86 = ((x345^x346)*(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MAX;
	int16_t x350 = -410;
	int8_t x351 = INT8_MAX;
	int64_t x352 = INT64_MIN;
	int32_t t87 = 194;

	t87 = ((x349^x350)*(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 15606U;
	volatile int8_t x354 = -1;
	static int16_t x355 = INT16_MIN;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t88 = -81346964;

	t88 = ((x353^x354)*(x355<x356));

	if (t88 != -15607) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x360 = 114U;

	t89 = ((x357^x358)*(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MIN;

	t90 = ((x361^x362)*(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	volatile int32_t x366 = INT32_MAX;
	static volatile int8_t x367 = INT8_MIN;
	volatile int32_t t91 = INT32_MIN;

	t91 = ((x365^x366)*(x367<x368));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x371 = INT8_MIN;
	static int8_t x372 = -42;
	int32_t t92 = 77204809;

	t92 = ((x369^x370)*(x371<x372));

	if (t92 != 254) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -5999LL;
	int64_t x374 = 1435937594494648LL;
	int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MIN;
	int64_t t93 = -1832229953245533025LL;

	t93 = ((x373^x374)*(x375<x376));

	if (t93 != -1435937594497495LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -12;
	int64_t x378 = INT64_MAX;
	volatile uint16_t x379 = 5088U;
	static int32_t x380 = INT32_MAX;
	static volatile int64_t t94 = -1LL;

	t94 = ((x377^x378)*(x379<x380));

	if (t94 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MIN;

	t95 = ((x381^x382)*(x383<x384));

	if (t95 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -10;
	uint8_t x386 = 25U;
	int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t96 = 556975460;

	t96 = ((x385^x386)*(x387<x388));

	if (t96 != -17) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 22U;
	uint16_t x390 = UINT16_MAX;
	uint64_t x391 = 13585030755LLU;
	int8_t x392 = -1;
	int32_t t97 = 14;

	t97 = ((x389^x390)*(x391<x392));

	if (t97 != 65513) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x394 = 32509916U;
	uint16_t x396 = 1U;
	volatile uint64_t t98 = 1017311382846634745LLU;

	t98 = ((x393^x394)*(x395<x396));

	if (t98 != 761851270LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	volatile int16_t x398 = -1536;
	static uint64_t x399 = 2238LLU;
	volatile int64_t x400 = 30784014851044638LL;
	static int32_t t99 = -117130;

	t99 = ((x397^x398)*(x399<x400));

	if (t99 != -1535) { NG(); } else { ; }
	
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

