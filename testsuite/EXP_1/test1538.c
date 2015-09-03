#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MIN;
int64_t t2 = -931LL;
uint32_t x30 = UINT32_MAX;
volatile uint64_t x33 = UINT64_MAX;
int8_t x44 = 1;
uint64_t x49 = UINT64_MAX;
int16_t x51 = INT16_MIN;
uint8_t x53 = UINT8_MAX;
volatile int16_t x63 = INT16_MIN;
int8_t x65 = -1;
uint8_t x68 = 33U;
int16_t x72 = 50;
static uint32_t t14 = 1118U;
uint32_t x84 = 7599919U;
uint16_t x108 = 48U;
static int8_t x110 = INT8_MAX;
int32_t t24 = 604;
int16_t x126 = -12;
int32_t x128 = 18716429;
uint8_t x131 = 53U;
static int32_t t27 = 92901483;
uint32_t x137 = 43U;
int32_t x143 = -8395;
uint16_t x148 = UINT16_MAX;
static volatile int8_t x149 = 11;
int8_t x155 = INT8_MIN;
volatile int32_t t32 = -6;
int8_t x157 = 1;
uint64_t x158 = 21433807935305649LLU;
volatile uint64_t t33 = 345819240072850LLU;
uint16_t x169 = 696U;
int32_t x172 = -1;
static volatile int32_t x181 = INT32_MAX;
uint16_t x182 = 1635U;
volatile uint8_t x183 = 28U;
static int64_t x193 = -1LL;
uint32_t t39 = 32U;
static volatile uint64_t x197 = 1780LLU;
volatile int32_t x214 = INT32_MAX;
static int32_t x220 = -1;
volatile int32_t x222 = INT32_MAX;
volatile uint16_t x232 = 108U;
volatile uint64_t t48 = 2061094289731LLU;
int32_t x239 = 107;
volatile int32_t t50 = 78899828;
static uint8_t x253 = 27U;
volatile uint32_t x257 = 139U;
uint64_t x261 = UINT64_MAX;
uint16_t x272 = 124U;
int32_t x276 = INT32_MIN;
volatile int32_t t55 = -13852;
volatile int32_t t56 = 210844248;
int16_t x285 = -1;
int32_t x287 = -59;
int64_t x288 = -1LL;
uint32_t x292 = 1925767U;
static int16_t x296 = INT16_MIN;
uint8_t x298 = UINT8_MAX;
int8_t x307 = -1;
int32_t x321 = INT32_MIN;
int8_t x325 = INT8_MIN;
volatile int32_t t67 = -45246017;
int16_t x336 = -1;
uint8_t x337 = UINT8_MAX;
static int64_t x338 = INT64_MIN;
uint64_t x340 = UINT64_MAX;
uint32_t x344 = UINT32_MAX;
int16_t x346 = INT16_MIN;
static uint64_t x347 = 229810306314450LLU;
int64_t x354 = -1LL;
uint16_t x355 = 30503U;
volatile int64_t x359 = 1300570582283865LL;
int64_t t75 = 952LL;
int16_t x365 = 0;
int32_t x366 = 6;
int32_t t78 = -58099;
uint16_t x374 = UINT16_MAX;
uint64_t t80 = 5477597305859LLU;
static int8_t x387 = 0;
uint16_t x411 = 2019U;
int64_t x412 = INT64_MIN;
int8_t x420 = INT8_MAX;
static volatile int32_t x431 = 20670470;
int32_t t90 = 65033;
int16_t x439 = INT16_MIN;
uint16_t x443 = 3U;
static uint16_t x444 = 2U;
static int16_t x449 = -1;
static volatile uint8_t x455 = 2U;
uint8_t x456 = 16U;
int32_t x458 = INT32_MIN;
uint8_t x463 = UINT8_MAX;
static int32_t x466 = INT32_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int32_t x2 = INT32_MIN;
	int32_t x3 = 0;
	int16_t x4 = -1;
	volatile int32_t t0 = 9;

	t0 = (((x1<=x2)-x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	volatile uint16_t x10 = UINT16_MAX;
	volatile uint32_t x12 = 1U;
	volatile uint32_t t1 = 3U;

	t1 = (((x9<=x10)-x11)/x12);

	if (t1 != 32769U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 121008072369LLU;
	volatile int8_t x18 = INT8_MIN;
	int32_t x19 = -3363598;
	static int64_t x20 = INT64_MIN;

	t2 = (((x17<=x18)-x19)/x20);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	static int64_t x22 = INT64_MIN;
	int8_t x23 = INT8_MAX;
	static int32_t x24 = INT32_MIN;
	static volatile int32_t t3 = 1;

	t3 = (((x21<=x22)-x23)/x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = 1U;
	static int16_t x31 = 8575;
	volatile uint32_t x32 = 2U;
	volatile uint32_t t4 = 254862U;

	t4 = (((x29<=x30)-x31)/x32);

	if (t4 != 2147479361U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x34 = 213U;
	volatile uint64_t x35 = UINT64_MAX;
	int64_t x36 = -30LL;
	volatile uint64_t t5 = 266503539545462587LLU;

	t5 = (((x33<=x34)-x35)/x36);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MAX;
	uint64_t x38 = 244628077806195LLU;
	static volatile uint32_t x39 = 375U;
	static int8_t x40 = 1;
	uint32_t t6 = 13572U;

	t6 = (((x37<=x38)-x39)/x40);

	if (t6 != 4294966922U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x41 = 2U;
	uint8_t x42 = 47U;
	int64_t x43 = 3038482251261LL;
	int64_t t7 = -152132398492LL;

	t7 = (((x41<=x42)-x43)/x44);

	if (t7 != -3038482251260LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x45 = 4146;
	volatile int32_t x46 = -1;
	int16_t x47 = INT16_MAX;
	static int64_t x48 = INT64_MIN;
	int64_t t8 = 18248757257005LL;

	t8 = (((x45<=x46)-x47)/x48);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x50 = INT16_MIN;
	volatile uint8_t x52 = 4U;
	volatile int32_t t9 = 210811809;

	t9 = (((x49<=x50)-x51)/x52);

	if (t9 != 8192) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x54 = 27363;
	int8_t x55 = -1;
	uint64_t x56 = 3511463955077LLU;
	static uint64_t t10 = 3LLU;

	t10 = (((x53<=x54)-x55)/x56);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 4U;
	int64_t x58 = INT64_MAX;
	uint8_t x59 = 85U;
	uint64_t x60 = 3058737403476932LLU;
	uint64_t t11 = 60658LLU;

	t11 = (((x57<=x58)-x59)/x60);

	if (t11 != 6030LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 12264U;
	int32_t x62 = INT32_MIN;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t12 = 60296;

	t12 = (((x61<=x62)-x63)/x64);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x66 = INT64_MIN;
	static uint64_t x67 = UINT64_MAX;
	volatile uint64_t t13 = 12776452161069LLU;

	t13 = (((x65<=x66)-x67)/x68);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 11971278898LLU;
	uint32_t x70 = UINT32_MAX;
	uint32_t x71 = 650U;

	t14 = (((x69<=x70)-x71)/x72);

	if (t14 != 85899332U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	volatile int8_t x74 = 10;
	int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MIN;
	int64_t t15 = 739494LL;

	t15 = (((x73<=x74)-x75)/x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = 1U;
	volatile uint32_t x83 = UINT32_MAX;
	uint32_t t16 = 5951159U;

	t16 = (((x81<=x82)-x83)/x84);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x85 = INT16_MIN;
	uint16_t x86 = 4089U;
	uint8_t x87 = 124U;
	volatile int64_t x88 = -1751981918LL;
	volatile int64_t t17 = -46669901986580LL;

	t17 = (((x85<=x86)-x87)/x88);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MIN;
	int16_t x91 = -1;
	uint32_t x92 = 53515187U;
	volatile uint32_t t18 = 12U;

	t18 = (((x89<=x90)-x91)/x92);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MAX;
	volatile uint16_t x94 = 268U;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = 25U;
	volatile int32_t t19 = -513600;

	t19 = (((x93<=x94)-x95)/x96);

	if (t19 != 1310) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 25258852U;
	static uint32_t x102 = 236U;
	static int32_t x103 = 3186;
	int8_t x104 = -1;
	int32_t t20 = -21;

	t20 = (((x101<=x102)-x103)/x104);

	if (t20 != 3186) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x105 = 57U;
	int64_t x106 = 3747255597589293LL;
	static int16_t x107 = 1229;
	static volatile int32_t t21 = 53517;

	t21 = (((x105<=x106)-x107)/x108);

	if (t21 != -25) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = UINT64_MAX;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	volatile int32_t t22 = -1175819;

	t22 = (((x109<=x110)-x111)/x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x113 = INT64_MIN;
	uint32_t x114 = UINT32_MAX;
	int16_t x115 = 16192;
	volatile uint64_t x116 = UINT64_MAX;
	uint64_t t23 = 1085733LLU;

	t23 = (((x113<=x114)-x115)/x116);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x117 = -16831889531140LL;
	int32_t x118 = -3723149;
	int8_t x119 = 0;
	int16_t x120 = 35;

	t24 = (((x117<=x118)-x119)/x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = -28;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = 386553196U;
	volatile uint32_t t25 = 980U;

	t25 = (((x121<=x122)-x123)/x124);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = 461952516LL;
	int16_t x127 = INT16_MIN;
	volatile int32_t t26 = 6;

	t26 = (((x125<=x126)-x127)/x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x129 = 51U;
	uint64_t x130 = 195398325LLU;
	int32_t x132 = -45;

	t27 = (((x129<=x130)-x131)/x132);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x138 = -1;
	volatile uint32_t x139 = 8934842U;
	uint32_t x140 = 52921U;
	volatile uint32_t t28 = 3U;

	t28 = (((x137<=x138)-x139)/x140);

	if (t28 != 80989U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = 2U;
	volatile int64_t x142 = -260788493836LL;
	uint64_t x144 = 31056528814LLU;
	uint64_t t29 = 3203426841LLU;

	t29 = (((x141<=x142)-x143)/x144);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x145 = UINT32_MAX;
	static int8_t x146 = INT8_MIN;
	volatile int64_t x147 = INT64_MAX;
	int64_t t30 = -3338266719LL;

	t30 = (((x145<=x146)-x147)/x148);

	if (t30 != -140739635871744LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x150 = INT8_MIN;
	static uint32_t x151 = UINT32_MAX;
	int8_t x152 = 1;
	uint32_t t31 = 107472835U;

	t31 = (((x149<=x150)-x151)/x152);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = 19;
	int8_t x154 = 1;
	int8_t x156 = -1;

	t32 = (((x153<=x154)-x155)/x156);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x159 = UINT64_MAX;
	uint16_t x160 = 169U;

	t33 = (((x157<=x158)-x159)/x160);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x170 = INT64_MIN;
	volatile int16_t x171 = 9992;
	int32_t t34 = 26707361;

	t34 = (((x169<=x170)-x171)/x172);

	if (t34 != 9992) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x173 = INT32_MIN;
	int32_t x174 = -80167298;
	static uint64_t x175 = 15LLU;
	volatile int16_t x176 = INT16_MIN;
	uint64_t t35 = 0LLU;

	t35 = (((x173<=x174)-x175)/x176);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x177 = 1U;
	uint32_t x178 = UINT32_MAX;
	int64_t x179 = 3486702729LL;
	static int8_t x180 = INT8_MIN;
	int64_t t36 = 4683792LL;

	t36 = (((x177<=x178)-x179)/x180);

	if (t36 != 27239865LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x184 = 6U;
	volatile int32_t t37 = -624;

	t37 = (((x181<=x182)-x183)/x184);

	if (t37 != -4) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = INT8_MIN;
	volatile int32_t x186 = -2;
	uint16_t x187 = 82U;
	int16_t x188 = INT16_MIN;
	volatile int32_t t38 = 21029043;

	t38 = (((x185<=x186)-x187)/x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x194 = 447522;
	int16_t x195 = INT16_MIN;
	static uint32_t x196 = 108U;

	t39 = (((x193<=x194)-x195)/x196);

	if (t39 != 303U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x198 = -1;
	volatile int64_t x199 = -1LL;
	uint16_t x200 = 15U;
	int64_t t40 = -3638LL;

	t40 = (((x197<=x198)-x199)/x200);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	uint32_t x203 = 83992U;
	int8_t x204 = -1;
	uint32_t t41 = 6993U;

	t41 = (((x201<=x202)-x203)/x204);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x205 = INT16_MAX;
	static uint64_t x206 = 3646298LLU;
	uint16_t x207 = UINT16_MAX;
	static volatile uint64_t x208 = UINT64_MAX;
	uint64_t t42 = 3822664175986274781LLU;

	t42 = (((x205<=x206)-x207)/x208);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = -1LL;
	int8_t x211 = INT8_MAX;
	static uint64_t x212 = 7LLU;
	uint64_t t43 = 122854905030635LLU;

	t43 = (((x209<=x210)-x211)/x212);

	if (t43 != 2635249153387078784LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x213 = INT32_MIN;
	uint32_t x215 = 1U;
	static int8_t x216 = -3;
	volatile uint32_t t44 = 21075328U;

	t44 = (((x213<=x214)-x215)/x216);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = -7148273;
	volatile int32_t x218 = -495130;
	static int16_t x219 = -1;
	int32_t t45 = 726133577;

	t45 = (((x217<=x218)-x219)/x220);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x221 = -1;
	uint32_t x223 = 114U;
	int8_t x224 = INT8_MIN;
	uint32_t t46 = 35988U;

	t46 = (((x221<=x222)-x223)/x224);

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x226 = 903U;
	volatile uint32_t x227 = 657717273U;
	static int32_t x228 = INT32_MAX;
	uint32_t t47 = 46272U;

	t47 = (((x225<=x226)-x227)/x228);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = INT32_MAX;
	int16_t x230 = INT16_MAX;
	uint64_t x231 = 864LLU;

	t48 = (((x229<=x230)-x231)/x232);

	if (t48 != 170803185867681025LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = INT8_MIN;
	uint16_t x234 = UINT16_MAX;
	uint64_t x235 = 4311928864024700LLU;
	uint16_t x236 = UINT16_MAX;
	static uint64_t t49 = 1438LLU;

	t49 = (((x233<=x234)-x235)/x236);

	if (t49 != 281413475926535LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x237 = -1;
	uint8_t x238 = 8U;
	int32_t x240 = 66644651;

	t50 = (((x237<=x238)-x239)/x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x254 = INT64_MAX;
	int64_t x255 = -1LL;
	int64_t x256 = INT64_MIN;
	int64_t t51 = -58379412692608LL;

	t51 = (((x253<=x254)-x255)/x256);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x258 = 13U;
	int16_t x259 = -1;
	int64_t x260 = 215992491673034266LL;
	volatile int64_t t52 = -7021974LL;

	t52 = (((x257<=x258)-x259)/x260);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x262 = 34U;
	int8_t x263 = INT8_MIN;
	static int32_t x264 = -21034;
	int32_t t53 = 1406132;

	t53 = (((x261<=x262)-x263)/x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x269 = UINT32_MAX;
	uint8_t x270 = 61U;
	static uint64_t x271 = UINT64_MAX;
	static uint64_t t54 = 111LLU;

	t54 = (((x269<=x270)-x271)/x272);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x273 = 121396250691LLU;
	int64_t x274 = 10LL;
	int8_t x275 = INT8_MAX;

	t55 = (((x273<=x274)-x275)/x276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x277 = UINT8_MAX;
	int8_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	uint16_t x280 = 5U;

	t56 = (((x277<=x278)-x279)/x280);

	if (t56 != -51) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MAX;
	uint32_t x283 = 912U;
	int32_t x284 = INT32_MIN;
	uint32_t t57 = 409415U;

	t57 = (((x281<=x282)-x283)/x284);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x286 = -1;
	static volatile int64_t t58 = -121800LL;

	t58 = (((x285<=x286)-x287)/x288);

	if (t58 != -60LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x289 = 176383963U;
	int16_t x290 = -142;
	int16_t x291 = INT16_MAX;
	uint32_t t59 = 172893U;

	t59 = (((x289<=x290)-x291)/x292);

	if (t59 != 2230U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x293 = 0U;
	uint64_t x294 = UINT64_MAX;
	volatile int32_t x295 = 1;
	int32_t t60 = 8200;

	t60 = (((x293<=x294)-x295)/x296);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = 40;
	uint16_t x299 = 3U;
	uint8_t x300 = 36U;
	volatile int32_t t61 = 1;

	t61 = (((x297<=x298)-x299)/x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x305 = 91U;
	static int16_t x306 = INT16_MAX;
	uint16_t x308 = 126U;
	volatile int32_t t62 = -113164662;

	t62 = (((x305<=x306)-x307)/x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x309 = INT16_MAX;
	int16_t x310 = -9;
	int8_t x311 = INT8_MAX;
	uint64_t x312 = UINT64_MAX;
	volatile uint64_t t63 = 1649LLU;

	t63 = (((x309<=x310)-x311)/x312);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x313 = -25;
	int64_t x314 = 12610168654633LL;
	int32_t x315 = -9609813;
	uint32_t x316 = 7408U;
	static uint32_t t64 = 1U;

	t64 = (((x313<=x314)-x315)/x316);

	if (t64 != 1297U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x317 = 3LLU;
	int32_t x318 = INT32_MAX;
	static uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 835959142U;
	volatile uint32_t t65 = 86002969U;

	t65 = (((x317<=x318)-x319)/x320);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x322 = UINT32_MAX;
	uint64_t x323 = UINT64_MAX;
	int16_t x324 = 2;
	static volatile uint64_t t66 = 16042090682LLU;

	t66 = (((x321<=x322)-x323)/x324);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x326 = INT16_MIN;
	int32_t x327 = -1;
	uint16_t x328 = 23U;

	t67 = (((x325<=x326)-x327)/x328);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = 26146990131884540LLU;
	uint8_t x332 = UINT8_MAX;
	volatile uint64_t t68 = 5326LLU;

	t68 = (((x329<=x330)-x331)/x332);

	if (t68 != 72237635621873204LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x333 = 44;
	uint32_t x334 = 10715U;
	int8_t x335 = INT8_MIN;
	static volatile int32_t t69 = -992;

	t69 = (((x333<=x334)-x335)/x336);

	if (t69 != -129) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x339 = 2909306LLU;
	volatile uint64_t t70 = 248373044884514LLU;

	t70 = (((x337<=x338)-x339)/x340);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x341 = INT8_MAX;
	volatile uint64_t x342 = 27273LLU;
	volatile uint16_t x343 = 2662U;
	static volatile uint32_t t71 = 865805883U;

	t71 = (((x341<=x342)-x343)/x344);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x345 = -1;
	int16_t x348 = -1;
	volatile uint64_t t72 = 6869071970588111LLU;

	t72 = (((x345<=x346)-x347)/x348);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = -3;
	static uint16_t x350 = 1U;
	int16_t x351 = 844;
	int32_t x352 = -1;
	int32_t t73 = -1012039689;

	t73 = (((x349<=x350)-x351)/x352);

	if (t73 != 843) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x353 = 397U;
	int64_t x356 = -1LL;
	volatile int64_t t74 = -1LL;

	t74 = (((x353<=x354)-x355)/x356);

	if (t74 != 30503LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int8_t x358 = INT8_MAX;
	int64_t x360 = -575203258413LL;

	t75 = (((x357<=x358)-x359)/x360);

	if (t75 != 2261LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x361 = 1069LLU;
	int64_t x362 = INT64_MAX;
	int64_t x363 = -26104108LL;
	int32_t x364 = INT32_MAX;
	int64_t t76 = 32LL;

	t76 = (((x361<=x362)-x363)/x364);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x367 = 37930160U;
	int8_t x368 = INT8_MIN;
	uint32_t t77 = 1249516U;

	t77 = (((x365<=x366)-x367)/x368);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = 5;
	static uint16_t x370 = UINT16_MAX;
	int8_t x371 = INT8_MIN;
	int16_t x372 = -1;

	t78 = (((x369<=x370)-x371)/x372);

	if (t78 != -129) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = INT64_MIN;
	uint32_t x375 = 49176069U;
	static uint64_t x376 = 128LLU;
	uint64_t t79 = 1558109378209LLU;

	t79 = (((x373<=x374)-x375)/x376);

	if (t79 != 33170243LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x377 = UINT32_MAX;
	volatile int32_t x378 = -1;
	static int16_t x379 = -1;
	uint64_t x380 = 10618772392736920LLU;

	t80 = (((x377<=x378)-x379)/x380);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x382 = 250U;
	volatile int64_t x383 = -1865250462091LL;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t81 = 2LLU;

	t81 = (((x381<=x382)-x383)/x384);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = -1;
	int64_t x386 = -227189657LL;
	uint32_t x388 = 4U;
	uint32_t t82 = 12408U;

	t82 = (((x385<=x386)-x387)/x388);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x393 = UINT8_MAX;
	int64_t x394 = 22596846797605456LL;
	static volatile int32_t x395 = INT32_MAX;
	int32_t x396 = INT32_MAX;
	volatile int32_t t83 = 27;

	t83 = (((x393<=x394)-x395)/x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x397 = 93U;
	int16_t x398 = -1;
	volatile int16_t x399 = INT16_MIN;
	static uint32_t x400 = 1234698U;
	uint32_t t84 = 0U;

	t84 = (((x397<=x398)-x399)/x400);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = -1;
	int16_t x406 = INT16_MIN;
	uint64_t x407 = 707071520468604697LLU;
	static int16_t x408 = INT16_MAX;
	volatile uint64_t t85 = 164275283988462LLU;

	t85 = (((x405<=x406)-x407)/x408);

	if (t85 != 541388364917171LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x409 = -50;
	volatile uint32_t x410 = 413920U;
	int64_t t86 = 427117601LL;

	t86 = (((x409<=x410)-x411)/x412);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x413 = INT8_MAX;
	volatile int64_t x414 = -1818696848933023432LL;
	uint64_t x415 = 600993342502LLU;
	static uint8_t x416 = UINT8_MAX;
	static volatile uint64_t t87 = 199LLU;

	t87 = (((x413<=x414)-x415)/x416);

	if (t87 != 72340170481240035LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = INT16_MIN;
	uint32_t x418 = 1U;
	int8_t x419 = 21;
	int32_t t88 = 6857;

	t88 = (((x417<=x418)-x419)/x420);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = 0;
	uint16_t x422 = 441U;
	uint64_t x423 = 19564484LLU;
	int64_t x424 = INT64_MIN;
	uint64_t t89 = 3051604LLU;

	t89 = (((x421<=x422)-x423)/x424);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x429 = INT8_MIN;
	uint8_t x430 = 0U;
	int32_t x432 = -1;

	t90 = (((x429<=x430)-x431)/x432);

	if (t90 != 20670469) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x433 = INT8_MAX;
	int16_t x434 = INT16_MIN;
	uint32_t x435 = 242164716U;
	static volatile int32_t x436 = INT32_MIN;
	uint32_t t91 = 137586407U;

	t91 = (((x433<=x434)-x435)/x436);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x437 = 4U;
	volatile int16_t x438 = 55;
	static int64_t x440 = -31895050053045715LL;
	static int64_t t92 = 27331444LL;

	t92 = (((x437<=x438)-x439)/x440);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = -1;
	uint8_t x442 = 29U;
	int32_t t93 = -39;

	t93 = (((x441<=x442)-x443)/x444);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = 835065385451548718LL;
	static uint32_t x446 = UINT32_MAX;
	volatile int64_t x447 = INT64_MAX;
	int64_t x448 = INT64_MIN;
	int64_t t94 = 1267218205LL;

	t94 = (((x445<=x446)-x447)/x448);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x450 = INT32_MIN;
	int64_t x451 = -1LL;
	uint8_t x452 = UINT8_MAX;
	volatile int64_t t95 = -44133693801LL;

	t95 = (((x449<=x450)-x451)/x452);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x453 = 28624112LLU;
	static int8_t x454 = 6;
	volatile int32_t t96 = 26;

	t96 = (((x453<=x454)-x455)/x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x457 = INT8_MAX;
	uint32_t x459 = 3U;
	static uint64_t x460 = 117255018LLU;
	static uint64_t t97 = 3192024062LLU;

	t97 = (((x457<=x458)-x459)/x460);

	if (t97 != 36LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = INT32_MIN;
	uint16_t x462 = UINT16_MAX;
	int64_t x464 = INT64_MIN;
	int64_t t98 = -391082LL;

	t98 = (((x461<=x462)-x463)/x464);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x465 = UINT16_MAX;
	int32_t x467 = -1;
	volatile uint32_t x468 = 22536U;
	volatile uint32_t t99 = 2113299U;

	t99 = (((x465<=x466)-x467)/x468);

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

