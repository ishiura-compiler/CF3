#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
volatile int64_t t1 = 1012007LL;
int8_t x11 = -1;
int8_t x12 = INT8_MAX;
static volatile int64_t t2 = 65383LL;
int64_t x27 = INT64_MIN;
volatile uint32_t x31 = 107055319U;
int64_t x33 = 3884516151LL;
volatile uint32_t x36 = 43U;
static volatile uint32_t t9 = 233500U;
int32_t x44 = -1;
int32_t x48 = -1;
int64_t t11 = 80764153763LL;
static int16_t x56 = INT16_MAX;
int8_t x60 = 1;
volatile uint16_t x65 = 23679U;
static uint8_t x66 = 23U;
uint64_t x69 = UINT64_MAX;
uint16_t x83 = UINT16_MAX;
int16_t x86 = INT16_MAX;
int8_t x90 = 2;
int32_t x93 = -1;
volatile uint8_t x97 = UINT8_MAX;
uint32_t x106 = 29635071U;
int16_t x108 = INT16_MIN;
uint16_t x109 = UINT16_MAX;
volatile uint8_t x116 = UINT8_MAX;
uint16_t x118 = 20U;
int8_t x124 = -1;
uint64_t x126 = 50521249LLU;
uint64_t t31 = 1LLU;
int8_t x134 = INT8_MAX;
int16_t x137 = INT16_MAX;
volatile int16_t x147 = INT16_MAX;
int64_t t38 = -29942016914858563LL;
int64_t x164 = -1LL;
uint64_t t40 = 12527397LLU;
int64_t t41 = 20028210LL;
static int64_t x173 = 1681774LL;
int8_t x174 = INT8_MIN;
volatile int8_t x183 = -1;
uint64_t t44 = 1409607LLU;
int8_t x185 = 0;
int8_t x186 = -1;
volatile uint64_t t46 = 947LLU;
uint8_t x194 = 124U;
uint16_t x195 = UINT16_MAX;
uint64_t t47 = 92172270340440116LLU;
int64_t x204 = INT64_MIN;
uint32_t x207 = 3841835U;
volatile int32_t x211 = INT32_MIN;
uint8_t x216 = 12U;
volatile uint8_t x220 = UINT8_MAX;
int64_t t53 = 3199121370036912LL;
static uint64_t x222 = UINT64_MAX;
volatile uint64_t t54 = 1048LLU;
uint64_t x228 = 343446206202012LLU;
uint64_t t55 = 99230979367889LLU;
int16_t x230 = -10;
volatile int32_t x231 = INT32_MAX;
int32_t x236 = INT32_MIN;
int32_t t57 = -2737785;
int32_t x237 = 66602;
static uint64_t t59 = 114988168971623LLU;
uint64_t x250 = 463778693180313968LLU;
volatile uint64_t t61 = 765LLU;
volatile int16_t x256 = INT16_MIN;
uint64_t x259 = 1967857898LLU;
uint64_t x263 = UINT64_MAX;
static volatile int64_t x264 = -1LL;
static int16_t x265 = -357;
int64_t x268 = INT64_MIN;
volatile uint32_t x278 = UINT32_MAX;
static int32_t x280 = INT32_MIN;
volatile uint64_t x281 = 1021515431079LLU;
volatile int16_t x282 = -1471;
uint64_t x289 = UINT64_MAX;
int64_t x291 = INT64_MIN;
static volatile int16_t x296 = INT16_MIN;
uint16_t x303 = 3U;
uint64_t x306 = 14069154548LLU;
uint64_t x308 = 17LLU;
uint64_t t75 = 9LLU;
volatile uint64_t x310 = 7LLU;
int8_t x312 = -1;
int8_t x313 = INT8_MAX;
int64_t t78 = 2LL;
volatile int32_t x322 = INT32_MIN;
int32_t x327 = -1;
uint64_t t80 = 3137252LLU;
int64_t x332 = 249394547439103LL;
volatile int8_t x334 = -1;
uint64_t x341 = 19680168333350LLU;
volatile int8_t x345 = INT8_MIN;
uint32_t x358 = 15U;
static uint64_t x363 = 33076879815456387LLU;
int8_t x364 = INT8_MIN;
int8_t x369 = 5;
static int16_t x381 = -1;
volatile int32_t x384 = INT32_MIN;
static volatile int64_t t94 = -52181137987986090LL;
volatile int64_t x398 = -1LL;
int16_t x399 = INT16_MIN;
static volatile int64_t x400 = INT64_MAX;
volatile int8_t x401 = INT8_MAX;
int64_t t98 = -441678LL;


