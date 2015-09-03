#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = INT32_MIN;
uint64_t x16 = UINT64_MAX;
int8_t x18 = INT8_MIN;
int32_t t4 = 4346;
static volatile int16_t x21 = -90;
static volatile int32_t x25 = INT32_MIN;
int8_t x27 = INT8_MIN;
uint8_t x28 = UINT8_MAX;
volatile int64_t t6 = -334LL;
uint64_t x30 = 233471LLU;
static volatile int32_t x31 = -2978;
uint64_t x36 = 16661939315287058LLU;
static int64_t x40 = -1LL;
int32_t t13 = -79412;
static uint64_t x64 = UINT64_MAX;
int16_t x70 = 973;
static uint64_t t18 = 142365911348597LLU;
int64_t x80 = INT64_MIN;
volatile uint8_t x85 = 42U;
int8_t x86 = INT8_MAX;
int8_t x113 = -3;
int8_t x114 = 1;
uint32_t x128 = UINT32_MAX;
static uint32_t t29 = 368U;
uint64_t x129 = 82639545912214035LLU;
static int32_t x130 = INT32_MIN;
static int64_t x138 = INT64_MAX;
volatile uint32_t x146 = UINT32_MAX;
int64_t x147 = 7021221693897659LL;
int32_t x148 = 3763402;
int64_t t33 = 426505LL;
uint64_t x152 = UINT64_MAX;
static int64_t x165 = INT64_MIN;
volatile int64_t t38 = 10LL;
int64_t x174 = 66164615385LL;
static int32_t x176 = 20453;
static uint8_t x191 = 65U;
int64_t x199 = INT64_MIN;
static int16_t x203 = 327;
uint8_t x212 = UINT8_MAX;
static uint16_t x215 = UINT16_MAX;
volatile int32_t t48 = -45666325;
int32_t x236 = -1;
volatile int64_t t51 = -22LL;
static int8_t x245 = 27;
static volatile uint32_t t53 = 675U;
uint32_t x250 = 25U;
int64_t x263 = INT64_MAX;
uint64_t x286 = 640919007839067LLU;
int8_t x288 = INT8_MAX;
static uint16_t x292 = 2557U;
int32_t x313 = INT32_MAX;
static volatile uint64_t x320 = UINT64_MAX;
volatile uint64_t t67 = 235602067446LLU;
uint64_t t68 = 536274933LLU;
uint32_t x332 = 2U;
int32_t x336 = INT32_MIN;
static int16_t x339 = -3;
uint32_t x345 = 212246U;
int64_t x353 = INT64_MAX;
volatile uint64_t x355 = UINT64_MAX;
int64_t x366 = 2036LL;
uint16_t x369 = UINT16_MAX;
int16_t x371 = -1;
int64_t t81 = -23592932222LL;
static volatile uint64_t x391 = 165LLU;
static uint32_t x398 = UINT32_MAX;
volatile int64_t x401 = INT64_MAX;
uint8_t x414 = 117U;
int8_t x415 = INT8_MIN;
uint8_t x416 = 15U;
int64_t x419 = INT64_MAX;
volatile uint64_t x425 = UINT64_MAX;
uint8_t x433 = UINT8_MAX;
static volatile uint64_t t93 = 13376438LLU;
static int8_t x441 = INT8_MAX;
int64_t x444 = INT64_MAX;
volatile int8_t x446 = INT8_MIN;
int32_t x455 = INT32_MIN;
volatile int32_t t99 = -96259025;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -3099002;

	t0 = (((x1%x2)/x3)-x4);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint64_t x6 = 281600048306378LLU;
	volatile int64_t x7 = 20733035733052LL;
	static int8_t x8 = 0;
	volatile uint64_t t1 = 541516708949213LLU;

	t1 = (((x5%x6)/x7)-x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	uint16_t x11 = UINT16_MAX;
	int8_t x12 = -15;
	static volatile int64_t t2 = 50883104LL;

	t2 = (((x9%x10)/x11)-x12);

	if (t2 != 15LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MIN;
	uint8_t x14 = 6U;
	uint32_t x15 = UINT32_MAX;
	uint64_t t3 = 1826067LLU;

	t3 = (((x13%x14)/x15)-x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	static volatile int8_t x20 = INT8_MAX;

	t4 = (((x17%x18)/x19)-x20);

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -3521;
	int32_t x23 = INT32_MIN;
	volatile int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -233;

	t5 = (((x21%x22)/x23)-x24);

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = 2038133374904509060LL;

	t6 = (((x25%x26)/x27)-x28);

	if (t6 != 16776961LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 13415LLU;
	uint8_t x32 = 3U;
	uint64_t t7 = 247353127184LLU;

	t7 = (((x29%x30)/x31)-x32);

	if (t7 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	int64_t x34 = INT64_MAX;
	int64_t x35 = INT64_MAX;
	volatile uint64_t t8 = 411LLU;

	t8 = (((x33%x34)/x35)-x36);

	if (t8 != 18430082134394264558LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -698866;
	uint32_t x38 = UINT32_MAX;
	uint64_t x39 = 575701641950LLU;
	volatile uint64_t t9 = 0LLU;

	t9 = (((x37%x38)/x39)-x40);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 32610U;
	volatile int64_t x42 = INT64_MAX;
	volatile uint16_t x43 = 192U;
	uint32_t x44 = 50U;
	int64_t t10 = 534479928687674LL;

	t10 = (((x41%x42)/x43)-x44);

	if (t10 != 119LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = 1210058659LL;
	int8_t x46 = -1;
	static int64_t x47 = -4728700363122755LL;
	int16_t x48 = INT16_MIN;
	int64_t t11 = -129900677863LL;

	t11 = (((x45%x46)/x47)-x48);

	if (t11 != 32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MIN;
	static uint8_t x52 = UINT8_MAX;
	volatile int64_t t12 = -93602324509369116LL;

	t12 = (((x49%x50)/x51)-x52);

	if (t12 != -255LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 409U;
	static int16_t x54 = 3864;
	int16_t x55 = INT16_MIN;
	static uint8_t x56 = UINT8_MAX;

	t13 = (((x53%x54)/x55)-x56);

	if (t13 != -255) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = -1;
	volatile int64_t x58 = INT64_MIN;
	uint16_t x59 = 5U;
	int8_t x60 = INT8_MIN;
	int64_t t14 = -96401720436618255LL;

	t14 = (((x57%x58)/x59)-x60);

	if (t14 != 128LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -15355;
	uint32_t x62 = UINT32_MAX;
	uint16_t x63 = UINT16_MAX;
	uint64_t t15 = 758286465626LLU;

	t15 = (((x61%x62)/x63)-x64);

	if (t15 != 65537LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 2U;
	int16_t x66 = -1;
	int64_t x67 = 4366518470556639181LL;
	volatile int64_t x68 = -1LL;
	volatile int64_t t16 = -170838599183LL;

	t16 = (((x65%x66)/x67)-x68);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int16_t x71 = INT16_MIN;
	static uint8_t x72 = 52U;
	int32_t t17 = 501647;

	t17 = (((x69%x70)/x71)-x72);

	if (t17 != -52) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = UINT64_MAX;
	static int8_t x74 = -1;
	static uint32_t x75 = 240375912U;
	int32_t x76 = INT32_MIN;

	t18 = (((x73%x74)/x75)-x76);

	if (t18 != 2147483648LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MIN;
	uint8_t x79 = 5U;
	volatile uint64_t t19 = 4089886498LLU;

	t19 = (((x77%x78)/x79)-x80);

	if (t19 != 9223372036854775833LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x87 = -75;
	static volatile int16_t x88 = 511;
	static volatile int32_t t20 = -87331022;

	t20 = (((x85%x86)/x87)-x88);

	if (t20 != -511) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = -1;
	int16_t x90 = -9;
	int16_t x91 = INT16_MIN;
	volatile uint64_t x92 = 248LLU;
	uint64_t t21 = 3227081LLU;

	t21 = (((x89%x90)/x91)-x92);

	if (t21 != 18446744073709551368LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x93 = 1U;
	static int64_t x94 = -1LL;
	uint64_t x95 = 6227905784LLU;
	static int16_t x96 = 270;
	uint64_t t22 = 9849851LLU;

	t22 = (((x93%x94)/x95)-x96);

	if (t22 != 18446744073709551346LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	volatile int8_t x102 = INT8_MAX;
	int64_t x103 = -222777593944LL;
	int16_t x104 = -15;
	volatile int64_t t23 = -40173958929624711LL;

	t23 = (((x101%x102)/x103)-x104);

	if (t23 != 15LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 775944LL;
	int32_t x106 = -1;
	volatile uint64_t x107 = UINT64_MAX;
	uint32_t x108 = 109803U;
	volatile uint64_t t24 = 0LLU;

	t24 = (((x105%x106)/x107)-x108);

	if (t24 != 18446744073709441813LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = -68030;
	static uint16_t x110 = 4U;
	int16_t x111 = -5838;
	int64_t x112 = -397504642081719387LL;
	volatile int64_t t25 = -13835775119LL;

	t25 = (((x109%x110)/x111)-x112);

	if (t25 != 397504642081719387LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x115 = INT32_MAX;
	int16_t x116 = -1;
	volatile int32_t t26 = 583;

	t26 = (((x113%x114)/x115)-x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = -1;
	uint32_t x118 = 4811U;
	uint32_t x119 = 9383U;
	static int16_t x120 = INT16_MAX;
	volatile uint32_t t27 = 1815U;

	t27 = (((x117%x118)/x119)-x120);

	if (t27 != 4294934529U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	volatile int8_t x122 = 11;
	volatile int64_t x123 = INT64_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile int64_t t28 = 885026226150539LL;

	t28 = (((x121%x122)/x123)-x124);

	if (t28 != -65535LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 1304261U;
	uint16_t x126 = UINT16_MAX;
	static int16_t x127 = INT16_MAX;

	t29 = (((x125%x126)/x127)-x128);

	if (t29 != 2U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x131 = INT16_MIN;
	int64_t x132 = -539564439370468LL;
	volatile uint64_t t30 = 7898279030063927LLU;

	t30 = (((x129%x130)/x131)-x132);

	if (t30 != 539564439370468LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x133 = UINT32_MAX;
	uint16_t x134 = 22831U;
	static uint32_t x135 = 27568255U;
	int64_t x136 = 40360903803818739LL;
	int64_t t31 = 1138099366LL;

	t31 = (((x133%x134)/x135)-x136);

	if (t31 != -40360903803818739LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = 26;
	int16_t x139 = INT16_MIN;
	uint8_t x140 = UINT8_MAX;
	int64_t t32 = 294805684274078LL;

	t32 = (((x137%x138)/x139)-x140);

	if (t32 != -255LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -52;

	t33 = (((x145%x146)/x147)-x148);

	if (t33 != -3763402LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -569085162;
	uint64_t x150 = 19923762LLU;
	uint32_t x151 = 14933U;
	uint64_t t34 = 320501LLU;

	t34 = (((x149%x150)/x151)-x152);

	if (t34 != 786LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x153 = 7;
	int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MAX;
	volatile uint64_t x156 = 7082319473111052LLU;
	uint64_t t35 = 407647LLU;

	t35 = (((x153%x154)/x155)-x156);

	if (t35 != 18439661754236440564LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MAX;
	static volatile int64_t x158 = -1LL;
	int16_t x159 = 15083;
	static int32_t x160 = -300;
	int64_t t36 = -30898LL;

	t36 = (((x157%x158)/x159)-x160);

	if (t36 != 300LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = 210U;
	int8_t x162 = INT8_MIN;
	int64_t x163 = -25809105LL;
	volatile int8_t x164 = INT8_MAX;
	int64_t t37 = -8930LL;

	t37 = (((x161%x162)/x163)-x164);

	if (t37 != -127LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x166 = INT8_MIN;
	uint32_t x167 = 32406655U;
	int16_t x168 = 5;

	t38 = (((x165%x166)/x167)-x168);

	if (t38 != -5LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MIN;
	int8_t x171 = -1;
	static int32_t x172 = -1;
	volatile int32_t t39 = -228;

	t39 = (((x169%x170)/x171)-x172);

	if (t39 != 129) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = UINT32_MAX;
	uint16_t x175 = 6878U;
	int64_t t40 = 21944LL;

	t40 = (((x173%x174)/x175)-x176);

	if (t40 != 603997LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	int8_t x184 = -23;
	volatile int64_t t41 = 235329325151400482LL;

	t41 = (((x181%x182)/x183)-x184);

	if (t41 != 23LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 24;
	int16_t x186 = INT16_MAX;
	static volatile int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MAX;
	int32_t t42 = 16;

	t42 = (((x185%x186)/x187)-x188);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = UINT8_MAX;
	volatile int64_t x190 = INT64_MAX;
	int32_t x192 = INT32_MIN;
	volatile int64_t t43 = -478654327LL;

	t43 = (((x189%x190)/x191)-x192);

	if (t43 != 2147483651LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x193 = 28U;
	volatile int16_t x194 = -463;
	static int64_t x195 = -98174778332492920LL;
	int32_t x196 = INT32_MIN;
	int64_t t44 = -63426014935471LL;

	t44 = (((x193%x194)/x195)-x196);

	if (t44 != 2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x197 = INT16_MIN;
	uint64_t x198 = UINT64_MAX;
	uint8_t x200 = 26U;
	static volatile uint64_t t45 = 228158754055236832LLU;

	t45 = (((x197%x198)/x199)-x200);

	if (t45 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = -165;
	int8_t x202 = INT8_MIN;
	int64_t x204 = 0LL;
	static volatile int64_t t46 = -10299972LL;

	t46 = (((x201%x202)/x203)-x204);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MIN;
	volatile int32_t x210 = -1;
	static volatile int16_t x211 = INT16_MIN;
	volatile int32_t t47 = 3;

	t47 = (((x209%x210)/x211)-x212);

	if (t47 != -255) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MAX;
	volatile int16_t x216 = -1;

	t48 = (((x213%x214)/x215)-x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x221 = 50U;
	int16_t x222 = 13;
	uint16_t x223 = 729U;
	static int32_t x224 = -60629683;
	static int32_t t49 = 219589702;

	t49 = (((x221%x222)/x223)-x224);

	if (t49 != 60629683) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x225 = 11218U;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	uint16_t x228 = 6241U;
	static volatile int64_t t50 = 310982691017957394LL;

	t50 = (((x225%x226)/x227)-x228);

	if (t50 != -6328LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x233 = INT64_MIN;
	int16_t x234 = -414;
	volatile int64_t x235 = INT64_MAX;

	t51 = (((x233%x234)/x235)-x236);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = INT64_MAX;
	static volatile int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	int16_t x244 = -1;
	volatile int64_t t52 = 31195234286919378LL;

	t52 = (((x241%x242)/x243)-x244);

	if (t52 != -2147483646LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x246 = UINT32_MAX;
	int8_t x247 = -1;
	int32_t x248 = -2413400;

	t53 = (((x245%x246)/x247)-x248);

	if (t53 != 2413400U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = UINT64_MAX;
	uint32_t x251 = 1893783U;
	uint8_t x252 = 1U;
	uint64_t t54 = UINT64_MAX;

	t54 = (((x249%x250)/x251)-x252);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x253 = INT16_MAX;
	static int16_t x254 = INT16_MIN;
	int64_t x255 = -1LL;
	int64_t x256 = 37886LL;
	int64_t t55 = 1876LL;

	t55 = (((x253%x254)/x255)-x256);

	if (t55 != -70653LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	static int32_t x258 = 11552;
	volatile uint64_t x259 = 76495575LLU;
	int32_t x260 = INT32_MIN;
	volatile uint64_t t56 = 8355991777LLU;

	t56 = (((x257%x258)/x259)-x260);

	if (t56 != 243295341856LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x261 = -1LL;
	volatile uint64_t x262 = 30280572LLU;
	int16_t x264 = -6;
	uint64_t t57 = 1LLU;

	t57 = (((x261%x262)/x263)-x264);

	if (t57 != 6LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = -369872LL;
	int64_t x266 = -18278360LL;
	int64_t x267 = INT64_MIN;
	volatile int8_t x268 = INT8_MIN;
	int64_t t58 = -1843047755578LL;

	t58 = (((x265%x266)/x267)-x268);

	if (t58 != 128LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = INT32_MAX;
	int16_t x278 = -1;
	volatile int32_t x279 = -1;
	int64_t x280 = INT64_MAX;
	static int64_t t59 = 237585LL;

	t59 = (((x277%x278)/x279)-x280);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = 85;
	volatile int32_t x287 = INT32_MIN;
	uint64_t t60 = 4024076684935LLU;

	t60 = (((x285%x286)/x287)-x288);

	if (t60 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x289 = -178751;
	static uint16_t x290 = 14U;
	static int16_t x291 = 1;
	int32_t t61 = -73715;

	t61 = (((x289%x290)/x291)-x292);

	if (t61 != -2570) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x293 = 74356385944LL;
	int16_t x294 = INT16_MIN;
	static volatile uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MIN;
	volatile uint64_t t62 = 243487888LLU;

	t62 = (((x293%x294)/x295)-x296);

	if (t62 != 2147483648LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x305 = UINT32_MAX;
	int16_t x306 = INT16_MIN;
	static int8_t x307 = INT8_MIN;
	int32_t x308 = -4311;
	static volatile uint32_t t63 = 104968U;

	t63 = (((x305%x306)/x307)-x308);

	if (t63 != 4311U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x309 = UINT64_MAX;
	uint8_t x310 = UINT8_MAX;
	static uint32_t x311 = 14760U;
	uint64_t x312 = 72053948460LLU;
	uint64_t t64 = 137281LLU;

	t64 = (((x309%x310)/x311)-x312);

	if (t64 != 18446744001655603156LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x314 = INT64_MAX;
	static uint32_t x315 = UINT32_MAX;
	int32_t x316 = 130;
	int64_t t65 = -38977110LL;

	t65 = (((x313%x314)/x315)-x316);

	if (t65 != -130LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x318 = 27037U;
	uint32_t x319 = 4U;
	volatile uint64_t t66 = 1027LLU;

	t66 = (((x317%x318)/x319)-x320);

	if (t66 != 1073740392LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = UINT8_MAX;
	static uint8_t x322 = UINT8_MAX;
	static int32_t x323 = 2;
	volatile uint64_t x324 = 1119LLU;

	t67 = (((x321%x322)/x323)-x324);

	if (t67 != 18446744073709550497LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = INT16_MAX;
	uint64_t x326 = 117792LLU;
	uint32_t x327 = UINT32_MAX;
	static uint64_t x328 = 19372862164LLU;

	t68 = (((x325%x326)/x327)-x328);

	if (t68 != 18446744054336689452LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = -1LL;
	static int8_t x330 = 59;
	int16_t x331 = INT16_MIN;
	volatile int64_t t69 = -3227LL;

	t69 = (((x329%x330)/x331)-x332);

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = INT32_MAX;
	int16_t x334 = INT16_MIN;
	int64_t x335 = INT64_MIN;
	static int64_t t70 = 641663836671LL;

	t70 = (((x333%x334)/x335)-x336);

	if (t70 != 2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x337 = INT16_MIN;
	volatile uint64_t x338 = 21081643176418116LLU;
	uint32_t x340 = UINT32_MAX;
	volatile uint64_t t71 = 385051147650LLU;

	t71 = (((x337%x338)/x339)-x340);

	if (t71 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = INT32_MAX;
	volatile int64_t x342 = INT64_MIN;
	static uint64_t x343 = 643710205376LLU;
	uint32_t x344 = 1771U;
	uint64_t t72 = 48600410373035LLU;

	t72 = (((x341%x342)/x343)-x344);

	if (t72 != 18446744073709549845LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x346 = INT32_MIN;
	uint64_t x347 = 47849658938LLU;
	int16_t x348 = INT16_MAX;
	volatile uint64_t t73 = 1008LLU;

	t73 = (((x345%x346)/x347)-x348);

	if (t73 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x349 = INT32_MIN;
	volatile int32_t x350 = INT32_MIN;
	static int16_t x351 = 485;
	static uint16_t x352 = 22U;
	volatile int32_t t74 = -95968687;

	t74 = (((x349%x350)/x351)-x352);

	if (t74 != -22) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x354 = INT32_MIN;
	uint64_t x356 = 628LLU;
	static volatile uint64_t t75 = 1062624311196LLU;

	t75 = (((x353%x354)/x355)-x356);

	if (t75 != 18446744073709550988LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = INT8_MAX;
	int8_t x358 = -2;
	uint16_t x359 = 776U;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t76 = -1091;

	t76 = (((x357%x358)/x359)-x360);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x361 = 2138U;
	static int16_t x362 = -2663;
	int32_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	uint64_t t77 = 16408173838LLU;

	t77 = (((x361%x362)/x363)-x364);

	if (t77 != 18446744073709549479LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x365 = 41U;
	volatile int8_t x367 = 2;
	int32_t x368 = 64857962;
	int64_t t78 = -124LL;

	t78 = (((x365%x366)/x367)-x368);

	if (t78 != -64857942LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x370 = -1LL;
	uint64_t x372 = UINT64_MAX;
	uint64_t t79 = 183120518253533239LLU;

	t79 = (((x369%x370)/x371)-x372);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x377 = -1;
	volatile int32_t x378 = INT32_MIN;
	uint16_t x379 = 1U;
	uint8_t x380 = 2U;
	int32_t t80 = 30958202;

	t80 = (((x377%x378)/x379)-x380);

	if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x381 = -1;
	uint32_t x382 = 123358U;
	int32_t x383 = 3;
	int64_t x384 = 62212214LL;

	t81 = (((x381%x382)/x383)-x384);

	if (t81 != -62208278LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = -1;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = INT32_MAX;
	static int8_t x388 = 30;
	uint32_t t82 = 57919U;

	t82 = (((x385%x386)/x387)-x388);

	if (t82 != 4294967266U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x389 = 280032775649957LLU;
	static int32_t x390 = INT32_MIN;
	static uint32_t x392 = UINT32_MAX;
	volatile uint64_t t83 = 49LLU;

	t83 = (((x389%x390)/x391)-x392);

	if (t83 != 1692873369977LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x397 = 3;
	int64_t x399 = 3796535LL;
	int32_t x400 = INT32_MAX;
	int64_t t84 = -13LL;

	t84 = (((x397%x398)/x399)-x400);

	if (t84 != -2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x402 = INT8_MAX;
	volatile int32_t x403 = -1;
	uint8_t x404 = 1U;
	int64_t t85 = 638585873119826LL;

	t85 = (((x401%x402)/x403)-x404);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = INT32_MAX;
	int16_t x406 = INT16_MIN;
	static int16_t x407 = INT16_MAX;
	static int8_t x408 = INT8_MIN;
	volatile int32_t t86 = -519;

	t86 = (((x405%x406)/x407)-x408);

	if (t86 != 129) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x409 = 36U;
	volatile int32_t x410 = INT32_MIN;
	static volatile uint8_t x411 = 2U;
	int16_t x412 = 19;
	int32_t t87 = -78;

	t87 = (((x409%x410)/x411)-x412);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x413 = 22LLU;
	volatile uint64_t t88 = 12881371620742LLU;

	t88 = (((x413%x414)/x415)-x416);

	if (t88 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x417 = INT16_MIN;
	int64_t x418 = -23737496872810035LL;
	int16_t x420 = INT16_MAX;
	int64_t t89 = 17820015310081886LL;

	t89 = (((x417%x418)/x419)-x420);

	if (t89 != -32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -18;
	volatile int64_t x422 = INT64_MAX;
	static uint64_t x423 = 11LLU;
	static uint64_t x424 = UINT64_MAX;
	static volatile uint64_t t90 = 1LLU;

	t90 = (((x421%x422)/x423)-x424);

	if (t90 != 1676976733973595600LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x426 = -1;
	int16_t x427 = INT16_MAX;
	static int8_t x428 = INT8_MIN;
	volatile uint64_t t91 = 12198LLU;

	t91 = (((x425%x426)/x427)-x428);

	if (t91 != 128LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x429 = UINT32_MAX;
	int32_t x430 = -1;
	uint64_t x431 = UINT64_MAX;
	int32_t x432 = INT32_MAX;
	static volatile uint64_t t92 = 58356546LLU;

	t92 = (((x429%x430)/x431)-x432);

	if (t92 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x434 = -1;
	int16_t x435 = -1;
	static volatile uint64_t x436 = 253822822374874LLU;

	t93 = (((x433%x434)/x435)-x436);

	if (t93 != 18446490250887176742LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = INT16_MIN;
	static uint8_t x438 = 1U;
	uint8_t x439 = 11U;
	static uint32_t x440 = UINT32_MAX;
	volatile uint32_t t94 = 13775881U;

	t94 = (((x437%x438)/x439)-x440);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x442 = 17U;
	uint8_t x443 = UINT8_MAX;
	int64_t t95 = -4869286479631LL;

	t95 = (((x441%x442)/x443)-x444);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x445 = INT8_MIN;
	int32_t x447 = 2;
	int16_t x448 = -1;
	int32_t t96 = -7933962;

	t96 = (((x445%x446)/x447)-x448);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x449 = -60;
	static uint32_t x450 = 408U;
	uint64_t x451 = 41LLU;
	uint8_t x452 = UINT8_MAX;
	static volatile uint64_t t97 = 138053508692LLU;

	t97 = (((x449%x450)/x451)-x452);

	if (t97 != 18446744073709551365LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x453 = 482907362916509204LL;
	uint32_t x454 = 11001U;
	static uint16_t x456 = 6198U;
	static int64_t t98 = -279899066690216564LL;

	t98 = (((x453%x454)/x455)-x456);

	if (t98 != -6198LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x461 = 6;
	static int16_t x462 = INT16_MIN;
	int8_t x463 = 1;
	volatile int16_t x464 = INT16_MIN;

	t99 = (((x461%x462)/x463)-x464);

	if (t99 != 32774) { NG(); } else { ; }
	
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

