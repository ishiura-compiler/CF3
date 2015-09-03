#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 8170;
volatile int64_t x2 = INT64_MIN;
int32_t t0 = 1252;
uint16_t x12 = UINT16_MAX;
int64_t x17 = -16LL;
uint64_t x18 = 8041LLU;
int32_t x22 = INT32_MIN;
volatile int32_t t8 = -1;
int32_t t14 = -4181;
static volatile int32_t t15 = -1840;
int32_t t16 = -2004538;
volatile int32_t t17 = -23273;
uint32_t x85 = UINT32_MAX;
int32_t x88 = 1876;
int64_t t19 = -2319LL;
volatile int64_t x96 = 204588134LL;
uint16_t x102 = 3813U;
int32_t t22 = -6;
int32_t x117 = 23;
int16_t x118 = 1;
int64_t x119 = INT64_MAX;
uint32_t x123 = 16U;
static uint64_t x124 = 4086732352884110LLU;
uint64_t t27 = 1178639958537594LLU;
int16_t x127 = INT16_MIN;
uint8_t x138 = 2U;
int32_t t29 = 63088292;
uint16_t x143 = 359U;
static volatile uint32_t x144 = UINT32_MAX;
uint64_t x146 = 7316381LLU;
static int64_t x152 = -543LL;
volatile int32_t t33 = -1022271;
int16_t x164 = -1;
int64_t x165 = -4092820407LL;
volatile uint32_t t36 = 99665192U;
volatile int32_t x170 = INT32_MIN;
static volatile int64_t x172 = -1LL;
static int64_t x173 = INT64_MIN;
static volatile uint16_t x177 = 23506U;
uint32_t x178 = 1U;
uint64_t x179 = 131LLU;
int32_t t39 = -63;
int64_t x187 = -81295210510LL;
int32_t x189 = INT32_MIN;
int64_t x191 = -25188100534182056LL;
uint32_t x194 = UINT32_MAX;
static int8_t x195 = INT8_MIN;
volatile uint8_t x197 = UINT8_MAX;
uint32_t x202 = 0U;
volatile int8_t x203 = INT8_MAX;
int32_t x206 = INT32_MAX;
int32_t x207 = -657;
static int16_t x209 = 3938;
int16_t x227 = 28;
volatile int64_t x238 = INT64_MIN;
static int8_t x246 = 25;
int32_t x248 = INT32_MAX;
int16_t x251 = -1;
static volatile int32_t t54 = 3715929;
volatile int32_t t55 = 765961;
int32_t x265 = -1;
int8_t x267 = INT8_MIN;
static uint8_t x268 = 14U;
int8_t x271 = INT8_MIN;
static int32_t t58 = -78447;
static int16_t x276 = INT16_MAX;
int16_t x278 = INT16_MIN;
int8_t x281 = INT8_MAX;
static volatile int16_t x291 = INT16_MIN;
static int32_t x292 = 0;
int16_t x293 = INT16_MIN;
static volatile int64_t x301 = -1LL;
static int16_t x303 = 1;
uint32_t x304 = UINT32_MAX;
uint64_t x308 = UINT64_MAX;
static uint32_t x311 = UINT32_MAX;
int8_t x313 = INT8_MIN;
int64_t x319 = INT64_MAX;
int32_t t71 = 71780;
int32_t x335 = -1;
static int8_t x336 = INT8_MIN;
volatile int32_t t75 = -4;
uint32_t x342 = 231685U;
int16_t x344 = 15309;
int32_t t77 = -430840;
int64_t x351 = INT64_MIN;
volatile uint8_t x360 = 2U;
volatile int32_t t80 = -7052;
int32_t t81 = -12;
uint16_t x368 = UINT16_MAX;
int32_t t82 = -118322696;
int32_t x370 = INT32_MIN;
uint8_t x372 = UINT8_MAX;
volatile int64_t t84 = 10104049142155LL;
int32_t x380 = INT32_MAX;
uint8_t x381 = UINT8_MAX;
uint16_t x387 = 1U;
volatile int32_t t88 = -27514738;
uint16_t x398 = 3U;
uint32_t x399 = UINT32_MAX;
int8_t x401 = 0;
int32_t t92 = -1642;
int64_t x409 = -1LL;
static uint8_t x413 = UINT8_MAX;
static volatile int8_t x414 = 20;
uint64_t x418 = UINT64_MAX;
volatile uint64_t t95 = 347800068925LLU;
int32_t x431 = -22;
volatile int64_t x435 = -495374490232212LL;
volatile uint64_t x436 = UINT64_MAX;


