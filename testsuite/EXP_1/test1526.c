#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x8 = 2554794067LLU;
int64_t x12 = -1LL;
int64_t x13 = INT64_MAX;
volatile uint64_t t5 = 52128627LLU;
int8_t x30 = 1;
int16_t x31 = -1;
volatile int16_t x32 = INT16_MAX;
static volatile int8_t x38 = 0;
int8_t x48 = 9;
static volatile uint32_t t13 = 12640850U;
uint32_t x64 = 3588548U;
int8_t x78 = INT8_MAX;
int64_t x82 = INT64_MAX;
int64_t t18 = 104346387618129LL;
int32_t x93 = -923;
uint32_t x95 = 57434483U;
uint64_t x97 = 489LLU;
int32_t x105 = -1;
int32_t t23 = 612775181;
int32_t t24 = 363622;
volatile int16_t x114 = INT16_MIN;
volatile int64_t x115 = INT64_MAX;
int64_t t25 = -119548376620558764LL;
static volatile int8_t x119 = -3;
uint16_t x120 = 24U;
volatile uint64_t x135 = UINT64_MAX;
volatile int32_t x143 = INT32_MIN;
static uint64_t x148 = UINT64_MAX;
int8_t x149 = 1;
static int32_t x151 = INT32_MIN;
uint32_t x154 = UINT32_MAX;
uint64_t x155 = 36700LLU;
int32_t x160 = -3;
int64_t t37 = 537095166445796LL;
int16_t x165 = -712;
volatile int32_t t38 = -1;
volatile uint32_t t41 = 26656769U;
int64_t t42 = 12014919234LL;
volatile int64_t t43 = -1026590212802LL;
int64_t t44 = -720364LL;
static int16_t x196 = 73;
uint32_t t45 = 206U;
static uint64_t x202 = 895LLU;
uint64_t t49 = 56862793LLU;
static int8_t x215 = 0;
uint32_t x220 = UINT32_MAX;
static volatile uint32_t t51 = 5371095U;
int64_t x239 = -1LL;
static volatile int8_t x245 = INT8_MAX;
uint64_t x248 = UINT64_MAX;
volatile uint64_t t56 = 249LLU;
volatile int32_t t59 = -295263;
volatile int8_t x278 = INT8_MIN;
uint8_t x279 = 92U;
volatile int32_t t62 = 209627793;
uint16_t x284 = 7141U;
int16_t x286 = 572;
static int16_t x287 = -18;
uint64_t x288 = 32263898532793896LLU;
volatile int16_t x289 = -3;
int16_t x296 = 278;
volatile uint64_t t67 = 1082548576280130319LLU;
volatile int16_t x302 = INT16_MIN;
int32_t x303 = -5998619;
int64_t x308 = INT64_MAX;
volatile int64_t t69 = 178146774286LL;
int16_t x312 = INT16_MIN;
int8_t x317 = -3;
static volatile int64_t x320 = INT64_MIN;
static volatile uint8_t x321 = UINT8_MAX;
static int32_t x323 = INT32_MAX;
uint16_t x340 = 3U;
volatile int16_t x343 = -622;
uint64_t x351 = 2463703338318933296LLU;
int64_t x353 = -14311410014602321LL;
int8_t x359 = INT8_MAX;
volatile int32_t t83 = 36415698;
int32_t x365 = -8;
uint8_t x369 = UINT8_MAX;
int64_t x371 = -1LL;
int8_t x376 = -1;
uint8_t x378 = 72U;
static int32_t x380 = INT32_MIN;
int32_t x381 = -248921566;
static int8_t x382 = -1;
volatile int64_t x386 = INT64_MIN;
static volatile int8_t x390 = INT8_MAX;
static uint16_t x394 = 8580U;
int32_t x398 = INT32_MIN;
static volatile int8_t x403 = 44;
int32_t t93 = -24;
uint32_t x405 = 0U;
int16_t x409 = -1;
uint64_t x413 = 530009449LLU;
static int32_t x417 = -298;
uint32_t x420 = UINT32_MAX;
int64_t t98 = 110096408660LL;
static int64_t x426 = INT64_MIN;
int64_t x428 = INT64_MIN;


