#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = UINT8_MAX;
volatile int64_t x6 = -782096966461569LL;
volatile int64_t t2 = 358476173018052390LL;
int32_t x13 = INT32_MIN;
int64_t x23 = -1LL;
static int64_t t5 = 898769400644685462LL;
int16_t x25 = INT16_MIN;
uint64_t t7 = 2629253LLU;
volatile int32_t x36 = -28374963;
uint64_t t8 = 6LLU;
uint64_t x41 = UINT64_MAX;
static uint64_t t10 = 2691887664658885LLU;
volatile int32_t x49 = 192542;
static int32_t x52 = -1;
int8_t x60 = -4;
int32_t x62 = INT32_MIN;
uint64_t t14 = 9472909282744LLU;
uint8_t x68 = 2U;
uint16_t x75 = 57U;
static uint32_t t17 = 12U;
volatile uint64_t t19 = 244148379846468LLU;
int64_t x91 = 1189LL;
static int64_t t20 = 7556129324751987LL;
int16_t x93 = 4643;
int64_t x94 = INT64_MAX;
static uint64_t x95 = UINT64_MAX;
volatile uint16_t x97 = UINT16_MAX;
uint32_t x100 = UINT32_MAX;
volatile uint64_t t23 = 45603004009037581LLU;
int16_t x108 = -3727;
uint32_t x113 = UINT32_MAX;
volatile uint32_t t26 = 5560U;
int8_t x122 = INT8_MIN;
uint32_t x125 = UINT32_MAX;
uint16_t x128 = UINT16_MAX;
int64_t t31 = -111268405609LL;
static int64_t x141 = -28164245354144687LL;
volatile uint32_t x143 = 866140U;
uint64_t x147 = 7516340417334LLU;
int64_t x149 = -1659867833047LL;
int64_t x151 = INT64_MIN;
int8_t x153 = INT8_MAX;
volatile uint32_t t36 = 2111U;
uint8_t x157 = UINT8_MAX;
volatile uint32_t t39 = 1088U;
int64_t t40 = 392348686151389415LL;
int64_t t41 = 8461824612LL;
int32_t x188 = INT32_MIN;
uint32_t t44 = 22U;
uint16_t x189 = UINT16_MAX;
static volatile int64_t x194 = -1LL;
int16_t x196 = INT16_MIN;
volatile int64_t x197 = INT64_MIN;
static int16_t x198 = INT16_MAX;
static volatile uint64_t x200 = 2224503507161982LLU;
int8_t x207 = -24;
int64_t x209 = 2384366011318LL;
uint16_t x212 = 27661U;
volatile uint64_t x222 = 998098837245982144LLU;
volatile uint64_t x224 = 3227275444LLU;
int8_t x228 = -1;
int8_t x230 = -1;
int8_t x234 = 1;
static int16_t x237 = INT16_MAX;
int32_t x253 = -1;
uint8_t x254 = 3U;
volatile int32_t x259 = 21330;
volatile int8_t x269 = INT8_MIN;
uint32_t x271 = UINT32_MAX;
volatile uint16_t x273 = 2U;
volatile int8_t x280 = INT8_MIN;
static uint16_t x284 = 18U;
volatile int64_t t68 = -3081LL;
int32_t x285 = -1;
uint16_t x302 = 38U;
int64_t x308 = INT64_MAX;
volatile int64_t t74 = 379686454301481647LL;
static uint16_t x314 = 95U;
uint32_t x316 = UINT32_MAX;
int64_t x318 = 8LL;
volatile uint16_t x324 = 5867U;
static uint64_t x325 = 639448760711LLU;
static volatile uint32_t t80 = 6U;
static uint32_t x333 = 9U;
volatile uint64_t t83 = 1LLU;
int8_t x345 = -1;
uint16_t x346 = 0U;
int8_t x352 = 1;
volatile int32_t t85 = 2028;
static uint32_t x353 = 220U;
static volatile uint32_t t86 = 3301184U;
int32_t x359 = INT32_MAX;
int32_t x361 = INT32_MIN;
volatile int64_t t88 = -3831135LL;
int32_t x370 = -1;
uint32_t x376 = 873248U;
int8_t x379 = INT8_MIN;
int64_t x388 = -1LL;
int32_t x390 = 20981;
int32_t x396 = INT32_MIN;
volatile int64_t t99 = 331230774LL;