void f0(void) {
	volatile uint16_t x2 = 24739U;
	static volatile uint8_t x3 = 27U;
	static volatile int32_t x4 = -1;
	volatile int64_t t0 = 6LL;

	t0 = ((x1&(x2/x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1LL;
	uint8_t x6 = UINT8_MAX;
	static volatile int32_t x7 = INT32_MIN;
	int8_t x8 = INT8_MAX;

	t1 = ((x5&(x6/x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static int64_t x10 = -883013205076189LL;

	t2 = ((x9&(x10/x11))/x12);

	if (t2 != 6952859882489LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = 386;
	static int64_t t3 = -846712914LL;

	t3 = ((x13&(x14/x15))/x16);

	if (t3 != -5563429LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int32_t x18 = 689;
	uint64_t x19 = 17667124583LLU;
	int32_t x20 = -1;
	uint64_t t4 = 3LLU;

	t4 = ((x17&(x18/x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 301501U;
	int32_t x22 = INT32_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	int8_t x24 = 1;
	static uint32_t t5 = 37525U;

	t5 = ((x21&(x22/x23))/x24);

	if (t5 != 294912U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint64_t x26 = 8569LLU;
	int64_t x28 = INT64_MIN;
	uint64_t t6 = 1674451077560268LLU;

	t6 = ((x25&(x26/x27))/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1923LL;
	int32_t x30 = INT32_MIN;
	static uint32_t x32 = 13U;
	volatile int64_t t7 = -707411615783253343LL;

	t7 = ((x29&(x30/x31))/x32);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 89;
	int16_t x35 = INT16_MIN;
	volatile int64_t t8 = -120LL;

	t8 = ((x33&(x34/x35))/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint32_t x38 = 408U;
	volatile int16_t x39 = 3;
	volatile int8_t x40 = -15;

	t9 = ((x37&(x38/x39))/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	int32_t x42 = -2198153;
	volatile uint64_t x43 = 147310651788190698LLU;
	uint64_t t10 = 111444676621LLU;

	t10 = ((x41&(x42/x43))/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	int32_t x47 = INT32_MAX;

	t11 = ((x45&(x46/x47))/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 13855255LLU;
	int64_t x50 = -1LL;
	volatile int64_t x51 = INT64_MIN;
	int16_t x52 = 11077;
	static uint64_t t12 = 2525LLU;

	t12 = ((x49&(x50/x51))/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 40;
	volatile int64_t x54 = 0LL;
	int16_t x55 = -1;
	static volatile int64_t t13 = -32960803341743994LL;

	t13 = ((x53&(x54/x55))/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -193;
	volatile int32_t x58 = -1;
	int64_t x59 = -1LL;
	int64_t t14 = -487071LL;

	t14 = ((x57&(x58/x59))/x60);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	static int64_t x62 = 2054081360426LL;
	int16_t x63 = 5;
	static int16_t x64 = INT16_MAX;
	static int64_t t15 = -57494222928834031LL;

	t15 = ((x61&(x62/x63))/x64);

	if (t15 != 12537499LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x67 = -1LL;
	uint32_t x68 = UINT32_MAX;
	int64_t t16 = -1LL;

	t16 = ((x65&(x66/x67))/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int16_t x71 = -1498;
	volatile int32_t x72 = -1963878;
	static volatile uint64_t t17 = 40104347978330LLU;

	t17 = ((x69&(x70/x71))/x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 94U;
	int32_t x74 = INT32_MIN;
	uint64_t x75 = 46576337LLU;
	uint16_t x76 = 26U;
	uint64_t t18 = 1430888643LLU;

	t18 = ((x73&(x74/x75))/x76);

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 10U;
	uint16_t x78 = 3U;
	volatile int32_t x79 = -945931;
	uint8_t x80 = 19U;
	volatile int32_t t19 = -113483;

	t19 = ((x77&(x78/x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int64_t x82 = INT64_MAX;
	int32_t x84 = 99256;
	volatile int64_t t20 = -42036646LL;

	t20 = ((x81&(x82/x83))/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 4U;
	int64_t x87 = -1LL;
	static volatile uint64_t x88 = 273855498474790LLU;
	static volatile uint64_t t21 = 121909836658LLU;

	t21 = ((x85&(x86/x87))/x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int32_t x91 = INT32_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = -8073;

	t22 = ((x89&(x90/x91))/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = 5235U;
	uint16_t x95 = UINT16_MAX;
	static int16_t x96 = INT16_MIN;
	int32_t t23 = -72223608;

	t23 = ((x93&(x94/x95))/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	uint32_t x100 = 2511U;
	int64_t t24 = 64307LL;

	t24 = ((x97&(x98/x99))/x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 2381665LLU;
	volatile uint16_t x102 = 6U;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MAX;
	uint64_t t25 = 1703918792012393LLU;

	t25 = ((x101&(x102/x103))/x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x105 = -12832022;
	int16_t x107 = INT16_MIN;
	uint32_t t26 = 0U;

	t26 = ((x105&(x106/x107))/x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 108U;
	static uint16_t x111 = UINT16_MAX;
	volatile int64_t x112 = INT64_MAX;
	int64_t t27 = -294412344875LL;

	t27 = ((x109&(x110/x111))/x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 5593398U;
	volatile int16_t x114 = INT16_MAX;
	volatile uint32_t x115 = 2U;
	uint32_t t28 = 23716633U;

	t28 = ((x113&(x114/x115))/x116);

	if (t28 != 25U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int64_t x119 = INT64_MAX;
	int64_t x120 = INT64_MAX;
	volatile int64_t t29 = 16522281431377775LL;

	t29 = ((x117&(x118/x119))/x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = INT64_MAX;
	static int32_t x123 = INT32_MIN;
	volatile int64_t t30 = -29733326594LL;

	t30 = ((x121&(x122/x123))/x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x127 = 47U;
	uint32_t x128 = 10U;

	t31 = ((x125&(x126/x127))/x128);

	if (t31 != 107481LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 1LLU;
	static volatile int32_t x130 = -1702;
	int64_t x131 = -13995LL;
	uint64_t x132 = 50979688LLU;
	uint64_t t32 = 128348209898LLU;

	t32 = ((x129&(x130/x131))/x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 19U;
	volatile int16_t x135 = INT16_MAX;
	int16_t x136 = -1;
	volatile int32_t t33 = 1;

	t33 = ((x133&(x134/x135))/x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -1LL;
	int8_t x139 = INT8_MIN;
	static int8_t x140 = 18;
	int64_t t34 = 272LL;

	t34 = ((x137&(x138/x139))/x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static int16_t x142 = INT16_MIN;
	volatile uint32_t x143 = 29835397U;
	uint8_t x144 = 107U;
	volatile uint64_t t35 = 236057202311763418LLU;

	t35 = ((x141&(x142/x143))/x144);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = INT32_MIN;
	int64_t x148 = 6287141LL;
	int64_t t36 = 410LL;

	t36 = ((x145&(x146/x147))/x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	static int16_t x150 = INT16_MAX;
	volatile int16_t x151 = INT16_MIN;
	static volatile uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = 26;

	t37 = ((x149&(x150/x151))/x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 9;
	volatile uint8_t x154 = 52U;
	int64_t x155 = 3500964401066LL;
	static volatile uint8_t x156 = UINT8_MAX;

	t38 = ((x153&(x154/x155))/x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int64_t x158 = -532370521536074LL;
	int8_t x159 = INT8_MIN;
	int64_t x160 = -1LL;
	static volatile int64_t t39 = 226635871280500LL;

	t39 = ((x157&(x158/x159))/x160);

	if (t39 != -4159144699500LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	volatile int32_t x162 = INT32_MIN;
	uint64_t x163 = 68761832518947LLU;

	t40 = ((x161&(x162/x163))/x164);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	uint8_t x166 = 0U;
	volatile int64_t x167 = -1LL;
	int8_t x168 = -4;

	t41 = ((x165&(x166/x167))/x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x175 = 74675;
	int8_t x176 = INT8_MIN;
	volatile int64_t t42 = -194729138723931853LL;

	t42 = ((x173&(x174/x175))/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x177 = 259346;
	static int8_t x178 = 46;
	int32_t x179 = -2384603;
	uint16_t x180 = 45U;
	int32_t t43 = -24218517;

	t43 = ((x177&(x178/x179))/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = -14216;
	volatile uint64_t x184 = 444466009917LLU;

	t44 = ((x181&(x182/x183))/x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x187 = INT64_MIN;
	uint16_t x188 = UINT16_MAX;
	volatile int64_t t45 = -1LL;

	t45 = ((x185&(x186/x187))/x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = UINT64_MAX;
	uint8_t x190 = 1U;
	int32_t x191 = INT32_MIN;
	uint16_t x192 = UINT16_MAX;

	t46 = ((x189&(x190/x191))/x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x193 = 3LLU;
	int64_t x196 = INT64_MIN;

	t47 = ((x193&(x194/x195))/x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 7U;
	volatile int16_t x198 = INT16_MIN;
	static int16_t x199 = INT16_MIN;
	int32_t x200 = INT32_MIN;
	int32_t t48 = 53;

	t48 = ((x197&(x198/x199))/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = INT16_MAX;
	int64_t x202 = 0LL;
	int64_t x203 = -17117119007884353LL;
	int64_t t49 = 30LL;

	t49 = ((x201&(x202/x203))/x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x205 = -23;
	int64_t x206 = -500LL;
	int64_t x208 = 102354619297986228LL;
	volatile int64_t t50 = 9575932LL;

	t50 = ((x205&(x206/x207))/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t51 = -11276676734381834LL;

	t51 = ((x209&(x210/x211))/x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	static volatile int64_t t52 = 6498LL;

	t52 = ((x213&(x214/x215))/x216);

	if (t52 != 357913941LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = -1;
	int64_t x219 = 2835315LL;

	t53 = ((x217&(x218/x219))/x220);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x221 = INT16_MIN;
	int16_t x223 = INT16_MAX;
	static uint8_t x224 = 29U;

	t54 = ((x221&(x222/x223))/x224);

	if (t54 != 19412659786716LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = -266809774;
	uint16_t x226 = UINT16_MAX;
	int64_t x227 = -1LL;

	t55 = ((x225&(x226/x227))/x228);

	if (t55 != 53710LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = 11U;
	int8_t x232 = -1;
	static int32_t t56 = 221;

	t56 = ((x229&(x230/x231))/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -156;
	int8_t x234 = INT8_MIN;
	volatile int16_t x235 = -1;

	t57 = ((x233&(x234/x235))/x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x238 = 340U;
	volatile int16_t x239 = INT16_MIN;
	int16_t x240 = -10321;
	volatile int32_t t58 = -1802;

	t58 = ((x237&(x238/x239))/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	volatile uint8_t x242 = 12U;
	int64_t x243 = -1LL;
	volatile uint64_t x244 = UINT64_MAX;

	t59 = ((x241&(x242/x243))/x244);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x245 = 182U;
	int16_t x246 = -1;
	int8_t x247 = INT8_MIN;
	int16_t x248 = 2;
	int32_t t60 = 5;

	t60 = ((x245&(x246/x247))/x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = INT16_MIN;
	int64_t x251 = INT64_MAX;
	int16_t x252 = -1;

	t61 = ((x249&(x250/x251))/x252);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 3U;
	volatile uint64_t x254 = 179037327357LLU;
	volatile uint64_t x255 = 214120806393821LLU;
	uint64_t t62 = 95LLU;

	t62 = ((x253&(x254/x255))/x256);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x257 = 5U;
	uint32_t x258 = UINT32_MAX;
	int8_t x260 = -5;
	uint64_t t63 = 23287380962799LLU;

	t63 = ((x257&(x258/x259))/x260);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = -1LL;
	int16_t x262 = -1;
	uint64_t t64 = 0LLU;

	t64 = ((x261&(x262/x263))/x264);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x266 = 59U;
	int32_t x267 = -222;
	volatile int64_t t65 = -1076073903609LL;

	t65 = ((x265&(x266/x267))/x268);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = UINT32_MAX;
	uint16_t x270 = 106U;
	int32_t x271 = INT32_MAX;
	int64_t x272 = -29586821LL;
	volatile int64_t t66 = -11489180639LL;

	t66 = ((x269&(x270/x271))/x272);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = 4361310377370233283LL;
	int8_t x274 = INT8_MAX;
	volatile uint8_t x275 = UINT8_MAX;
	uint8_t x276 = 5U;
	static volatile int64_t t67 = 62182743LL;

	t67 = ((x273&(x274/x275))/x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 1U;
	int32_t x279 = INT32_MIN;
	static uint32_t t68 = 0U;

	t68 = ((x277&(x278/x279))/x280);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x283 = UINT64_MAX;
	uint32_t x284 = 81831U;
	uint64_t t69 = 3483311542189118816LLU;

	t69 = ((x281&(x282/x283))/x284);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MIN;
	volatile int64_t x286 = -1LL;
	uint32_t x287 = 122388U;
	volatile int32_t x288 = INT32_MAX;
	int64_t t70 = 43618LL;

	t70 = ((x285&(x286/x287))/x288);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x290 = INT8_MAX;
	static uint32_t x292 = UINT32_MAX;
	uint64_t t71 = 208699360288024LLU;

	t71 = ((x289&(x290/x291))/x292);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = INT64_MIN;
	static int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	volatile int64_t t72 = 453613785848997LL;

	t72 = ((x293&(x294/x295))/x296);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x297 = 1;
	static volatile uint32_t x298 = UINT32_MAX;
	int16_t x299 = 3;
	int16_t x300 = INT16_MIN;
	uint32_t t73 = 17107563U;

	t73 = ((x297&(x298/x299))/x300);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x302 = 41U;
	int32_t x304 = 24800;
	volatile int32_t t74 = -881006;

	t74 = ((x301&(x302/x303))/x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = -27;
	int8_t x307 = INT8_MIN;

	t75 = ((x305&(x306/x307))/x308);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x309 = INT32_MIN;
	static int16_t x311 = INT16_MIN;
	static volatile uint64_t t76 = 232738LLU;

	t76 = ((x309&(x310/x311))/x312);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x314 = 76165842146990354LLU;
	int16_t x315 = -1;
	uint16_t x316 = 19429U;
	volatile uint64_t t77 = 858865295LLU;

	t77 = ((x313&(x314/x315))/x316);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	uint32_t x318 = UINT32_MAX;
	int64_t x319 = -30880463590106LL;
	uint8_t x320 = 13U;

	t78 = ((x317&(x318/x319))/x320);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x321 = -1;
	volatile int32_t x323 = INT32_MIN;
	volatile uint32_t x324 = 15U;
	uint32_t t79 = 25U;

	t79 = ((x321&(x322/x323))/x324);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x325 = UINT8_MAX;
	uint64_t x326 = UINT64_MAX;
	uint8_t x328 = UINT8_MAX;

	t80 = ((x325&(x326/x327))/x328);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x329 = INT32_MIN;
	static int16_t x330 = -1;
	volatile int32_t x331 = -1;
	int64_t t81 = -423065566LL;

	t81 = ((x329&(x330/x331))/x332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x333 = 12;
	volatile int32_t x335 = 1;
	int64_t x336 = -1LL;
	static volatile int64_t t82 = 199835LL;

	t82 = ((x333&(x334/x335))/x336);

	if (t82 != -12LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x337 = UINT64_MAX;
	volatile int16_t x338 = INT16_MIN;
	int32_t x339 = 4491;
	int8_t x340 = -1;
	volatile uint64_t t83 = 1840124145LLU;

	t83 = ((x337&(x338/x339))/x340);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x342 = INT64_MIN;
	volatile uint64_t x343 = 2613205862772LLU;
	volatile int64_t x344 = -5903511037474848LL;
	volatile uint64_t t84 = 0LLU;

	t84 = ((x341&(x342/x343))/x344);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	static int32_t x348 = INT32_MIN;
	volatile int32_t t85 = -15279575;

	t85 = ((x345&(x346/x347))/x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MAX;
	static uint64_t x351 = 4348054LLU;
	int16_t x352 = -1;
	uint64_t t86 = 2011LLU;

	t86 = ((x349&(x350/x351))/x352);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = -1;
	static volatile int8_t x354 = 0;
	volatile int16_t x355 = INT16_MIN;
	int64_t x356 = -1LL;
	static int64_t t87 = 938LL;

	t87 = ((x353&(x354/x355))/x356);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = INT16_MIN;
	volatile int32_t x359 = -5488854;
	uint64_t x360 = 225630LLU;
	volatile uint64_t t88 = 21723LLU;

	t88 = ((x357&(x358/x359))/x360);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MIN;
	uint64_t t89 = 33919748046915LLU;

	t89 = ((x361&(x362/x363))/x364);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = INT8_MIN;
	int64_t x366 = 160975693133646LL;
	volatile int64_t x367 = 31619881471334LL;
	int8_t x368 = INT8_MIN;
	static volatile int64_t t90 = -476490702061563LL;

	t90 = ((x365&(x366/x367))/x368);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x370 = INT8_MIN;
	volatile uint32_t x371 = UINT32_MAX;
	int32_t x372 = INT32_MAX;
	static volatile uint32_t t91 = 11976U;

	t91 = ((x369&(x370/x371))/x372);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x373 = UINT64_MAX;
	uint8_t x374 = 0U;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;
	static uint64_t t92 = 16333515432156769LLU;

	t92 = ((x373&(x374/x375))/x376);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = INT8_MAX;
	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	static volatile uint16_t x380 = UINT16_MAX;
	volatile int32_t t93 = -13212889;

	t93 = ((x377&(x378/x379))/x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MIN;

	t94 = ((x381&(x382/x383))/x384);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x385 = INT8_MIN;
	uint8_t x386 = 73U;
	int16_t x387 = -1;
	static uint8_t x388 = UINT8_MAX;
	volatile int32_t t95 = -482;

	t95 = ((x385&(x386/x387))/x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = 66;
	int32_t x390 = -3120;
	static int16_t x391 = INT16_MAX;
	static uint64_t x392 = 7107024812631495792LLU;
	volatile uint64_t t96 = 34676435290332LLU;

	t96 = ((x389&(x390/x391))/x392);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t t97 = -125968090513551625LL;

	t97 = ((x397&(x398/x399))/x400);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x402 = INT16_MIN;
	int64_t x403 = -1LL;
	int32_t x404 = INT32_MIN;

	t98 = ((x401&(x402/x403))/x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = -10;
	int8_t x406 = INT8_MIN;
	uint16_t x407 = 470U;
	static volatile uint32_t x408 = UINT32_MAX;
	volatile uint32_t t99 = 901867975U;

	t99 = ((x405&(x406/x407))/x408);

	if (t99 != 0U) { NG(); } else { ; }
	
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

