#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
volatile int32_t t1 = -189647694;
volatile int32_t t2 = 117;
int32_t t4 = -16414603;
uint64_t x24 = UINT64_MAX;
static uint32_t x28 = 2479U;
volatile int32_t t6 = 3;
int16_t x30 = -1;
int16_t x32 = -1;
uint8_t x34 = 2U;
volatile uint64_t x36 = 167077141373320LLU;
static int64_t x53 = INT64_MAX;
uint32_t x56 = 31991U;
int32_t x57 = -27651;
int8_t x58 = -1;
int32_t x59 = INT32_MAX;
int32_t x62 = -15458;
volatile int64_t x67 = 1LL;
static volatile int32_t t16 = -423475825;
int64_t x73 = -1LL;
static int16_t x75 = INT16_MIN;
volatile int32_t t18 = 17487650;
int16_t x77 = INT16_MIN;
int32_t x89 = 8350;
int16_t x95 = 0;
uint16_t x96 = 6885U;
static uint32_t x100 = UINT32_MAX;
int32_t t25 = 295;
volatile int16_t x105 = INT16_MIN;
static int32_t t26 = 1308596;
static int32_t x115 = -1908;
volatile int64_t x117 = 509962934162LL;
uint8_t x122 = UINT8_MAX;
int32_t t30 = -50553213;
static int64_t x129 = INT64_MIN;
uint64_t x134 = UINT64_MAX;
volatile int32_t x139 = -58;
volatile int32_t t35 = 124;
uint8_t x157 = UINT8_MAX;
static int8_t x166 = -4;
uint64_t x172 = UINT64_MAX;
volatile int32_t t42 = 79667;
static uint32_t x173 = UINT32_MAX;
int64_t x187 = INT64_MIN;
volatile int16_t x189 = INT16_MIN;
int8_t x192 = INT8_MIN;
int32_t t48 = 680;
static int8_t x200 = INT8_MAX;
static uint16_t x206 = UINT16_MAX;
uint16_t x207 = UINT16_MAX;
static volatile int32_t t51 = 32615349;
uint8_t x211 = 109U;
int64_t x224 = -1LL;
int8_t x228 = INT8_MAX;
int8_t x230 = INT8_MIN;
uint16_t x231 = 15U;
int16_t x242 = INT16_MAX;
volatile int32_t t60 = -46;
static int16_t x245 = INT16_MIN;
int16_t x247 = INT16_MIN;
int32_t x249 = -1;
int8_t x255 = -1;
int16_t x258 = INT16_MAX;
int64_t x259 = INT64_MAX;
int64_t x262 = INT64_MAX;
static int32_t x263 = INT32_MAX;
int32_t x271 = INT32_MAX;
uint32_t x274 = 2760518U;
static volatile uint64_t x275 = UINT64_MAX;
int64_t x277 = 238LL;
int64_t x280 = INT64_MAX;
static uint32_t x287 = 31U;
static int32_t t71 = 368910;
volatile int32_t x292 = INT32_MAX;
int32_t x306 = INT32_MAX;
static int64_t x312 = 34116004954683LL;
int16_t x316 = INT16_MAX;
static volatile int32_t x325 = INT32_MAX;
int8_t x330 = INT8_MIN;
static int8_t x333 = -10;
int8_t x335 = -1;
static int32_t t83 = 288;
uint8_t x350 = UINT8_MAX;
int64_t x351 = -507433981257LL;
uint32_t x355 = UINT32_MAX;
uint32_t x358 = 7932485U;
int32_t x359 = -1;
uint32_t x368 = 43U;
int64_t x369 = -1LL;
int8_t x372 = INT8_MIN;
static int64_t x376 = -1LL;
int8_t x377 = INT8_MIN;
int64_t x379 = 776405613923LL;
static uint16_t x380 = UINT16_MAX;
static int64_t x383 = INT64_MAX;
static int64_t x385 = 6920787884LL;
uint16_t x386 = UINT16_MAX;
static int32_t x387 = INT32_MAX;
int16_t x395 = INT16_MIN;
uint32_t x398 = 27145U;
volatile int8_t x399 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = 3;
	volatile uint64_t x3 = 3066108600638213268LLU;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = -23;

	t0 = ((x1==x2)<(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static int16_t x6 = INT16_MIN;
	uint32_t x7 = UINT32_MAX;

	t1 = ((x5==x6)<(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 15U;
	int64_t x10 = -114129266LL;
	volatile int64_t x11 = -1LL;
	int8_t x12 = INT8_MIN;

	t2 = ((x9==x10)<(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 15U;
	volatile int32_t x14 = -1269224;
	static int32_t x15 = INT32_MIN;
	static int64_t x16 = 2181163525379578LL;
	volatile int32_t t3 = 996678;

	t3 = ((x13==x14)<(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	static uint16_t x18 = 2U;
	uint64_t x19 = 261565417120LLU;
	static volatile uint32_t x20 = 1107U;

	t4 = ((x17==x18)<(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	uint32_t x22 = 4365646U;
	int8_t x23 = INT8_MIN;
	volatile int32_t t5 = -10124807;

	t5 = ((x21==x22)<(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int64_t x26 = 9279923LL;
	static int32_t x27 = INT32_MIN;

	t6 = ((x25==x26)<(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	int32_t x31 = INT32_MIN;
	static int32_t t7 = 7;

	t7 = ((x29==x30)<(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	static volatile int32_t t8 = 148258;

	t8 = ((x33==x34)<(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 11U;
	volatile int16_t x38 = INT16_MIN;
	uint8_t x39 = 13U;
	int64_t x40 = INT64_MAX;
	volatile int32_t t9 = -17721;

	t9 = ((x37==x38)<(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -28;
	int8_t x42 = INT8_MIN;
	static int16_t x43 = INT16_MAX;
	uint32_t x44 = 230492U;
	volatile int32_t t10 = -190923141;

	t10 = ((x41==x42)<(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 2U;
	int16_t x46 = -89;
	int32_t x47 = INT32_MIN;
	int32_t x48 = -340715744;
	volatile int32_t t11 = 108998119;

	t11 = ((x45==x46)<(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 2529368U;
	uint8_t x50 = 0U;
	int8_t x51 = INT8_MIN;
	volatile int16_t x52 = -1;
	int32_t t12 = -1;

	t12 = ((x49==x50)<(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 19U;
	volatile uint64_t x55 = 15265281LLU;
	int32_t t13 = 15421749;

	t13 = ((x53==x54)<(x55&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x60 = 78531U;
	int32_t t14 = -63;

	t14 = ((x57==x58)<(x59&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 18113890497LLU;
	uint16_t x63 = UINT16_MAX;
	volatile uint8_t x64 = 2U;
	int32_t t15 = -125;

	t15 = ((x61==x62)<(x63&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint32_t x66 = 77649U;
	int16_t x68 = 163;

	t16 = ((x65==x66)<(x67&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	uint16_t x70 = 0U;
	uint16_t x71 = 29746U;
	volatile uint64_t x72 = UINT64_MAX;
	volatile int32_t t17 = 1;

	t17 = ((x69==x70)<(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = INT16_MIN;
	static int16_t x76 = 0;

	t18 = ((x73==x74)<(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	int32_t x79 = 26785176;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = -91511;

	t19 = ((x77==x78)<(x79&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 1624398977U;
	int64_t x82 = INT64_MIN;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = INT32_MIN;
	static int32_t t20 = -20365;

	t20 = ((x81==x82)<(x83&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = UINT16_MAX;
	volatile uint8_t x86 = 0U;
	static uint32_t x87 = UINT32_MAX;
	volatile uint8_t x88 = 1U;
	volatile int32_t t21 = 917;

	t21 = ((x85==x86)<(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = 53U;
	static volatile uint32_t x91 = 1346543U;
	volatile int8_t x92 = 4;
	volatile int32_t t22 = 7111331;

	t22 = ((x89==x90)<(x91&x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint16_t x94 = 1963U;
	volatile int32_t t23 = -1384;

	t23 = ((x93==x94)<(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint16_t x98 = 46U;
	static int32_t x99 = 14106779;
	int32_t t24 = -44406;

	t24 = ((x97==x98)<(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	uint64_t x102 = 154LLU;
	int8_t x103 = 7;
	static int32_t x104 = INT32_MAX;

	t25 = ((x101==x102)<(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = UINT32_MAX;
	int32_t x107 = INT32_MAX;
	uint64_t x108 = 171670405493008LLU;

	t26 = ((x105==x106)<(x107&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 92U;
	uint32_t x110 = 136423529U;
	int32_t x111 = 2;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 26291091;

	t27 = ((x109==x110)<(x111&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 29U;
	uint64_t x114 = UINT64_MAX;
	static int16_t x116 = 2;
	int32_t t28 = 0;

	t28 = ((x113==x114)<(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = -1;
	static uint16_t x119 = 29U;
	volatile int32_t x120 = INT32_MAX;
	int32_t t29 = 220388855;

	t29 = ((x117==x118)<(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = 35;
	static uint8_t x123 = 58U;
	int16_t x124 = -1;

	t30 = ((x121==x122)<(x123&x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = UINT32_MAX;
	static volatile uint64_t x126 = 43313794494LLU;
	uint32_t x127 = 116323U;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -26166033;

	t31 = ((x125==x126)<(x127&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = 28;
	int8_t x131 = -1;
	int8_t x132 = INT8_MAX;
	int32_t t32 = -263792;

	t32 = ((x129==x130)<(x131&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int8_t x135 = INT8_MIN;
	volatile int64_t x136 = 2LL;
	volatile int32_t t33 = -2041942;

	t33 = ((x133==x134)<(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int16_t x138 = INT16_MIN;
	int16_t x140 = -1;
	int32_t t34 = 3557;

	t34 = ((x137==x138)<(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	static int32_t x142 = -1;
	int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;

	t35 = ((x141==x142)<(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int16_t x146 = -1;
	static int32_t x147 = -436138682;
	int32_t x148 = INT32_MIN;
	static int32_t t36 = -4;

	t36 = ((x145==x146)<(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	uint16_t x150 = 464U;
	int32_t x151 = INT32_MAX;
	int64_t x152 = INT64_MAX;
	static int32_t t37 = 872;

	t37 = ((x149==x150)<(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -66841897236288174LL;
	int64_t x154 = 37185505LL;
	static volatile uint32_t x155 = UINT32_MAX;
	int64_t x156 = -1LL;
	static int32_t t38 = -4639;

	t38 = ((x153==x154)<(x155&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = 25352589678735405LLU;
	volatile uint8_t x159 = 58U;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 19821;

	t39 = ((x157==x158)<(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	uint16_t x162 = 0U;
	int64_t x163 = INT64_MAX;
	volatile uint8_t x164 = 3U;
	volatile int32_t t40 = 243881;

	t40 = ((x161==x162)<(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	static int8_t x168 = 0;
	int32_t t41 = 17;

	t41 = ((x165==x166)<(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 6480148501LLU;
	uint16_t x170 = 1205U;
	volatile uint64_t x171 = UINT64_MAX;

	t42 = ((x169==x170)<(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = -113023849;
	int16_t x175 = INT16_MIN;
	static int16_t x176 = -56;
	volatile int32_t t43 = -105503;

	t43 = ((x173==x174)<(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 2144597LL;
	int16_t x178 = -156;
	uint8_t x179 = 26U;
	uint8_t x180 = UINT8_MAX;
	int32_t t44 = 1;

	t44 = ((x177==x178)<(x179&x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	uint8_t x182 = 15U;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = UINT32_MAX;
	int32_t t45 = 27191;

	t45 = ((x181==x182)<(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 5535460U;
	static int8_t x186 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = 20;

	t46 = ((x185==x186)<(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MAX;
	int32_t t47 = -650;

	t47 = ((x189==x190)<(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 1844750U;
	uint8_t x194 = 4U;
	uint64_t x195 = 44409LLU;
	static uint32_t x196 = UINT32_MAX;

	t48 = ((x193==x194)<(x195&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 53514673589358452LLU;
	static int32_t x198 = 1520;
	static int8_t x199 = INT8_MIN;
	int32_t t49 = -15525;

	t49 = ((x197==x198)<(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = -1;
	static int8_t x202 = INT8_MAX;
	uint32_t x203 = 231605927U;
	int32_t x204 = INT32_MIN;
	static int32_t t50 = 128220245;

	t50 = ((x201==x202)<(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	static int64_t x208 = INT64_MAX;

	t51 = ((x205==x206)<(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = UINT8_MAX;
	static uint32_t x210 = 113U;
	static volatile uint16_t x212 = 15U;
	static int32_t t52 = -13257;

	t52 = ((x209==x210)<(x211&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 2405063038498039254LL;
	static volatile int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	int8_t x216 = INT8_MAX;
	int32_t t53 = -780;

	t53 = ((x213==x214)<(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 1096U;
	volatile int32_t x218 = -1;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = -14;
	int32_t t54 = -1449;

	t54 = ((x217==x218)<(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 5669U;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MAX;
	static int32_t t55 = 7161231;

	t55 = ((x221==x222)<(x223&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = -344;
	int16_t x226 = 3;
	int8_t x227 = INT8_MIN;
	volatile int32_t t56 = 98163;

	t56 = ((x225==x226)<(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	static int8_t x232 = -1;
	static int32_t t57 = 7614583;

	t57 = ((x229==x230)<(x231&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 11902984U;
	int32_t x234 = INT32_MIN;
	int64_t x235 = 113596LL;
	int32_t x236 = INT32_MIN;
	int32_t t58 = 1454591;

	t58 = ((x233==x234)<(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	static int8_t x238 = -1;
	int16_t x239 = 0;
	uint8_t x240 = 1U;
	volatile int32_t t59 = 0;

	t59 = ((x237==x238)<(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	static int8_t x243 = INT8_MIN;
	uint8_t x244 = 0U;

	t60 = ((x241==x242)<(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = INT32_MAX;
	volatile int64_t x248 = INT64_MAX;
	volatile int32_t t61 = -47023;

	t61 = ((x245==x246)<(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x250 = -917011307;
	static int16_t x251 = -733;
	int64_t x252 = INT64_MIN;
	volatile int32_t t62 = -239;

	t62 = ((x249==x250)<(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = 172;
	uint16_t x254 = 0U;
	uint16_t x256 = 3560U;
	static volatile int32_t t63 = 29955552;

	t63 = ((x253==x254)<(x255&x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = 22282U;
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = -4;

	t64 = ((x257==x258)<(x259&x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	static uint64_t x264 = UINT64_MAX;
	volatile int32_t t65 = 2740;

	t65 = ((x261==x262)<(x263&x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 110601843961LLU;
	static uint16_t x266 = UINT16_MAX;
	int64_t x267 = -1LL;
	int16_t x268 = -1;
	int32_t t66 = 5846;

	t66 = ((x265==x266)<(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	uint64_t x270 = 212093721LLU;
	uint32_t x272 = UINT32_MAX;
	int32_t t67 = 168;

	t67 = ((x269==x270)<(x271&x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	int32_t x276 = -1;
	int32_t t68 = 2;

	t68 = ((x273==x274)<(x275&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x278 = -382419262153990LL;
	static int32_t x279 = 8109;
	volatile int32_t t69 = 1285217;

	t69 = ((x277==x278)<(x279&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 482621438837LLU;
	static int8_t x282 = INT8_MIN;
	volatile int32_t x283 = INT32_MAX;
	int16_t x284 = INT16_MIN;
	int32_t t70 = -254768805;

	t70 = ((x281==x282)<(x283&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = INT64_MIN;
	int16_t x286 = INT16_MIN;
	int64_t x288 = -1205LL;

	t71 = ((x285==x286)<(x287&x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 1229;
	int8_t x290 = -2;
	int64_t x291 = INT64_MAX;
	volatile int32_t t72 = -317879938;

	t72 = ((x289==x290)<(x291&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 44707U;
	int32_t x294 = -1;
	volatile int8_t x295 = -1;
	static volatile int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -109437;

	t73 = ((x293==x294)<(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	uint16_t x298 = UINT16_MAX;
	volatile uint64_t x299 = 869238LLU;
	int8_t x300 = 1;
	volatile int32_t t74 = 1;

	t74 = ((x297==x298)<(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int32_t x302 = -1;
	volatile uint32_t x303 = 4U;
	uint64_t x304 = 15772915LLU;
	volatile int32_t t75 = 13178335;

	t75 = ((x301==x302)<(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 43U;
	volatile int8_t x307 = -1;
	int32_t x308 = -123170367;
	int32_t t76 = -4343;

	t76 = ((x305==x306)<(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = UINT32_MAX;
	int32_t x310 = 16520;
	uint8_t x311 = 3U;
	static volatile int32_t t77 = -10;

	t77 = ((x309==x310)<(x311&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x314 = 1U;
	int8_t x315 = -5;
	volatile int32_t t78 = 367;

	t78 = ((x313==x314)<(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = -1;
	static int16_t x318 = -13;
	int64_t x319 = -1LL;
	volatile uint64_t x320 = 2609092269879LLU;
	volatile int32_t t79 = -16;

	t79 = ((x317==x318)<(x319&x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MIN;
	volatile int32_t x322 = INT32_MIN;
	static int8_t x323 = -9;
	int8_t x324 = -1;
	int32_t t80 = -389460875;

	t80 = ((x321==x322)<(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MAX;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t81 = -110854874;

	t81 = ((x325==x326)<(x327&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	volatile int16_t x331 = INT16_MAX;
	int16_t x332 = 0;
	volatile int32_t t82 = 1217335;

	t82 = ((x329==x330)<(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = 265325317193LL;
	int64_t x336 = INT64_MIN;

	t83 = ((x333==x334)<(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 2534U;
	static volatile int64_t x338 = 2667278455052809017LL;
	volatile int16_t x339 = 19;
	uint16_t x340 = 246U;
	int32_t t84 = -303326819;

	t84 = ((x337==x338)<(x339&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 1321;
	static volatile int32_t x342 = INT32_MIN;
	int8_t x343 = -1;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = -6378;

	t85 = ((x341==x342)<(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = 1;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 24U;
	int16_t x348 = -8;
	int32_t t86 = -1;

	t86 = ((x345==x346)<(x347&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	static int16_t x352 = -1;
	static int32_t t87 = 1;

	t87 = ((x349==x350)<(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	int32_t x354 = 955988;
	int32_t x356 = 76530015;
	volatile int32_t t88 = -115193440;

	t88 = ((x353==x354)<(x355&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	static int16_t x360 = INT16_MIN;
	static volatile int32_t t89 = 398414476;

	t89 = ((x357==x358)<(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = -1LL;
	uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MIN;
	int16_t x364 = -1;
	static int32_t t90 = 1;

	t90 = ((x361==x362)<(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	uint32_t x366 = 3488U;
	volatile int16_t x367 = INT16_MIN;
	volatile int32_t t91 = -6;

	t91 = ((x365==x366)<(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x370 = 1810;
	int16_t x371 = INT16_MAX;
	static volatile int32_t t92 = 100891955;

	t92 = ((x369==x370)<(x371&x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -1;
	int16_t x374 = -1;
	int32_t x375 = -127;
	static int32_t t93 = -8579623;

	t93 = ((x373==x374)<(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x378 = INT16_MIN;
	volatile int32_t t94 = 878853;

	t94 = ((x377==x378)<(x379&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -12768841261371564LL;
	int16_t x382 = -22;
	int16_t x384 = 0;
	volatile int32_t t95 = -63435;

	t95 = ((x381==x382)<(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x388 = -1;
	int32_t t96 = 421046598;

	t96 = ((x385==x386)<(x387&x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 1U;
	int32_t x390 = -1;
	int8_t x391 = INT8_MAX;
	int32_t x392 = 88973787;
	static volatile int32_t t97 = -16518121;

	t97 = ((x389==x390)<(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -1LL;
	static int32_t x394 = INT32_MIN;
	uint32_t x396 = 174973704U;
	volatile int32_t t98 = 507;

	t98 = ((x393==x394)<(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -20;
	int8_t x400 = -6;
	volatile int32_t t99 = 781;

	t99 = ((x397==x398)<(x399&x400));

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

