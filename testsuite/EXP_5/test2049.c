#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 1U;
volatile int32_t t1 = 1;
static int64_t x10 = INT64_MIN;
int64_t x14 = 2LL;
static int32_t x22 = INT32_MAX;
static int64_t x23 = -114LL;
volatile int32_t x25 = INT32_MIN;
int8_t x37 = INT8_MAX;
int16_t x53 = -1;
int64_t x55 = -1067385251441LL;
static uint8_t x58 = 33U;
int32_t t13 = 171;
uint8_t x63 = 5U;
int32_t x64 = INT32_MAX;
static uint8_t x68 = UINT8_MAX;
int32_t t15 = 1104371;
int64_t x79 = -1LL;
uint16_t x83 = 4476U;
uint32_t x103 = 32U;
int32_t t24 = 94171;
int8_t x107 = INT8_MIN;
volatile uint64_t x112 = UINT64_MAX;
volatile uint64_t x113 = 1853LLU;
int8_t x116 = INT8_MAX;
int16_t x119 = 71;
static volatile int16_t x123 = -1;
int8_t x132 = INT8_MAX;
static volatile int32_t t31 = -61650;
int64_t x146 = 165321LL;
int8_t x150 = 7;
int32_t x151 = -95946536;
volatile uint16_t x152 = 336U;
int64_t x156 = -1LL;
int8_t x157 = 0;
uint64_t x161 = UINT64_MAX;
volatile int16_t x162 = -1;
volatile int8_t x168 = INT8_MAX;
static volatile int32_t t39 = -511989;
int64_t x172 = INT64_MIN;
int32_t t41 = 1720574;
uint16_t x185 = 28U;
int16_t x188 = 4;
int32_t x190 = 31;
int8_t x195 = INT8_MIN;
int32_t t45 = 0;
int32_t x200 = -84;
volatile int8_t x205 = 21;
int64_t x213 = INT64_MIN;
static uint8_t x218 = UINT8_MAX;
volatile int32_t t52 = 14555;
uint64_t x225 = UINT64_MAX;
volatile int32_t t53 = -25891;
int16_t x230 = -1;
int64_t x236 = INT64_MAX;
int32_t x238 = 172976716;
volatile int32_t t56 = -22752;
static volatile int16_t x247 = -1;
uint32_t x269 = 20843U;
int32_t x276 = -1944;
uint8_t x291 = 1U;
int16_t x294 = INT16_MIN;
int32_t x296 = INT32_MAX;
uint8_t x298 = 2U;
static uint64_t x299 = 181484711346446071LLU;
static uint32_t x300 = 16062U;
int16_t x305 = INT16_MIN;
uint32_t x307 = 24309049U;
uint16_t x316 = 47U;
int64_t x319 = INT64_MIN;
int16_t x326 = INT16_MAX;
int64_t x341 = INT64_MAX;
int16_t x346 = INT16_MAX;
static volatile int32_t t81 = -355;
int16_t x357 = -1635;
static uint32_t x361 = 25320819U;
volatile int32_t t84 = -82622;
volatile int32_t t86 = 70;
int8_t x384 = INT8_MAX;
int64_t x385 = 440446219013030LL;
volatile int64_t x390 = -256530712LL;
uint32_t x394 = 1714068868U;
int32_t x397 = -10;
static int64_t x399 = INT64_MIN;
int16_t x403 = INT16_MAX;
static int16_t x404 = 133;
volatile int64_t x408 = 106LL;
uint8_t x411 = 94U;
int32_t t94 = -32518403;
int32_t t96 = 23438;
uint32_t x421 = 928U;
volatile uint32_t x425 = 104U;
volatile int16_t x428 = -1;
static int16_t x432 = -10;


