#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x3 = 137169001210587953LL;
uint32_t x12 = UINT32_MAX;
uint64_t x13 = 540178367203LLU;
static uint8_t x18 = 16U;
volatile uint8_t x28 = 104U;
static int64_t x29 = 13191000LL;
static uint16_t x30 = UINT16_MAX;
int16_t x35 = INT16_MIN;
int32_t x37 = INT32_MIN;
static int64_t x42 = 263477349024673LL;
volatile int64_t t9 = -3325982430043LL;
int8_t x51 = INT8_MIN;
volatile uint64_t x58 = UINT64_MAX;
int64_t x63 = 30057636837088083LL;
static int8_t x64 = -1;
int8_t x65 = -7;
int64_t x68 = INT64_MIN;
static uint32_t x71 = 745121534U;
int64_t x77 = INT64_MIN;
static int16_t x82 = 4;
volatile uint32_t t18 = 299290233U;
static int8_t x85 = 1;
uint8_t x86 = 90U;
int8_t x91 = 0;
static uint8_t x93 = 46U;
int32_t x94 = 1281600;
volatile uint64_t x106 = 109462471LLU;
uint64_t t26 = 3LLU;
int32_t x123 = -140932;
volatile uint64_t t27 = 16726807939114051LLU;
static uint8_t x126 = 30U;
volatile int32_t x138 = -1;
uint32_t x146 = 5376U;
uint64_t t33 = 76795453LLU;
volatile int16_t x150 = 6;
volatile int16_t x151 = -1;
int8_t x153 = INT8_MIN;
int32_t x156 = 79396;
volatile int8_t x157 = -42;
int16_t x159 = -11233;
int64_t x172 = -1LL;
int32_t x178 = INT32_MAX;
static int32_t x185 = INT32_MIN;
int8_t x188 = INT8_MIN;
static int32_t t43 = -150403;
int64_t x201 = INT64_MAX;
static volatile int64_t t47 = -177818LL;
uint16_t x208 = 93U;
static int8_t x209 = INT8_MIN;
int8_t x211 = -1;
int8_t x219 = 62;
int32_t x220 = -1;
volatile uint8_t x231 = 17U;
int32_t t54 = INT32_MIN;
uint32_t x237 = 25292153U;
int64_t x243 = INT64_MIN;
int8_t x247 = INT8_MIN;
int64_t x248 = INT64_MAX;
uint16_t x256 = UINT16_MAX;
static uint64_t x275 = UINT64_MAX;
volatile uint64_t x279 = UINT64_MAX;
volatile int64_t t67 = -3983153249521LL;
static volatile uint8_t x285 = UINT8_MAX;
int64_t t68 = 699789279233335LL;
static volatile uint64_t t69 = 58782372LLU;
int16_t x294 = -10816;
static volatile uint8_t x301 = 20U;
int16_t x308 = -13343;
int8_t x311 = -1;
int16_t x314 = -1;
uint64_t t75 = 1LLU;
int32_t x317 = -1;
static uint64_t t76 = 8236784LLU;
int8_t x329 = 0;
int32_t x330 = INT32_MAX;
int8_t x344 = -1;
int16_t x352 = INT16_MAX;
volatile int64_t t85 = -1124295553748196317LL;
static volatile int64_t x364 = -1LL;
int16_t x368 = -1;
int32_t x371 = 264;
int16_t x374 = INT16_MAX;
volatile int64_t x375 = INT64_MIN;
uint32_t t92 = 84U;
volatile uint32_t x393 = UINT32_MAX;
static volatile int32_t t96 = -252;
uint32_t x410 = UINT32_MAX;
volatile int32_t x411 = INT32_MAX;
int64_t x413 = -1LL;
int64_t x414 = -1LL;
int64_t x415 = INT64_MIN;
volatile int16_t x416 = INT16_MIN;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MIN;
	int64_t x4 = 475534424999034878LL;
	static int64_t t0 = -21600LL;

	t0 = (x1&(x2-(x3%x4)));

	if (t0 != 21583LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 32;
	volatile uint16_t x10 = 17312U;
	static uint8_t x11 = 1U;
	uint32_t t1 = 97081U;

	t1 = (x9&(x10-(x11%x12)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MIN;
	volatile int16_t x15 = INT16_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile uint64_t t2 = 519343751LLU;

	t2 = (x13&(x14-(x15%x16)));

	if (t2 != 32768LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -266549059LL;
	static int16_t x19 = INT16_MAX;
	uint64_t x20 = 2357876LLU;
	uint64_t t3 = 16335555530722LLU;

	t3 = (x17&(x18-(x19%x20)));

	if (t3 != 18446744073442983953LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x21 = UINT64_MAX;
	volatile uint32_t x22 = 3507U;
	static int16_t x23 = -5;
	int64_t x24 = INT64_MIN;
	static volatile uint64_t t4 = 183054LLU;

	t4 = (x21&(x22-(x23%x24)));

	if (t4 != 3512LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MIN;
	static uint64_t x26 = 1452784428638LLU;
	int16_t x27 = -1;
	uint64_t t5 = 10286962LLU;

	t5 = (x25&(x26-(x27%x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x31 = 14U;
	static int16_t x32 = INT16_MAX;
	int64_t t6 = 13LL;

	t6 = (x29&(x30-(x31%x32)));

	if (t6 != 18256LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = INT32_MIN;
	volatile uint16_t x34 = 13U;
	static uint64_t x36 = 10858485923LLU;
	uint64_t t7 = 1725483555LLU;

	t7 = (x33&(x34-(x35%x36)));

	if (t7 != 18446744062972133376LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = UINT64_MAX;
	volatile uint64_t x39 = 3492838387837421130LLU;
	int8_t x40 = 26;
	uint64_t t8 = 417924LLU;

	t8 = (x37&(x38-(x39%x40)));

	if (t8 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	volatile uint32_t x43 = 15636U;
	static volatile uint32_t x44 = 2015U;

	t9 = (x41&(x42-(x43%x44)));

	if (t9 != 263477348990976LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	static int32_t x46 = INT32_MIN;
	int16_t x47 = -260;
	int8_t x48 = INT8_MAX;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x45&(x46-(x47%x48)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	volatile int16_t x50 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	int32_t t11 = INT32_MIN;

	t11 = (x49&(x50-(x51%x52)));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	int32_t x59 = -23708;
	uint64_t x60 = UINT64_MAX;
	uint64_t t12 = 642LLU;

	t12 = (x57&(x58-(x59%x60)));

	if (t12 != 23707LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	uint16_t x62 = 1002U;
	volatile int64_t t13 = -3571371216330137570LL;

	t13 = (x61&(x62-(x63%x64)));

	if (t13 != 106LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x66 = INT16_MAX;
	static int32_t x67 = INT32_MIN;
	int64_t t14 = 6908240LL;

	t14 = (x65&(x66-(x67%x68)));

	if (t14 != 2147516409LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = -1;
	uint64_t x72 = 72LLU;
	volatile uint64_t t15 = 2117375007728375LLU;

	t15 = (x69&(x70-(x71%x72)));

	if (t15 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 84U;
	int8_t x74 = -1;
	volatile uint16_t x75 = 1U;
	volatile int8_t x76 = -1;
	int32_t t16 = 201868709;

	t16 = (x73&(x74-(x75%x76)));

	if (t16 != 84) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x78 = INT64_MAX;
	uint8_t x79 = 5U;
	int8_t x80 = 1;
	int64_t t17 = 1968399276938393940LL;

	t17 = (x77&(x78-(x79%x80)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MAX;
	uint32_t x83 = 85U;
	int8_t x84 = INT8_MIN;

	t18 = (x81&(x82-(x83%x84)));

	if (t18 != 2147483567U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x87 = -1;
	int64_t x88 = -1LL;
	static volatile int64_t t19 = -16180375643LL;

	t19 = (x85&(x86-(x87%x88)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x89 = 64371U;
	int16_t x90 = INT16_MAX;
	int64_t x92 = INT64_MAX;
	static int64_t t20 = -2357758466669770620LL;

	t20 = (x89&(x90-(x91%x92)));

	if (t20 != 31603LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x95 = UINT64_MAX;
	uint8_t x96 = 1U;
	volatile uint64_t t21 = 2663266LLU;

	t21 = (x93&(x94-(x95%x96)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x97 = UINT8_MAX;
	uint16_t x98 = UINT16_MAX;
	volatile uint16_t x99 = 0U;
	int32_t x100 = INT32_MIN;
	volatile int32_t t22 = 13602;

	t22 = (x97&(x98-(x99%x100)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	volatile int64_t x107 = -10776LL;
	int32_t x108 = INT32_MIN;
	volatile uint64_t t23 = 3871080694217LLU;

	t23 = (x105&(x106-(x107%x108)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = -7837;
	volatile int64_t x110 = -1LL;
	volatile uint16_t x111 = 878U;
	static int8_t x112 = INT8_MIN;
	int64_t t24 = -3243157LL;

	t24 = (x109&(x110-(x111%x112)));

	if (t24 != -7935LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	int8_t x114 = -1;
	uint32_t x115 = 2U;
	volatile int32_t x116 = INT32_MIN;
	volatile uint32_t t25 = 20U;

	t25 = (x113&(x114-(x115%x116)));

	if (t25 != 4294967293U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MAX;
	int16_t x118 = INT16_MIN;
	uint64_t x119 = 23235036976198LLU;
	static int8_t x120 = 1;

	t26 = (x117&(x118-(x119%x120)));

	if (t26 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 34398840LLU;
	static uint64_t x122 = 17445524185400431LLU;
	int16_t x124 = INT16_MIN;

	t27 = (x121&(x122-(x123%x124)));

	if (t27 != 34398832LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x125 = INT64_MIN;
	int16_t x127 = INT16_MIN;
	int64_t x128 = -394089900370490302LL;
	int64_t t28 = 130939396655LL;

	t28 = (x125&(x126-(x127%x128)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int8_t x130 = 0;
	uint32_t x131 = 234718507U;
	static int16_t x132 = INT16_MIN;
	volatile uint32_t t29 = 27561482U;

	t29 = (x129&(x130-(x131%x132)));

	if (t29 != 4060248789U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = -3;
	int64_t x134 = 1713920997LL;
	static int32_t x135 = 2855743;
	static int16_t x136 = -1;
	int64_t t30 = 3958322583308LL;

	t30 = (x133&(x134-(x135%x136)));

	if (t30 != 1713920997LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MAX;
	static int16_t x139 = INT16_MIN;
	static int32_t x140 = INT32_MIN;
	int32_t t31 = -3;

	t31 = (x137&(x138-(x139%x140)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = 0;
	int16_t x142 = INT16_MIN;
	uint32_t x143 = 23179037U;
	int32_t x144 = -1;
	uint32_t t32 = 342U;

	t32 = (x141&(x142-(x143%x144)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x147 = UINT64_MAX;
	uint8_t x148 = UINT8_MAX;

	t33 = (x145&(x146-(x147%x148)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = -1;
	static volatile uint8_t x152 = UINT8_MAX;
	int32_t t34 = 0;

	t34 = (x149&(x150-(x151%x152)));

	if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x154 = 13U;
	static int32_t x155 = -235631;
	int32_t t35 = 1138;

	t35 = (x153&(x154-(x155%x156)));

	if (t35 != 76800) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x158 = 4377135LL;
	uint64_t x160 = 20038925094390LLU;
	volatile uint64_t t36 = 780LLU;

	t36 = (x157&(x158-(x159%x160)));

	if (t36 != 18446732301019630918LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x161 = UINT64_MAX;
	int32_t x162 = INT32_MIN;
	uint8_t x163 = 3U;
	int64_t x164 = INT64_MAX;
	uint64_t t37 = 995633380666014499LLU;

	t37 = (x161&(x162-(x163%x164)));

	if (t37 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = 125U;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = UINT32_MAX;
	volatile int64_t t38 = 130825LL;

	t38 = (x165&(x166-(x167%x168)));

	if (t38 != 2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x169 = UINT16_MAX;
	volatile uint8_t x170 = UINT8_MAX;
	int64_t x171 = -32809349827738495LL;
	volatile int64_t t39 = 38LL;

	t39 = (x169&(x170-(x171%x172)));

	if (t39 != 255LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x173 = INT32_MIN;
	int32_t x174 = 1002675;
	static uint32_t x175 = UINT32_MAX;
	int16_t x176 = -1;
	volatile uint32_t t40 = 81545U;

	t40 = (x173&(x174-(x175%x176)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x177 = INT8_MIN;
	int64_t x179 = -1752010LL;
	static int32_t x180 = INT32_MIN;
	int64_t t41 = -528693050951LL;

	t41 = (x177&(x178-(x179%x180)));

	if (t41 != 2149235584LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = 3538;
	volatile int16_t x182 = INT16_MIN;
	volatile int64_t x183 = INT64_MAX;
	int16_t x184 = INT16_MAX;
	int64_t t42 = -6127002764LL;

	t42 = (x181&(x182-(x183%x184)));

	if (t42 != 3536LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x186 = 1U;
	volatile int16_t x187 = INT16_MIN;

	t43 = (x185&(x186-(x187%x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x189 = INT64_MIN;
	int32_t x190 = 75429;
	int16_t x191 = -470;
	uint32_t x192 = 1383184U;
	volatile int64_t t44 = 71000997043648LL;

	t44 = (x189&(x190-(x191%x192)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = UINT8_MAX;
	uint64_t x194 = 29743111259LLU;
	volatile uint8_t x195 = 3U;
	int32_t x196 = INT32_MIN;
	volatile uint64_t t45 = 1535458602LLU;

	t45 = (x193&(x194-(x195%x196)));

	if (t45 != 88LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = 53280;
	int64_t x199 = -2683903102382LL;
	static volatile int32_t x200 = -1;
	static volatile int64_t t46 = 22503187384LL;

	t46 = (x197&(x198-(x199%x200)));

	if (t46 != 53248LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x202 = INT16_MAX;
	volatile uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MIN;

	t47 = (x201&(x202-(x203%x204)));

	if (t47 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = 22936735210335LLU;
	int16_t x206 = -1;
	uint32_t x207 = 2U;
	static volatile uint64_t t48 = 9673131554LLU;

	t48 = (x205&(x206-(x207%x208)));

	if (t48 != 1609849693LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x210 = 11363470LLU;
	int64_t x212 = -1LL;
	static volatile uint64_t t49 = 1555656LLU;

	t49 = (x209&(x210-(x211%x212)));

	if (t49 != 11363456LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MIN;
	static int8_t x214 = INT8_MAX;
	static volatile int64_t x215 = INT64_MIN;
	int16_t x216 = -639;
	int64_t t50 = -437638087500421588LL;

	t50 = (x213&(x214-(x215%x216)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MIN;
	volatile int32_t t51 = 84756;

	t51 = (x217&(x218-(x219%x220)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = INT64_MAX;
	int8_t x223 = -1;
	int16_t x224 = -1;
	volatile int64_t t52 = 760642967632LL;

	t52 = (x221&(x222-(x223%x224)));

	if (t52 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	uint16_t x226 = 21U;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = -43;
	int64_t t53 = 35601LL;

	t53 = (x225&(x226-(x227%x228)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MIN;
	int16_t x232 = -1;

	t54 = (x229&(x230-(x231%x232)));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = 3476U;
	int8_t x234 = -63;
	uint16_t x235 = 14U;
	static volatile int32_t x236 = INT32_MAX;
	static int32_t t55 = 51098;

	t55 = (x233&(x234-(x235%x236)));

	if (t55 != 3472) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x238 = 19;
	static uint16_t x239 = UINT16_MAX;
	int64_t x240 = 115589556718LL;
	volatile int64_t t56 = -143LL;

	t56 = (x237&(x238-(x239%x240)));

	if (t56 != 25231376LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -1;
	int64_t x242 = 520436685852778LL;
	int16_t x244 = -1;
	static volatile int64_t t57 = 1792633749563LL;

	t57 = (x241&(x242-(x243%x244)));

	if (t57 != 520436685852778LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x245 = -1;
	uint8_t x246 = 11U;
	int64_t t58 = -1376543947772833140LL;

	t58 = (x245&(x246-(x247%x248)));

	if (t58 != 139LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MAX;
	uint16_t x251 = 743U;
	uint64_t x252 = 6610168667LLU;
	static volatile uint64_t t59 = 1829463442820250LLU;

	t59 = (x249&(x250-(x251%x252)));

	if (t59 != 2147450880LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x253 = INT32_MIN;
	static int64_t x254 = INT64_MIN;
	static int16_t x255 = -19;
	volatile int64_t t60 = INT64_MIN;

	t60 = (x253&(x254-(x255%x256)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 1234330U;
	uint8_t x258 = 28U;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	uint32_t t61 = 231223490U;

	t61 = (x257&(x258-(x259%x260)));

	if (t61 != 24U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x261 = -1;
	int32_t x262 = -77528393;
	static uint8_t x263 = 47U;
	int8_t x264 = INT8_MAX;
	int32_t t62 = -14523;

	t62 = (x261&(x262-(x263%x264)));

	if (t62 != -77528440) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = 0;
	volatile int16_t x266 = -1;
	static int8_t x267 = 23;
	int32_t x268 = -1;
	static volatile int32_t t63 = 1;

	t63 = (x265&(x266-(x267%x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = 1LLU;
	uint16_t x270 = 3004U;
	int16_t x271 = -649;
	int64_t x272 = INT64_MIN;
	uint64_t t64 = 93559LLU;

	t64 = (x269&(x270-(x271%x272)));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x274 = UINT8_MAX;
	int16_t x276 = -208;
	volatile uint64_t t65 = 226153743108630027LLU;

	t65 = (x273&(x274-(x275%x276)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x277 = -1;
	int64_t x278 = INT64_MIN;
	static volatile int32_t x280 = 988395;
	uint64_t t66 = 50886956137LLU;

	t66 = (x277&(x278-(x279%x280)));

	if (t66 != 9223372036854152708LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = 12;
	int64_t x282 = -1LL;
	int16_t x283 = -1;
	static int64_t x284 = -298120086861184LL;

	t67 = (x281&(x282-(x283%x284)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x286 = INT64_MAX;
	static int32_t x287 = INT32_MIN;
	int32_t x288 = INT32_MIN;

	t68 = (x285&(x286-(x287%x288)));

	if (t68 != 255LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = -1;
	int8_t x290 = INT8_MIN;
	int64_t x291 = -928LL;
	uint64_t x292 = 514739446923701997LLU;

	t69 = (x289&(x290-(x291%x292)));

	if (t69 != 18015880642329570695LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = 12054672LL;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = INT64_MIN;
	volatile uint64_t t70 = 9567568LLU;

	t70 = (x293&(x294-(x295%x296)));

	if (t70 != 12046464LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x297 = INT64_MIN;
	static uint16_t x298 = UINT16_MAX;
	int16_t x299 = 389;
	static uint16_t x300 = 6U;
	volatile int64_t t71 = 4883884190LL;

	t71 = (x297&(x298-(x299%x300)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x302 = INT64_MIN;
	static uint32_t x303 = 1114575U;
	uint64_t x304 = 2822473715453LLU;
	volatile uint64_t t72 = 1205072900137059LLU;

	t72 = (x301&(x302-(x303%x304)));

	if (t72 != 16LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x305 = -3743;
	int8_t x306 = INT8_MIN;
	int64_t x307 = -264418634LL;
	volatile int64_t t73 = 61841949LL;

	t73 = (x305&(x306-(x307%x308)));

	if (t73 != 257LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	uint16_t x312 = 171U;
	volatile int32_t t74 = -8363689;

	t74 = (x309&(x310-(x311%x312)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = UINT64_MAX;
	uint8_t x315 = 8U;
	int32_t x316 = 14;

	t75 = (x313&(x314-(x315%x316)));

	if (t75 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x318 = 9268862878LLU;
	int8_t x319 = -1;
	volatile int16_t x320 = INT16_MIN;

	t76 = (x317&(x318-(x319%x320)));

	if (t76 != 9268862879LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x321 = INT8_MIN;
	static int16_t x322 = -1;
	volatile uint64_t x323 = 13289453322971LLU;
	static int64_t x324 = INT64_MIN;
	static uint64_t t77 = 2536371902LLU;

	t77 = (x321&(x322-(x323%x324)));

	if (t77 != 18446730784256228608LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x325 = UINT8_MAX;
	volatile int16_t x326 = INT16_MAX;
	volatile int64_t x327 = 3494947218LL;
	int16_t x328 = INT16_MIN;
	int64_t t78 = -199376LL;

	t78 = (x325&(x326-(x327%x328)));

	if (t78 != 109LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x331 = INT16_MIN;
	int16_t x332 = 1;
	volatile int32_t t79 = 1654;

	t79 = (x329&(x330-(x331%x332)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x333 = -1;
	int16_t x334 = INT16_MAX;
	volatile int64_t x335 = -8078LL;
	uint16_t x336 = 3U;
	int64_t t80 = 7640037692515969LL;

	t80 = (x333&(x334-(x335%x336)));

	if (t80 != 32769LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x337 = INT8_MAX;
	int64_t x338 = -16LL;
	int16_t x339 = INT16_MAX;
	static int64_t x340 = -1LL;
	int64_t t81 = -9242989465LL;

	t81 = (x337&(x338-(x339%x340)));

	if (t81 != 112LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = -10978352831373LL;
	int64_t x342 = INT64_MIN;
	static int32_t x343 = INT32_MIN;
	volatile int64_t t82 = INT64_MIN;

	t82 = (x341&(x342-(x343%x344)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x345 = 4028U;
	int32_t x346 = -1;
	static int32_t x347 = INT32_MAX;
	int8_t x348 = -53;
	volatile int32_t t83 = 71953;

	t83 = (x345&(x346-(x347%x348)));

	if (t83 != 4008) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = UINT8_MAX;
	static uint32_t x350 = 2893635U;
	int8_t x351 = INT8_MIN;
	volatile uint32_t t84 = 223508576U;

	t84 = (x349&(x350-(x351%x352)));

	if (t84 != 195U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = INT32_MAX;
	int64_t x354 = INT64_MIN;
	static uint16_t x355 = UINT16_MAX;
	int16_t x356 = -1;

	t85 = (x353&(x354-(x355%x356)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -1;
	static int16_t x362 = INT16_MIN;
	int32_t x363 = -1;
	volatile int64_t t86 = 91880477662769LL;

	t86 = (x361&(x362-(x363%x364)));

	if (t86 != -32768LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MAX;
	static int32_t x367 = -1;
	int64_t t87 = -409627400LL;

	t87 = (x365&(x366-(x367%x368)));

	if (t87 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = 0U;
	static int32_t x372 = -92522460;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x369&(x370-(x371%x372)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = 0;
	uint64_t x376 = UINT64_MAX;
	uint64_t t89 = 1484211LLU;

	t89 = (x373&(x374-(x375%x376)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x377 = -1LL;
	int16_t x378 = INT16_MIN;
	int64_t x379 = -11506786717779070LL;
	uint64_t x380 = 15388177863LLU;
	uint64_t t90 = 1267745LLU;

	t90 = (x377&(x378-(x379%x380)));

	if (t90 != 18446744066785743932LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = -1;
	volatile uint64_t x382 = 371LLU;
	int32_t x383 = -1;
	int32_t x384 = -1;
	uint64_t t91 = 702508137785LLU;

	t91 = (x381&(x382-(x383%x384)));

	if (t91 != 371LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x385 = 1U;
	static int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	uint32_t x388 = UINT32_MAX;

	t92 = (x385&(x386-(x387%x388)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = 3U;
	static int16_t x390 = 26;
	static uint8_t x391 = 29U;
	int32_t x392 = INT32_MAX;
	int32_t t93 = 246937252;

	t93 = (x389&(x390-(x391%x392)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x394 = -16663;
	uint8_t x395 = 45U;
	int8_t x396 = 20;
	volatile uint32_t t94 = 14139904U;

	t94 = (x393&(x394-(x395%x396)));

	if (t94 != 4294950628U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = 511875906LLU;
	uint8_t x398 = 17U;
	uint8_t x399 = 7U;
	volatile int32_t x400 = -1;
	uint64_t t95 = 657573307090190LLU;

	t95 = (x397&(x398-(x399%x400)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MAX;
	uint16_t x402 = UINT16_MAX;
	static int32_t x403 = INT32_MAX;
	volatile uint16_t x404 = 5U;

	t96 = (x401&(x402-(x403%x404)));

	if (t96 != 125) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = -2;
	uint32_t x407 = UINT32_MAX;
	uint32_t x408 = 117U;
	uint32_t t97 = 8U;

	t97 = (x405&(x406-(x407%x408)));

	if (t97 != 4294934528U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x409 = INT8_MAX;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t98 = 1070U;

	t98 = (x409&(x410-(x411%x412)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t t99 = 92200234923LL;

	t99 = (x413&(x414-(x415%x416)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

