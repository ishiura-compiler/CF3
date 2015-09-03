#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 6379899;
volatile uint32_t x10 = 0U;
volatile uint8_t x14 = 6U;
volatile int32_t x16 = -1;
int8_t x38 = INT8_MIN;
int8_t x44 = INT8_MIN;
int64_t x63 = -1LL;
int16_t x65 = -1;
int8_t x78 = -1;
int32_t t16 = 3843;
volatile uint64_t x84 = 874488436LLU;
static volatile int16_t x90 = INT16_MIN;
int32_t t19 = 2399786;
static volatile uint8_t x97 = 10U;
int64_t x100 = -1LL;
volatile int8_t x102 = INT8_MIN;
uint32_t x104 = 42085927U;
int32_t t22 = 110190033;
static int64_t x116 = INT64_MAX;
static int8_t x118 = -1;
uint8_t x119 = 15U;
int8_t x121 = -1;
int64_t x128 = INT64_MIN;
volatile int16_t x146 = INT16_MAX;
volatile int32_t x149 = INT32_MAX;
volatile int64_t x151 = INT64_MAX;
volatile int32_t x164 = 5203822;
static volatile uint64_t x168 = 181LLU;
volatile int16_t x173 = INT16_MIN;
static int32_t x180 = 54094;
uint32_t x191 = 296946408U;
volatile int32_t t44 = -2;
static int64_t x206 = INT64_MIN;
uint8_t x212 = UINT8_MAX;
uint8_t x213 = UINT8_MAX;
static int16_t x216 = INT16_MIN;
int32_t t48 = 208831297;
int16_t x218 = 43;
volatile int16_t x225 = INT16_MAX;
static volatile int64_t x228 = INT64_MIN;
static volatile int64_t x234 = -98593111579254292LL;
uint32_t x239 = 120898U;
int16_t x242 = -310;
static int64_t x244 = -274560820973LL;
int32_t t57 = -901368;
volatile int32_t t58 = 14;
uint64_t x262 = UINT64_MAX;
int16_t x264 = INT16_MIN;
volatile int8_t x266 = INT8_MIN;
static int32_t t61 = 269834667;
volatile int64_t x270 = -1LL;
uint64_t x273 = 28559834767734554LLU;
int8_t x281 = -2;
int32_t t65 = 541000637;
volatile int16_t x288 = INT16_MAX;
volatile uint8_t x289 = 1U;
volatile int32_t t68 = 263480862;
volatile int32_t t70 = -183223319;
uint32_t x322 = 1218413225U;
volatile uint16_t x323 = 65U;
int32_t t74 = -44351;
static uint16_t x335 = 24U;
static int64_t x340 = -1LL;
uint64_t x341 = 1001620749549593196LLU;
static uint64_t x343 = 439906LLU;
int32_t t80 = -8776;
static int64_t x353 = -6765302202LL;
int32_t x360 = INT32_MIN;
volatile int8_t x363 = INT8_MAX;
int32_t t83 = -61899;
volatile uint16_t x366 = 554U;
int32_t x370 = 3010688;
volatile int32_t t86 = 725309678;
uint32_t x378 = 1416U;
uint64_t x380 = 25158517430620LLU;
int8_t x385 = 33;
int8_t x386 = 0;
volatile uint32_t x391 = 2957U;
static int8_t x401 = -1;
int32_t t91 = -779;
static volatile int32_t t93 = 193087;
volatile uint16_t x417 = 8444U;
int8_t x418 = -7;
uint16_t x419 = 8448U;
static int16_t x428 = 7793;
volatile int32_t t97 = -1;
volatile uint32_t x433 = 755U;
volatile uint32_t x434 = 7363U;
int16_t x436 = -1;
static int32_t t99 = 3;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	int8_t x2 = -1;
	int32_t x3 = INT32_MAX;
	uint64_t x4 = 2LLU;
	volatile int32_t t0 = 8541;

	t0 = (x1<(x2-(x3^x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int32_t x6 = -1;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = 461558876787337LL;

	t1 = (x5<(x6-(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static uint8_t x11 = 1U;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = 397824;

	t2 = (x9<(x10-(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 31U;
	static int32_t x15 = INT32_MIN;
	static volatile int32_t t3 = -1479724;

	t3 = (x13<(x14-(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 1U;
	uint8_t x22 = UINT8_MAX;
	int32_t x23 = -1;
	uint32_t x24 = 7541795U;
	volatile int32_t t4 = -5696515;

	t4 = (x21<(x22-(x23^x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = INT32_MAX;
	int8_t x26 = 14;
	int16_t x27 = INT16_MAX;
	uint16_t x28 = 25U;
	volatile int32_t t5 = -3519555;

	t5 = (x25<(x26-(x27^x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MIN;
	int64_t x30 = -3315615432029710LL;
	int8_t x31 = -52;
	static volatile int32_t x32 = INT32_MIN;
	volatile int32_t t6 = 62015;

	t6 = (x29<(x30-(x31^x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = UINT16_MAX;
	int8_t x34 = INT8_MIN;
	volatile int16_t x35 = -1;
	static volatile uint32_t x36 = 20393U;
	static int32_t t7 = 3380;

	t7 = (x33<(x34-(x35^x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	static int32_t x39 = INT32_MIN;
	static int32_t x40 = INT32_MIN;
	static int32_t t8 = -111;

	t8 = (x37<(x38-(x39^x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 0;
	static uint8_t x42 = 9U;
	uint64_t x43 = 5392029LLU;
	int32_t t9 = 11502225;

	t9 = (x41<(x42-(x43^x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = -15883818631447LL;
	int16_t x46 = INT16_MAX;
	int16_t x47 = INT16_MIN;
	volatile uint8_t x48 = 3U;
	static int32_t t10 = -2;

	t10 = (x45<(x46-(x47^x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 1;
	uint8_t x50 = 2U;
	int32_t x51 = 1323;
	uint64_t x52 = 48301503LLU;
	static int32_t t11 = -12;

	t11 = (x49<(x50-(x51^x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = INT64_MIN;
	uint64_t x54 = 2880735098035423144LLU;
	static uint8_t x55 = 25U;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t12 = -302935;

	t12 = (x53<(x54-(x55^x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	static int16_t x58 = -1;
	volatile int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	static volatile int32_t t13 = 20289664;

	t13 = (x57<(x58-(x59^x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	uint64_t x62 = 685295298779LLU;
	volatile int16_t x64 = 1;
	static int32_t t14 = -643;

	t14 = (x61<(x62-(x63^x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = INT64_MAX;
	int8_t x67 = 62;
	uint16_t x68 = 13558U;
	static volatile int32_t t15 = 18;

	t15 = (x65<(x66-(x67^x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x77 = 42062108;
	int16_t x79 = 0;
	int32_t x80 = 1;

	t16 = (x77<(x78-(x79^x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -8043245006LL;
	int16_t x82 = INT16_MIN;
	volatile uint8_t x83 = 41U;
	int32_t t17 = -1903264;

	t17 = (x81<(x82-(x83^x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MAX;
	int64_t x86 = INT64_MIN;
	volatile uint16_t x87 = 870U;
	int8_t x88 = INT8_MIN;
	int32_t t18 = -661;

	t18 = (x85<(x86-(x87^x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	int32_t x91 = 7967;
	volatile uint16_t x92 = 62U;

	t19 = (x89<(x90-(x91^x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MIN;
	static int8_t x94 = INT8_MIN;
	int64_t x95 = INT64_MIN;
	int16_t x96 = -2863;
	volatile int32_t t20 = -3;

	t20 = (x93<(x94-(x95^x96)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MAX;
	static volatile int32_t t21 = 843;

	t21 = (x97<(x98-(x99^x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	volatile int64_t x103 = INT64_MIN;

	t22 = (x101<(x102-(x103^x104)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 1773U;
	int64_t x106 = INT64_MIN;
	static uint32_t x107 = UINT32_MAX;
	static int16_t x108 = -1;
	int32_t t23 = 115;

	t23 = (x105<(x106-(x107^x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = -1;
	static int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	int8_t x112 = 2;
	int32_t t24 = 2506223;

	t24 = (x109<(x110-(x111^x112)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = -1;
	uint32_t x115 = 27U;
	int32_t t25 = -708581367;

	t25 = (x113<(x114-(x115^x116)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x117 = -7;
	static int8_t x120 = 3;
	int32_t t26 = -16;

	t26 = (x117<(x118-(x119^x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x122 = 92U;
	int16_t x123 = INT16_MIN;
	volatile int16_t x124 = INT16_MIN;
	volatile int32_t t27 = 243346518;

	t27 = (x121<(x122-(x123^x124)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MAX;
	uint32_t x126 = 82803999U;
	int64_t x127 = -1LL;
	volatile int32_t t28 = 2;

	t28 = (x125<(x126-(x127^x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x133 = INT32_MAX;
	uint8_t x134 = UINT8_MAX;
	volatile int8_t x135 = -12;
	int32_t x136 = -1;
	static volatile int32_t t29 = -396601;

	t29 = (x133<(x134-(x135^x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x137 = 91;
	uint8_t x138 = UINT8_MAX;
	static volatile int32_t x139 = -279853408;
	int8_t x140 = 3;
	int32_t t30 = 6179200;

	t30 = (x137<(x138-(x139^x140)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x145 = -15915124;
	uint8_t x147 = 14U;
	int8_t x148 = -6;
	volatile int32_t t31 = 121937;

	t31 = (x145<(x146-(x147^x148)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x150 = 14U;
	static volatile int8_t x152 = INT8_MAX;
	int32_t t32 = -849;

	t32 = (x149<(x150-(x151^x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	volatile int8_t x154 = INT8_MAX;
	static uint16_t x155 = 125U;
	int64_t x156 = 2LL;
	int32_t t33 = -326;

	t33 = (x153<(x154-(x155^x156)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x157 = INT16_MIN;
	volatile uint16_t x158 = 135U;
	volatile int16_t x159 = -1;
	volatile int64_t x160 = -74LL;
	static int32_t t34 = 0;

	t34 = (x157<(x158-(x159^x160)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = -4309466731945LL;
	uint8_t x162 = 2U;
	int32_t x163 = -1;
	int32_t t35 = 5677;

	t35 = (x161<(x162-(x163^x164)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x165 = 32132U;
	uint32_t x166 = 2349439U;
	static uint16_t x167 = UINT16_MAX;
	int32_t t36 = 890754733;

	t36 = (x165<(x166-(x167^x168)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = 46U;
	uint8_t x170 = 87U;
	uint16_t x171 = UINT16_MAX;
	uint16_t x172 = 35U;
	static volatile int32_t t37 = 521472386;

	t37 = (x169<(x170-(x171^x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = -1;
	int32_t x175 = INT32_MAX;
	volatile uint8_t x176 = 11U;
	volatile int32_t t38 = -284688421;

	t38 = (x173<(x174-(x175^x176)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x177 = INT16_MAX;
	int16_t x178 = 14;
	volatile int32_t x179 = 517;
	volatile int32_t t39 = -7591;

	t39 = (x177<(x178-(x179^x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x181 = -1;
	static uint64_t x182 = UINT64_MAX;
	int16_t x183 = 282;
	volatile int8_t x184 = -28;
	volatile int32_t t40 = 1844072;

	t40 = (x181<(x182-(x183^x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = 60U;
	int16_t x186 = INT16_MAX;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	int32_t t41 = -26;

	t41 = (x185<(x186-(x187^x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = 2171;
	int8_t x190 = -1;
	int16_t x192 = -13;
	int32_t t42 = 147132;

	t42 = (x189<(x190-(x191^x192)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = -1;
	uint8_t x194 = 10U;
	static int64_t x195 = -1LL;
	int16_t x196 = INT16_MIN;
	int32_t t43 = 7;

	t43 = (x193<(x194-(x195^x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = 1;
	int16_t x198 = INT16_MIN;
	int8_t x199 = -9;
	uint16_t x200 = 3805U;

	t44 = (x197<(x198-(x199^x200)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MAX;
	static int64_t x202 = INT64_MAX;
	volatile int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t45 = -26798;

	t45 = (x201<(x202-(x203^x204)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = 31537808216434LL;
	int16_t x207 = -1;
	int32_t x208 = -1;
	volatile int32_t t46 = -673302642;

	t46 = (x205<(x206-(x207^x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x210 = 18692427U;
	volatile int16_t x211 = -1;
	volatile int32_t t47 = 2481;

	t47 = (x209<(x210-(x211^x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x214 = -1;
	int8_t x215 = INT8_MAX;

	t48 = (x213<(x214-(x215^x216)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x217 = -1;
	uint8_t x219 = 97U;
	uint8_t x220 = 10U;
	int32_t t49 = -29501;

	t49 = (x217<(x218-(x219^x220)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = 237758;
	int16_t x222 = 11338;
	int8_t x223 = INT8_MIN;
	int16_t x224 = 37;
	volatile int32_t t50 = -22;

	t50 = (x221<(x222-(x223^x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x226 = -1LL;
	int8_t x227 = 20;
	int32_t t51 = -224;

	t51 = (x225<(x226-(x227^x228)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = UINT8_MAX;
	static volatile int16_t x230 = -5;
	volatile int16_t x231 = -328;
	int64_t x232 = 442868950485LL;
	volatile int32_t t52 = -11724;

	t52 = (x229<(x230-(x231^x232)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 26LLU;
	int16_t x235 = -1;
	int64_t x236 = INT64_MAX;
	volatile int32_t t53 = 6481;

	t53 = (x233<(x234-(x235^x236)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x237 = INT16_MAX;
	int16_t x238 = -1;
	int8_t x240 = INT8_MIN;
	volatile int32_t t54 = -108;

	t54 = (x237<(x238-(x239^x240)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	volatile int32_t x243 = INT32_MIN;
	int32_t t55 = 1;

	t55 = (x241<(x242-(x243^x244)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MAX;
	int16_t x247 = INT16_MAX;
	uint64_t x248 = 3225339579339LLU;
	volatile int32_t t56 = 3929;

	t56 = (x245<(x246-(x247^x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = 40U;
	static uint16_t x250 = 0U;
	uint64_t x251 = 7976LLU;
	uint64_t x252 = 31703380746015122LLU;

	t57 = (x249<(x250-(x251^x252)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = -1;
	uint16_t x254 = 7U;
	uint8_t x255 = 15U;
	int64_t x256 = INT64_MIN;

	t58 = (x253<(x254-(x255^x256)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = 1U;
	uint64_t x259 = 138033448482911LLU;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t59 = 0;

	t59 = (x257<(x258-(x259^x260)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = -1LL;
	int8_t x263 = INT8_MIN;
	volatile int32_t t60 = 1809;

	t60 = (x261<(x262-(x263^x264)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = -1;
	uint16_t x267 = 395U;
	int8_t x268 = 7;

	t61 = (x265<(x266-(x267^x268)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x269 = INT64_MAX;
	uint32_t x271 = 28450400U;
	static int16_t x272 = -1;
	int32_t t62 = 39039308;

	t62 = (x269<(x270-(x271^x272)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x274 = 12U;
	static uint64_t x275 = 29104LLU;
	static int32_t x276 = -1;
	static int32_t t63 = 300;

	t63 = (x273<(x274-(x275^x276)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x277 = INT8_MIN;
	volatile int64_t x278 = -1LL;
	int16_t x279 = -377;
	static int8_t x280 = INT8_MIN;
	static int32_t t64 = 0;

	t64 = (x277<(x278-(x279^x280)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	static int8_t x284 = -1;

	t65 = (x281<(x282-(x283^x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = 104946585LL;
	uint64_t x286 = 330439980LLU;
	static volatile uint8_t x287 = 117U;
	volatile int32_t t66 = 645860820;

	t66 = (x285<(x286-(x287^x288)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x290 = UINT64_MAX;
	static uint64_t x291 = 147418LLU;
	int16_t x292 = -79;
	int32_t t67 = 51;

	t67 = (x289<(x290-(x291^x292)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = -1;
	volatile int32_t x294 = INT32_MIN;
	int64_t x295 = -1LL;
	int16_t x296 = -1;

	t68 = (x293<(x294-(x295^x296)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = -1;
	int32_t x302 = INT32_MIN;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MAX;
	volatile int32_t t69 = 214356;

	t69 = (x301<(x302-(x303^x304)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = -1;
	static volatile uint32_t x306 = 6348380U;
	uint8_t x307 = 57U;
	static int8_t x308 = -22;

	t70 = (x305<(x306-(x307^x308)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x310 = -136;
	int32_t x311 = INT32_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t71 = -850;

	t71 = (x309<(x310-(x311^x312)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = UINT32_MAX;
	static int8_t x314 = 0;
	int8_t x315 = INT8_MIN;
	uint8_t x316 = 0U;
	static int32_t t72 = 135103;

	t72 = (x313<(x314-(x315^x316)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = -1;
	uint64_t x318 = 29837063LLU;
	uint64_t x319 = 102120235LLU;
	uint16_t x320 = UINT16_MAX;
	int32_t t73 = 3141;

	t73 = (x317<(x318-(x319^x320)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = -11;
	uint64_t x324 = 3725249LLU;

	t74 = (x321<(x322-(x323^x324)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = -26;
	uint16_t x326 = 195U;
	volatile int8_t x327 = INT8_MAX;
	uint8_t x328 = 13U;
	static int32_t t75 = 56;

	t75 = (x325<(x326-(x327^x328)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = INT16_MIN;
	uint64_t x330 = 220LLU;
	static volatile int64_t x331 = 73141632LL;
	uint16_t x332 = 2U;
	volatile int32_t t76 = -2055;

	t76 = (x329<(x330-(x331^x332)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x334 = 14963U;
	volatile int64_t x336 = 684977LL;
	int32_t t77 = -1;

	t77 = (x333<(x334-(x335^x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = 1;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	int32_t t78 = -1239;

	t78 = (x337<(x338-(x339^x340)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x342 = 0U;
	int16_t x344 = INT16_MIN;
	int32_t t79 = -892112571;

	t79 = (x341<(x342-(x343^x344)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x345 = INT16_MIN;
	uint32_t x346 = UINT32_MAX;
	static volatile int8_t x347 = -15;
	static volatile int8_t x348 = -1;

	t80 = (x345<(x346-(x347^x348)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x354 = 15U;
	volatile uint8_t x355 = 19U;
	volatile int64_t x356 = 48LL;
	static int32_t t81 = -41928313;

	t81 = (x353<(x354-(x355^x356)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x357 = UINT32_MAX;
	int64_t x358 = INT64_MAX;
	uint64_t x359 = 853189879405065LLU;
	volatile int32_t t82 = -397808656;

	t82 = (x357<(x358-(x359^x360)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = 10;
	int8_t x362 = -5;
	int16_t x364 = INT16_MIN;

	t83 = (x361<(x362-(x363^x364)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x365 = 14320505LLU;
	int8_t x367 = INT8_MIN;
	int64_t x368 = -27LL;
	volatile int32_t t84 = -13114984;

	t84 = (x365<(x366-(x367^x368)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x369 = INT64_MIN;
	int64_t x371 = -945432273336LL;
	static int16_t x372 = INT16_MAX;
	int32_t t85 = -15987;

	t85 = (x369<(x370-(x371^x372)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x373 = 5U;
	int16_t x374 = INT16_MIN;
	uint64_t x375 = UINT64_MAX;
	uint32_t x376 = UINT32_MAX;

	t86 = (x373<(x374-(x375^x376)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = INT16_MIN;
	volatile int32_t x379 = 76352590;
	static volatile int32_t t87 = 118076;

	t87 = (x377<(x378-(x379^x380)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = -1;
	static uint16_t x382 = UINT16_MAX;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t88 = -39;

	t88 = (x381<(x382-(x383^x384)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x387 = UINT8_MAX;
	uint16_t x388 = 353U;
	static int32_t t89 = 118439732;

	t89 = (x385<(x386-(x387^x388)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x389 = INT32_MAX;
	uint16_t x390 = UINT16_MAX;
	static int16_t x392 = INT16_MAX;
	volatile int32_t t90 = -5851;

	t90 = (x389<(x390-(x391^x392)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x402 = -950882;
	int8_t x403 = INT8_MAX;
	volatile int64_t x404 = INT64_MIN;

	t91 = (x401<(x402-(x403^x404)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x405 = -1LL;
	uint8_t x406 = UINT8_MAX;
	uint16_t x407 = 3178U;
	uint64_t x408 = 10LLU;
	volatile int32_t t92 = -1038;

	t92 = (x405<(x406-(x407^x408)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x409 = 12;
	int32_t x410 = INT32_MIN;
	static volatile uint16_t x411 = 56U;
	volatile int16_t x412 = -6188;

	t93 = (x409<(x410-(x411^x412)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = -1;
	volatile int32_t x414 = -1;
	int16_t x415 = 38;
	int64_t x416 = 7650258854152LL;
	volatile int32_t t94 = 1;

	t94 = (x413<(x414-(x415^x416)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x420 = 80230LLU;
	volatile int32_t t95 = -7102;

	t95 = (x417<(x418-(x419^x420)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x421 = INT16_MAX;
	int64_t x422 = INT64_MIN;
	int64_t x423 = 82730221769000LL;
	static int16_t x424 = -2253;
	static volatile int32_t t96 = 2732259;

	t96 = (x421<(x422-(x423^x424)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x425 = 5U;
	uint16_t x426 = 22515U;
	int32_t x427 = -1;

	t97 = (x425<(x426-(x427^x428)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x429 = UINT64_MAX;
	uint64_t x430 = 3050995LLU;
	static int8_t x431 = INT8_MIN;
	int32_t x432 = INT32_MIN;
	int32_t t98 = -8941;

	t98 = (x429<(x430-(x431^x432)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x435 = INT32_MIN;

	t99 = (x433<(x434-(x435^x436)));

	if (t99 != 1) { NG(); } else { ; }
	
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