void f0(void) {
	volatile int16_t x3 = 1;
	volatile uint8_t x4 = UINT8_MAX;

	t0 = (((x1&x2)<x3)-x4);

	if (t0 != -254) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int16_t x6 = -290;
	uint32_t x7 = 181214274U;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = -400228;

	t1 = (((x5&x6)<x7)-x8);

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MAX;
	uint64_t x10 = UINT64_MAX;
	int16_t x11 = 3562;
	volatile int32_t t2 = 675763523;

	t2 = (((x9&x10)<x11)-x12);

	if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static uint8_t x14 = UINT8_MAX;
	int32_t x15 = INT32_MIN;
	int32_t x16 = -1;
	int32_t t3 = 6;

	t3 = (((x13&x14)<x15)-x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x19 = INT16_MIN;
	static volatile int16_t x20 = -1;
	int32_t t4 = -542;

	t4 = (((x17&x18)<x19)-x20);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile uint32_t x23 = UINT32_MAX;
	volatile int32_t x24 = INT32_MAX;
	int32_t t5 = 0;

	t5 = (((x21&x22)<x23)-x24);

	if (t5 != -2147483646) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -15;
	uint16_t x26 = 13U;
	volatile int8_t x27 = -1;
	volatile uint16_t x28 = 1U;
	volatile int32_t t6 = -7734971;

	t6 = (((x25&x26)<x27)-x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 932370925308910LLU;
	int32_t x30 = INT32_MIN;
	int64_t x31 = -1LL;
	static int16_t x32 = -1;
	int32_t t7 = -153615847;

	t7 = (((x29&x30)<x31)-x32);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -90;
	static int64_t x34 = -1LL;
	static int64_t x35 = -158805390290534515LL;
	int16_t x36 = INT16_MIN;

	t8 = (((x33&x34)<x35)-x36);

	if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MAX;
	int8_t x42 = 0;
	uint8_t x43 = UINT8_MAX;
	int8_t x44 = INT8_MAX;
	volatile int32_t t9 = 17178213;

	t9 = (((x41&x42)<x43)-x44);

	if (t9 != -126) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	static int32_t x46 = -861;
	int64_t x47 = INT64_MIN;
	int8_t x48 = -1;
	int32_t t10 = 3244080;

	t10 = (((x45&x46)<x47)-x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 65U;
	static uint64_t x51 = 6748449964486042LLU;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = -507246447;

	t11 = (((x49&x50)<x51)-x52);

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 420;
	int64_t x54 = -396LL;
	static int32_t x55 = 1662;
	uint8_t x56 = 62U;
	volatile int32_t t12 = -1;

	t12 = (((x53&x54)<x55)-x56);

	if (t12 != -61) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	uint16_t x58 = 1328U;
	volatile uint32_t x59 = 240588U;
	uint32_t x60 = UINT32_MAX;
	static volatile uint32_t t13 = 30U;

	t13 = (((x57&x58)<x59)-x60);

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MAX;
	volatile uint32_t x62 = UINT32_MAX;
	static int32_t x63 = -30;
	static int8_t x64 = 1;

	t14 = (((x61&x62)<x63)-x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 2043919823748912614LL;
	uint8_t x66 = 127U;
	static uint16_t x67 = UINT16_MAX;
	volatile int8_t x68 = INT8_MIN;

	t15 = (((x65&x66)<x67)-x68);

	if (t15 != 129) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MAX;
	int16_t x78 = INT16_MAX;
	uint16_t x79 = UINT16_MAX;
	int16_t x80 = -1;

	t16 = (((x77&x78)<x79)-x80);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	static uint8_t x82 = 0U;
	int16_t x83 = -1;
	static int8_t x84 = INT8_MIN;

	t17 = (((x81&x82)<x83)-x84);

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x86 = UINT8_MAX;
	int64_t x87 = -1888763323237268470LL;
	volatile int32_t t18 = 1;

	t18 = (((x85&x86)<x87)-x88);

	if (t18 != -1876) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -1;
	static uint64_t x90 = 2155173243774412LLU;
	int8_t x91 = 0;
	int64_t x92 = -212LL;

	t19 = (((x89&x90)<x91)-x92);

	if (t19 != 212LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = -1;
	static uint32_t x94 = 14U;
	int64_t x95 = INT64_MAX;
	int64_t t20 = -272751818028LL;

	t20 = (((x93&x94)<x95)-x96);

	if (t20 != -204588133LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x97 = INT64_MAX;
	static int16_t x98 = 352;
	uint8_t x99 = 28U;
	static uint8_t x100 = UINT8_MAX;
	volatile int32_t t21 = -489315;

	t21 = (((x97&x98)<x99)-x100);

	if (t21 != -255) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -105LL;
	static uint32_t x103 = 7443892U;
	int8_t x104 = INT8_MAX;

	t22 = (((x101&x102)<x103)-x104);

	if (t22 != -126) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = INT16_MAX;
	static uint32_t x106 = 5593U;
	uint16_t x107 = 1U;
	static volatile int8_t x108 = -1;
	static int32_t t23 = -739251;

	t23 = (((x105&x106)<x107)-x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MAX;
	int16_t x111 = -9107;
	int8_t x112 = INT8_MIN;
	int32_t t24 = 43282439;

	t24 = (((x109&x110)<x111)-x112);

	if (t24 != 128) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = -272486219009204LL;
	int16_t x114 = INT16_MAX;
	static uint32_t x115 = 796857337U;
	int16_t x116 = 0;
	volatile int32_t t25 = 87;

	t25 = (((x113&x114)<x115)-x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x120 = INT16_MIN;
	int32_t t26 = 3;

	t26 = (((x117&x118)<x119)-x120);

	if (t26 != 32769) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 3U;
	uint64_t x122 = 15912022655319LLU;

	t27 = (((x121&x122)<x123)-x124);

	if (t27 != 18442657341356667507LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x125 = INT8_MAX;
	int64_t x126 = INT64_MIN;
	static int8_t x128 = -1;
	static int32_t t28 = -1;

	t28 = (((x125&x126)<x127)-x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = INT16_MIN;
	static uint64_t x139 = 653240315LLU;
	static int16_t x140 = INT16_MAX;

	t29 = (((x137&x138)<x139)-x140);

	if (t29 != -32766) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 249U;
	int64_t x142 = -126278105LL;
	uint32_t t30 = 1735778354U;

	t30 = (((x141&x142)<x143)-x144);

	if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x145 = -21;
	volatile int8_t x147 = -1;
	volatile uint8_t x148 = 3U;
	int32_t t31 = 298;

	t31 = (((x145&x146)<x147)-x148);

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;
	volatile int64_t x150 = INT64_MIN;
	volatile int16_t x151 = INT16_MIN;
	int64_t t32 = 1LL;

	t32 = (((x149&x150)<x151)-x152);

	if (t32 != 544LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = 6807411599072445LL;
	int8_t x154 = 8;
	static volatile int32_t x155 = 0;
	int8_t x156 = 46;

	t33 = (((x153&x154)<x155)-x156);

	if (t33 != -46) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 58U;
	static uint8_t x158 = 5U;
	int64_t x159 = -1LL;
	int8_t x160 = 49;
	int32_t t34 = -1;

	t34 = (((x157&x158)<x159)-x160);

	if (t34 != -49) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x161 = INT16_MAX;
	int16_t x162 = 3745;
	int64_t x163 = -626892331116LL;
	volatile int32_t t35 = -165;

	t35 = (((x161&x162)<x163)-x164);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = 264028;
	uint32_t x168 = 3223U;

	t36 = (((x165&x166)<x167)-x168);

	if (t36 != 4294964074U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = UINT32_MAX;
	static uint8_t x171 = UINT8_MAX;
	volatile int64_t t37 = 5761LL;

	t37 = (((x169&x170)<x171)-x172);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x174 = 13;
	uint16_t x175 = UINT16_MAX;
	static int32_t x176 = -1;
	volatile int32_t t38 = -63;

	t38 = (((x173&x174)<x175)-x176);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x180 = -1;

	t39 = (((x177&x178)<x179)-x180);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = 214696488LL;
	int32_t x182 = INT32_MIN;
	int32_t x183 = 56;
	int64_t x184 = -758807411341LL;
	volatile int64_t t40 = -40090404LL;

	t40 = (((x181&x182)<x183)-x184);

	if (t40 != 758807411342LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x186 = 14U;
	uint32_t x188 = 276U;
	uint32_t t41 = 935U;

	t41 = (((x185&x186)<x187)-x188);

	if (t41 != 4294967020U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x190 = INT32_MAX;
	volatile int8_t x192 = -1;
	static int32_t t42 = 7788148;

	t42 = (((x189&x190)<x191)-x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x193 = INT16_MAX;
	int32_t x196 = INT32_MAX;
	int32_t t43 = -11415201;

	t43 = (((x193&x194)<x195)-x196);

	if (t43 != -2147483646) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x198 = INT8_MIN;
	int8_t x199 = -1;
	int64_t x200 = -296825045LL;
	int64_t t44 = -281254098807735LL;

	t44 = (((x197&x198)<x199)-x200);

	if (t44 != 296825045LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -1LL;
	static uint16_t x204 = 1U;
	int32_t t45 = -74872;

	t45 = (((x201&x202)<x203)-x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 41760U;
	static int8_t x208 = -7;
	int32_t t46 = -19;

	t46 = (((x205&x206)<x207)-x208);

	if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x210 = 0;
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MAX;
	static int32_t t47 = -749;

	t47 = (((x209&x210)<x211)-x212);

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 4U;
	static int64_t x214 = INT64_MIN;
	int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MIN;
	int32_t t48 = 11867757;

	t48 = (((x213&x214)<x215)-x216);

	if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x217 = 516314193LLU;
	static uint64_t x218 = 118178675LLU;
	uint32_t x219 = UINT32_MAX;
	static int32_t x220 = INT32_MAX;
	static volatile int32_t t49 = 32;

	t49 = (((x217&x218)<x219)-x220);

	if (t49 != -2147483646) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x225 = 3911680421498196461LLU;
	int16_t x226 = INT16_MAX;
	volatile uint64_t x228 = UINT64_MAX;
	uint64_t t50 = 952737LLU;

	t50 = (((x225&x226)<x227)-x228);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x229 = INT64_MIN;
	uint64_t x230 = 19707LLU;
	uint64_t x231 = 6752435LLU;
	volatile int64_t x232 = INT64_MAX;
	int64_t t51 = 14514LL;

	t51 = (((x229&x230)<x231)-x232);

	if (t51 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = -117758932;
	int8_t x239 = -7;
	int16_t x240 = INT16_MAX;
	volatile int32_t t52 = 571027937;

	t52 = (((x237&x238)<x239)-x240);

	if (t52 != -32766) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x245 = 0U;
	uint16_t x247 = UINT16_MAX;
	volatile int32_t t53 = -3203;

	t53 = (((x245&x246)<x247)-x248);

	if (t53 != -2147483646) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x249 = INT32_MAX;
	uint16_t x250 = UINT16_MAX;
	static int8_t x252 = INT8_MIN;

	t54 = (((x249&x250)<x251)-x252);

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x258 = 96321013LLU;
	int32_t x259 = INT32_MAX;
	volatile int8_t x260 = INT8_MAX;

	t55 = (((x257&x258)<x259)-x260);

	if (t55 != -126) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = -1;
	static int64_t x263 = INT64_MAX;
	uint32_t x264 = 878159006U;
	uint32_t t56 = 29660U;

	t56 = (((x261&x262)<x263)-x264);

	if (t56 != 3416808291U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x266 = UINT32_MAX;
	volatile int32_t t57 = -1803;

	t57 = (((x265&x266)<x267)-x268);

	if (t57 != -14) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x270 = INT8_MAX;
	int16_t x272 = -6;

	t58 = (((x269&x270)<x271)-x272);

	if (t58 != 6) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MAX;
	volatile int16_t x275 = 1038;
	int32_t t59 = 921;

	t59 = (((x273&x274)<x275)-x276);

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x277 = 3492329U;
	int8_t x279 = 1;
	uint32_t x280 = 231U;
	volatile uint32_t t60 = 1962U;

	t60 = (((x277&x278)<x279)-x280);

	if (t60 != 4294967065U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x282 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = -922681908233111LL;
	int64_t t61 = 21749101939LL;

	t61 = (((x281&x282)<x283)-x284);

	if (t61 != 922681908233112LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x285 = INT8_MIN;
	uint64_t x286 = 15611LLU;
	uint64_t x287 = 75185016534280LLU;
	static volatile int16_t x288 = INT16_MIN;
	static int32_t t62 = 25584638;

	t62 = (((x285&x286)<x287)-x288);

	if (t62 != 32769) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = -15219932645718LL;
	uint32_t x290 = UINT32_MAX;
	volatile int32_t t63 = 6631;

	t63 = (((x289&x290)<x291)-x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = -1LL;
	int16_t x296 = INT16_MIN;
	int32_t t64 = 6840;

	t64 = (((x293&x294)<x295)-x296);

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = INT64_MAX;
	static int16_t x298 = INT16_MAX;
	static int32_t x299 = -635079;
	int16_t x300 = 6;
	static volatile int32_t t65 = 3478583;

	t65 = (((x297&x298)<x299)-x300);

	if (t65 != -6) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x302 = 3703U;
	volatile uint32_t t66 = 29829U;

	t66 = (((x301&x302)<x303)-x304);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x305 = -131;
	static uint64_t x306 = 241742972191988063LLU;
	uint8_t x307 = 1U;
	volatile uint64_t t67 = 10LLU;

	t67 = (((x305&x306)<x307)-x308);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = INT64_MIN;
	static int8_t x310 = -1;
	static uint32_t x312 = 265588361U;
	volatile uint32_t t68 = 195347814U;

	t68 = (((x309&x310)<x311)-x312);

	if (t68 != 4029378936U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x314 = -1LL;
	uint8_t x315 = UINT8_MAX;
	static uint64_t x316 = 69318688827922778LLU;
	volatile uint64_t t69 = 6881818711414LLU;

	t69 = (((x313&x314)<x315)-x316);

	if (t69 != 18377425384881628839LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x318 = UINT64_MAX;
	uint64_t x320 = 13972010803LLU;
	uint64_t t70 = 7120101513184LLU;

	t70 = (((x317&x318)<x319)-x320);

	if (t70 != 18446744059737540813LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x321 = 15U;
	int64_t x322 = INT64_MIN;
	volatile int16_t x323 = INT16_MIN;
	volatile int8_t x324 = INT8_MIN;

	t71 = (((x321&x322)<x323)-x324);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x325 = 1U;
	static uint8_t x326 = 1U;
	volatile uint64_t x327 = UINT64_MAX;
	int16_t x328 = -1;
	int32_t t72 = 506627;

	t72 = (((x325&x326)<x327)-x328);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x329 = -16590545;
	uint32_t x330 = 6U;
	uint32_t x331 = UINT32_MAX;
	static uint16_t x332 = 0U;
	int32_t t73 = 2287509;

	t73 = (((x329&x330)<x331)-x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = 6568060;
	int32_t t74 = 45322691;

	t74 = (((x333&x334)<x335)-x336);

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x337 = 99022U;
	uint32_t x338 = 210U;
	uint64_t x339 = 58150621630LLU;
	volatile int8_t x340 = -35;

	t75 = (((x337&x338)<x339)-x340);

	if (t75 != 36) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x341 = UINT16_MAX;
	int64_t x343 = -1LL;
	volatile int32_t t76 = -12048;

	t76 = (((x341&x342)<x343)-x344);

	if (t76 != -15309) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = -2881;
	static uint16_t x346 = 0U;
	int8_t x347 = -1;
	int8_t x348 = INT8_MAX;

	t77 = (((x345&x346)<x347)-x348);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x349 = 4202;
	uint16_t x350 = 189U;
	uint32_t x352 = 693U;
	static uint32_t t78 = 17990883U;

	t78 = (((x349&x350)<x351)-x352);

	if (t78 != 4294966603U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x353 = INT32_MIN;
	uint64_t x354 = 4914364LLU;
	int32_t x355 = INT32_MIN;
	int64_t x356 = -1LL;
	volatile int64_t t79 = 29010LL;

	t79 = (((x353&x354)<x355)-x356);

	if (t79 != 2LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = -75559318848LL;
	static uint32_t x358 = 2U;
	int32_t x359 = INT32_MIN;

	t80 = (((x357&x358)<x359)-x360);

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	int16_t x364 = -1;

	t81 = (((x361&x362)<x363)-x364);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = -56282348847313679LL;
	int32_t x366 = INT32_MIN;
	static int32_t x367 = -1;

	t82 = (((x365&x366)<x367)-x368);

	if (t82 != -65534) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MIN;
	int32_t x371 = 2;
	static int32_t t83 = -543;

	t83 = (((x369&x370)<x371)-x372);

	if (t83 != -254) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = INT16_MAX;
	uint64_t x374 = 1033940762LLU;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = -1LL;

	t84 = (((x373&x374)<x375)-x376);

	if (t84 != 2LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = INT16_MAX;
	uint32_t x378 = UINT32_MAX;
	uint32_t x379 = 111459688U;
	static int32_t t85 = -4334657;

	t85 = (((x377&x378)<x379)-x380);

	if (t85 != -2147483646) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x382 = UINT16_MAX;
	int64_t x383 = 343725176965092073LL;
	int16_t x384 = -1537;
	static volatile int32_t t86 = -2917855;

	t86 = (((x381&x382)<x383)-x384);

	if (t86 != 1538) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x385 = 31005741424LLU;
	volatile int8_t x386 = INT8_MIN;
	volatile int16_t x388 = -1;
	volatile int32_t t87 = -43950701;

	t87 = (((x385&x386)<x387)-x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x389 = UINT32_MAX;
	int64_t x390 = INT64_MAX;
	int8_t x391 = INT8_MAX;
	int16_t x392 = INT16_MAX;

	t88 = (((x389&x390)<x391)-x392);

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MIN;
	int8_t x395 = -1;
	uint8_t x396 = 43U;
	int32_t t89 = 89427;

	t89 = (((x393&x394)<x395)-x396);

	if (t89 != -42) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x397 = 5;
	int8_t x400 = -24;
	volatile int32_t t90 = 12;

	t90 = (((x397&x398)<x399)-x400);

	if (t90 != 25) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x402 = -1;
	static volatile uint8_t x403 = 55U;
	int16_t x404 = -26;
	volatile int32_t t91 = -12230;

	t91 = (((x401&x402)<x403)-x404);

	if (t91 != 27) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = 2522;
	int16_t x406 = INT16_MIN;
	int64_t x407 = 7740LL;
	int8_t x408 = -1;

	t92 = (((x405&x406)<x407)-x408);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x410 = 0U;
	static uint32_t x411 = 423U;
	uint32_t x412 = 49U;
	volatile uint32_t t93 = 15U;

	t93 = (((x409&x410)<x411)-x412);

	if (t93 != 4294967248U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x415 = -1021276LL;
	volatile uint32_t x416 = 33493966U;
	static uint32_t t94 = 13U;

	t94 = (((x413&x414)<x415)-x416);

	if (t94 != 4261473330U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x417 = INT16_MIN;
	volatile uint64_t x419 = UINT64_MAX;
	static uint64_t x420 = 7860967489778026LLU;

	t95 = (((x417&x418)<x419)-x420);

	if (t95 != 18438883106219773591LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = -7715;
	volatile uint8_t x422 = UINT8_MAX;
	uint8_t x423 = 114U;
	uint16_t x424 = UINT16_MAX;
	int32_t t96 = -372;

	t96 = (((x421&x422)<x423)-x424);

	if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = 176U;
	int64_t x430 = INT64_MIN;
	int16_t x432 = 190;
	int32_t t97 = -5366102;

	t97 = (((x429&x430)<x431)-x432);

	if (t97 != -190) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x433 = INT64_MAX;
	int16_t x434 = -10;
	static uint64_t t98 = 11247548085444LLU;

	t98 = (((x433&x434)<x435)-x436);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x441 = 0U;
	uint64_t x442 = 6607577318126623083LLU;
	volatile int32_t x443 = INT32_MAX;
	int16_t x444 = -1;
	int32_t t99 = -25404;

	t99 = (((x441&x442)<x443)-x444);

	if (t99 != 2) { NG(); } else { ; }
	
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

