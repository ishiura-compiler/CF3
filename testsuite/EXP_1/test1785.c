#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 636745066;
volatile int8_t x11 = -1;
uint32_t t1 = 53675214U;
static volatile int16_t x14 = -35;
uint16_t x15 = 7U;
int64_t x17 = -14LL;
int32_t x26 = 279;
uint16_t x27 = 20U;
uint8_t x47 = UINT8_MAX;
int8_t x51 = INT8_MIN;
int16_t x63 = INT16_MAX;
static volatile int64_t t14 = 4364982440178764LL;
int8_t x68 = INT8_MIN;
static volatile int32_t t15 = -481;
static int8_t x71 = -1;
volatile uint64_t x72 = 266249500396696554LLU;
uint8_t x74 = UINT8_MAX;
static uint16_t x78 = UINT16_MAX;
uint16_t x80 = 1U;
int32_t x81 = INT32_MIN;
static uint64_t x82 = 13375654663620LLU;
static int32_t t21 = -151;
static int8_t x96 = INT8_MAX;
volatile int32_t t24 = -1716;
uint32_t x107 = UINT32_MAX;
uint16_t x109 = 7789U;
volatile int64_t t28 = 51167755022LL;
int64_t x124 = INT64_MIN;
static volatile int64_t t29 = 34768967249LL;
uint32_t x126 = 110411U;
volatile uint64_t t31 = 6884163813544LLU;
volatile int16_t x136 = INT16_MIN;
int8_t x138 = INT8_MIN;
volatile uint32_t t33 = 12841164U;
static uint32_t x150 = UINT32_MAX;
static int16_t x156 = 1;
int32_t t36 = 113811;
int64_t x158 = INT64_MIN;
volatile uint16_t x163 = UINT16_MAX;
int32_t t38 = -490060;
int8_t x170 = INT8_MIN;
uint64_t x171 = UINT64_MAX;
static volatile uint32_t t40 = 3041907U;
static int16_t x176 = INT16_MIN;
int32_t t41 = 3883;
int32_t x177 = INT32_MIN;
volatile int32_t t42 = -46937;
static int32_t t44 = 784264;
uint16_t x193 = UINT16_MAX;
uint64_t x199 = 247373700LLU;
volatile int32_t t46 = -2;
uint8_t x201 = UINT8_MAX;
uint32_t x207 = 64119571U;
static volatile uint32_t x208 = UINT32_MAX;
uint16_t x217 = 1859U;
int8_t x219 = 0;
uint16_t x231 = UINT16_MAX;
int32_t x235 = -3;
volatile int64_t t54 = 6973380540939LL;
uint8_t x242 = UINT8_MAX;
int32_t x244 = -1;
static int16_t x245 = -955;
static volatile int16_t x246 = -1;
static volatile uint16_t x256 = 320U;
int8_t x261 = INT8_MIN;
int64_t x262 = 8361017007070435LL;
int8_t x266 = 7;
int64_t x268 = INT64_MIN;
uint32_t x278 = UINT32_MAX;
int32_t x282 = INT32_MIN;
int16_t x284 = -3;
volatile int8_t x291 = INT8_MIN;
uint64_t x294 = 7981960585719LLU;
volatile int32_t x295 = INT32_MIN;
uint16_t x296 = UINT16_MAX;
int8_t x299 = INT8_MAX;
static volatile uint32_t x303 = 3U;
volatile int8_t x307 = INT8_MIN;
int8_t x309 = -38;
volatile int32_t t74 = 32343070;
int16_t x317 = INT16_MAX;
static int8_t x325 = -1;
uint8_t x328 = 2U;
int32_t t79 = 209675;
static volatile int32_t t80 = -79199109;
int32_t x347 = 779589;
int8_t x350 = INT8_MAX;
int16_t x357 = INT16_MIN;
volatile int32_t t86 = 2659;
static int16_t x369 = INT16_MAX;
int64_t x372 = INT64_MIN;
int16_t x380 = INT16_MIN;
int64_t x383 = INT64_MAX;
int16_t x385 = INT16_MAX;
uint32_t x392 = UINT32_MAX;
uint32_t t93 = 4933U;
int8_t x397 = INT8_MAX;
int16_t x403 = INT16_MAX;
static int32_t t96 = 8;
volatile int8_t x405 = INT8_MIN;
int64_t x407 = -1LL;
static int64_t x410 = -518LL;
uint32_t x412 = 16U;


