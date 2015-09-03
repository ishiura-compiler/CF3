#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 0U;
uint64_t x6 = UINT64_MAX;
int32_t x7 = INT32_MIN;
volatile uint64_t t1 = 523329516145024LLU;
int32_t x10 = -79201429;
int16_t x18 = INT16_MIN;
uint64_t x27 = 60216739LLU;
volatile int8_t x39 = INT8_MAX;
uint8_t x40 = 0U;
int32_t x41 = -65461015;
volatile uint64_t x42 = 816LLU;
volatile int32_t t11 = 3688;
static uint16_t x52 = 36U;
int8_t x60 = -16;
static volatile int16_t x63 = -15274;
volatile uint64_t t14 = 359LLU;
static uint16_t x66 = 202U;
volatile uint16_t x71 = 3223U;
int64_t x72 = INT64_MAX;
volatile uint64_t t17 = 5LLU;
static int32_t x84 = INT32_MIN;
int16_t x85 = INT16_MIN;
static int16_t x91 = INT16_MIN;
int16_t x92 = -218;
volatile int8_t x99 = INT8_MIN;
uint16_t x100 = 16302U;
static int16_t x101 = -10153;
uint8_t x111 = 7U;
uint32_t x118 = 2603U;
int8_t x120 = -1;
volatile uint64_t t28 = 1LLU;
int16_t x133 = -1;
volatile int64_t t30 = 9022051LL;
static int64_t t31 = 1748501345174919LL;
uint32_t x145 = 1U;
uint16_t x148 = 2U;
uint64_t x152 = 929515113274LLU;
static int32_t x154 = INT32_MIN;
int32_t t35 = 45543;
static uint32_t x157 = 3U;
int16_t x161 = 219;
volatile uint16_t x164 = 99U;
uint32_t x165 = 20146U;
static int32_t x167 = -1;
uint8_t x172 = UINT8_MAX;
volatile uint16_t x176 = 24677U;
int8_t x177 = 0;
volatile uint64_t t41 = 8739524330450LLU;
static int64_t t42 = -112630664672271LL;
int16_t x185 = INT16_MAX;
volatile int8_t x197 = 3;
int8_t x207 = -1;
int16_t x210 = INT16_MIN;
int64_t t49 = -8506LL;
int32_t x215 = -132117;
int64_t t50 = -116026LL;
int8_t x218 = -1;
int8_t x225 = 0;
int8_t x233 = INT8_MIN;
static int16_t x236 = -102;
static int8_t x242 = -1;
volatile int32_t t57 = 263468353;
int16_t x245 = INT16_MIN;
volatile int32_t x246 = INT32_MIN;
int32_t t58 = 954;
int64_t x250 = INT64_MIN;
int16_t x268 = INT16_MAX;
int64_t t63 = -106765LL;
static int16_t x271 = INT16_MIN;
uint8_t x281 = 2U;
uint16_t x283 = UINT16_MAX;
static int32_t x286 = INT32_MIN;
static uint8_t x290 = 4U;
int8_t x291 = -25;
uint32_t x292 = 36399U;
uint32_t x294 = UINT32_MAX;
int64_t x296 = INT64_MIN;
int64_t x297 = 2117908679574LL;
volatile int16_t x299 = INT16_MAX;
int16_t x302 = INT16_MIN;
uint8_t x306 = UINT8_MAX;
int32_t x307 = INT32_MIN;
static int32_t x314 = INT32_MIN;
static uint32_t x315 = UINT32_MAX;
int16_t x319 = 53;
uint8_t x324 = 7U;
volatile int16_t x325 = INT16_MAX;
int64_t x327 = 13LL;
int32_t x328 = INT32_MAX;
int16_t x335 = 131;
static int64_t t81 = -26566551LL;
int32_t x342 = INT32_MIN;
uint64_t x351 = 7401008230800464913LLU;
int64_t t85 = -32151LL;
volatile int16_t x357 = INT16_MIN;
uint64_t x360 = UINT64_MAX;
static uint32_t x364 = 2169268U;
volatile uint64_t t87 = 38474744LLU;
int8_t x369 = INT8_MAX;
int8_t x370 = INT8_MAX;
volatile int32_t x371 = -1;
uint8_t x373 = 117U;
static int8_t x388 = -1;
uint16_t x389 = UINT16_MAX;
static int16_t x394 = INT16_MIN;
static int8_t x400 = -5;
int32_t x413 = INT32_MAX;
volatile uint16_t x419 = 1U;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint8_t x2 = 112U;
	uint64_t x3 = UINT64_MAX;
	static volatile uint64_t t0 = 2799326967542584LLU;

	t0 = ((x1/x2)&(x3^x4));

	if (t0 != 18364392537666205404LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 524772875560169LLU;
	int16_t x8 = -3;

	t1 = ((x5/x6)&(x7^x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 476;
	volatile uint32_t x11 = UINT32_MAX;
	volatile int16_t x12 = 26;
	uint32_t t2 = 28145U;

	t2 = ((x9/x10)&(x11^x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int8_t x14 = -1;
	static uint64_t x15 = 112251210417LLU;
	uint8_t x16 = 63U;
	uint64_t t3 = 5915419LLU;

	t3 = ((x13/x14)&(x15^x16));

	if (t3 != 32768LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int64_t x19 = 14366LL;
	static uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = 0LL;

	t4 = ((x17/x18)&(x19^x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int32_t x22 = -1;
	static volatile int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MIN;
	volatile int64_t t5 = -3705939784293414LL;

	t5 = ((x21/x22)&(x23^x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = UINT64_MAX;
	int8_t x26 = -1;
	int32_t x28 = 32708674;
	static volatile uint64_t t6 = 5321188173419634674LLU;

	t6 = ((x25/x26)&(x27^x28));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -24;
	volatile uint32_t x30 = 359U;
	static volatile uint8_t x31 = 7U;
	static uint64_t x32 = 788763540LLU;
	volatile uint64_t t7 = 1583484470234389LLU;

	t7 = ((x29/x30)&(x31^x32));

	if (t7 != 164113LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 2139069637U;
	int64_t x34 = -1LL;
	int16_t x35 = INT16_MAX;
	uint8_t x36 = 0U;
	int64_t t8 = -1784142LL;

	t8 = ((x33/x34)&(x35^x36));

	if (t8 != 25403LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	volatile int16_t x38 = 13;
	volatile int64_t t9 = -3018832921114582450LL;

	t9 = ((x37/x38)&(x39^x40));

	if (t9 != 88LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x43 = 4244;
	uint64_t x44 = 100167218774625379LLU;
	uint64_t t10 = 106796158002LLU;

	t10 = ((x41/x42)&(x43^x44));

	if (t10 != 18102359439906034LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 14588U;
	int32_t x46 = INT32_MIN;
	int32_t x47 = -849140;
	volatile int8_t x48 = -5;

	t11 = ((x45/x46)&(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int16_t x50 = -1;
	int16_t x51 = INT16_MAX;
	int64_t t12 = 3270961LL;

	t12 = ((x49/x50)&(x51^x52));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	uint16_t x58 = 16107U;
	uint8_t x59 = 118U;
	static volatile int64_t t13 = -139359LL;

	t13 = ((x57/x58)&(x59^x60));

	if (t13 != -572631280614396LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MAX;
	volatile uint64_t x62 = UINT64_MAX;
	volatile uint64_t x64 = 214LLU;

	t14 = ((x61/x62)&(x63^x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -9235107;
	uint32_t x67 = UINT32_MAX;
	static uint8_t x68 = UINT8_MAX;
	static volatile uint32_t t15 = 83423518U;

	t15 = ((x65/x66)&(x67^x68));

	if (t15 != 4294921472U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	int64_t x70 = INT64_MIN;
	int64_t t16 = 1231591LL;

	t16 = ((x69/x70)&(x71^x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x77 = 3222710371897LLU;
	uint32_t x78 = UINT32_MAX;
	volatile uint16_t x79 = 8U;
	static int16_t x80 = 17;

	t17 = ((x77/x78)&(x79^x80));

	if (t17 != 8LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -14;
	int16_t x82 = 10;
	int32_t x83 = -1;
	int32_t t18 = INT32_MAX;

	t18 = ((x81/x82)&(x83^x84));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x86 = -1;
	int16_t x87 = INT16_MIN;
	int64_t x88 = 482580695072187LL;
	int64_t t19 = -15037638640807LL;

	t19 = ((x85/x86)&(x87^x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = INT64_MIN;
	volatile int8_t x90 = 1;
	static int64_t t20 = -770421938458745375LL;

	t20 = ((x89/x90)&(x91^x92));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 1;
	uint32_t x98 = 13252203U;
	static uint32_t t21 = 28123648U;

	t21 = ((x97/x98)&(x99^x100));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MIN;
	volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t22 = 160;

	t22 = ((x101/x102)&(x103^x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -39;
	static int32_t x106 = -659324;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t23 = -2799984;

	t23 = ((x105/x106)&(x107^x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x109 = UINT8_MAX;
	volatile int8_t x110 = -6;
	uint32_t x112 = 8482U;
	static uint32_t t24 = 1U;

	t24 = ((x109/x110)&(x111^x112));

	if (t24 != 8452U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x113 = -234;
	static volatile int8_t x114 = 19;
	static int64_t x115 = INT64_MAX;
	int32_t x116 = INT32_MAX;
	volatile int64_t t25 = 897630551342LL;

	t25 = ((x113/x114)&(x115^x116));

	if (t25 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MAX;
	static int16_t x119 = 2056;
	volatile uint32_t t26 = 2626U;

	t26 = ((x117/x118)&(x119^x120));

	if (t26 != 4U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	volatile int32_t x122 = 54;
	int32_t x123 = INT32_MIN;
	static int16_t x124 = 15266;
	int64_t t27 = -8037724846231492LL;

	t27 = ((x121/x122)&(x123^x124));

	if (t27 != -170803187140259166LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 2472314867831LLU;
	volatile int32_t x126 = -1;
	static volatile uint64_t x127 = 1179315LLU;
	static int64_t x128 = INT64_MAX;

	t28 = ((x125/x126)&(x127^x128));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x129 = INT16_MAX;
	static uint32_t x130 = 1298141U;
	volatile int8_t x131 = -1;
	int16_t x132 = INT16_MIN;
	uint32_t t29 = 6892141U;

	t29 = ((x129/x130)&(x131^x132));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x134 = -1LL;
	uint8_t x135 = 116U;
	static int8_t x136 = INT8_MIN;

	t30 = ((x133/x134)&(x135^x136));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = UINT16_MAX;
	int64_t x138 = -1LL;
	int8_t x139 = INT8_MIN;
	int64_t x140 = -32429057119LL;

	t31 = ((x137/x138)&(x139^x140));

	if (t31 != 32429047809LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 0U;
	int8_t x142 = -1;
	int64_t x143 = INT64_MIN;
	uint64_t x144 = 358507963228074939LLU;
	volatile uint64_t t32 = 65366334977LLU;

	t32 = ((x141/x142)&(x143^x144));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x146 = -22;
	static uint16_t x147 = 14549U;
	volatile uint32_t t33 = 253U;

	t33 = ((x145/x146)&(x147^x148));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = INT8_MAX;
	int32_t x150 = INT32_MIN;
	static int16_t x151 = INT16_MIN;
	uint64_t t34 = 7304LLU;

	t34 = ((x149/x150)&(x151^x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x153 = INT32_MIN;
	int8_t x155 = -1;
	volatile uint16_t x156 = 0U;

	t35 = ((x153/x154)&(x155^x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x158 = 27;
	int16_t x159 = INT16_MIN;
	int64_t x160 = INT64_MIN;
	volatile int64_t t36 = 990034806596LL;

	t36 = ((x157/x158)&(x159^x160));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x162 = 2420U;
	volatile uint32_t x163 = UINT32_MAX;
	uint32_t t37 = 3U;

	t37 = ((x161/x162)&(x163^x164));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x166 = INT64_MIN;
	volatile int8_t x168 = 1;
	int64_t t38 = -306724911520627557LL;

	t38 = ((x165/x166)&(x167^x168));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MAX;
	int8_t x171 = 22;
	volatile int64_t t39 = 9LL;

	t39 = ((x169/x170)&(x171^x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x173 = -38;
	uint8_t x174 = 11U;
	uint64_t x175 = 4915764726LLU;
	volatile uint64_t t40 = 1030209191319231419LLU;

	t40 = ((x173/x174)&(x175^x176));

	if (t40 != 4915789201LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = 5814;
	static volatile uint64_t x179 = UINT64_MAX;
	uint32_t x180 = 45645865U;

	t41 = ((x177/x178)&(x179^x180));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = INT16_MAX;
	uint8_t x182 = UINT8_MAX;
	volatile int8_t x183 = 55;
	int64_t x184 = INT64_MAX;

	t42 = ((x181/x182)&(x183^x184));

	if (t42 != 128LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x186 = 4U;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = 1;
	int32_t t43 = 1066200;

	t43 = ((x185/x186)&(x187^x188));

	if (t43 != 8190) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	static uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MAX;
	uint8_t x192 = 11U;
	int32_t t44 = 170849;

	t44 = ((x189/x190)&(x191^x192));

	if (t44 != 32640) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x193 = UINT16_MAX;
	uint32_t x194 = 82U;
	volatile int32_t x195 = INT32_MIN;
	static int64_t x196 = -254652658LL;
	int64_t t45 = 141067153205963LL;

	t45 = ((x193/x194)&(x195^x196));

	if (t45 != 782LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x198 = -1;
	volatile uint16_t x199 = 14U;
	volatile uint16_t x200 = 13490U;
	int32_t t46 = 1049643613;

	t46 = ((x197/x198)&(x199^x200));

	if (t46 != 13500) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = 1U;
	int64_t x204 = -1LL;
	int64_t t47 = 156110856365612511LL;

	t47 = ((x201/x202)&(x203^x204));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 3276583U;
	volatile uint8_t x206 = 57U;
	uint64_t x208 = 3935956603113153650LLU;
	uint64_t t48 = 35110126945115294LLU;

	t48 = ((x205/x206)&(x207^x208));

	if (t48 != 16521LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x209 = -1;
	static uint8_t x211 = UINT8_MAX;
	int64_t x212 = INT64_MAX;

	t49 = ((x209/x210)&(x211^x212));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x213 = -1LL;
	int64_t x214 = INT64_MIN;
	volatile int16_t x216 = INT16_MAX;

	t50 = ((x213/x214)&(x215^x216));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 3461U;
	int8_t x219 = 1;
	static int32_t x220 = INT32_MAX;
	static volatile int32_t t51 = 4011672;

	t51 = ((x217/x218)&(x219^x220));

	if (t51 != 2147480186) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = 70;
	int16_t x223 = -10;
	int32_t x224 = INT32_MIN;
	volatile int32_t t52 = -7779477;

	t52 = ((x221/x222)&(x223^x224));

	if (t52 != 2147483638) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = INT32_MIN;
	static int64_t x227 = -130266LL;
	uint8_t x228 = 1U;
	static volatile int64_t t53 = -50LL;

	t53 = ((x225/x226)&(x227^x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 1U;
	int8_t x230 = INT8_MIN;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	int64_t t54 = 165089975133081LL;

	t54 = ((x229/x230)&(x231^x232));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x234 = -6;
	static int16_t x235 = 1046;
	volatile int32_t t55 = -2;

	t55 = ((x233/x234)&(x235^x236));

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = INT16_MIN;
	volatile int8_t x238 = -1;
	uint64_t x239 = 2634702271936876LLU;
	volatile int64_t x240 = 58727460LL;
	volatile uint64_t t56 = 197277730LLU;

	t56 = ((x237/x238)&(x239^x240));

	if (t56 != 32768LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	volatile int8_t x244 = -1;

	t57 = ((x241/x242)&(x243^x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x247 = 1325U;
	uint16_t x248 = 371U;

	t58 = ((x245/x246)&(x247^x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = 3070;
	uint32_t x251 = 1U;
	int8_t x252 = 0;
	int64_t t59 = 5280LL;

	t59 = ((x249/x250)&(x251^x252));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x253 = -42312021;
	volatile int8_t x254 = 1;
	static volatile int8_t x255 = 2;
	int16_t x256 = INT16_MIN;
	int32_t t60 = 1;

	t60 = ((x253/x254)&(x255^x256));

	if (t60 != -42336254) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = INT8_MAX;
	volatile int32_t x258 = -13397;
	int32_t x259 = -130;
	static int32_t x260 = -1;
	int32_t t61 = 123419352;

	t61 = ((x257/x258)&(x259^x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x261 = 7924;
	uint32_t x262 = 5U;
	static int32_t x263 = INT32_MIN;
	static int16_t x264 = INT16_MIN;
	uint32_t t62 = 8U;

	t62 = ((x261/x262)&(x263^x264));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = 15723U;
	static volatile int32_t x266 = -1;
	int64_t x267 = -1LL;

	t63 = ((x265/x266)&(x267^x268));

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = 31579544831270LLU;
	int64_t x270 = INT64_MIN;
	int16_t x272 = INT16_MIN;
	volatile uint64_t t64 = 15658748LLU;

	t64 = ((x269/x270)&(x271^x272));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = UINT8_MAX;
	static volatile int64_t x274 = -44515810139665LL;
	uint64_t x275 = 961009149480LLU;
	int64_t x276 = 1300984016062734LL;
	static uint64_t t65 = 2LLU;

	t65 = ((x273/x274)&(x275^x276));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x277 = 46027;
	int32_t x278 = INT32_MAX;
	uint8_t x279 = UINT8_MAX;
	volatile int32_t x280 = -308161;
	int32_t t66 = 425;

	t66 = ((x277/x278)&(x279^x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x282 = INT16_MIN;
	uint8_t x284 = 91U;
	static volatile int32_t t67 = 4349;

	t67 = ((x281/x282)&(x283^x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x285 = INT32_MAX;
	uint64_t x287 = 1285463425132LLU;
	int32_t x288 = INT32_MAX;
	uint64_t t68 = 116255LLU;

	t68 = ((x285/x286)&(x287^x288));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = 0LLU;
	uint64_t t69 = 772871326LLU;

	t69 = ((x289/x290)&(x291^x292));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = -1;
	uint16_t x295 = UINT16_MAX;
	volatile int64_t t70 = -624058LL;

	t70 = ((x293/x294)&(x295^x296));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x298 = -18;
	static int8_t x300 = 15;
	static volatile int64_t t71 = -7775810851963LL;

	t71 = ((x297/x298)&(x299^x300));

	if (t71 != 4384LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x301 = 0;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = -98;
	int32_t t72 = -4727190;

	t72 = ((x301/x302)&(x303^x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = 18521LLU;
	int16_t x308 = INT16_MIN;
	uint64_t t73 = 1321LLU;

	t73 = ((x305/x306)&(x307^x308));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = INT16_MAX;
	static uint32_t x310 = 24478568U;
	uint8_t x311 = 27U;
	int64_t x312 = -358167495LL;
	static volatile int64_t t74 = -10917097996LL;

	t74 = ((x309/x310)&(x311^x312));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = INT64_MAX;
	static int16_t x316 = 1;
	volatile int64_t t75 = 103394LL;

	t75 = ((x313/x314)&(x315^x316));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x317 = INT32_MIN;
	int64_t x318 = -1LL;
	int32_t x320 = INT32_MIN;
	static int64_t t76 = 1497913886722317LL;

	t76 = ((x317/x318)&(x319^x320));

	if (t76 != 2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = 4U;
	int8_t x322 = 45;
	static int16_t x323 = -1489;
	volatile int32_t t77 = -2;

	t77 = ((x321/x322)&(x323^x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x326 = 3U;
	volatile int64_t t78 = -17614LL;

	t78 = ((x325/x326)&(x327^x328));

	if (t78 != 10914LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x329 = INT32_MAX;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = 530349U;
	int64_t x332 = -1LL;
	volatile int64_t t79 = -372370LL;

	t79 = ((x329/x330)&(x331^x332));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	int64_t x334 = INT64_MAX;
	int16_t x336 = -3116;
	volatile int64_t t80 = -990210LL;

	t80 = ((x333/x334)&(x335^x336));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = -1;
	volatile uint32_t x338 = 253071956U;
	static int64_t x339 = INT64_MAX;
	int64_t x340 = INT64_MAX;

	t81 = ((x337/x338)&(x339^x340));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x341 = 2U;
	int32_t x343 = -1;
	int8_t x344 = INT8_MIN;
	volatile int32_t t82 = 4;

	t82 = ((x341/x342)&(x343^x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = UINT64_MAX;
	uint32_t x346 = 24563473U;
	int32_t x347 = INT32_MIN;
	uint64_t x348 = 7986380907603600404LLU;
	volatile uint64_t t83 = 13254LLU;

	t83 = ((x345/x346)&(x347^x348));

	if (t83 != 689510809604LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = 41;
	int32_t x352 = 15314;
	static volatile uint64_t t84 = 9809485LLU;

	t84 = ((x349/x350)&(x351^x352));

	if (t84 != 7401008230800467137LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x353 = -1;
	int8_t x354 = -1;
	int64_t x355 = -1LL;
	uint32_t x356 = 3U;

	t85 = ((x353/x354)&(x355^x356));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = INT64_MAX;
	volatile uint64_t t86 = 3705285860181475219LLU;

	t86 = ((x357/x358)&(x359^x360));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x361 = 516135LLU;
	int64_t x362 = 3133452759879910625LL;
	uint32_t x363 = UINT32_MAX;

	t87 = ((x361/x362)&(x363^x364));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MIN;
	static int64_t x366 = -1LL;
	static uint32_t x367 = 7U;
	volatile uint64_t x368 = UINT64_MAX;
	uint64_t t88 = 231595211503993LLU;

	t88 = ((x365/x366)&(x367^x368));

	if (t88 != 32768LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x372 = -880LL;
	volatile int64_t t89 = 535973LL;

	t89 = ((x369/x370)&(x371^x372));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x374 = UINT64_MAX;
	uint32_t x375 = 0U;
	int16_t x376 = INT16_MIN;
	uint64_t t90 = 67156649984LLU;

	t90 = ((x373/x374)&(x375^x376));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x381 = INT8_MAX;
	uint16_t x382 = UINT16_MAX;
	uint8_t x383 = 15U;
	static uint16_t x384 = 3U;
	static volatile int32_t t91 = -2657821;

	t91 = ((x381/x382)&(x383^x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x386 = INT32_MIN;
	static int16_t x387 = -228;
	volatile int32_t t92 = -758519;

	t92 = ((x385/x386)&(x387^x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x390 = INT16_MAX;
	int64_t x391 = 658129904LL;
	int32_t x392 = 47865;
	volatile int64_t t93 = 14844422LL;

	t93 = ((x389/x390)&(x391^x392));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = INT8_MAX;
	uint8_t x395 = UINT8_MAX;
	static uint16_t x396 = UINT16_MAX;
	volatile int32_t t94 = 66521527;

	t94 = ((x393/x394)&(x395^x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x397 = 85U;
	int64_t x398 = INT64_MIN;
	static uint64_t x399 = UINT64_MAX;
	uint64_t t95 = 263546645786LLU;

	t95 = ((x397/x398)&(x399^x400));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = INT32_MIN;
	int8_t x406 = INT8_MIN;
	int16_t x407 = INT16_MAX;
	uint32_t x408 = 3387274U;
	static volatile uint32_t t96 = 506553353U;

	t96 = ((x405/x406)&(x407^x408));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x409 = UINT16_MAX;
	int16_t x410 = -124;
	uint32_t x411 = 603219813U;
	int8_t x412 = -1;
	volatile uint32_t t97 = 603665U;

	t97 = ((x409/x410)&(x411^x412));

	if (t97 != 3691747472U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x414 = UINT8_MAX;
	uint8_t x415 = UINT8_MAX;
	uint32_t x416 = 52442533U;
	static uint32_t t98 = 148957669U;

	t98 = ((x413/x414)&(x415^x416));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = 0;
	int32_t x418 = -1;
	int8_t x420 = INT8_MAX;
	static volatile int32_t t99 = 2565;

	t99 = ((x417/x418)&(x419^x420));

	if (t99 != 0) { NG(); } else { ; }
	
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