void f0(void) {
	int16_t x1 = 1;
	static int32_t x2 = -50646079;
	uint16_t x3 = 88U;
	int32_t t0 = -38142;

	t0 = ((x1&(x2|x3))%x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 424;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = 15203U;
	static volatile int64_t t1 = -1LL;

	t1 = ((x5&(x6|x7))%x8);

	if (t1 != 296LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 242462022633723542LL;
	static int32_t x10 = 13612756;
	int32_t x11 = -18;
	int16_t x12 = 10286;

	t2 = ((x9&(x10|x11))%x12);

	if (t2 != 6398LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MIN;
	volatile uint8_t x16 = 28U;
	uint32_t t3 = 7097U;

	t3 = ((x13&(x14|x15))%x16);

	if (t3 != 16U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int32_t x18 = INT32_MIN;
	static int8_t x19 = INT8_MIN;
	static volatile int64_t x20 = INT64_MIN;
	volatile uint64_t t4 = 7754777924125LLU;

	t4 = ((x17&(x18|x19))%x20);

	if (t4 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MIN;
	uint16_t x24 = UINT16_MAX;

	t5 = ((x21&(x22|x23))%x24);

	if (t5 != -32768LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MAX;
	static volatile int32_t x27 = -1;
	volatile int32_t x28 = INT32_MAX;
	int64_t t6 = 3393887476962795LL;

	t6 = ((x25&(x26|x27))%x28);

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 3U;
	int16_t x30 = -4055;
	uint8_t x31 = 7U;
	volatile uint64_t x32 = UINT64_MAX;

	t7 = ((x29&(x30|x31))%x32);

	if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 0U;
	static uint16_t x34 = UINT16_MAX;
	static uint64_t x35 = 31LLU;

	t8 = ((x33&(x34|x35))%x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 72U;
	uint64_t x38 = 14898720686646971LLU;
	int16_t x39 = 9;
	int32_t x40 = -91963;
	uint64_t t9 = 1594306448184565LLU;

	t9 = ((x37&(x38|x39))%x40);

	if (t9 != 8LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x42 = UINT32_MAX;
	static uint8_t x43 = UINT8_MAX;
	int64_t x44 = -35215148288355263LL;

	t10 = ((x41&(x42|x43))%x44);

	if (t10 != 4294967295LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x50 = 898380U;
	uint16_t x51 = 94U;
	uint32_t t11 = 1183U;

	t11 = ((x49&(x50|x51))%x52);

	if (t11 != 45086U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = 4U;
	uint64_t x54 = 24016LLU;
	int16_t x55 = -3;
	uint32_t x56 = 359U;
	uint64_t t12 = 2941980727LLU;

	t12 = ((x53&(x54|x55))%x56);

	if (t12 != 4LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MIN;
	volatile int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MIN;
	int32_t t13 = 1293;

	t13 = ((x57&(x58|x59))%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	static int8_t x63 = -1;
	static uint64_t x64 = 2276767566107190LLU;

	t14 = ((x61&(x62|x63))%x64);

	if (t14 != 127LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = -5;
	uint64_t x66 = 852185683285511970LLU;
	volatile int64_t x67 = 16407834517LL;
	volatile uint64_t t15 = 63235158238173LLU;

	t15 = ((x65&(x66|x67))%x68);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x69 = -155668LL;
	static uint64_t x70 = UINT64_MAX;
	int64_t x71 = -222547131LL;
	volatile int8_t x72 = -27;
	volatile uint64_t t16 = 2LLU;

	t16 = ((x69&(x70|x71))%x72);

	if (t16 != 18446744073709395948LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = -9;
	volatile uint16_t x74 = 263U;
	static volatile uint32_t x76 = 60693U;

	t17 = ((x73&(x74|x75))%x76);

	if (t17 != 311U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = 0;
	int8_t x82 = INT8_MIN;
	volatile int64_t x83 = INT64_MAX;
	volatile int32_t x84 = INT32_MIN;
	int64_t t18 = -144LL;

	t18 = ((x81&(x82|x83))%x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = -112442;
	uint64_t x86 = 2824267424129LLU;
	static int32_t x87 = -1;
	int16_t x88 = INT16_MAX;

	t19 = ((x85&(x86|x87))%x88);

	if (t19 != 18642LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 32469U;
	int8_t x90 = INT8_MIN;
	uint16_t x92 = UINT16_MAX;

	t20 = ((x89&(x90|x91))%x92);

	if (t20 != 32389LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x96 = INT16_MIN;
	volatile uint64_t t21 = 741081LLU;

	t21 = ((x93&(x94|x95))%x96);

	if (t21 != 4643LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x98 = 34944503156646125LL;
	int32_t x99 = 17552;
	int64_t t22 = -7175951090LL;

	t22 = ((x97&(x98|x99))%x100);

	if (t22 != 25853LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x101 = 132542118452LLU;
	volatile uint8_t x102 = 3U;
	int64_t x103 = -138149LL;
	uint64_t x104 = 242285699LLU;

	t23 = ((x101&(x102|x103))%x104);

	if (t23 != 11834407LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = -1;
	uint64_t x106 = UINT64_MAX;
	int32_t x107 = -1;
	volatile uint64_t t24 = 63531004266LLU;

	t24 = ((x105&(x106|x107))%x108);

	if (t24 != 3726LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 1U;
	int16_t x110 = -1;
	uint16_t x111 = 238U;
	static volatile uint16_t x112 = 203U;
	volatile uint32_t t25 = 6U;

	t25 = ((x109&(x110|x111))%x112);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x114 = 0;
	int8_t x115 = INT8_MAX;
	uint16_t x116 = UINT16_MAX;

	t26 = ((x113&(x114|x115))%x116);

	if (t26 != 127U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MAX;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = 41458;
	volatile int16_t x120 = INT16_MAX;
	static uint32_t t27 = 1U;

	t27 = ((x117&(x118|x119))%x120);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x121 = UINT64_MAX;
	volatile int64_t x123 = INT64_MIN;
	static int16_t x124 = -42;
	volatile uint64_t t28 = 901115882550283599LLU;

	t28 = ((x121&(x122|x123))%x124);

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x126 = 1206266508471LLU;
	static int8_t x127 = INT8_MIN;
	static volatile uint64_t t29 = 63118184945LLU;

	t29 = ((x125&(x126|x127))%x128);

	if (t29 != 65463LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = -6;
	int8_t x130 = 0;
	int8_t x131 = 48;
	static volatile int16_t x132 = -1;
	volatile int32_t t30 = -6;

	t30 = ((x129&(x130|x131))%x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x133 = -7;
	int16_t x134 = INT16_MAX;
	int8_t x135 = 24;
	int64_t x136 = -1LL;

	t31 = ((x133&(x134|x135))%x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = 2407181;
	uint16_t x138 = 30908U;
	int8_t x139 = -1;
	int8_t x140 = INT8_MIN;
	volatile int32_t t32 = 2;

	t32 = ((x137&(x138|x139))%x140);

	if (t32 != 13) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x142 = -1;
	int16_t x144 = 1;
	volatile int64_t t33 = 4091793950961LL;

	t33 = ((x141&(x142|x143))%x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x146 = 2136214680432100LLU;
	static volatile int16_t x148 = -1685;
	uint64_t t34 = 115723020268418LLU;

	t34 = ((x145&(x146|x147))%x148);

	if (t34 != 2136309183086464LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = -1;
	uint64_t x152 = 843313495608LLU;
	static volatile uint64_t t35 = 8578993295LLU;

	t35 = ((x149&(x150|x151))%x152);

	if (t35 != 126665862393LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x154 = INT32_MIN;
	int8_t x155 = -1;
	uint32_t x156 = UINT32_MAX;

	t36 = ((x153&(x154|x155))%x156);

	if (t36 != 127U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x158 = 26;
	static volatile uint32_t x159 = 271U;
	static volatile uint32_t x160 = 45668U;
	volatile uint32_t t37 = 950098U;

	t37 = ((x157&(x158|x159))%x160);

	if (t37 != 31U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x161 = UINT8_MAX;
	int16_t x162 = -1;
	int8_t x163 = INT8_MIN;
	volatile uint16_t x164 = 2U;
	int32_t t38 = 25649528;

	t38 = ((x161&(x162|x163))%x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 2140399U;
	int8_t x166 = INT8_MIN;
	uint16_t x167 = 2260U;
	uint16_t x168 = UINT16_MAX;

	t39 = ((x165&(x166|x167))%x168);

	if (t39 != 43236U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x169 = -130359762LL;
	int64_t x170 = INT64_MIN;
	int64_t x171 = -1LL;
	int8_t x172 = INT8_MAX;

	t40 = ((x169&(x170|x171))%x172);

	if (t40 != -104LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int32_t x174 = INT32_MAX;
	volatile int64_t x175 = -1LL;
	int32_t x176 = INT32_MAX;

	t41 = ((x173&(x174|x175))%x176);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 2U;
	volatile int64_t x178 = INT64_MIN;
	volatile int16_t x179 = 26;
	int8_t x180 = -1;
	int64_t t42 = 2212252592LL;

	t42 = ((x177&(x178|x179))%x180);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MAX;
	static volatile int16_t x182 = -59;
	int32_t x183 = INT32_MAX;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t43 = -3340;

	t43 = ((x181&(x182|x183))%x184);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = 14311U;

	t44 = ((x185&(x186|x187))%x188);

	if (t44 != 103U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x190 = UINT32_MAX;
	uint32_t x191 = 8102973U;
	uint32_t x192 = 18123087U;
	volatile uint32_t t45 = 552U;

	t45 = ((x189&(x190|x191))%x192);

	if (t45 != 65535U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = INT16_MAX;
	uint16_t x195 = 1113U;
	int64_t t46 = -4388709926762838LL;

	t46 = ((x193&(x194|x195))%x196);

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x199 = 7;
	uint64_t t47 = 366LLU;

	t47 = ((x197&(x198|x199))%x200);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x201 = INT32_MIN;
	volatile int16_t x202 = 58;
	int32_t x203 = INT32_MIN;
	int16_t x204 = -1;
	int32_t t48 = 97;

	t48 = ((x201&(x202|x203))%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = 3U;
	int64_t x206 = 2127198LL;
	volatile int32_t x208 = -1;
	volatile int64_t t49 = 4019LL;

	t49 = ((x205&(x206|x207))%x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x210 = 807;
	volatile int32_t x211 = -1;
	int64_t t50 = -1230LL;

	t50 = ((x209&(x210|x211))%x212);

	if (t50 != 9819LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	static int32_t x214 = 55478900;
	int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;
	volatile int32_t t51 = 2510212;

	t51 = ((x213&(x214|x215))%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x217 = 133018278U;
	int16_t x218 = 1;
	static volatile uint32_t x219 = 33406U;
	int32_t x220 = 232836;
	uint32_t t52 = 647236061U;

	t52 = ((x217&(x218|x219))%x220);

	if (t52 != 33318U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x223 = 56U;
	volatile uint64_t t53 = 414762016758575478LLU;

	t53 = ((x221&(x222|x223))%x224);

	if (t53 != 2907885356LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x225 = INT64_MAX;
	int32_t x226 = INT32_MIN;
	static int64_t x227 = INT64_MIN;
	int64_t t54 = -4870025LL;

	t54 = ((x225&(x226|x227))%x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MAX;
	int32_t x231 = INT32_MIN;
	static volatile int8_t x232 = INT8_MIN;
	volatile int32_t t55 = -162;

	t55 = ((x229&(x230|x231))%x232);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x233 = INT8_MIN;
	int64_t x235 = -1LL;
	int32_t x236 = -3952931;
	volatile int64_t t56 = -580736LL;

	t56 = ((x233&(x234|x235))%x236);

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x238 = 23489488184LLU;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = 5U;
	uint64_t t57 = 5756015LLU;

	t57 = ((x237&(x238|x239))%x240);

	if (t57 != 3LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = -530;
	static int8_t x242 = INT8_MAX;
	uint16_t x243 = 232U;
	int8_t x244 = INT8_MIN;
	volatile int32_t t58 = 617;

	t58 = ((x241&(x242|x243))%x244);

	if (t58 != 110) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x245 = INT8_MIN;
	int8_t x246 = -1;
	int16_t x247 = -1;
	int32_t x248 = INT32_MIN;
	volatile int32_t t59 = 4816;

	t59 = ((x245&(x246|x247))%x248);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	static volatile int32_t x250 = -1;
	int64_t x251 = INT64_MAX;
	uint32_t x252 = 820399184U;
	int64_t t60 = 644LL;

	t60 = ((x249&(x250|x251))%x252);

	if (t60 != -88803008LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x255 = 4746212522LL;
	static volatile int64_t x256 = -28LL;
	static int64_t t61 = 7364639686LL;

	t61 = ((x253&(x254|x255))%x256);

	if (t61 != 3LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 923301622544LLU;
	uint8_t x258 = 3U;
	int8_t x260 = 48;
	uint64_t t62 = 697LLU;

	t62 = ((x257&(x258|x259))%x260);

	if (t62 != 32LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = -59;
	int8_t x262 = INT8_MIN;
	volatile uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 1234870U;
	static uint32_t t63 = 1574672U;

	t63 = ((x261&(x262|x263))%x264);

	if (t63 != 89377U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = 81U;
	volatile uint8_t x266 = 2U;
	int32_t x267 = -1;
	int64_t x268 = INT64_MIN;
	volatile int64_t t64 = -6175915LL;

	t64 = ((x265&(x266|x267))%x268);

	if (t64 != 81LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x270 = 14925;
	int16_t x272 = INT16_MIN;
	uint32_t t65 = 22U;

	t65 = ((x269&(x270|x271))%x272);

	if (t65 != 32640U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x274 = 18158U;
	int8_t x275 = INT8_MAX;
	uint64_t x276 = 6751LLU;
	uint64_t t66 = 1911765010782LLU;

	t66 = ((x273&(x274|x275))%x276);

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MIN;
	volatile int64_t x278 = -1LL;
	volatile uint8_t x279 = UINT8_MAX;
	volatile int64_t t67 = 3306140LL;

	t67 = ((x277&(x278|x279))%x280);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = 1017887530;
	int64_t x282 = 55875LL;
	int16_t x283 = INT16_MIN;

	t68 = ((x281&(x282|x283))%x284);

	if (t68 != 12LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x286 = INT8_MAX;
	int8_t x287 = 1;
	int16_t x288 = 1;
	static volatile int32_t t69 = 36963;

	t69 = ((x285&(x286|x287))%x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MIN;
	volatile int64_t x290 = 3711940233496380LL;
	int8_t x291 = INT8_MAX;
	volatile uint16_t x292 = 1881U;
	volatile int64_t t70 = 78LL;

	t70 = ((x289&(x290|x291))%x292);

	if (t70 != 1091LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = -1;
	volatile int64_t x294 = -1LL;
	int32_t x295 = -946952;
	int8_t x296 = INT8_MIN;
	int64_t t71 = 2142110595682298051LL;

	t71 = ((x293&(x294|x295))%x296);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x297 = 50673637U;
	int32_t x298 = INT32_MAX;
	int64_t x299 = 38405842840619455LL;
	uint8_t x300 = 102U;
	int64_t t72 = 16718666539988LL;

	t72 = ((x297&(x298|x299))%x300);

	if (t72 != 37LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = 1;
	uint64_t x303 = 1193315068299LLU;
	static int64_t x304 = 3005882799612887LL;
	uint64_t t73 = 4473LLU;

	t73 = ((x301&(x302|x303))%x304);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 603U;
	static uint8_t x306 = UINT8_MAX;
	uint16_t x307 = 761U;

	t74 = ((x305&(x306|x307))%x308);

	if (t74 != 603LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	int16_t x312 = -39;
	volatile int64_t t75 = -1608199545096LL;

	t75 = ((x309&(x310|x311))%x312);

	if (t75 != -8LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x313 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	volatile uint32_t t76 = 3U;

	t76 = ((x313&(x314|x315))%x316);

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x317 = UINT16_MAX;
	int64_t x319 = INT64_MAX;
	uint8_t x320 = 4U;
	volatile int64_t t77 = 13LL;

	t77 = ((x317&(x318|x319))%x320);

	if (t77 != 3LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MIN;
	static int8_t x322 = INT8_MIN;
	int32_t x323 = -1;
	int32_t t78 = 215829188;

	t78 = ((x321&(x322|x323))%x324);

	if (t78 != -3239) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x326 = 1;
	int8_t x327 = -1;
	static volatile int8_t x328 = INT8_MIN;
	volatile uint64_t t79 = 207730474384363LLU;

	t79 = ((x325&(x326|x327))%x328);

	if (t79 != 639448760711LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	volatile uint16_t x330 = 50U;
	uint32_t x331 = 51U;
	uint32_t x332 = 214684U;

	t80 = ((x329&(x330|x331))%x332);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 58U;
	static uint64_t x336 = 6638923LLU;
	volatile uint64_t t81 = 71784340383901597LLU;

	t81 = ((x333&(x334|x335))%x336);

	if (t81 != 9LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x337 = INT64_MIN;
	int32_t x338 = -1;
	static uint8_t x339 = 125U;
	int64_t x340 = -7426269165LL;
	volatile int64_t t82 = -244072368134489LL;

	t82 = ((x337&(x338|x339))%x340);

	if (t82 != -5099833628LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x341 = UINT64_MAX;
	static uint32_t x342 = 568636U;
	volatile int8_t x343 = INT8_MAX;
	static uint8_t x344 = UINT8_MAX;

	t83 = ((x341&(x342|x343))%x344);

	if (t83 != 53LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x347 = -16;
	uint32_t x348 = 1017U;
	volatile uint32_t t84 = 239898U;

	t84 = ((x345&(x346|x347))%x348);

	if (t84 != 339U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MAX;
	int8_t x350 = 3;
	int16_t x351 = 0;

	t85 = ((x349&(x350|x351))%x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x354 = 2;
	int8_t x355 = INT8_MIN;
	volatile int32_t x356 = 1979087;

	t86 = ((x353&(x354|x355))%x356);

	if (t86 != 128U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x357 = 27U;
	uint32_t x358 = 38542943U;
	volatile int32_t x360 = -425;
	volatile uint32_t t87 = 369494U;

	t87 = ((x357&(x358|x359))%x360);

	if (t87 != 27U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x362 = INT64_MIN;
	int16_t x363 = 3;
	int16_t x364 = INT16_MAX;

	t88 = ((x361&(x362|x363))%x364);

	if (t88 != -8LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = UINT16_MAX;
	uint8_t x366 = 2U;
	int8_t x367 = -6;
	uint32_t x368 = 13982328U;
	volatile uint32_t t89 = 1218U;

	t89 = ((x365&(x366|x367))%x368);

	if (t89 != 65530U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x371 = UINT8_MAX;
	uint8_t x372 = 7U;
	static int32_t t90 = 8197138;

	t90 = ((x369&(x370|x371))%x372);

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = INT64_MIN;
	static int32_t x374 = -783253531;
	volatile int16_t x375 = INT16_MIN;
	volatile int64_t t91 = 6134675958876LL;

	t91 = ((x373&(x374|x375))%x376);

	if (t91 != -440928LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x377 = 0;
	static int32_t x378 = 6;
	static int64_t x380 = -242410LL;
	int64_t t92 = 4LL;

	t92 = ((x377&(x378|x379))%x380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = 0LL;
	volatile int32_t x382 = INT32_MAX;
	uint64_t x383 = 18780552478683444LLU;
	int64_t x384 = INT64_MIN;
	uint64_t t93 = 250601782LLU;

	t93 = ((x381&(x382|x383))%x384);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MAX;
	static volatile uint64_t x387 = 25446945548773LLU;
	static uint64_t t94 = 3LLU;

	t94 = ((x385&(x386|x387))%x388);

	if (t94 != 25446945554431LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x389 = 310715U;
	int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MIN;
	uint32_t t95 = 1U;

	t95 = ((x389&(x390|x391))%x392);

	if (t95 != 299441U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = 58U;
	int8_t x394 = INT8_MAX;
	int64_t x395 = INT64_MAX;
	static int64_t t96 = -1953609604426000325LL;

	t96 = ((x393&(x394|x395))%x396);

	if (t96 != 58LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x397 = 14;
	uint16_t x398 = 1U;
	static volatile uint64_t x399 = UINT64_MAX;
	uint64_t x400 = UINT64_MAX;
	uint64_t t97 = 122558LLU;

	t97 = ((x397&(x398|x399))%x400);

	if (t97 != 14LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x401 = 1815439U;
	int64_t x402 = -1LL;
	int32_t x403 = -1;
	int64_t x404 = INT64_MAX;
	volatile int64_t t98 = -38535LL;

	t98 = ((x401&(x402|x403))%x404);

	if (t98 != 1815439LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x405 = UINT16_MAX;
	int16_t x406 = -1;
	static int64_t x407 = 47864813852LL;
	int64_t x408 = -605010890187189LL;

	t99 = ((x405&(x406|x407))%x408);

	if (t99 != 65535LL) { NG(); } else { ; }
	
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