void f0(void) {
	int16_t x1 = -1;
	volatile uint16_t x2 = UINT16_MAX;
	int16_t x3 = 0;
	volatile int32_t t0 = 259262;

	t0 = (x1==((x2^x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 34411763922298LLU;
	static int8_t x6 = INT8_MIN;
	volatile uint16_t x7 = 0U;
	uint32_t x8 = UINT32_MAX;

	t1 = (x5==((x6^x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 910U;
	uint32_t x11 = 3928902U;
	uint32_t x12 = 555U;
	static volatile int32_t t2 = -100086;

	t2 = (x9==((x10^x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -127366;
	static uint64_t x15 = 75421254455644794LLU;
	static int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -117823;

	t3 = (x13==((x14^x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -260408485LL;
	int32_t x24 = 0;
	volatile int32_t t4 = 1579;

	t4 = (x21==((x22^x23)-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = UINT32_MAX;
	static int16_t x27 = INT16_MIN;
	static int64_t x28 = -1LL;
	volatile int32_t t5 = 1;

	t5 = (x25==((x26^x27)-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = UINT64_MAX;
	int64_t x30 = INT64_MAX;
	uint8_t x31 = 0U;
	static int64_t x32 = INT64_MAX;
	volatile int32_t t6 = -10097;

	t6 = (x29==((x30^x31)-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = UINT32_MAX;
	uint16_t x34 = UINT16_MAX;
	uint16_t x35 = 382U;
	uint16_t x36 = 0U;
	int32_t t7 = 12165;

	t7 = (x33==((x34^x35)-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = 5628077938877LLU;
	int64_t x39 = -459820344158323469LL;
	uint16_t x40 = 170U;
	static int32_t t8 = 174957174;

	t8 = (x37==((x38^x39)-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 1434U;
	int8_t x42 = INT8_MIN;
	volatile uint8_t x43 = 2U;
	int16_t x44 = INT16_MIN;
	int32_t t9 = 1;

	t9 = (x41==((x42^x43)-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x45 = 64412U;
	static uint32_t x46 = 105U;
	static int32_t x47 = INT32_MIN;
	int8_t x48 = 15;
	int32_t t10 = -1045;

	t10 = (x45==((x46^x47)-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 0U;
	static uint8_t x50 = 7U;
	int8_t x51 = INT8_MAX;
	uint8_t x52 = 0U;
	static volatile int32_t t11 = 0;

	t11 = (x49==((x50^x51)-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x54 = 159367LLU;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t12 = -2818;

	t12 = (x53==((x54^x55)-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 34791231;
	static uint8_t x59 = 2U;
	int8_t x60 = 8;

	t13 = (x57==((x58^x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 19LLU;
	uint64_t x62 = UINT64_MAX;
	static volatile int32_t t14 = -3968;

	t14 = (x61==((x62^x63)-x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x65 = 3U;
	int8_t x66 = INT8_MIN;
	static volatile int64_t x67 = INT64_MIN;

	t15 = (x65==((x66^x67)-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x69 = UINT32_MAX;
	int32_t x70 = -116383;
	static uint16_t x71 = 61U;
	uint32_t x72 = UINT32_MAX;
	int32_t t16 = 26480;

	t16 = (x69==((x70^x71)-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = -41946LL;
	int32_t x75 = INT32_MIN;
	static int16_t x76 = INT16_MIN;
	int32_t t17 = 174076;

	t17 = (x73==((x74^x75)-x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 7420LLU;
	static uint64_t x78 = UINT64_MAX;
	int8_t x80 = -1;
	volatile int32_t t18 = -174;

	t18 = (x77==((x78^x79)-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	static volatile int16_t x82 = -1;
	int32_t x84 = INT32_MIN;
	int32_t t19 = 1912;

	t19 = (x81==((x82^x83)-x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 292179LLU;
	int8_t x86 = INT8_MIN;
	static int32_t x87 = INT32_MAX;
	volatile uint8_t x88 = 2U;
	volatile int32_t t20 = -110709;

	t20 = (x85==((x86^x87)-x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = -2;
	int32_t x91 = 73612452;
	volatile uint64_t x92 = 1321409935384301302LLU;
	volatile int32_t t21 = -780569134;

	t21 = (x89==((x90^x91)-x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 109U;
	volatile int8_t x94 = 1;
	int64_t x95 = INT64_MIN;
	volatile int16_t x96 = INT16_MIN;
	static volatile int32_t t22 = -22;

	t22 = (x93==((x94^x95)-x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int32_t x98 = INT32_MAX;
	uint16_t x99 = 19054U;
	static int8_t x100 = INT8_MIN;
	static int32_t t23 = 310124911;

	t23 = (x97==((x98^x99)-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = -1;
	uint8_t x104 = 56U;

	t24 = (x101==((x102^x103)-x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 26U;
	volatile int32_t x106 = INT32_MAX;
	uint8_t x108 = 3U;
	int32_t t25 = 29374;

	t25 = (x105==((x106^x107)-x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	volatile int64_t x110 = INT64_MIN;
	uint64_t x111 = 1455311LLU;
	volatile int32_t t26 = -250808;

	t26 = (x109==((x110^x111)-x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x114 = 51483661601791LLU;
	uint64_t x115 = 36875871589679267LLU;
	static int32_t t27 = -88209;

	t27 = (x113==((x114^x115)-x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x117 = 2U;
	volatile int64_t x118 = -1LL;
	uint8_t x120 = UINT8_MAX;
	static volatile int32_t t28 = 103443776;

	t28 = (x117==((x118^x119)-x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x121 = 55U;
	int64_t x122 = 188354803942752795LL;
	int64_t x124 = -1741LL;
	volatile int32_t t29 = 427498;

	t29 = (x121==((x122^x123)-x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = 18655498LL;
	int8_t x130 = 4;
	static volatile int32_t x131 = -70384785;
	static int32_t t30 = 3959915;

	t30 = (x129==((x130^x131)-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x133 = -300;
	int8_t x134 = -5;
	volatile uint16_t x135 = UINT16_MAX;
	volatile int64_t x136 = INT64_MIN;

	t31 = (x133==((x134^x135)-x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	static int64_t x138 = INT64_MIN;
	static int32_t x139 = INT32_MIN;
	volatile int32_t x140 = 444261;
	static volatile int32_t t32 = 1;

	t32 = (x137==((x138^x139)-x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x141 = 7U;
	int8_t x142 = INT8_MIN;
	static volatile uint32_t x143 = 10837612U;
	static int8_t x144 = 57;
	volatile int32_t t33 = 946;

	t33 = (x141==((x142^x143)-x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = UINT8_MAX;
	volatile uint16_t x147 = 224U;
	int64_t x148 = INT64_MAX;
	static volatile int32_t t34 = -50;

	t34 = (x145==((x146^x147)-x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = INT16_MIN;
	int32_t t35 = 1;

	t35 = (x149==((x150^x151)-x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MAX;
	int32_t x154 = -1;
	int32_t x155 = INT32_MIN;
	int32_t t36 = -3886;

	t36 = (x153==((x154^x155)-x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x158 = 14261U;
	volatile int32_t x159 = -22;
	int16_t x160 = INT16_MAX;
	int32_t t37 = 1;

	t37 = (x157==((x158^x159)-x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x163 = -1;
	static int16_t x164 = -1;
	static int32_t t38 = 6;

	t38 = (x161==((x162^x163)-x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = -1;
	static int32_t x166 = INT32_MIN;
	int64_t x167 = -1LL;

	t39 = (x165==((x166^x167)-x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = UINT8_MAX;
	volatile uint64_t x170 = UINT64_MAX;
	int32_t x171 = INT32_MIN;
	volatile int32_t t40 = -88920158;

	t40 = (x169==((x170^x171)-x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -301;
	static uint64_t x180 = UINT64_MAX;

	t41 = (x177==((x178^x179)-x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 121U;
	static int8_t x182 = INT8_MIN;
	uint64_t x183 = 1452452661379220LLU;
	static int16_t x184 = INT16_MIN;
	static volatile int32_t t42 = 300928;

	t42 = (x181==((x182^x183)-x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x186 = INT32_MIN;
	volatile int16_t x187 = 468;
	volatile int32_t t43 = 16095616;

	t43 = (x185==((x186^x187)-x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -2644;
	volatile int8_t x191 = -7;
	uint32_t x192 = 60137U;
	int32_t t44 = -32;

	t44 = (x189==((x190^x191)-x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x193 = -1LL;
	static int16_t x194 = INT16_MAX;
	static volatile int32_t x196 = 93;

	t45 = (x193==((x194^x195)-x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 8556819527LLU;
	int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MAX;
	int32_t t46 = 230506;

	t46 = (x197==((x198^x199)-x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = 370;
	static uint64_t x202 = 24511789200463683LLU;
	static uint64_t x203 = 665104863748996LLU;
	int64_t x204 = -1LL;
	int32_t t47 = 2041;

	t47 = (x201==((x202^x203)-x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x206 = 1;
	static uint8_t x207 = 0U;
	int8_t x208 = -1;
	int32_t t48 = -63;

	t48 = (x205==((x206^x207)-x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = INT16_MAX;
	static uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MAX;
	volatile int32_t t49 = -3;

	t49 = (x209==((x210^x211)-x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = INT16_MIN;
	uint16_t x215 = 19478U;
	volatile int8_t x216 = -1;
	volatile int32_t t50 = 130828267;

	t50 = (x213==((x214^x215)-x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 7906U;
	int8_t x219 = -1;
	int8_t x220 = -1;
	int32_t t51 = 15167374;

	t51 = (x217==((x218^x219)-x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 0U;
	static int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MIN;
	volatile uint64_t x224 = UINT64_MAX;

	t52 = (x221==((x222^x223)-x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x226 = 24U;
	volatile uint16_t x227 = 0U;
	int32_t x228 = -198281727;

	t53 = (x225==((x226^x227)-x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x231 = 1U;
	uint64_t x232 = 17936773062LLU;
	int32_t t54 = -657842859;

	t54 = (x229==((x230^x231)-x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = 0;
	uint32_t x234 = 18250695U;
	uint8_t x235 = 1U;
	static int32_t t55 = -7901606;

	t55 = (x233==((x234^x235)-x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x237 = 5824901;
	uint16_t x239 = UINT16_MAX;
	uint16_t x240 = UINT16_MAX;

	t56 = (x237==((x238^x239)-x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = -14846435319351086LL;
	static int8_t x242 = INT8_MIN;
	static uint16_t x243 = UINT16_MAX;
	static volatile uint8_t x244 = UINT8_MAX;
	volatile int32_t t57 = 1251;

	t57 = (x241==((x242^x243)-x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -7315;
	int64_t x246 = 1004LL;
	int32_t x248 = INT32_MIN;
	static int32_t t58 = -9188;

	t58 = (x245==((x246^x247)-x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 71U;
	volatile int8_t x254 = -1;
	volatile uint16_t x255 = 826U;
	static int8_t x256 = -1;
	static int32_t t59 = 4224472;

	t59 = (x253==((x254^x255)-x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = -2;
	int32_t x258 = -14;
	int32_t x259 = 865;
	static int64_t x260 = 2342329315037LL;
	volatile int32_t t60 = -3;

	t60 = (x257==((x258^x259)-x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MIN;
	uint32_t x262 = 186744U;
	int16_t x263 = -1;
	volatile int16_t x264 = 5;
	int32_t t61 = -1782226;

	t61 = (x261==((x262^x263)-x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MIN;
	uint32_t x266 = 11405453U;
	uint16_t x267 = 521U;
	static int16_t x268 = INT16_MIN;
	static int32_t t62 = -280842795;

	t62 = (x265==((x266^x267)-x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t63 = 6;

	t63 = (x269==((x270^x271)-x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x273 = 5U;
	static int8_t x274 = 1;
	uint16_t x275 = 1576U;
	volatile int32_t t64 = -1998300;

	t64 = (x273==((x274^x275)-x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x277 = 1232119612773990LL;
	uint16_t x278 = UINT16_MAX;
	static int32_t x279 = -1;
	volatile int8_t x280 = INT8_MAX;
	int32_t t65 = 44674;

	t65 = (x277==((x278^x279)-x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x285 = 0U;
	uint16_t x286 = 7U;
	volatile uint32_t x287 = UINT32_MAX;
	int64_t x288 = -1LL;
	static int32_t t66 = -3;

	t66 = (x285==((x286^x287)-x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x289 = 6;
	int16_t x290 = INT16_MIN;
	uint8_t x292 = 1U;
	int32_t t67 = 1;

	t67 = (x289==((x290^x291)-x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = 23;
	static int8_t x295 = -6;
	int32_t t68 = -1;

	t68 = (x293==((x294^x295)-x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x297 = 79U;
	volatile int32_t t69 = 9;

	t69 = (x297==((x298^x299)-x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x306 = INT32_MIN;
	static int8_t x308 = -1;
	int32_t t70 = -124037;

	t70 = (x305==((x306^x307)-x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x309 = 4424956016717529657LLU;
	uint8_t x310 = 58U;
	int32_t x311 = INT32_MAX;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t71 = 5366;

	t71 = (x309==((x310^x311)-x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x313 = INT32_MIN;
	static int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	static int32_t t72 = -2;

	t72 = (x313==((x314^x315)-x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x317 = UINT16_MAX;
	int64_t x318 = 101288239LL;
	static int8_t x320 = INT8_MAX;
	static volatile int32_t t73 = 727283;

	t73 = (x317==((x318^x319)-x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = UINT64_MAX;
	volatile uint64_t x322 = 12920732LLU;
	int8_t x323 = -50;
	int64_t x324 = 3282818LL;
	volatile int32_t t74 = 10;

	t74 = (x321==((x322^x323)-x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = UINT32_MAX;
	uint8_t x327 = 30U;
	static volatile uint16_t x328 = 1U;
	volatile int32_t t75 = 21;

	t75 = (x325==((x326^x327)-x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = -1;
	static int32_t x330 = 712848;
	int8_t x331 = INT8_MIN;
	static int32_t x332 = 22632141;
	volatile int32_t t76 = 0;

	t76 = (x329==((x330^x331)-x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x333 = INT8_MIN;
	uint8_t x334 = 52U;
	static volatile int16_t x335 = INT16_MIN;
	volatile int64_t x336 = INT64_MIN;
	volatile int32_t t77 = -1984582;

	t77 = (x333==((x334^x335)-x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x342 = 36051081949050LLU;
	uint64_t x343 = 6601887LLU;
	static volatile int32_t x344 = INT32_MIN;
	static int32_t t78 = -13361;

	t78 = (x341==((x342^x343)-x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x345 = INT32_MIN;
	int32_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	int32_t t79 = -59319;

	t79 = (x345==((x346^x347)-x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x349 = -1;
	volatile uint32_t x350 = UINT32_MAX;
	static volatile int16_t x351 = INT16_MAX;
	uint16_t x352 = 9U;
	static volatile int32_t t80 = -3083045;

	t80 = (x349==((x350^x351)-x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = 2805149841LLU;
	static int64_t x354 = 784608LL;
	static int8_t x355 = INT8_MIN;
	uint16_t x356 = UINT16_MAX;

	t81 = (x353==((x354^x355)-x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x358 = UINT32_MAX;
	static uint32_t x359 = 240U;
	volatile int16_t x360 = INT16_MIN;
	int32_t t82 = 1812665;

	t82 = (x357==((x358^x359)-x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	int64_t x364 = 15038840329LL;
	volatile int32_t t83 = 15;

	t83 = (x361==((x362^x363)-x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MIN;
	int32_t x367 = 1884;
	int64_t x368 = -1LL;

	t84 = (x365==((x366^x367)-x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = INT8_MIN;
	static volatile int32_t x370 = INT32_MIN;
	volatile int32_t x371 = INT32_MAX;
	int16_t x372 = INT16_MAX;
	static int32_t t85 = 154254;

	t85 = (x369==((x370^x371)-x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x377 = INT8_MAX;
	uint16_t x378 = UINT16_MAX;
	volatile int64_t x379 = INT64_MAX;
	uint32_t x380 = 63U;

	t86 = (x377==((x378^x379)-x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x381 = UINT8_MAX;
	volatile int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	int32_t t87 = 14016;

	t87 = (x381==((x382^x383)-x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x386 = 1U;
	int16_t x387 = INT16_MIN;
	static int8_t x388 = INT8_MAX;
	volatile int32_t t88 = -14;

	t88 = (x385==((x386^x387)-x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = INT32_MAX;
	static int32_t x391 = INT32_MIN;
	volatile uint32_t x392 = 63U;
	volatile int32_t t89 = 10053;

	t89 = (x389==((x390^x391)-x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = -1LL;
	int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t90 = 5;

	t90 = (x393==((x394^x395)-x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x398 = INT8_MAX;
	static volatile int16_t x400 = -1;
	int32_t t91 = -10361384;

	t91 = (x397==((x398^x399)-x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = INT64_MAX;
	static uint64_t x402 = 20097209018LLU;
	int32_t t92 = 163;

	t92 = (x401==((x402^x403)-x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x405 = INT64_MIN;
	volatile int64_t x406 = INT64_MAX;
	static int32_t x407 = INT32_MIN;
	volatile int32_t t93 = 3810204;

	t93 = (x405==((x406^x407)-x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MIN;
	int16_t x410 = INT16_MIN;
	int64_t x412 = -1LL;

	t94 = (x409==((x410^x411)-x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = -106LL;
	int16_t x414 = INT16_MAX;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = INT16_MIN;
	volatile int32_t t95 = 878034998;

	t95 = (x413==((x414^x415)-x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x417 = INT8_MIN;
	uint8_t x418 = 33U;
	uint16_t x419 = 11U;
	volatile int32_t x420 = 5;

	t96 = (x417==((x418^x419)-x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x422 = 1975976794024LLU;
	int16_t x423 = 1934;
	int64_t x424 = INT64_MIN;
	static volatile int32_t t97 = -13;

	t97 = (x421==((x422^x423)-x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x426 = UINT64_MAX;
	int8_t x427 = INT8_MIN;
	volatile int32_t t98 = 30133;

	t98 = (x425==((x426^x427)-x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x429 = -1;
	volatile uint8_t x430 = 28U;
	static int64_t x431 = INT64_MAX;
	volatile int32_t t99 = -723109;

	t99 = (x429==((x430^x431)-x432));

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