void f0(void) {
	int16_t x1 = -1;
	static int64_t x2 = INT64_MAX;
	int32_t x3 = INT32_MIN;
	int8_t x4 = 16;
	int32_t t0 = 39606;

	t0 = (((x1<=x2)+x3)%x4);

	if (t0 != -15) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	static int8_t x6 = INT8_MIN;
	uint32_t x7 = 7358U;
	static uint64_t t1 = 129810425257645LLU;

	t1 = (((x5<=x6)+x7)%x8);

	if (t1 != 7358LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = 4270376880LL;
	int16_t x11 = 41;
	int64_t t2 = 0LL;

	t2 = (((x9<=x10)+x11)%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 50;
	int32_t x15 = INT32_MAX;
	int64_t x16 = -1LL;
	static int64_t t3 = -21709026LL;

	t3 = (((x13<=x14)+x15)%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	uint16_t x18 = UINT16_MAX;
	static int8_t x19 = INT8_MIN;
	int64_t x20 = -234450LL;
	int64_t t4 = -2100667037268434518LL;

	t4 = (((x17<=x18)+x19)%x20);

	if (t4 != -127LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	uint32_t x22 = 811930U;
	static volatile uint64_t x23 = 53401249LLU;
	static uint32_t x24 = 6914U;

	t5 = (((x21<=x22)+x23)%x24);

	if (t5 != 4427LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	static volatile int32_t x26 = -124;
	uint32_t x27 = 25U;
	volatile int32_t x28 = 3;
	uint32_t t6 = 142U;

	t6 = (((x25<=x26)+x27)%x28);

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int32_t t7 = 46870091;

	t7 = (((x29<=x30)+x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	static volatile int16_t x34 = -284;
	int8_t x35 = INT8_MAX;
	static int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -40531;

	t8 = (((x33<=x34)+x35)%x36);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint32_t x39 = 1118185U;
	uint64_t x40 = 1454451395905378960LLU;
	volatile uint64_t t9 = 40LLU;

	t9 = (((x37<=x38)+x39)%x40);

	if (t9 != 1118186LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MIN;
	uint64_t x43 = 2735241442667LLU;
	static uint8_t x44 = 5U;
	volatile uint64_t t10 = 96599562908LLU;

	t10 = (((x41<=x42)+x43)%x44);

	if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	static volatile uint64_t x46 = 164515109LLU;
	int16_t x47 = -53;
	int32_t t11 = 2528001;

	t11 = (((x45<=x46)+x47)%x48);

	if (t11 != -8) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	int64_t x50 = INT64_MAX;
	uint32_t x51 = 4541U;
	int8_t x52 = INT8_MIN;
	static volatile uint32_t t12 = 15U;

	t12 = (((x49<=x50)+x51)%x52);

	if (t12 != 4542U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int32_t x54 = -3396701;
	static uint8_t x55 = 30U;
	uint32_t x56 = 1U;

	t13 = (((x53<=x54)+x55)%x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = 544874;
	volatile uint64_t x62 = 13607LLU;
	volatile int64_t x63 = INT64_MIN;
	int64_t t14 = 19LL;

	t14 = (((x61<=x62)+x63)%x64);

	if (t14 != -2476356LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = -1;
	int16_t x70 = -285;
	volatile uint8_t x71 = 1U;
	uint64_t x72 = 25591424192LLU;
	volatile uint64_t t15 = 196775790626954627LLU;

	t15 = (((x69<=x70)+x71)%x72);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x73 = INT64_MIN;
	static uint8_t x74 = UINT8_MAX;
	volatile int8_t x75 = INT8_MAX;
	int32_t x76 = 29681019;
	int32_t t16 = -758237;

	t16 = (((x73<=x74)+x75)%x76);

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = UINT8_MAX;
	int8_t x79 = INT8_MAX;
	uint64_t x80 = 1064000597284136LLU;
	volatile uint64_t t17 = 20336467917054888LLU;

	t17 = (((x77<=x78)+x79)%x80);

	if (t17 != 127LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	int64_t x83 = -1344434688551588LL;
	volatile int64_t x84 = -21310LL;

	t18 = (((x81<=x82)+x83)%x84);

	if (t18 != -5737LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = -213689128150720364LL;
	volatile int8_t x86 = -1;
	static volatile int64_t x87 = -1LL;
	int8_t x88 = INT8_MAX;
	int64_t t19 = 576266LL;

	t19 = (((x85<=x86)+x87)%x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 0;
	uint64_t x90 = 50LLU;
	int16_t x91 = -5;
	int8_t x92 = INT8_MIN;
	int32_t t20 = 16201373;

	t20 = (((x89<=x90)+x91)%x92);

	if (t20 != -4) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = 0;
	int32_t x96 = 20121;
	volatile uint32_t t21 = 3322029U;

	t21 = (((x93<=x94)+x95)%x96);

	if (t21 != 9150U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = INT64_MIN;
	int8_t x99 = -1;
	volatile uint32_t x100 = 1412U;
	uint32_t t22 = 28839217U;

	t22 = (((x97<=x98)+x99)%x100);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x106 = -25094;
	int16_t x107 = 109;
	uint8_t x108 = 47U;

	t23 = (((x105<=x106)+x107)%x108);

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x109 = UINT8_MAX;
	volatile uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MIN;
	int32_t x112 = -11;

	t24 = (((x109<=x110)+x111)%x112);

	if (t24 != -9) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	int32_t x116 = 2596838;

	t25 = (((x113<=x114)+x115)%x116);

	if (t25 != 1024997LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 27005258LLU;
	uint8_t x118 = 24U;
	int32_t t26 = -23224181;

	t26 = (((x117<=x118)+x119)%x120);

	if (t26 != -3) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = -1834;
	int32_t x122 = -16009839;
	int16_t x123 = -1;
	volatile uint16_t x124 = 29U;
	int32_t t27 = 74784468;

	t27 = (((x121<=x122)+x123)%x124);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -4;
	int32_t x126 = INT32_MIN;
	volatile uint32_t x127 = UINT32_MAX;
	uint64_t x128 = 184656704413LLU;
	static uint64_t t28 = 3619798LLU;

	t28 = (((x125<=x126)+x127)%x128);

	if (t28 != 4294967295LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = 90LLU;
	int8_t x130 = 28;
	static int8_t x131 = INT8_MIN;
	int16_t x132 = -1;
	int32_t t29 = -46533161;

	t29 = (((x129<=x130)+x131)%x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	int16_t x136 = INT16_MIN;
	static volatile uint64_t t30 = 85222181805LLU;

	t30 = (((x133<=x134)+x135)%x136);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x137 = 98U;
	uint64_t x138 = 0LLU;
	int32_t x139 = INT32_MIN;
	int32_t x140 = INT32_MAX;
	static int32_t t31 = -6259529;

	t31 = (((x137<=x138)+x139)%x140);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -7670;
	int8_t x142 = -1;
	uint64_t x144 = 3LLU;
	static uint64_t t32 = 195910634LLU;

	t32 = (((x141<=x142)+x143)%x144);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static volatile uint16_t x146 = 1388U;
	static uint16_t x147 = 427U;
	uint64_t t33 = 810209LLU;

	t33 = (((x145<=x146)+x147)%x148);

	if (t33 != 428LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x150 = -1;
	int32_t x152 = -135;
	static volatile int32_t t34 = 108;

	t34 = (((x149<=x150)+x151)%x152);

	if (t34 != -38) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = -1;
	int8_t x156 = INT8_MIN;
	static uint64_t t35 = 16162314LLU;

	t35 = (((x153<=x154)+x155)%x156);

	if (t35 != 36701LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = INT16_MIN;
	static int16_t x158 = INT16_MIN;
	int16_t x159 = 2;
	static volatile int32_t t36 = -396888;

	t36 = (((x157<=x158)+x159)%x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x161 = 1150496448LLU;
	int64_t x162 = -5569208376873LL;
	int64_t x163 = 1803LL;
	volatile int16_t x164 = INT16_MIN;

	t37 = (((x161<=x162)+x163)%x164);

	if (t37 != 1804LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x166 = 530833935956LLU;
	static uint8_t x167 = 97U;
	uint8_t x168 = UINT8_MAX;

	t38 = (((x165<=x166)+x167)%x168);

	if (t38 != 97) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x169 = 9U;
	int8_t x170 = INT8_MIN;
	static volatile int32_t x171 = INT32_MIN;
	int32_t x172 = -145;
	int32_t t39 = 9393480;

	t39 = (((x169<=x170)+x171)%x172);

	if (t39 != -8) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = UINT32_MAX;
	int64_t x174 = -1LL;
	volatile int64_t x175 = -498LL;
	int32_t x176 = 128652;
	volatile int64_t t40 = 12369LL;

	t40 = (((x173<=x174)+x175)%x176);

	if (t40 != -498LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = UINT32_MAX;
	int64_t x178 = INT64_MAX;
	uint32_t x179 = 417726U;
	int16_t x180 = INT16_MIN;

	t41 = (((x177<=x178)+x179)%x180);

	if (t41 != 417727U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = -1;
	int32_t x182 = INT32_MIN;
	int64_t x183 = -1LL;
	volatile uint8_t x184 = 3U;

	t42 = (((x181<=x182)+x183)%x184);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	static int32_t x186 = -5899;
	int64_t x187 = INT64_MIN;
	volatile int32_t x188 = 229834575;

	t43 = (((x185<=x186)+x187)%x188);

	if (t43 != -178080082LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x189 = INT8_MAX;
	int32_t x190 = 479375099;
	int64_t x191 = 0LL;
	int16_t x192 = INT16_MIN;

	t44 = (((x189<=x190)+x191)%x192);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x193 = 31793093U;
	int32_t x194 = INT32_MIN;
	uint32_t x195 = 144906U;

	t45 = (((x193<=x194)+x195)%x196);

	if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = 2502;
	volatile uint8_t x198 = 0U;
	volatile uint64_t x199 = UINT64_MAX;
	uint16_t x200 = UINT16_MAX;
	uint64_t t46 = 317154LLU;

	t46 = (((x197<=x198)+x199)%x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t47 = 103;

	t47 = (((x201<=x202)+x203)%x204);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x205 = INT32_MIN;
	int8_t x206 = -42;
	uint32_t x207 = 29617U;
	int64_t x208 = INT64_MAX;
	static int64_t t48 = -4995694971051LL;

	t48 = (((x205<=x206)+x207)%x208);

	if (t48 != 29618LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 126U;
	static int64_t x210 = INT64_MAX;
	uint64_t x211 = 8242441544390770LLU;
	volatile int32_t x212 = INT32_MIN;

	t49 = (((x209<=x210)+x211)%x212);

	if (t49 != 8242441544390771LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x213 = INT32_MAX;
	int8_t x214 = INT8_MIN;
	int32_t x216 = -1;
	int32_t t50 = 0;

	t50 = (((x213<=x214)+x215)%x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = 3;
	volatile int32_t x218 = 248292;
	int32_t x219 = INT32_MIN;

	t51 = (((x217<=x218)+x219)%x220);

	if (t51 != 2147483649U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = 7595823U;
	static int8_t x222 = -1;
	int32_t x223 = -815;
	int32_t x224 = -20016;
	volatile int32_t t52 = -8051546;

	t52 = (((x221<=x222)+x223)%x224);

	if (t52 != -814) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = 26U;
	uint8_t x226 = UINT8_MAX;
	int8_t x227 = INT8_MIN;
	uint32_t x228 = 119378399U;
	volatile uint32_t t53 = 517973U;

	t53 = (((x225<=x226)+x227)%x228);

	if (t53 != 116723204U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x237 = 6847U;
	volatile int32_t x238 = -1;
	volatile int8_t x240 = INT8_MAX;
	volatile int64_t t54 = -1144891603470LL;

	t54 = (((x237<=x238)+x239)%x240);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = INT8_MIN;
	static int32_t x242 = INT32_MIN;
	uint32_t x243 = UINT32_MAX;
	static uint16_t x244 = 1U;
	uint32_t t55 = 16840973U;

	t55 = (((x241<=x242)+x243)%x244);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x246 = INT32_MIN;
	uint64_t x247 = UINT64_MAX;

	t56 = (((x245<=x246)+x247)%x248);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x253 = INT64_MAX;
	uint8_t x254 = 1U;
	int16_t x255 = -1;
	static uint8_t x256 = 104U;
	int32_t t57 = -12;

	t57 = (((x253<=x254)+x255)%x256);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = UINT64_MAX;
	int8_t x258 = -3;
	uint32_t x259 = UINT32_MAX;
	uint32_t x260 = 1369628U;
	volatile uint32_t t58 = 3257424U;

	t58 = (((x257<=x258)+x259)%x260);

	if (t58 != 1183515U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x261 = 509549212290833194LLU;
	int8_t x262 = -1;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MIN;

	t59 = (((x261<=x262)+x263)%x264);

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x265 = 0;
	int64_t x266 = INT64_MIN;
	int64_t x267 = 260310855LL;
	int64_t x268 = INT64_MAX;
	volatile int64_t t60 = -4905166146784LL;

	t60 = (((x265<=x266)+x267)%x268);

	if (t60 != 260310855LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = -4;
	int32_t x270 = -75169;
	volatile int64_t x271 = INT64_MIN;
	int8_t x272 = 5;
	int64_t t61 = -1308LL;

	t61 = (((x269<=x270)+x271)%x272);

	if (t61 != -3LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MIN;
	volatile int16_t x280 = INT16_MIN;

	t62 = (((x277<=x278)+x279)%x280);

	if (t62 != 93) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MAX;
	int16_t x283 = INT16_MIN;
	int32_t t63 = -1;

	t63 = (((x281<=x282)+x283)%x284);

	if (t63 != -4203) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = INT64_MIN;
	uint64_t t64 = 362450LLU;

	t64 = (((x285<=x286)+x287)%x288);

	if (t64 != 24058011484236983LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x290 = -1;
	static int64_t x291 = INT64_MIN;
	int16_t x292 = -1;
	static volatile int64_t t65 = -679LL;

	t65 = (((x289<=x290)+x291)%x292);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x293 = -1;
	static volatile int16_t x294 = INT16_MIN;
	volatile int64_t x295 = -1LL;
	int64_t t66 = 25515LL;

	t66 = (((x293<=x294)+x295)%x296);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x297 = INT64_MIN;
	uint32_t x298 = 27922349U;
	volatile int32_t x299 = -899;
	uint64_t x300 = UINT64_MAX;

	t67 = (((x297<=x298)+x299)%x300);

	if (t67 != 18446744073709550718LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = INT32_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t68 = -229165;

	t68 = (((x301<=x302)+x303)%x304);

	if (t68 != -5998618) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = -681LL;
	volatile int32_t x306 = INT32_MIN;
	int8_t x307 = INT8_MIN;

	t69 = (((x305<=x306)+x307)%x308);

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MIN;
	int16_t x310 = INT16_MIN;
	volatile int32_t x311 = INT32_MIN;
	int32_t t70 = -17975;

	t70 = (((x309<=x310)+x311)%x312);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = -29;
	int8_t x315 = INT8_MAX;
	int64_t x316 = -21356947LL;
	int64_t t71 = -32910LL;

	t71 = (((x313<=x314)+x315)%x316);

	if (t71 != 128LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MAX;
	static volatile int64_t t72 = INT64_MAX;

	t72 = (((x317<=x318)+x319)%x320);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x322 = 17U;
	uint8_t x324 = UINT8_MAX;
	static volatile int32_t t73 = 207119;

	t73 = (((x321<=x322)+x323)%x324);

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x325 = 57U;
	int32_t x326 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MIN;
	static volatile int64_t t74 = 66495393362304LL;

	t74 = (((x325<=x326)+x327)%x328);

	if (t74 != -2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = 3;
	static uint32_t x330 = UINT32_MAX;
	uint64_t x331 = 4056367213110LLU;
	volatile int32_t x332 = INT32_MAX;
	volatile uint64_t t75 = 1318843393LLU;

	t75 = (((x329<=x330)+x331)%x332);

	if (t75 != 1918087575LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = 249;
	uint64_t x335 = 95LLU;
	int64_t x336 = -7690746229LL;
	volatile uint64_t t76 = 53974039794519073LLU;

	t76 = (((x333<=x334)+x335)%x336);

	if (t76 != 96LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	uint8_t x338 = 0U;
	int64_t x339 = INT64_MIN;
	static volatile int64_t t77 = 917LL;

	t77 = (((x337<=x338)+x339)%x340);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x341 = 47747778LLU;
	uint64_t x342 = 34628624092997LLU;
	int64_t x344 = INT64_MIN;
	static volatile int64_t t78 = -373550373924LL;

	t78 = (((x341<=x342)+x343)%x344);

	if (t78 != -621LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MIN;
	static volatile int16_t x347 = -1;
	int32_t x348 = INT32_MAX;
	int32_t t79 = 167677;

	t79 = (((x345<=x346)+x347)%x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = -2;
	int8_t x350 = -1;
	uint16_t x352 = UINT16_MAX;
	volatile uint64_t t80 = 5770192109556884818LLU;

	t80 = (((x349<=x350)+x351)%x352);

	if (t80 != 44277LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x354 = INT64_MAX;
	int64_t x355 = INT64_MIN;
	static volatile int8_t x356 = INT8_MIN;
	volatile int64_t t81 = -56642046771511LL;

	t81 = (((x353<=x354)+x355)%x356);

	if (t81 != -127LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = 296U;
	uint8_t x358 = UINT8_MAX;
	int32_t x360 = -1;
	int32_t t82 = -3;

	t82 = (((x357<=x358)+x359)%x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = -924420LL;
	int32_t x362 = INT32_MIN;
	volatile int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MAX;

	t83 = (((x361<=x362)+x363)%x364);

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x366 = -29;
	int64_t x367 = INT64_MAX;
	static uint16_t x368 = 238U;
	volatile int64_t t84 = 5LL;

	t84 = (((x365<=x366)+x367)%x368);

	if (t84 != 161LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x370 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	int64_t t85 = -1147083LL;

	t85 = (((x369<=x370)+x371)%x372);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = -144;
	static uint32_t x374 = UINT32_MAX;
	uint64_t x375 = 553208607LLU;
	uint64_t t86 = 64335LLU;

	t86 = (((x373<=x374)+x375)%x376);

	if (t86 != 553208608LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x377 = INT16_MAX;
	int64_t x379 = -1LL;
	static int64_t t87 = -749869LL;

	t87 = (((x377<=x378)+x379)%x380);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x383 = -61593;
	int32_t x384 = INT32_MIN;
	volatile int32_t t88 = 14;

	t88 = (((x381<=x382)+x383)%x384);

	if (t88 != -61592) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MAX;
	int64_t t89 = -2425818408357201LL;

	t89 = (((x385<=x386)+x387)%x388);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = INT16_MIN;
	int8_t x391 = -15;
	volatile int32_t x392 = 127616440;
	volatile int32_t t90 = 124;

	t90 = (((x389<=x390)+x391)%x392);

	if (t90 != -14) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x393 = 0U;
	static int64_t x395 = 964475LL;
	int8_t x396 = -1;
	volatile int64_t t91 = -18841528173079975LL;

	t91 = (((x393<=x394)+x395)%x396);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = -6;
	volatile int32_t x399 = INT32_MIN;
	volatile int32_t x400 = 51;
	volatile int32_t t92 = -6723;

	t92 = (((x397<=x398)+x399)%x400);

	if (t92 != -26) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x401 = 0U;
	volatile int16_t x402 = INT16_MIN;
	static int8_t x404 = INT8_MIN;

	t93 = (((x401<=x402)+x403)%x404);

	if (t93 != 44) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x406 = INT16_MIN;
	volatile int8_t x407 = INT8_MIN;
	volatile uint32_t x408 = UINT32_MAX;
	uint32_t t94 = 2102428286U;

	t94 = (((x405<=x406)+x407)%x408);

	if (t94 != 4294967169U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x410 = 264083094400LLU;
	int32_t x411 = INT32_MIN;
	int8_t x412 = -1;
	volatile int32_t t95 = -1;

	t95 = (((x409<=x410)+x411)%x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x414 = 3;
	int8_t x415 = -59;
	volatile int64_t x416 = -1LL;
	int64_t t96 = 12952LL;

	t96 = (((x413<=x414)+x415)%x416);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x418 = -2979487LL;
	static int16_t x419 = -10;
	volatile uint32_t t97 = 134679U;

	t97 = (((x417<=x418)+x419)%x420);

	if (t97 != 4294967286U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = INT16_MAX;
	int16_t x422 = -197;
	static int8_t x423 = -1;
	volatile int64_t x424 = INT64_MAX;

	t98 = (((x421<=x422)+x423)%x424);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = INT8_MAX;
	static volatile int16_t x427 = INT16_MIN;
	int64_t t99 = 1935605937080404LL;

	t99 = (((x425<=x426)+x427)%x428);

	if (t99 != -32768LL) { NG(); } else { ; }
	
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

