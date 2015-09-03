#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
static volatile uint64_t x4 = 16245LLU;
uint64_t t0 = 5050LLU;
int32_t x6 = INT32_MIN;
volatile int64_t x8 = -269682733446295LL;
int32_t t2 = 435307;
static uint64_t x14 = UINT64_MAX;
uint16_t x24 = UINT16_MAX;
int32_t x28 = 1913045;
uint8_t x31 = UINT8_MAX;
static volatile int8_t x35 = INT8_MIN;
static int16_t x38 = 0;
int32_t t11 = -2;
int64_t x56 = INT64_MIN;
static int64_t x57 = -22LL;
int64_t x64 = -1LL;
int32_t x73 = 169;
int32_t x76 = INT32_MIN;
int64_t x79 = INT64_MAX;
int16_t x83 = -1;
int64_t x86 = -81LL;
int64_t x90 = INT64_MIN;
volatile int32_t t22 = -3240;
int64_t x94 = INT64_MIN;
volatile uint64_t t23 = 46LLU;
int8_t x97 = -52;
int64_t x111 = INT64_MIN;
int64_t x116 = -2073281346526268640LL;
int16_t x126 = 10556;
volatile uint64_t x131 = 435553012LLU;
int32_t x141 = 5698;
int16_t x142 = INT16_MAX;
static int16_t x150 = INT16_MIN;
int32_t x155 = INT32_MAX;
uint32_t x157 = 2050792470U;
uint64_t x159 = 25617LLU;
volatile int64_t x166 = 16557381556633985LL;
uint32_t t42 = 41889373U;
int16_t x179 = INT16_MIN;
int16_t x183 = INT16_MIN;
volatile int32_t t46 = -441561;
uint64_t x193 = 232721811336797057LLU;
int32_t x196 = INT32_MIN;
int8_t x197 = -1;
volatile int32_t t50 = 8471512;
volatile int64_t x205 = INT64_MIN;
static volatile uint32_t t51 = 487U;
volatile uint16_t x210 = UINT16_MAX;
int32_t x211 = -2848;
volatile int64_t t53 = 62681531489LL;
int64_t x218 = -1LL;
int64_t x226 = -1LL;
int16_t x229 = INT16_MAX;
int16_t x231 = -1;
int16_t x236 = -402;
int8_t x237 = INT8_MIN;
static int16_t x238 = -1;
uint32_t x239 = UINT32_MAX;
int64_t x242 = INT64_MAX;
static volatile int32_t x247 = INT32_MIN;
int32_t x250 = -1;
uint64_t x251 = 6423191887LLU;
static uint8_t x255 = 3U;
int32_t t64 = -38191;
static uint8_t x261 = UINT8_MAX;
int16_t x265 = INT16_MAX;
int16_t x268 = INT16_MIN;
int32_t t66 = -634;
int8_t x273 = -1;
int32_t x277 = -1;
uint64_t x279 = 693714347482504LLU;
volatile int8_t x290 = INT8_MIN;
int16_t x292 = -54;
uint32_t x296 = 27157795U;
static uint8_t x298 = 0U;
uint32_t x299 = 23371U;
int64_t x310 = INT64_MAX;
uint32_t x312 = UINT32_MAX;
uint32_t t76 = 5912828U;
volatile uint8_t x316 = 25U;
int32_t x318 = INT32_MIN;
uint8_t x322 = 0U;
uint16_t x331 = 423U;
volatile int64_t t83 = -156232521324LL;
static int32_t t84 = -1426690;
int64_t x357 = 177748LL;
volatile uint64_t x359 = UINT64_MAX;
volatile uint64_t x376 = 1LLU;
uint64_t t91 = 282659973055LLU;
static uint8_t x381 = 0U;
volatile int64_t x385 = -1LL;
static volatile int64_t x387 = INT64_MIN;
int32_t x394 = 51716656;
int64_t x395 = INT64_MAX;
volatile int64_t t95 = 64496498LL;
uint64_t x399 = 13808948820857LLU;
uint16_t x400 = 31600U;
int32_t t97 = 3151;
int16_t x409 = INT16_MAX;
uint8_t x410 = 17U;
volatile uint32_t t99 = 217141698U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int32_t x3 = INT32_MIN;

	t0 = ((x1<=(x2|x3))%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile int16_t x7 = INT16_MIN;
	static int64_t t1 = -7LL;

	t1 = ((x5<=(x6|x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x9 = 6592296U;
	uint64_t x10 = UINT64_MAX;
	static uint32_t x11 = UINT32_MAX;
	int8_t x12 = INT8_MAX;

	t2 = ((x9<=(x10|x11))%x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = INT32_MIN;
	uint8_t x15 = 111U;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -117168;

	t3 = ((x13<=(x14|x15))%x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x18 = UINT64_MAX;
	int16_t x19 = -117;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 27LLU;

	t4 = ((x17<=(x18|x19))%x20);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 134541918136LL;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	volatile int32_t t5 = -58001;

	t5 = ((x21<=(x22|x23))%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int32_t x26 = INT32_MAX;
	volatile int32_t x27 = INT32_MAX;
	static volatile int32_t t6 = 134;

	t6 = ((x25<=(x26|x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 1LLU;
	static int64_t x30 = -497279217763LL;
	static int64_t x32 = INT64_MAX;
	static volatile int64_t t7 = -7LL;

	t7 = ((x29<=(x30|x31))%x32);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	uint8_t x34 = UINT8_MAX;
	volatile uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = 110167366U;

	t8 = ((x33<=(x34|x35))%x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int16_t x39 = -1515;
	static int32_t x40 = 11;
	volatile int32_t t9 = -88;

	t9 = ((x37<=(x38|x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int64_t x42 = -128043624883LL;
	static int16_t x43 = -1;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -1;

	t10 = ((x41<=(x42|x43))%x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 6172U;
	static int64_t x46 = -1LL;
	uint8_t x47 = 0U;
	uint8_t x48 = 31U;

	t11 = ((x45<=(x46|x47))%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MAX;
	static uint32_t x51 = 2052U;
	int64_t x52 = 73213191LL;
	static volatile int64_t t12 = 1LL;

	t12 = ((x49<=(x50|x51))%x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static volatile int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	static volatile int64_t t13 = 361521816820LL;

	t13 = ((x53<=(x54|x55))%x56);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = INT64_MAX;
	int32_t x59 = INT32_MAX;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -1;

	t14 = ((x57<=(x58|x59))%x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint64_t x62 = 1119552474961320LLU;
	static int8_t x63 = INT8_MIN;
	int64_t t15 = 104450716521LL;

	t15 = ((x61<=(x62|x63))%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint16_t x66 = 624U;
	volatile int32_t x67 = INT32_MIN;
	int64_t x68 = 191450LL;
	static int64_t t16 = 115720LL;

	t16 = ((x65<=(x66|x67))%x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int16_t x70 = 95;
	int64_t x71 = -11LL;
	volatile int64_t x72 = -42667LL;
	volatile int64_t t17 = -31285LL;

	t17 = ((x69<=(x70|x71))%x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x74 = 0;
	uint8_t x75 = UINT8_MAX;
	int32_t t18 = 0;

	t18 = ((x73<=(x74|x75))%x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -29;
	static int16_t x78 = -1;
	uint64_t x80 = 37006696634554LLU;
	volatile uint64_t t19 = 1LLU;

	t19 = ((x77<=(x78|x79))%x80);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = 59;
	uint32_t x84 = 21U;
	uint32_t t20 = 5688U;

	t20 = ((x81<=(x82|x83))%x84);

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	static int8_t x87 = 29;
	volatile uint32_t x88 = 319U;
	volatile uint32_t t21 = 3972200U;

	t21 = ((x85<=(x86|x87))%x88);

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x89 = INT64_MAX;
	int64_t x91 = -1LL;
	volatile int8_t x92 = -19;

	t22 = ((x89<=(x90|x91))%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 0U;
	int16_t x95 = -1;
	uint64_t x96 = 108528257849LLU;

	t23 = ((x93<=(x94|x95))%x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 53732003U;
	int8_t x99 = -1;
	volatile int16_t x100 = INT16_MAX;
	int32_t t24 = -3020907;

	t24 = ((x97<=(x98|x99))%x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = 0;
	uint8_t x102 = UINT8_MAX;
	int32_t x103 = -2379;
	int64_t x104 = INT64_MIN;
	int64_t t25 = -12553394395LL;

	t25 = ((x101<=(x102|x103))%x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x105 = UINT64_MAX;
	volatile int8_t x106 = -56;
	volatile uint64_t x107 = 0LLU;
	static int16_t x108 = -1;
	volatile int32_t t26 = -131;

	t26 = ((x105<=(x106|x107))%x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	volatile uint32_t x110 = 6710U;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = 121413;

	t27 = ((x109<=(x110|x111))%x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int32_t x114 = -1;
	int16_t x115 = INT16_MAX;
	volatile int64_t t28 = 17124026951LL;

	t28 = ((x113<=(x114|x115))%x116);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MAX;
	uint64_t x118 = 30873LLU;
	volatile uint32_t x119 = 19U;
	int64_t x120 = INT64_MIN;
	int64_t t29 = 2797785262LL;

	t29 = ((x117<=(x118|x119))%x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 3U;
	uint16_t x122 = 170U;
	int8_t x123 = -1;
	static uint32_t x124 = UINT32_MAX;
	uint32_t t30 = 105264U;

	t30 = ((x121<=(x122|x123))%x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 83U;
	volatile int32_t t31 = 4;

	t31 = ((x125<=(x126|x127))%x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int16_t x130 = INT16_MIN;
	static uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = 1871054;

	t32 = ((x129<=(x130|x131))%x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -29;
	int16_t x134 = INT16_MAX;
	int8_t x135 = -1;
	static uint64_t x136 = 34133761181LLU;
	uint64_t t33 = 30741463657LLU;

	t33 = ((x133<=(x134|x135))%x136);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x137 = INT16_MIN;
	volatile uint32_t x138 = 118927673U;
	int16_t x139 = INT16_MIN;
	static volatile int8_t x140 = -1;
	static int32_t t34 = -2478930;

	t34 = ((x137<=(x138|x139))%x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x143 = -5916;
	static uint64_t x144 = 133312235510570LLU;
	volatile uint64_t t35 = 4462640115441545587LLU;

	t35 = ((x141<=(x142|x143))%x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 61U;
	int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = 50;

	t36 = ((x145<=(x146|x147))%x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	uint64_t x151 = 752LLU;
	volatile int64_t x152 = 125343LL;
	int64_t t37 = 580172LL;

	t37 = ((x149<=(x150|x151))%x152);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	uint8_t x154 = 0U;
	static uint64_t x156 = 412526LLU;
	static uint64_t t38 = 5545164LLU;

	t38 = ((x153<=(x154|x155))%x156);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -185145;
	static uint32_t x160 = 1392U;
	volatile uint32_t t39 = 1177U;

	t39 = ((x157<=(x158|x159))%x160);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	volatile int64_t x162 = INT64_MAX;
	volatile int64_t x163 = INT64_MIN;
	volatile int16_t x164 = INT16_MIN;
	int32_t t40 = -18220699;

	t40 = ((x161<=(x162|x163))%x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 133;
	int64_t x167 = -15196728LL;
	int64_t x168 = INT64_MAX;
	static int64_t t41 = -69969283494406LL;

	t41 = ((x165<=(x166|x167))%x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 1;
	int64_t x170 = INT64_MAX;
	int64_t x171 = -7940788812827LL;
	static uint32_t x172 = UINT32_MAX;

	t42 = ((x169<=(x170|x171))%x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MIN;
	uint16_t x174 = 2841U;
	volatile int16_t x175 = -1;
	int8_t x176 = -1;
	volatile int32_t t43 = 42740466;

	t43 = ((x173<=(x174|x175))%x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	uint8_t x178 = 98U;
	int8_t x180 = -1;
	volatile int32_t t44 = 272290829;

	t44 = ((x177<=(x178|x179))%x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -838355919895LL;
	uint64_t x182 = UINT64_MAX;
	volatile uint64_t x184 = 315693008989389LLU;
	uint64_t t45 = 8402874759LLU;

	t45 = ((x181<=(x182|x183))%x184);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static volatile uint8_t x186 = UINT8_MAX;
	uint16_t x187 = UINT16_MAX;
	int32_t x188 = INT32_MAX;

	t46 = ((x185<=(x186|x187))%x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	static int8_t x191 = INT8_MIN;
	uint8_t x192 = UINT8_MAX;
	int32_t t47 = 5561;

	t47 = ((x189<=(x190|x191))%x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x194 = INT64_MIN;
	static uint64_t x195 = 297LLU;
	volatile int32_t t48 = 0;

	t48 = ((x193<=(x194|x195))%x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x198 = -1;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -1;
	int32_t t49 = -21517;

	t49 = ((x197<=(x198|x199))%x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 16271698253LL;
	static int64_t x202 = -1LL;
	static int16_t x203 = -1;
	volatile int8_t x204 = INT8_MAX;

	t50 = ((x201<=(x202|x203))%x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MAX;
	int16_t x207 = -9;
	static uint32_t x208 = 1447959311U;

	t51 = ((x205<=(x206|x207))%x208);

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int64_t x212 = -1LL;
	int64_t t52 = 5330501245438LL;

	t52 = ((x209<=(x210|x211))%x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x213 = INT64_MAX;
	uint32_t x214 = UINT32_MAX;
	uint8_t x215 = 5U;
	int64_t x216 = INT64_MAX;

	t53 = ((x213<=(x214|x215))%x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 1;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = -1;
	volatile int32_t t54 = 88378310;

	t54 = ((x217<=(x218|x219))%x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int64_t x222 = INT64_MAX;
	static int32_t x223 = INT32_MIN;
	int64_t x224 = -1LL;
	volatile int64_t t55 = -15312LL;

	t55 = ((x221<=(x222|x223))%x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 5363;
	uint64_t x227 = 349422158000768068LLU;
	volatile int64_t x228 = 116031968389700LL;
	int64_t t56 = -30308265096LL;

	t56 = ((x225<=(x226|x227))%x228);

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	uint8_t x232 = 55U;
	int32_t t57 = 10618614;

	t57 = ((x229<=(x230|x231))%x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	uint16_t x234 = 1396U;
	int8_t x235 = 7;
	int32_t t58 = -125;

	t58 = ((x233<=(x234|x235))%x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x240 = 869U;
	volatile int32_t t59 = 80456102;

	t59 = ((x237<=(x238|x239))%x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 16413471U;
	volatile int8_t x243 = -3;
	int16_t x244 = -344;
	int32_t t60 = 0;

	t60 = ((x241<=(x242|x243))%x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 5037660691461LLU;
	int32_t x246 = INT32_MIN;
	volatile int32_t x248 = -1;
	int32_t t61 = -108167;

	t61 = ((x245<=(x246|x247))%x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	int32_t x252 = INT32_MIN;
	int32_t t62 = 691;

	t62 = ((x249<=(x250|x251))%x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MAX;
	uint16_t x254 = 8549U;
	int64_t x256 = INT64_MAX;
	int64_t t63 = -23846286171126713LL;

	t63 = ((x253<=(x254|x255))%x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MIN;
	int64_t x259 = -1LL;
	int8_t x260 = -1;

	t64 = ((x257<=(x258|x259))%x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = UINT8_MAX;
	static uint32_t x263 = UINT32_MAX;
	uint64_t x264 = 2213458688129824LLU;
	uint64_t t65 = 15880448355809501LLU;

	t65 = ((x261<=(x262|x263))%x264);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = INT64_MIN;

	t66 = ((x265<=(x266|x267))%x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MIN;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 856813366;

	t67 = ((x269<=(x270|x271))%x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x274 = 698306LLU;
	uint16_t x275 = UINT16_MAX;
	static int64_t x276 = 15585740LL;
	volatile int64_t t68 = 12119281063406596LL;

	t68 = ((x273<=(x274|x275))%x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = -1;
	volatile int16_t x280 = -184;
	static int32_t t69 = -2395;

	t69 = ((x277<=(x278|x279))%x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = 413;
	int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MIN;
	int32_t x284 = -1;
	static volatile int32_t t70 = -121;

	t70 = ((x281<=(x282|x283))%x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = INT8_MIN;
	int64_t x291 = 793881722LL;
	volatile int32_t t71 = -1;

	t71 = ((x289<=(x290|x291))%x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x293 = 221424LLU;
	int8_t x294 = -1;
	int8_t x295 = 8;
	uint32_t t72 = 1U;

	t72 = ((x293<=(x294|x295))%x296);

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 13123U;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t73 = 7606567;

	t73 = ((x297<=(x298|x299))%x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x301 = -1;
	int32_t x302 = -1;
	int64_t x303 = -1LL;
	int32_t x304 = 39;
	static volatile int32_t t74 = 47568;

	t74 = ((x301<=(x302|x303))%x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = 8598U;
	static int64_t x306 = -1LL;
	int64_t x307 = INT64_MIN;
	static uint64_t x308 = 6292LLU;
	volatile uint64_t t75 = 58LLU;

	t75 = ((x305<=(x306|x307))%x308);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = 1;
	volatile int16_t x311 = INT16_MAX;

	t76 = ((x309<=(x310|x311))%x312);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x313 = INT8_MIN;
	int32_t x314 = 414513760;
	static int8_t x315 = INT8_MIN;
	static int32_t t77 = -3127;

	t77 = ((x313<=(x314|x315))%x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MIN;
	static int16_t x319 = INT16_MAX;
	int64_t x320 = INT64_MIN;
	static int64_t t78 = 928407591LL;

	t78 = ((x317<=(x318|x319))%x320);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = INT16_MIN;
	volatile int16_t x323 = INT16_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t79 = 45LLU;

	t79 = ((x321<=(x322|x323))%x324);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x325 = -68;
	volatile int64_t x326 = -1LL;
	int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t80 = -61879411019698818LL;

	t80 = ((x325<=(x326|x327))%x328);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x329 = 796LLU;
	uint64_t x330 = UINT64_MAX;
	uint16_t x332 = 11U;
	int32_t t81 = 1734;

	t81 = ((x329<=(x330|x331))%x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x333 = 10644U;
	int32_t x334 = INT32_MIN;
	uint64_t x335 = UINT64_MAX;
	uint8_t x336 = UINT8_MAX;
	int32_t t82 = 12880081;

	t82 = ((x333<=(x334|x335))%x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = -1336353918LL;
	int32_t x338 = INT32_MIN;
	volatile int16_t x339 = 671;
	volatile int64_t x340 = INT64_MIN;

	t83 = ((x337<=(x338|x339))%x340);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x341 = INT8_MIN;
	volatile uint16_t x342 = 0U;
	uint16_t x343 = 1946U;
	volatile int32_t x344 = INT32_MIN;

	t84 = ((x341<=(x342|x343))%x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MIN;
	static int32_t x346 = INT32_MAX;
	uint8_t x347 = UINT8_MAX;
	volatile int32_t x348 = INT32_MIN;
	static int32_t t85 = -656762;

	t85 = ((x345<=(x346|x347))%x348);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = 1LL;
	static int64_t x350 = 3LL;
	uint16_t x351 = 288U;
	int32_t x352 = INT32_MIN;
	static int32_t t86 = 932057;

	t86 = ((x349<=(x350|x351))%x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = INT8_MIN;
	uint64_t x354 = UINT64_MAX;
	int16_t x355 = INT16_MAX;
	int32_t x356 = -49;
	int32_t t87 = -3211;

	t87 = ((x353<=(x354|x355))%x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x358 = -1;
	int32_t x360 = INT32_MIN;
	int32_t t88 = -1;

	t88 = ((x357<=(x358|x359))%x360);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x361 = 44U;
	static uint16_t x362 = UINT16_MAX;
	static uint8_t x363 = UINT8_MAX;
	static int64_t x364 = 679634987647LL;
	int64_t t89 = 411186LL;

	t89 = ((x361<=(x362|x363))%x364);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x369 = UINT16_MAX;
	static int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MAX;
	uint8_t x372 = 22U;
	static int32_t t90 = 66;

	t90 = ((x369<=(x370|x371))%x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = 387920396473526LLU;
	uint32_t x374 = 1472274U;
	static int8_t x375 = INT8_MAX;

	t91 = ((x373<=(x374|x375))%x376);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x382 = INT8_MAX;
	uint64_t x383 = 25510LLU;
	int16_t x384 = INT16_MAX;
	static int32_t t92 = 16356673;

	t92 = ((x381<=(x382|x383))%x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x386 = 66U;
	int8_t x388 = INT8_MIN;
	int32_t t93 = -839519060;

	t93 = ((x385<=(x386|x387))%x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MAX;
	uint32_t x391 = 507U;
	int64_t x392 = -1LL;
	int64_t t94 = -265081489010984LL;

	t94 = ((x389<=(x390|x391))%x392);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = INT8_MIN;
	volatile int64_t x396 = 211679890426874618LL;

	t95 = ((x393<=(x394|x395))%x396);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = -1;
	static int32_t x398 = -1;
	int32_t t96 = 983306;

	t96 = ((x397<=(x398|x399))%x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = 1664;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MIN;

	t97 = ((x401<=(x402|x403))%x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x405 = UINT16_MAX;
	volatile uint64_t x406 = UINT64_MAX;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = 902LLU;
	uint64_t t98 = 101510741LLU;

	t98 = ((x405<=(x406|x407))%x408);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x411 = 18519723U;
	uint32_t x412 = UINT32_MAX;

	t99 = ((x409<=(x410|x411))%x412);

	if (t99 != 1U) { NG(); } else { ; }
	
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

