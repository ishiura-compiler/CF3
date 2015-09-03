#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -265885671;
int64_t x7 = -1LL;
int64_t x8 = -1LL;
int32_t x14 = INT32_MIN;
static int32_t t3 = 662;
volatile uint64_t t5 = 8297939LLU;
int64_t x38 = INT64_MAX;
static int64_t x41 = -754297031LL;
uint64_t x42 = UINT64_MAX;
int64_t x46 = INT64_MAX;
volatile uint64_t x47 = 9655238687094658LLU;
uint8_t x52 = 2U;
volatile uint64_t t11 = 738616755LLU;
uint16_t x55 = 436U;
int16_t x61 = INT16_MAX;
static int8_t x65 = INT8_MIN;
static int8_t x71 = 0;
int16_t x72 = INT16_MIN;
int64_t x78 = INT64_MIN;
static int64_t t18 = -22LL;
uint64_t x84 = 325868LLU;
static uint64_t t19 = 30041880LLU;
volatile int32_t t21 = 61143;
volatile uint16_t x98 = UINT16_MAX;
int32_t x101 = -1;
volatile uint64_t t26 = 26087326499479647LLU;
uint64_t x113 = 7LLU;
int8_t x115 = INT8_MIN;
static volatile uint64_t t27 = 1LLU;
uint8_t x117 = 71U;
volatile int64_t x138 = INT64_MIN;
int8_t x140 = -1;
volatile int64_t x141 = 247878626890292500LL;
volatile int64_t x142 = INT64_MIN;
int8_t x149 = INT8_MIN;
int32_t x157 = 442048;
static volatile int16_t x161 = -1;
static int32_t x163 = INT32_MIN;
int64_t t42 = -5984LL;
int32_t x177 = -101690;
uint16_t x184 = UINT16_MAX;
volatile uint32_t t46 = UINT32_MAX;
int32_t x199 = INT32_MIN;
int16_t x201 = 27;
int64_t t51 = -8086939467001690LL;
int32_t x213 = -30;
uint8_t x214 = UINT8_MAX;
volatile int64_t x217 = -1098925633785135734LL;
volatile int64_t t53 = 11431865LL;
int32_t x232 = INT32_MIN;
uint16_t x233 = UINT16_MAX;
int64_t x235 = INT64_MIN;
int64_t x236 = INT64_MIN;
int16_t x238 = -1;
static volatile int16_t x245 = INT16_MIN;
int32_t x247 = 76;
int16_t x249 = 10680;
volatile int64_t t62 = -15811797472LL;
static int8_t x259 = -2;
uint64_t x260 = UINT64_MAX;
int64_t x269 = INT64_MIN;
static uint32_t x273 = 4U;
int8_t x275 = -1;
int16_t x278 = INT16_MAX;
volatile uint64_t x291 = 110572831816521LLU;
static int8_t x300 = -1;
int64_t x306 = INT64_MIN;
volatile int8_t x308 = INT8_MAX;
uint32_t x314 = 1214548U;
uint16_t x315 = 3560U;
int32_t t76 = -4;
uint64_t x326 = 9987LLU;
int64_t t79 = -7LL;
volatile int32_t t80 = 45013;
volatile int32_t x344 = -1;
int16_t x345 = 0;
int8_t x350 = -2;
int8_t x351 = 1;
uint8_t x353 = 1U;
static int64_t t89 = 0LL;
static uint64_t x374 = 1LLU;
int64_t x375 = -1LL;
volatile uint8_t x377 = 1U;
int32_t t91 = -64;
static int32_t t92 = -1619;
int32_t x400 = 189490126;
static int16_t x408 = -1;
int32_t t98 = 10;
static volatile int32_t x412 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = 86003126;
	static volatile int32_t x3 = -1;
	int16_t x4 = INT16_MIN;

	t0 = ((x1|x2)+(x3<x4));

	if (t0 != -12874) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	volatile int64_t x6 = INT64_MAX;
	int64_t t1 = INT64_MAX;

	t1 = ((x5|x6)+(x7<x8));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	static int8_t x10 = 9;
	static volatile uint32_t x11 = 20U;
	volatile int64_t x12 = -2764606468LL;
	static int32_t t2 = 31879072;

	t2 = ((x9|x10)+(x11<x12));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 0;
	volatile int16_t x15 = INT16_MAX;
	uint16_t x16 = UINT16_MAX;

	t3 = ((x13|x14)+(x15<x16));

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 0U;
	uint16_t x18 = UINT16_MAX;
	volatile int64_t x19 = -12540427478LL;
	volatile uint64_t x20 = UINT64_MAX;
	int32_t t4 = -6;

	t4 = ((x17|x18)+(x19<x20));

	if (t4 != 65536) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = 402845238137194LLU;
	int64_t x26 = INT64_MIN;
	int64_t x27 = -1LL;
	int64_t x28 = INT64_MAX;

	t5 = ((x25|x26)+(x27<x28));

	if (t5 != 9223774882092913003LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 9458U;
	int8_t x30 = -1;
	volatile uint64_t x31 = 122701LLU;
	int64_t x32 = -1LL;
	static volatile int32_t t6 = -164518168;

	t6 = ((x29|x30)+(x31<x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = 221243491137639LL;
	volatile uint32_t x35 = 66033135U;
	static int16_t x36 = INT16_MAX;
	static int64_t t7 = -776LL;

	t7 = ((x33|x34)+(x35<x36));

	if (t7 != -25LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int32_t x39 = 1;
	volatile int8_t x40 = -45;
	int64_t t8 = INT64_MAX;

	t8 = ((x37|x38)+(x39<x40));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x43 = 338U;
	static int32_t x44 = INT32_MIN;
	volatile uint64_t t9 = 401204LLU;

	t9 = ((x41|x42)+(x43<x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	static int32_t x48 = INT32_MIN;
	volatile int64_t t10 = -18897292LL;

	t10 = ((x45|x46)+(x47<x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 0;
	volatile uint64_t x50 = 110347069126022001LLU;
	volatile int64_t x51 = 12836913096991776LL;

	t11 = ((x49|x50)+(x51<x52));

	if (t11 != 110347069126022001LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int16_t x54 = -1;
	int64_t x56 = -95LL;
	int32_t t12 = -1056262621;

	t12 = ((x53|x54)+(x55<x56));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	uint8_t x58 = UINT8_MAX;
	static int8_t x59 = INT8_MIN;
	int64_t x60 = 1387LL;
	volatile int32_t t13 = -3247;

	t13 = ((x57|x58)+(x59<x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = INT16_MIN;
	static uint8_t x63 = 15U;
	int64_t x64 = INT64_MAX;
	int32_t t14 = -2061737;

	t14 = ((x61|x62)+(x63<x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x66 = UINT8_MAX;
	int16_t x67 = -1;
	uint8_t x68 = 0U;
	int32_t t15 = -132;

	t15 = ((x65|x66)+(x67<x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	volatile uint64_t x70 = UINT64_MAX;
	static uint64_t t16 = UINT64_MAX;

	t16 = ((x69|x70)+(x71<x72));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = -1LL;
	volatile int32_t x74 = INT32_MIN;
	int16_t x75 = 288;
	uint32_t x76 = 28453405U;
	int64_t t17 = -6836760503LL;

	t17 = ((x73|x74)+(x75<x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int64_t x79 = INT64_MAX;
	int8_t x80 = -10;

	t18 = ((x77|x78)+(x79<x80));

	if (t18 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 21507129LLU;
	static uint32_t x82 = 14010264U;
	int16_t x83 = INT16_MIN;

	t19 = ((x81|x82)+(x83<x84));

	if (t19 != 31322041LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = -1LL;
	int64_t x86 = 65296134LL;
	static int16_t x87 = 440;
	int8_t x88 = -1;
	static int64_t t20 = -4236LL;

	t20 = ((x85|x86)+(x87<x88));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	static int8_t x90 = INT8_MIN;
	static volatile uint64_t x91 = 0LLU;
	int64_t x92 = -3785597296910106004LL;

	t21 = ((x89|x90)+(x91<x92));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x93 = 464228345LLU;
	volatile uint64_t x94 = 34058LLU;
	uint8_t x95 = UINT8_MAX;
	int8_t x96 = -1;
	volatile uint64_t t22 = 206LLU;

	t22 = ((x93|x94)+(x95<x96));

	if (t22 != 464228347LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x97 = UINT64_MAX;
	static int16_t x99 = INT16_MIN;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t23 = 26530593LLU;

	t23 = ((x97|x98)+(x99<x100));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x102 = UINT32_MAX;
	uint64_t x103 = 3053540LLU;
	int32_t x104 = INT32_MIN;
	uint32_t t24 = 3U;

	t24 = ((x101|x102)+(x103<x104));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = -3142LL;
	int16_t x106 = -1;
	volatile int32_t x107 = INT32_MIN;
	int32_t x108 = -54163777;
	volatile int64_t t25 = -8480246434875537LL;

	t25 = ((x105|x106)+(x107<x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	uint64_t x110 = UINT64_MAX;
	int16_t x111 = -8698;
	uint8_t x112 = 1U;

	t26 = ((x109|x110)+(x111<x112));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = -3;
	uint8_t x116 = 19U;

	t27 = ((x113|x114)+(x115<x116));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x118 = -232737;
	int64_t x119 = -1101926955695LL;
	uint64_t x120 = 107750LLU;
	static int32_t t28 = -128;

	t28 = ((x117|x118)+(x119<x120));

	if (t28 != -232737) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = INT8_MIN;
	volatile uint64_t x122 = 74798691LLU;
	static int8_t x123 = -1;
	int8_t x124 = 1;
	static volatile uint64_t t29 = 555120954174996LLU;

	t29 = ((x121|x122)+(x123<x124));

	if (t29 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 1878224671956202398LLU;
	uint16_t x126 = 467U;
	int32_t x127 = -21;
	uint64_t x128 = 930796115LLU;
	static uint64_t t30 = 5097537390839261LLU;

	t30 = ((x125|x126)+(x127<x128));

	if (t30 != 1878224671956202463LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 261968U;
	int32_t x130 = -1;
	uint16_t x131 = 3665U;
	int64_t x132 = -796940882LL;
	uint32_t t31 = UINT32_MAX;

	t31 = ((x129|x130)+(x131<x132));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t32 = 1;

	t32 = ((x133|x134)+(x135<x136));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	static int16_t x139 = INT16_MIN;
	int64_t t33 = -229LL;

	t33 = ((x137|x138)+(x139<x140));

	if (t33 != -32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x143 = INT16_MAX;
	volatile uint32_t x144 = UINT32_MAX;
	int64_t t34 = 80831926549559LL;

	t34 = ((x141|x142)+(x143<x144));

	if (t34 != -8975493409964483307LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = INT16_MAX;
	volatile uint64_t x146 = 694725LLU;
	static int16_t x147 = 1;
	uint16_t x148 = 0U;
	uint64_t t35 = 0LLU;

	t35 = ((x145|x146)+(x147<x148));

	if (t35 != 720895LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x150 = -1;
	static int64_t x151 = -1LL;
	static int16_t x152 = -1;
	int32_t t36 = -7854;

	t36 = ((x149|x150)+(x151<x152));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MAX;
	volatile uint32_t x154 = 39379112U;
	int16_t x155 = INT16_MAX;
	int64_t x156 = INT64_MIN;
	int64_t t37 = INT64_MAX;

	t37 = ((x153|x154)+(x155<x156));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x158 = -1;
	volatile int16_t x159 = -1;
	int16_t x160 = 14;
	volatile int32_t t38 = -759;

	t38 = ((x157|x158)+(x159<x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MAX;
	volatile int8_t x164 = 3;
	volatile int32_t t39 = 564826;

	t39 = ((x161|x162)+(x163<x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -666159523354146LL;
	int64_t x166 = 406317LL;
	static volatile int32_t x167 = -1;
	int8_t x168 = INT8_MIN;
	volatile int64_t t40 = -16199171LL;

	t40 = ((x165|x166)+(x167<x168));

	if (t40 != -666159523349505LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 1741102353552493270LLU;
	volatile int32_t x170 = -114691;
	uint16_t x171 = UINT16_MAX;
	uint64_t x172 = 45908036514LLU;
	uint64_t t41 = 6215LLU;

	t41 = ((x169|x170)+(x171<x172));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = -1;
	int64_t x174 = INT64_MIN;
	uint16_t x175 = UINT16_MAX;
	int8_t x176 = INT8_MIN;

	t42 = ((x173|x174)+(x175<x176));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x178 = UINT64_MAX;
	int16_t x179 = -426;
	static int32_t x180 = INT32_MAX;
	uint64_t t43 = 7209334282214305LLU;

	t43 = ((x177|x178)+(x179<x180));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 33086762U;
	static int16_t x182 = INT16_MAX;
	volatile int8_t x183 = -1;
	volatile uint32_t t44 = 378678U;

	t44 = ((x181|x182)+(x183<x184));

	if (t44 != 33095680U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MAX;
	int16_t x186 = 4;
	uint16_t x187 = 6U;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t45 = 800852243;

	t45 = ((x185|x186)+(x187<x188));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MAX;
	volatile uint32_t x190 = UINT32_MAX;
	int8_t x191 = -1;
	int64_t x192 = INT64_MIN;

	t46 = ((x189|x190)+(x191<x192));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -131579738LL;
	int32_t x194 = 55309;
	volatile int64_t x195 = 0LL;
	uint32_t x196 = 26028725U;
	int64_t t47 = 37119782804846828LL;

	t47 = ((x193|x194)+(x195<x196));

	if (t47 != -131540816LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x197 = INT64_MIN;
	uint32_t x198 = 1653606479U;
	volatile int64_t x200 = INT64_MIN;
	int64_t t48 = 394308933990LL;

	t48 = ((x197|x198)+(x199<x200));

	if (t48 != -9223372035201169329LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x202 = INT16_MIN;
	static int32_t x203 = INT32_MAX;
	int8_t x204 = 0;
	volatile int32_t t49 = 6;

	t49 = ((x201|x202)+(x203<x204));

	if (t49 != -32741) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MIN;
	volatile int32_t x206 = INT32_MIN;
	static int8_t x207 = INT8_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t50 = 0;

	t50 = ((x205|x206)+(x207<x208));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x209 = INT64_MAX;
	int64_t x210 = -66436639914LL;
	uint16_t x211 = 134U;
	uint16_t x212 = 18U;

	t51 = ((x209|x210)+(x211<x212));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x215 = 0;
	int16_t x216 = 1;
	int32_t t52 = -2937167;

	t52 = ((x213|x214)+(x215<x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x218 = INT32_MIN;
	static int16_t x219 = -34;
	uint64_t x220 = 4736561321117602LLU;

	t53 = ((x217|x218)+(x219<x220));

	if (t53 != -609583734LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = 907;
	int64_t x222 = INT64_MIN;
	static uint32_t x223 = UINT32_MAX;
	int32_t x224 = -52454;
	int64_t t54 = -196723739617253136LL;

	t54 = ((x221|x222)+(x223<x224));

	if (t54 != -9223372036854774901LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = INT8_MIN;
	static int64_t x226 = -10793337735151985LL;
	int64_t x227 = -1LL;
	uint64_t x228 = 449042LLU;
	volatile int64_t t55 = -50116LL;

	t55 = ((x225|x226)+(x227<x228));

	if (t55 != -113LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x229 = 7382U;
	int16_t x230 = -1;
	volatile int8_t x231 = INT8_MIN;
	uint32_t t56 = UINT32_MAX;

	t56 = ((x229|x230)+(x231<x232));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x234 = 22204U;
	volatile int32_t t57 = 440117382;

	t57 = ((x233|x234)+(x235<x236));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x237 = -1;
	uint16_t x239 = UINT16_MAX;
	uint64_t x240 = 88494041782LLU;
	static volatile int32_t t58 = 3162387;

	t58 = ((x237|x238)+(x239<x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = UINT64_MAX;
	uint32_t x242 = 3368862U;
	int8_t x243 = 1;
	int16_t x244 = -301;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x241|x242)+(x243<x244));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x246 = INT8_MIN;
	int8_t x248 = INT8_MAX;
	volatile int32_t t60 = 1049;

	t60 = ((x245|x246)+(x247<x248));

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x250 = -11984187LL;
	int8_t x251 = -10;
	uint8_t x252 = 1U;
	volatile int64_t t61 = -1269950LL;

	t61 = ((x249|x250)+(x251<x252));

	if (t61 != -11981826LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = -1LL;
	int32_t x254 = -150352887;
	int32_t x255 = 91972625;
	int16_t x256 = 22;

	t62 = ((x253|x254)+(x255<x256));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x257 = 142296174LLU;
	static int8_t x258 = INT8_MAX;
	uint64_t t63 = 12185377LLU;

	t63 = ((x257|x258)+(x259<x260));

	if (t63 != 142296192LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = -114;
	uint32_t x267 = 5703U;
	volatile int64_t x268 = -30089476066221LL;
	volatile int32_t t64 = -272907;

	t64 = ((x265|x266)+(x267<x268));

	if (t64 != -114) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x270 = 7U;
	static volatile uint16_t x271 = 0U;
	int32_t x272 = -56;
	static int64_t t65 = 453089LL;

	t65 = ((x269|x270)+(x271<x272));

	if (t65 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x274 = INT32_MIN;
	uint16_t x276 = UINT16_MAX;
	uint32_t t66 = 0U;

	t66 = ((x273|x274)+(x275<x276));

	if (t66 != 2147483653U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x277 = UINT32_MAX;
	int64_t x279 = 7LL;
	int8_t x280 = 23;
	uint32_t t67 = 5500340U;

	t67 = ((x277|x278)+(x279<x280));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x281 = -1557739LL;
	int32_t x282 = INT32_MIN;
	int16_t x283 = -1;
	int16_t x284 = -1;
	int64_t t68 = 93LL;

	t68 = ((x281|x282)+(x283<x284));

	if (t68 != -1557739LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	uint16_t x286 = 1U;
	int64_t x287 = INT64_MIN;
	int16_t x288 = -1;
	volatile int64_t t69 = -79411978255610LL;

	t69 = ((x285|x286)+(x287<x288));

	if (t69 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = -1;
	uint8_t x290 = 12U;
	static int64_t x292 = 4439LL;
	static volatile int32_t t70 = 10543356;

	t70 = ((x289|x290)+(x291<x292));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -1;
	uint64_t x294 = 569651246LLU;
	int64_t x295 = -481794968400476324LL;
	int32_t x296 = INT32_MAX;
	uint64_t t71 = 23700547486120531LLU;

	t71 = ((x293|x294)+(x295<x296));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x297 = -1LL;
	uint32_t x298 = 1917U;
	uint8_t x299 = UINT8_MAX;
	int64_t t72 = -13448625895LL;

	t72 = ((x297|x298)+(x299<x300));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x301 = 2920092459418672452LLU;
	static int16_t x302 = INT16_MAX;
	static int32_t x303 = -1;
	uint16_t x304 = 0U;
	uint64_t t73 = 7674667891558153693LLU;

	t73 = ((x301|x302)+(x303<x304));

	if (t73 != 2920092459418681344LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = -117;
	int16_t x307 = INT16_MAX;
	int64_t t74 = 1758876LL;

	t74 = ((x305|x306)+(x307<x308));

	if (t74 != -117LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x313 = INT16_MAX;
	static volatile uint8_t x316 = UINT8_MAX;
	uint32_t t75 = 432U;

	t75 = ((x313|x314)+(x315<x316));

	if (t75 != 1245183U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x317 = 6U;
	int16_t x318 = INT16_MAX;
	int32_t x319 = -1;
	volatile int64_t x320 = -4025472031944LL;

	t76 = ((x317|x318)+(x319<x320));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = 12U;
	volatile int16_t x322 = INT16_MAX;
	uint32_t x323 = 37199U;
	volatile int64_t x324 = INT64_MIN;
	int32_t t77 = -354;

	t77 = ((x321|x322)+(x323<x324));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = 55;
	int16_t x327 = INT16_MIN;
	volatile int32_t x328 = INT32_MIN;
	volatile uint64_t t78 = 3358776479LLU;

	t78 = ((x325|x326)+(x327<x328));

	if (t78 != 10039LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -1LL;
	volatile uint16_t x330 = 4U;
	volatile uint32_t x331 = UINT32_MAX;
	int16_t x332 = INT16_MIN;

	t79 = ((x329|x330)+(x331<x332));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = UINT16_MAX;
	int8_t x334 = -1;
	static volatile int64_t x335 = 1022175LL;
	int16_t x336 = 1;

	t80 = ((x333|x334)+(x335<x336));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = 1;
	volatile int16_t x339 = 0;
	static volatile int16_t x340 = -1;
	volatile int32_t t81 = 448;

	t81 = ((x337|x338)+(x339<x340));

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -1;
	static int32_t x342 = INT32_MAX;
	uint64_t x343 = UINT64_MAX;
	int32_t t82 = 3;

	t82 = ((x341|x342)+(x343<x344));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x346 = UINT32_MAX;
	uint32_t x347 = 28736U;
	uint16_t x348 = UINT16_MAX;
	uint32_t t83 = 1050U;

	t83 = ((x345|x346)+(x347<x348));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MAX;
	int32_t x352 = 11537;
	int32_t t84 = 4810;

	t84 = ((x349|x350)+(x351<x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = INT64_MAX;
	volatile int8_t x356 = -19;
	static int32_t t85 = -431463654;

	t85 = ((x353|x354)+(x355<x356));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x357 = INT16_MIN;
	int8_t x358 = 0;
	uint8_t x359 = UINT8_MAX;
	uint32_t x360 = 1301497695U;
	volatile int32_t t86 = 710;

	t86 = ((x357|x358)+(x359<x360));

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x361 = 8217;
	int8_t x362 = -54;
	int64_t x363 = INT64_MIN;
	int8_t x364 = -1;
	volatile int32_t t87 = 699707095;

	t87 = ((x361|x362)+(x363<x364));

	if (t87 != -36) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = INT64_MIN;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = 0;
	int8_t x368 = -3;
	int64_t t88 = 5417192095212LL;

	t88 = ((x365|x366)+(x367<x368));

	if (t88 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x369 = -9453713401187LL;
	int16_t x370 = 1;
	static uint8_t x371 = 22U;
	uint32_t x372 = 2060611U;

	t89 = ((x369|x370)+(x371<x372));

	if (t89 != -9453713401186LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = -467465529;
	static uint64_t x376 = 83345LLU;
	volatile uint64_t t90 = 69371LLU;

	t90 = ((x373|x374)+(x375<x376));

	if (t90 != 18446744073242086087LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x378 = 18U;
	volatile int64_t x379 = INT64_MAX;
	volatile uint32_t x380 = 217061U;

	t91 = ((x377|x378)+(x379<x380));

	if (t91 != 19) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x381 = INT16_MAX;
	static uint16_t x382 = 0U;
	int64_t x383 = 191436800382249LL;
	volatile int8_t x384 = INT8_MAX;

	t92 = ((x381|x382)+(x383<x384));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MAX;
	volatile int8_t x386 = 1;
	uint64_t x387 = UINT64_MAX;
	volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t93 = -5699;

	t93 = ((x385|x386)+(x387<x388));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = INT64_MIN;
	uint32_t x390 = UINT32_MAX;
	int16_t x391 = INT16_MIN;
	int32_t x392 = -1;
	static volatile int64_t t94 = -258501191899LL;

	t94 = ((x389|x390)+(x391<x392));

	if (t94 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x393 = -1;
	static uint32_t x394 = UINT32_MAX;
	int64_t x395 = 52726016271LL;
	int16_t x396 = INT16_MAX;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = ((x393|x394)+(x395<x396));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = -8378208LL;
	volatile uint32_t x398 = 8155U;
	int16_t x399 = -1;
	volatile int64_t t96 = -123411LL;

	t96 = ((x397|x398)+(x399<x400));

	if (t96 != -8372228LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -1;
	int64_t x402 = -849547064630289663LL;
	uint8_t x403 = UINT8_MAX;
	static int64_t x404 = INT64_MIN;
	volatile int64_t t97 = 0LL;

	t97 = ((x401|x402)+(x403<x404));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = -1;
	static int16_t x406 = INT16_MIN;
	int8_t x407 = 0;

	t98 = ((x405|x406)+(x407<x408));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MAX;
	uint64_t x410 = 65597668344LLU;
	uint64_t x411 = 89443022LLU;
	volatile uint64_t t99 = 1428917310630755822LLU;

	t99 = ((x409|x410)+(x411<x412));

	if (t99 != 66571993088LLU) { NG(); } else { ; }
	
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

