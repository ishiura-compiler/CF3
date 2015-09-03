#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
int64_t x17 = INT64_MAX;
volatile uint64_t x18 = UINT64_MAX;
uint8_t x20 = UINT8_MAX;
volatile uint64_t x23 = UINT64_MAX;
uint32_t x24 = 80U;
uint64_t t4 = 1720970426888916259LLU;
uint32_t x38 = UINT32_MAX;
uint64_t t8 = 1278656099899LLU;
uint16_t x46 = 3120U;
volatile int16_t x48 = INT16_MIN;
int64_t x49 = -1LL;
int64_t t11 = 6441246923LL;
uint64_t x58 = UINT64_MAX;
uint64_t t12 = 624632691050LLU;
int16_t x69 = 5;
int8_t x72 = 1;
volatile uint32_t x75 = 13588U;
uint32_t x76 = 37175792U;
static int16_t x79 = -7862;
uint8_t x80 = UINT8_MAX;
int64_t x89 = -1LL;
static int8_t x94 = INT8_MAX;
uint16_t x96 = 1564U;
int8_t x98 = -1;
volatile int32_t t23 = -10867253;
int16_t x117 = -6420;
static int8_t x118 = -1;
int32_t t24 = 960924016;
int32_t t25 = -7;
int8_t x129 = -1;
uint16_t x132 = 450U;
int64_t x135 = INT64_MAX;
static volatile uint32_t t28 = 15266U;
uint64_t t29 = 3702392591660652LLU;
static int64_t x150 = 523329126797141031LL;
uint16_t x159 = 93U;
static int8_t x161 = INT8_MIN;
uint16_t x163 = 54U;
static uint32_t x164 = 26037U;
volatile int64_t t33 = -106295126LL;
int64_t t35 = 2141LL;
int8_t x204 = INT8_MIN;
int64_t x210 = -15800680911LL;
int64_t t41 = -55169041LL;
int16_t x214 = -1;
int16_t x218 = INT16_MAX;
uint64_t x228 = UINT64_MAX;
uint16_t x242 = 7097U;
int8_t x245 = 0;
int32_t x248 = -1;
static int16_t x258 = 3516;
int8_t x260 = INT8_MIN;
volatile int32_t t52 = -858948;
int32_t x264 = -1029346783;
int32_t x279 = 9135;
static uint16_t x280 = 16030U;
uint32_t x285 = UINT32_MAX;
int8_t x290 = INT8_MAX;
uint8_t x291 = 2U;
static int32_t x330 = -65882588;
volatile int8_t x338 = INT8_MAX;
volatile int8_t x340 = INT8_MAX;
static int32_t x345 = INT32_MIN;
volatile int64_t t70 = -5644587599422LL;
uint32_t x358 = 52671938U;
volatile int64_t t73 = -8606LL;
static int64_t t74 = INT64_MIN;
uint8_t x387 = UINT8_MAX;
volatile int16_t x398 = INT16_MIN;
int8_t x407 = -1;
int32_t x408 = -1;
int16_t x413 = INT16_MAX;
uint64_t t83 = 93LLU;
uint8_t x443 = 3U;
int64_t x446 = INT64_MIN;
uint32_t x447 = UINT32_MAX;
uint8_t x462 = 23U;
int16_t x463 = INT16_MIN;
volatile int32_t t87 = -800;
volatile int8_t x467 = -5;
int32_t x469 = 0;
int64_t x474 = 9625800340665619LL;
int16_t x479 = INT16_MIN;
uint8_t x486 = UINT8_MAX;
uint64_t x516 = UINT64_MAX;
volatile uint32_t t98 = 16U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int16_t x2 = INT16_MAX;
	static int16_t x3 = -974;
	int64_t t0 = 22585378613410LL;

	t0 = (x1&(x2+(x3+x4)));

	if (t0 != 31792LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	int32_t x6 = -1;
	static int64_t x7 = -1LL;
	int8_t x8 = -1;
	static int64_t t1 = -238492733346LL;

	t1 = (x5&(x6+(x7+x8)));

	if (t1 != 32765LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	volatile int64_t x10 = -1LL;
	int8_t x11 = -1;
	volatile int64_t x12 = INT64_MAX;
	int64_t t2 = 993225014752677LL;

	t2 = (x9&(x10+(x11+x12)));

	if (t2 != 2147483645LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x19 = -11209LL;
	uint64_t t3 = 727087623963LLU;

	t3 = (x17&(x18+(x19+x20)));

	if (t3 != 9223372036854764853LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	uint64_t x22 = UINT64_MAX;

	t4 = (x21&(x22+(x23+x24)));

	if (t4 != 78LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 2474U;
	static int64_t x26 = INT64_MIN;
	uint16_t x27 = 788U;
	volatile int8_t x28 = -1;
	volatile int64_t t5 = 85232262LL;

	t5 = (x25&(x26+(x27+x28)));

	if (t5 != 258LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 0U;
	int16_t x30 = -137;
	uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 2U;
	static uint32_t t6 = 5600U;

	t6 = (x29&(x30+(x31+x32)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int16_t x34 = INT16_MIN;
	int64_t x35 = INT64_MAX;
	volatile int64_t x36 = INT64_MIN;
	int64_t t7 = 123484LL;

	t7 = (x33&(x34+(x35+x36)));

	if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 3739927LLU;
	volatile uint16_t x39 = 142U;
	int8_t x40 = INT8_MIN;

	t8 = (x37&(x38+(x39+x40)));

	if (t8 != 5LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	volatile uint64_t x47 = 7222327863859498506LLU;
	volatile uint64_t t9 = 143059466851LLU;

	t9 = (x45&(x46+(x47+x48)));

	if (t9 != 7222327863859445760LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x50 = UINT64_MAX;
	uint32_t x51 = 1848707U;
	volatile uint32_t x52 = UINT32_MAX;
	uint64_t t10 = 133231LLU;

	t10 = (x49&(x50+(x51+x52)));

	if (t10 != 1848705LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = 1349351674LL;
	uint32_t x54 = 48U;
	int32_t x55 = -3436;
	static uint16_t x56 = 12U;

	t11 = (x53&(x54+(x55+x56)));

	if (t11 != 1349349584LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	int8_t x59 = -9;
	volatile int64_t x60 = -1LL;

	t12 = (x57&(x58+(x59+x60)));

	if (t12 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	static int32_t x62 = 55739;
	int8_t x63 = 3;
	int8_t x64 = INT8_MIN;
	static int32_t t13 = -1653995;

	t13 = (x61&(x62+(x63+x64)));

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x70 = INT32_MIN;
	uint64_t x71 = 7893LLU;
	volatile uint64_t t14 = 30511367524090LLU;

	t14 = (x69&(x70+(x71+x72)));

	if (t14 != 4LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	static uint8_t x74 = 29U;
	int64_t t15 = -1674173LL;

	t15 = (x73&(x74+(x75+x76)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 379759837U;
	static int8_t x78 = 4;
	static uint32_t t16 = 7091U;

	t16 = (x77&(x78+(x79+x80)));

	if (t16 != 379756621U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -1LL;
	int64_t x82 = -92524555LL;
	int32_t x83 = -1;
	int64_t x84 = 931251LL;
	int64_t t17 = -32779583LL;

	t17 = (x81&(x82+(x83+x84)));

	if (t17 != -91593305LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x90 = UINT16_MAX;
	int64_t x91 = 88LL;
	static int8_t x92 = INT8_MIN;
	int64_t t18 = 79LL;

	t18 = (x89&(x90+(x91+x92)));

	if (t18 != 65495LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = -1;
	volatile int64_t x95 = -1LL;
	static volatile int64_t t19 = -1LL;

	t19 = (x93&(x94+(x95+x96)));

	if (t19 != 1690LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = -1LL;
	int16_t x99 = -1551;
	int8_t x100 = 23;
	int64_t t20 = 203LL;

	t20 = (x97&(x98+(x99+x100)));

	if (t20 != -1529LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = INT8_MIN;
	int32_t x102 = -1;
	int16_t x103 = 941;
	int8_t x104 = -4;
	volatile int32_t t21 = 61959412;

	t21 = (x101&(x102+(x103+x104)));

	if (t21 != 896) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = 1854U;
	int64_t x110 = INT64_MIN;
	int64_t x111 = -1LL;
	uint32_t x112 = 390437U;
	static volatile int64_t t22 = -7646071LL;

	t22 = (x109&(x110+(x111+x112)));

	if (t22 != 1316LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = 3U;
	static uint16_t x114 = UINT16_MAX;
	uint8_t x115 = UINT8_MAX;
	uint16_t x116 = 0U;

	t23 = (x113&(x114+(x115+x116)));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x119 = 1;
	static volatile int16_t x120 = INT16_MIN;

	t24 = (x117&(x118+(x119+x120)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x125 = INT16_MAX;
	static int8_t x126 = INT8_MAX;
	int16_t x127 = INT16_MIN;
	static int16_t x128 = INT16_MIN;

	t25 = (x125&(x126+(x127+x128)));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x130 = INT64_MIN;
	int32_t x131 = -1;
	volatile int64_t t26 = -32666647LL;

	t26 = (x129&(x130+(x131+x132)));

	if (t26 != -9223372036854775359LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x133 = INT8_MIN;
	volatile int32_t x134 = INT32_MIN;
	static int64_t x136 = -1LL;
	volatile int64_t t27 = 1519635542735377LL;

	t27 = (x133&(x134+(x135+x136)));

	if (t27 != 9223372034707292032LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = UINT8_MAX;
	uint32_t x138 = UINT32_MAX;
	uint16_t x139 = 2954U;
	volatile uint32_t x140 = 5537U;

	t28 = (x137&(x138+(x139+x140)));

	if (t28 != 42U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MAX;
	static volatile uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MAX;

	t29 = (x141&(x142+(x143+x144)));

	if (t29 != 32893LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = -15945511778LL;
	volatile int8_t x151 = INT8_MIN;
	int32_t x152 = -1;
	volatile int64_t t30 = -1LL;

	t30 = (x149&(x150+(x151+x152)));

	if (t30 != 523329121859846278LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = -53430267319LL;
	volatile int8_t x158 = INT8_MAX;
	static int16_t x160 = -1;
	int64_t t31 = 40542005856951061LL;

	t31 = (x157&(x158+(x159+x160)));

	if (t31 != 73LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x162 = -64708086985166LL;
	static int64_t t32 = 2746668963964285LL;

	t32 = (x161&(x162+(x163+x164)));

	if (t32 != -64708086959104LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x173 = UINT16_MAX;
	int64_t x174 = 2939298750905629613LL;
	uint16_t x175 = UINT16_MAX;
	int32_t x176 = 10;

	t33 = (x173&(x174+(x175+x176)));

	if (t33 != 48054LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MAX;
	int8_t x179 = -1;
	int8_t x180 = -1;
	static volatile int32_t t34 = 484;

	t34 = (x177&(x178+(x179+x180)));

	if (t34 != 2147483520) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = -1LL;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = INT64_MIN;

	t35 = (x181&(x182+(x183+x184)));

	if (t35 != 32766LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x185 = 78U;
	int8_t x186 = INT8_MIN;
	static uint8_t x187 = UINT8_MAX;
	uint16_t x188 = UINT16_MAX;
	int32_t t36 = 484;

	t36 = (x185&(x186+(x187+x188)));

	if (t36 != 78) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x189 = 468;
	uint8_t x190 = UINT8_MAX;
	uint16_t x191 = UINT16_MAX;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t37 = 293596;

	t37 = (x189&(x190+(x191+x192)));

	if (t37 != 212) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = INT16_MIN;
	volatile uint8_t x198 = 16U;
	static volatile int16_t x199 = -15818;
	int32_t x200 = -37;
	int32_t t38 = -53978;

	t38 = (x197&(x198+(x199+x200)));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = INT8_MIN;
	static int8_t x202 = INT8_MIN;
	static int32_t x203 = 522;
	int32_t t39 = 0;

	t39 = (x201&(x202+(x203+x204)));

	if (t39 != 256) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = 32670018LLU;
	int16_t x206 = INT16_MAX;
	uint8_t x207 = UINT8_MAX;
	static int32_t x208 = 20302;
	uint64_t t40 = 18355063913475LLU;

	t40 = (x205&(x206+(x207+x208)));

	if (t40 != 32832LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = INT8_MAX;
	static volatile int16_t x211 = INT16_MAX;
	static volatile int64_t x212 = -54LL;

	t41 = (x209&(x210+(x211+x212)));

	if (t41 != 122LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x213 = -1;
	uint16_t x215 = UINT16_MAX;
	static uint32_t x216 = 1208570U;
	volatile uint32_t t42 = 7U;

	t42 = (x213&(x214+(x215+x216)));

	if (t42 != 1274104U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x217 = INT16_MIN;
	volatile uint16_t x219 = 33U;
	static volatile int8_t x220 = 8;
	int32_t t43 = 40536873;

	t43 = (x217&(x218+(x219+x220)));

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = 31;
	volatile int8_t x222 = INT8_MAX;
	volatile int32_t x223 = 15;
	volatile uint16_t x224 = 0U;
	int32_t t44 = -6514867;

	t44 = (x221&(x222+(x223+x224)));

	if (t44 != 14) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	static uint32_t x227 = UINT32_MAX;
	uint64_t t45 = 1987LLU;

	t45 = (x225&(x226+(x227+x228)));

	if (t45 != 2147483646LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x233 = 496;
	static volatile uint16_t x234 = 2547U;
	int8_t x235 = INT8_MIN;
	volatile int16_t x236 = 1;
	static volatile int32_t t46 = 14;

	t46 = (x233&(x234+(x235+x236)));

	if (t46 != 368) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = INT64_MIN;
	uint8_t x238 = UINT8_MAX;
	static uint8_t x239 = 2U;
	volatile int16_t x240 = -1;
	static int64_t t47 = 29108158444599920LL;

	t47 = (x237&(x238+(x239+x240)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x241 = 8608860U;
	int8_t x243 = 14;
	static volatile uint8_t x244 = 1U;
	volatile uint32_t t48 = 171481U;

	t48 = (x241&(x242+(x243+x244)));

	if (t48 != 6216U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x246 = -1LL;
	volatile int64_t x247 = -171LL;
	int64_t t49 = 1541041128990LL;

	t49 = (x245&(x246+(x247+x248)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x249 = UINT64_MAX;
	int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MIN;
	volatile uint64_t t50 = 16939191235476LLU;

	t50 = (x249&(x250+(x251+x252)));

	if (t50 != 18446744073709485952LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x253 = -1;
	uint8_t x254 = 5U;
	int16_t x255 = INT16_MAX;
	volatile int16_t x256 = -5060;
	volatile int32_t t51 = 129940;

	t51 = (x253&(x254+(x255+x256)));

	if (t51 != 27712) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x257 = -6;
	static volatile uint8_t x259 = 31U;

	t52 = (x257&(x258+(x259+x260)));

	if (t52 != 3418) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = -1;
	static volatile uint8_t x262 = UINT8_MAX;
	int32_t x263 = INT32_MAX;
	volatile int32_t t53 = 5755;

	t53 = (x261&(x262+(x263+x264)));

	if (t53 != 1118137119) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x269 = UINT16_MAX;
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = 59938549612LL;
	static volatile uint16_t x272 = 142U;
	int64_t t54 = -3161193LL;

	t54 = (x269&(x270+(x271+x272)));

	if (t54 != 45049LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x273 = UINT16_MAX;
	volatile int8_t x274 = INT8_MAX;
	static int16_t x275 = INT16_MAX;
	static int32_t x276 = -82317;
	int32_t t55 = -14494;

	t55 = (x273&(x274+(x275+x276)));

	if (t55 != 16113) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x277 = INT32_MIN;
	static uint32_t x278 = UINT32_MAX;
	static uint32_t t56 = 3U;

	t56 = (x277&(x278+(x279+x280)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x286 = -1;
	volatile int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MIN;
	volatile uint32_t t57 = 48U;

	t57 = (x285&(x286+(x287+x288)));

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = INT8_MIN;
	volatile int8_t x292 = INT8_MIN;
	int32_t t58 = -853473287;

	t58 = (x289&(x290+(x291+x292)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x293 = -1LL;
	uint64_t x294 = UINT64_MAX;
	static volatile int32_t x295 = -14;
	static volatile int16_t x296 = -1;
	static uint64_t t59 = 3951LLU;

	t59 = (x293&(x294+(x295+x296)));

	if (t59 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x297 = 1321127LLU;
	int16_t x298 = 9514;
	volatile int16_t x299 = INT16_MAX;
	static volatile int32_t x300 = 196583;
	volatile uint64_t t60 = 3450LLU;

	t60 = (x297&(x298+(x299+x300)));

	if (t60 != 8192LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x309 = INT8_MAX;
	int32_t x310 = 348049747;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = INT32_MIN;
	int32_t t61 = -11877;

	t61 = (x309&(x310+(x311+x312)));

	if (t61 != 82) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x313 = 10726LL;
	int64_t x314 = 6827098LL;
	volatile uint8_t x315 = 3U;
	volatile int8_t x316 = INT8_MIN;
	volatile int64_t t62 = -41789272LL;

	t62 = (x313&(x314+(x315+x316)));

	if (t62 != 10692LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x317 = 52U;
	uint8_t x318 = 36U;
	uint8_t x319 = 67U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t63 = -15948;

	t63 = (x317&(x318+(x319+x320)));

	if (t63 != 36) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x321 = 9U;
	uint32_t x322 = 90136U;
	uint16_t x323 = UINT16_MAX;
	int32_t x324 = -31821;
	uint32_t t64 = 7284996U;

	t64 = (x321&(x322+(x323+x324)));

	if (t64 != 8U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x325 = -1;
	int32_t x326 = INT32_MAX;
	uint64_t x327 = 1628802829840LLU;
	int16_t x328 = -4767;
	uint64_t t65 = 220LLU;

	t65 = (x325&(x326+(x327+x328)));

	if (t65 != 1630950308720LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = INT64_MAX;
	uint16_t x331 = 6U;
	int16_t x332 = -1;
	int64_t t66 = 2557883699LL;

	t66 = (x329&(x330+(x331+x332)));

	if (t66 != 9223372036788893225LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x333 = -15587;
	volatile int8_t x334 = -29;
	int64_t x335 = 424LL;
	static int16_t x336 = INT16_MIN;
	volatile int64_t t67 = -847922357586343198LL;

	t67 = (x333&(x334+(x335+x336)));

	if (t67 != -32503LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x337 = 124686U;
	uint8_t x339 = UINT8_MAX;
	static volatile uint32_t t68 = 1U;

	t68 = (x337&(x338+(x339+x340)));

	if (t68 != 268U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x346 = INT32_MIN;
	uint8_t x347 = 3U;
	uint16_t x348 = UINT16_MAX;
	int32_t t69 = INT32_MIN;

	t69 = (x345&(x346+(x347+x348)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MAX;
	int64_t x351 = 2LL;
	int8_t x352 = 9;

	t70 = (x349&(x350+(x351+x352)));

	if (t70 != 2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x353 = -13184;
	static uint8_t x354 = UINT8_MAX;
	int8_t x355 = 0;
	uint16_t x356 = 15U;
	volatile int32_t t71 = 0;

	t71 = (x353&(x354+(x355+x356)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x357 = INT8_MIN;
	int64_t x359 = -118LL;
	uint32_t x360 = 14514867U;
	int64_t t72 = -96LL;

	t72 = (x357&(x358+(x359+x360)));

	if (t72 != 67186560LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x361 = -96138950741771147LL;
	int32_t x362 = -1;
	int8_t x363 = -1;
	uint16_t x364 = 3U;

	t73 = (x361&(x362+(x363+x364)));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MIN;
	volatile int8_t x367 = -1;
	int16_t x368 = 14772;

	t74 = (x365&(x366+(x367+x368)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x369 = -7357;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = 0;
	int8_t x372 = INT8_MAX;
	volatile uint64_t t75 = 58414LLU;

	t75 = (x369&(x370+(x371+x372)));

	if (t75 != 66LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x381 = INT32_MIN;
	uint32_t x382 = UINT32_MAX;
	int16_t x383 = INT16_MAX;
	static int16_t x384 = INT16_MIN;
	uint32_t t76 = 1617884674U;

	t76 = (x381&(x382+(x383+x384)));

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x385 = 5278937404333948LL;
	int8_t x386 = -1;
	int8_t x388 = -1;
	volatile int64_t t77 = 5510327210605910LL;

	t77 = (x385&(x386+(x387+x388)));

	if (t77 != 124LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x397 = 317659574LLU;
	static uint32_t x399 = UINT32_MAX;
	int16_t x400 = INT16_MIN;
	static volatile uint64_t t78 = 488022993191335LLU;

	t78 = (x397&(x398+(x399+x400)));

	if (t78 != 317594038LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x405 = UINT8_MAX;
	int64_t x406 = -1162261434LL;
	volatile int64_t t79 = -237850355937LL;

	t79 = (x405&(x406+(x407+x408)));

	if (t79 != 68LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x409 = 5313587657LLU;
	static int16_t x410 = -1998;
	uint32_t x411 = 378804212U;
	int8_t x412 = INT8_MAX;
	volatile uint64_t t80 = 2852LLU;

	t80 = (x409&(x410+(x411+x412)));

	if (t80 != 345243777LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x414 = INT32_MAX;
	int64_t x415 = -4085LL;
	int8_t x416 = INT8_MAX;
	static volatile int64_t t81 = -53445111661991LL;

	t81 = (x413&(x414+(x415+x416)));

	if (t81 != 28809LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x417 = INT16_MAX;
	int32_t x418 = INT32_MIN;
	uint16_t x419 = 954U;
	uint32_t x420 = UINT32_MAX;
	uint32_t t82 = 24U;

	t82 = (x417&(x418+(x419+x420)));

	if (t82 != 953U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x425 = 148570040573518797LLU;
	static int16_t x426 = -4011;
	int64_t x427 = INT64_MAX;
	int64_t x428 = INT64_MIN;

	t83 = (x425&(x426+(x427+x428)));

	if (t83 != 148570040573517892LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x433 = 3U;
	int8_t x434 = 1;
	int8_t x435 = -1;
	int16_t x436 = INT16_MIN;
	int32_t t84 = -31809;

	t84 = (x433&(x434+(x435+x436)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x441 = -1793526349489LL;
	uint8_t x442 = 78U;
	int64_t x444 = -1LL;
	volatile int64_t t85 = 4129986679808962LL;

	t85 = (x441&(x442+(x443+x444)));

	if (t85 != 64LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x445 = 14347443102LLU;
	int8_t x448 = INT8_MIN;
	uint64_t t86 = 1899256046145LLU;

	t86 = (x445&(x446+(x447+x448)));

	if (t86 != 1462541086LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x461 = 0;
	static int32_t x464 = 285849588;

	t87 = (x461&(x462+(x463+x464)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x465 = 47551555128353027LLU;
	uint8_t x466 = 0U;
	uint32_t x468 = 5849U;
	volatile uint64_t t88 = 7778460819123LLU;

	t88 = (x465&(x466+(x467+x468)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x470 = -1LL;
	volatile int8_t x471 = -1;
	static volatile int8_t x472 = -3;
	int64_t t89 = -775805LL;

	t89 = (x469&(x470+(x471+x472)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = 1;
	static uint8_t x475 = 21U;
	uint64_t x476 = UINT64_MAX;
	uint64_t t90 = 157LLU;

	t90 = (x473&(x474+(x475+x476)));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x477 = 5U;
	int16_t x478 = INT16_MAX;
	int8_t x480 = INT8_MAX;
	int32_t t91 = -2481;

	t91 = (x477&(x478+(x479+x480)));

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x481 = -31;
	static uint8_t x482 = 36U;
	volatile int8_t x483 = INT8_MAX;
	static int32_t x484 = -1;
	int32_t t92 = 6;

	t92 = (x481&(x482+(x483+x484)));

	if (t92 != 160) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x485 = 0;
	static uint8_t x487 = 18U;
	volatile int64_t x488 = 66363333460933LL;
	int64_t t93 = 1091079429LL;

	t93 = (x485&(x486+(x487+x488)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x489 = UINT32_MAX;
	uint16_t x490 = 15U;
	static int16_t x491 = -24;
	uint16_t x492 = 1959U;
	volatile uint32_t t94 = 78U;

	t94 = (x489&(x490+(x491+x492)));

	if (t94 != 1950U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x497 = UINT64_MAX;
	uint64_t x498 = UINT64_MAX;
	static volatile int64_t x499 = -1LL;
	int32_t x500 = INT32_MIN;
	uint64_t t95 = 2021LLU;

	t95 = (x497&(x498+(x499+x500)));

	if (t95 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x513 = INT32_MAX;
	int64_t x514 = INT64_MIN;
	int64_t x515 = 60LL;
	uint64_t t96 = 3088926174532LLU;

	t96 = (x513&(x514+(x515+x516)));

	if (t96 != 59LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x517 = INT16_MIN;
	int64_t x518 = INT64_MIN;
	volatile int8_t x519 = -1;
	uint32_t x520 = UINT32_MAX;
	int64_t t97 = -2606049689695LL;

	t97 = (x517&(x518+(x519+x520)));

	if (t97 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x521 = 126883U;
	uint32_t x522 = 6155U;
	static int8_t x523 = -1;
	uint8_t x524 = 1U;

	t98 = (x521&(x522+(x523+x524)));

	if (t98 != 2051U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x529 = UINT64_MAX;
	volatile uint64_t x530 = UINT64_MAX;
	volatile int8_t x531 = INT8_MIN;
	static int64_t x532 = INT64_MAX;
	uint64_t t99 = 58940246811155825LLU;

	t99 = (x529&(x530+(x531+x532)));

	if (t99 != 9223372036854775678LLU) { NG(); } else { ; }
	
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