void f0(void) {
	static int8_t x1 = -1;
	uint8_t x3 = 1U;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 3653U;

	t0 = (((x1&x2)==x3)/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = -503;
	int64_t x10 = -71281495582247202LL;
	uint32_t x12 = UINT32_MAX;

	t1 = (((x9&x10)==x11)/x12);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = -1;
	volatile uint16_t x16 = 1894U;
	static int32_t t2 = -758107;

	t2 = (((x13&x14)==x15)/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = -17;
	int64_t x19 = -1LL;
	int32_t x20 = INT32_MIN;
	int32_t t3 = -8792180;

	t3 = (((x17&x18)==x19)/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = 25;
	volatile uint8_t x22 = UINT8_MAX;
	static uint64_t x23 = 127LLU;
	int64_t x24 = -75058LL;
	static int64_t t4 = 45309852490436LL;

	t4 = (((x21&x22)==x23)/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = 298;
	int64_t x28 = -70723317683005287LL;
	int64_t t5 = -64647LL;

	t5 = (((x25&x26)==x27)/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = 7U;
	uint16_t x30 = 203U;
	int16_t x31 = -1;
	int16_t x32 = -1;
	int32_t t6 = 56509;

	t6 = (((x29&x30)==x31)/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MAX;
	uint32_t x34 = 703216U;
	static int16_t x35 = INT16_MIN;
	uint32_t x36 = 2312575U;
	volatile uint32_t t7 = 15633U;

	t7 = (((x33&x34)==x35)/x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 31610U;
	int8_t x38 = 1;
	uint32_t x39 = 2100730U;
	static uint32_t x40 = UINT32_MAX;
	uint32_t t8 = 3351U;

	t8 = (((x37&x38)==x39)/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = INT32_MIN;
	static uint16_t x42 = 16U;
	uint64_t x43 = 3361072106014890175LLU;
	uint16_t x44 = 14U;
	int32_t t9 = 1361737;

	t9 = (((x41&x42)==x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	volatile uint32_t x46 = UINT32_MAX;
	int16_t x48 = 4;
	static int32_t t10 = 0;

	t10 = (((x45&x46)==x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = -1448;
	int32_t x50 = INT32_MIN;
	uint64_t x52 = 97LLU;
	uint64_t t11 = 65131028618147LLU;

	t11 = (((x49&x50)==x51)/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	int64_t x54 = 125082LL;
	static uint16_t x55 = 368U;
	static int16_t x56 = INT16_MIN;
	static volatile int32_t t12 = -1;

	t12 = (((x53&x54)==x55)/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MAX;
	int64_t x58 = -1LL;
	uint8_t x59 = UINT8_MAX;
	volatile int32_t x60 = 658795601;
	static volatile int32_t t13 = 180;

	t13 = (((x57&x58)==x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x61 = -124812203846LL;
	uint32_t x62 = 1209U;
	volatile int64_t x64 = INT64_MIN;

	t14 = (((x61&x62)==x63)/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x65 = -1;
	uint32_t x66 = 20649U;
	int8_t x67 = INT8_MIN;

	t15 = (((x65&x66)==x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 498090304U;
	volatile uint32_t x70 = 10U;
	uint64_t t16 = 110232439767LLU;

	t16 = (((x69&x70)==x71)/x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = 7U;
	int64_t x75 = 0LL;
	int64_t x76 = INT64_MIN;
	static int64_t t17 = 86LL;

	t17 = (((x73&x74)==x75)/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 0;
	uint16_t x79 = 0U;
	volatile int32_t t18 = -1380110;

	t18 = (((x77&x78)==x79)/x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x83 = INT8_MIN;
	volatile uint8_t x84 = 5U;
	volatile int32_t t19 = 23;

	t19 = (((x81&x82)==x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -12276396;
	volatile int32_t x86 = -1339592;
	uint64_t x87 = 47633760900251688LLU;
	volatile uint32_t x88 = 1853349684U;
	static uint32_t t20 = 1899252U;

	t20 = (((x85&x86)==x87)/x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 76;
	uint8_t x90 = UINT8_MAX;
	volatile int16_t x91 = INT16_MIN;
	int8_t x92 = -1;

	t21 = (((x89&x90)==x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 794273285734LLU;
	volatile int8_t x94 = INT8_MIN;
	int32_t x95 = 0;
	static volatile int32_t t22 = -27267239;

	t22 = (((x93&x94)==x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MIN;
	uint64_t x98 = 841542LLU;
	volatile int64_t x99 = INT64_MAX;
	volatile uint32_t x100 = 3961464U;
	volatile uint32_t t23 = 22777221U;

	t23 = (((x97&x98)==x99)/x100);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 124U;
	int64_t x102 = -298459LL;
	static uint8_t x103 = 5U;
	static int16_t x104 = INT16_MAX;

	t24 = (((x101&x102)==x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 16041948411998819LLU;
	uint64_t x106 = 33423870359LLU;
	int32_t x108 = INT32_MAX;
	static int32_t t25 = -266;

	t25 = (((x105&x106)==x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = 0;
	volatile int64_t x111 = 245968711432591LL;
	uint32_t x112 = 3577237U;
	uint32_t t26 = 0U;

	t26 = (((x109&x110)==x111)/x112);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 508391U;
	volatile int8_t x114 = 7;
	int8_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t27 = -185314089;

	t27 = (((x113&x114)==x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -642507477;
	int8_t x118 = INT8_MIN;
	int8_t x119 = -1;
	int64_t x120 = -1LL;

	t28 = (((x117&x118)==x119)/x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MAX;
	static int8_t x122 = INT8_MAX;
	int32_t x123 = INT32_MIN;

	t29 = (((x121&x122)==x123)/x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile int16_t x127 = INT16_MIN;
	uint8_t x128 = UINT8_MAX;
	int32_t t30 = 94852865;

	t30 = (((x125&x126)==x127)/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = 5;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 611047173U;
	uint64_t x132 = 97260489LLU;

	t31 = (((x129&x130)==x131)/x132);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = -1;
	int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MAX;
	int32_t t32 = 17;

	t32 = (((x133&x134)==x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	volatile int64_t x139 = 6480355688LL;
	uint32_t x140 = UINT32_MAX;

	t33 = (((x137&x138)==x139)/x140);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x141 = 0U;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = 725053066456310LLU;
	volatile int64_t x144 = INT64_MAX;
	int64_t t34 = -30441689516847LL;

	t34 = (((x141&x142)==x143)/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x149 = INT8_MIN;
	int32_t x151 = 15;
	uint32_t x152 = 708937U;
	uint32_t t35 = 15035U;

	t35 = (((x149&x150)==x151)/x152);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 21U;
	int16_t x154 = INT16_MIN;
	volatile uint8_t x155 = UINT8_MAX;

	t36 = (((x153&x154)==x155)/x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -3631;
	int8_t x159 = INT8_MIN;
	static uint8_t x160 = 16U;
	int32_t t37 = -39;

	t37 = (((x157&x158)==x159)/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 1U;
	volatile uint64_t x162 = UINT64_MAX;
	int32_t x164 = 603829;

	t38 = (((x161&x162)==x163)/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = 2;
	volatile int64_t x166 = INT64_MIN;
	static int64_t x167 = -1LL;
	volatile uint64_t x168 = 5538486892LLU;
	static uint64_t t39 = 166LLU;

	t39 = (((x165&x166)==x167)/x168);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x169 = -1379;
	uint32_t x172 = 44953U;

	t40 = (((x169&x170)==x171)/x172);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	volatile uint64_t x174 = UINT64_MAX;
	uint64_t x175 = UINT64_MAX;

	t41 = (((x173&x174)==x175)/x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x178 = INT64_MIN;
	uint32_t x179 = UINT32_MAX;
	static uint8_t x180 = 9U;

	t42 = (((x177&x178)==x179)/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -1LL;
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = INT16_MIN;
	int64_t x188 = INT64_MIN;
	static volatile int64_t t43 = 40169156183003LL;

	t43 = (((x185&x186)==x187)/x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int64_t x190 = INT64_MAX;
	volatile int16_t x191 = INT16_MIN;
	static int16_t x192 = -1;

	t44 = (((x189&x190)==x191)/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x194 = 5U;
	static volatile int8_t x195 = 5;
	static volatile int16_t x196 = INT16_MIN;
	static volatile int32_t t45 = 9110;

	t45 = (((x193&x194)==x195)/x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = UINT8_MAX;
	uint32_t x198 = UINT32_MAX;
	int16_t x200 = INT16_MIN;

	t46 = (((x197&x198)==x199)/x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MAX;
	static int16_t x204 = -1;
	volatile int32_t t47 = -1280337;

	t47 = (((x201&x202)==x203)/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 0U;
	uint8_t x206 = 23U;
	uint32_t t48 = 66516591U;

	t48 = (((x205&x206)==x207)/x208);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x209 = -1LL;
	uint8_t x210 = UINT8_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	volatile int16_t x212 = INT16_MIN;
	int32_t t49 = 30287;

	t49 = (((x209&x210)==x211)/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MIN;
	volatile int8_t x214 = INT8_MAX;
	int16_t x215 = -1;
	int32_t x216 = -1208941;
	int32_t t50 = 12949202;

	t50 = (((x213&x214)==x215)/x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x218 = INT8_MAX;
	static int8_t x220 = INT8_MAX;
	int32_t t51 = 1073893;

	t51 = (((x217&x218)==x219)/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = -1LL;
	static int16_t x223 = INT16_MAX;
	int16_t x224 = INT16_MAX;
	volatile int32_t t52 = -2506;

	t52 = (((x221&x222)==x223)/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 426U;
	int16_t x230 = INT16_MAX;
	int8_t x232 = -1;
	volatile int32_t t53 = -6791876;

	t53 = (((x229&x230)==x231)/x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -122690680LL;
	static volatile int32_t x234 = -752;
	static int64_t x236 = -1LL;

	t54 = (((x233&x234)==x235)/x236);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = INT8_MIN;
	static volatile int8_t x239 = INT8_MAX;
	uint64_t x240 = 121348883541LLU;
	volatile uint64_t t55 = 5752967707LLU;

	t55 = (((x237&x238)==x239)/x240);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x241 = 13;
	static volatile uint16_t x243 = 2882U;
	static int32_t t56 = 284218720;

	t56 = (((x241&x242)==x243)/x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x247 = -10646298LL;
	volatile uint8_t x248 = 6U;
	static int32_t t57 = 48222576;

	t57 = (((x245&x246)==x247)/x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x249 = -1;
	volatile uint16_t x250 = 8785U;
	int16_t x251 = -9156;
	int16_t x252 = INT16_MIN;
	int32_t t58 = -1787734;

	t58 = (((x249&x250)==x251)/x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MIN;
	static uint8_t x254 = 26U;
	uint32_t x255 = 53811786U;
	int32_t t59 = -16117789;

	t59 = (((x253&x254)==x255)/x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x257 = INT64_MIN;
	uint32_t x258 = 889U;
	int8_t x259 = 33;
	int32_t x260 = INT32_MAX;
	int32_t t60 = 545957;

	t60 = (((x257&x258)==x259)/x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x263 = 117;
	volatile int8_t x264 = INT8_MIN;
	int32_t t61 = 9028;

	t61 = (((x261&x262)==x263)/x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = UINT16_MAX;
	static int32_t x267 = INT32_MAX;
	int64_t t62 = -46677LL;

	t62 = (((x265&x266)==x267)/x268);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = 161990468509LL;
	int8_t x270 = 1;
	static int64_t x271 = INT64_MAX;
	int16_t x272 = -1;
	static volatile int32_t t63 = -39444531;

	t63 = (((x269&x270)==x271)/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x273 = INT64_MAX;
	volatile int16_t x274 = INT16_MIN;
	int8_t x275 = 1;
	int32_t x276 = INT32_MIN;
	volatile int32_t t64 = -772138;

	t64 = (((x273&x274)==x275)/x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = INT8_MIN;
	uint16_t x279 = 11U;
	uint32_t x280 = 86465U;
	uint32_t t65 = 1U;

	t65 = (((x277&x278)==x279)/x280);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = 1794920720U;
	int8_t x283 = INT8_MIN;
	static int32_t t66 = -429320;

	t66 = (((x281&x282)==x283)/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MAX;
	int32_t x288 = -6;
	static volatile int32_t t67 = -729621;

	t67 = (((x285&x286)==x287)/x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MAX;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t68 = -7178;

	t68 = (((x289&x290)==x291)/x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = 56390361LL;
	volatile int32_t t69 = 172;

	t69 = (((x293&x294)==x295)/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = INT64_MAX;
	int8_t x298 = INT8_MIN;
	int32_t x300 = -1052789758;
	int32_t t70 = 1;

	t70 = (((x297&x298)==x299)/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x301 = 0U;
	uint64_t x302 = UINT64_MAX;
	static uint32_t x304 = 57859U;
	volatile uint32_t t71 = 12607622U;

	t71 = (((x301&x302)==x303)/x304);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x305 = -1960;
	uint8_t x306 = 22U;
	uint16_t x308 = UINT16_MAX;
	static volatile int32_t t72 = 294355874;

	t72 = (((x305&x306)==x307)/x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = INT64_MIN;
	volatile int16_t x312 = 297;
	int32_t t73 = 323;

	t73 = (((x309&x310)==x311)/x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 7U;
	int16_t x314 = 1;
	int8_t x315 = 0;
	int32_t x316 = INT32_MIN;

	t74 = (((x313&x314)==x315)/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x318 = UINT64_MAX;
	int32_t x319 = INT32_MIN;
	volatile uint16_t x320 = 6258U;
	volatile int32_t t75 = -165;

	t75 = (((x317&x318)==x319)/x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = UINT32_MAX;
	int32_t x322 = INT32_MIN;
	static uint64_t x323 = 0LLU;
	int8_t x324 = INT8_MIN;
	int32_t t76 = -815154572;

	t76 = (((x321&x322)==x323)/x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x326 = UINT64_MAX;
	uint16_t x327 = 78U;
	static volatile int32_t t77 = -11;

	t77 = (((x325&x326)==x327)/x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = INT32_MAX;
	uint32_t x330 = UINT32_MAX;
	volatile int64_t x331 = -46422LL;
	int32_t x332 = INT32_MAX;
	int32_t t78 = 6;

	t78 = (((x329&x330)==x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MIN;
	volatile int8_t x334 = INT8_MAX;
	uint16_t x335 = 23392U;
	static int8_t x336 = -15;

	t79 = (((x333&x334)==x335)/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int8_t x338 = INT8_MAX;
	static int32_t x339 = -37312;
	int8_t x340 = INT8_MAX;

	t80 = (((x337&x338)==x339)/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MAX;
	uint8_t x342 = 59U;
	uint64_t x343 = 440LLU;
	uint8_t x344 = UINT8_MAX;
	int32_t t81 = 696;

	t81 = (((x341&x342)==x343)/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x345 = INT8_MAX;
	static int16_t x346 = INT16_MIN;
	int16_t x348 = INT16_MIN;
	int32_t t82 = 4;

	t82 = (((x345&x346)==x347)/x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x349 = -1;
	volatile int64_t x351 = INT64_MAX;
	int8_t x352 = -1;
	int32_t t83 = -72;

	t83 = (((x349&x350)==x351)/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x353 = -279530660;
	uint64_t x354 = 211785252LLU;
	int16_t x355 = -1;
	uint16_t x356 = 55U;
	volatile int32_t t84 = 24;

	t84 = (((x353&x354)==x355)/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x358 = INT64_MAX;
	int8_t x359 = -1;
	uint16_t x360 = 3U;
	int32_t t85 = 1;

	t85 = (((x357&x358)==x359)/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = 0;
	volatile int16_t x362 = INT16_MIN;
	uint32_t x363 = 3U;
	volatile int8_t x364 = 1;

	t86 = (((x361&x362)==x363)/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = -6507;
	volatile int16_t x366 = 818;
	uint32_t x367 = UINT32_MAX;
	volatile int64_t x368 = INT64_MIN;
	static volatile int64_t t87 = -58958858731902524LL;

	t87 = (((x365&x366)==x367)/x368);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x370 = -1;
	uint16_t x371 = 802U;
	volatile int64_t t88 = 112210491216112LL;

	t88 = (((x369&x370)==x371)/x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x374 = 6U;
	static volatile int64_t x375 = INT64_MIN;
	static volatile int16_t x376 = INT16_MAX;
	int32_t t89 = -2;

	t89 = (((x373&x374)==x375)/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x377 = 4147;
	uint16_t x378 = 84U;
	uint16_t x379 = 38U;
	volatile int32_t t90 = -14052;

	t90 = (((x377&x378)==x379)/x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = 5519U;
	uint16_t x382 = UINT16_MAX;
	int8_t x384 = 3;
	int32_t t91 = -490493;

	t91 = (((x381&x382)==x383)/x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x386 = 0;
	volatile uint8_t x387 = UINT8_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t92 = -2009;

	t92 = (((x385&x386)==x387)/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = -3;
	volatile int64_t x391 = INT64_MAX;

	t93 = (((x389&x390)==x391)/x392);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = -96;
	static int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	volatile int16_t x396 = INT16_MAX;
	volatile int32_t t94 = -50;

	t94 = (((x393&x394)==x395)/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x398 = INT16_MAX;
	static volatile int16_t x399 = INT16_MIN;
	uint32_t x400 = 6133078U;
	static volatile uint32_t t95 = 5365590U;

	t95 = (((x397&x398)==x399)/x400);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x401 = 10548124217846LL;
	int8_t x402 = -13;
	int16_t x404 = -1;

	t96 = (((x401&x402)==x403)/x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x406 = 370LLU;
	uint64_t x408 = 1756404174LLU;
	uint64_t t97 = 190191594442842206LLU;

	t97 = (((x405&x406)==x407)/x408);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x409 = UINT64_MAX;
	static int8_t x411 = -1;
	volatile uint32_t t98 = 6U;

	t98 = (((x409&x410)==x411)/x412);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = 2776;
	int8_t x414 = -1;
	uint16_t x415 = 1U;
	int16_t x416 = INT16_MIN;
	volatile int32_t t99 = -231611648;

	t99 = (((x413&x414)==x415)/x416);

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

