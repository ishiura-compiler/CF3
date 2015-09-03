#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x3 = INT64_MAX;
int32_t x10 = -998676998;
int8_t x15 = INT8_MIN;
uint64_t x18 = UINT64_MAX;
volatile uint16_t x19 = UINT16_MAX;
uint32_t x25 = UINT32_MAX;
static volatile int32_t x31 = INT32_MIN;
int32_t t7 = -309620700;
uint8_t x36 = UINT8_MAX;
static int8_t x38 = -1;
volatile int32_t t9 = 12;
int32_t t10 = 2;
uint64_t x47 = UINT64_MAX;
static int32_t x50 = 213;
static volatile int8_t x58 = INT8_MIN;
volatile uint32_t x60 = 179580936U;
int16_t x71 = -314;
uint64_t x73 = UINT64_MAX;
static int32_t x74 = 232792988;
int32_t x75 = -1;
int32_t x79 = INT32_MAX;
volatile int16_t x82 = INT16_MAX;
uint64_t t20 = 8629481166838105LLU;
int8_t x94 = 0;
static uint32_t x97 = UINT32_MAX;
int8_t x107 = INT8_MIN;
static int64_t x108 = INT64_MIN;
int32_t t27 = -1;
uint64_t x123 = 250629LLU;
int8_t x130 = -51;
static int16_t x132 = INT16_MIN;
uint32_t t31 = 1195381983U;
volatile int64_t x141 = INT64_MIN;
uint8_t x142 = UINT8_MAX;
int8_t x144 = 1;
uint64_t x145 = UINT64_MAX;
static volatile uint16_t x150 = UINT16_MAX;
volatile int32_t x152 = 208;
static uint64_t t34 = 492067174651LLU;
uint32_t x155 = 54646U;
static volatile int16_t x156 = INT16_MIN;
int64_t t36 = -158LL;
int64_t t37 = 335004LL;
static int16_t x172 = INT16_MIN;
static volatile uint16_t x173 = 367U;
int8_t x174 = INT8_MIN;
volatile int32_t t39 = -785686;
uint32_t x180 = 16U;
int16_t x185 = -1;
volatile int32_t x189 = 1337;
uint64_t t43 = 12832LLU;
int32_t x204 = -2000;
static volatile int32_t t45 = 410315;
uint8_t x207 = 118U;
uint8_t x209 = 19U;
volatile int32_t t47 = 0;
int16_t x221 = INT16_MAX;
uint64_t x225 = UINT64_MAX;
volatile int32_t t53 = -26812661;
uint32_t x248 = UINT32_MAX;
static int16_t x264 = INT16_MAX;
int16_t x268 = INT16_MAX;
int32_t x270 = INT32_MIN;
int64_t x278 = INT64_MIN;
static uint16_t x279 = UINT16_MAX;
int64_t x282 = 7015900667LL;
uint32_t x284 = UINT32_MAX;
int32_t x291 = INT32_MAX;
int64_t x294 = INT64_MIN;
uint32_t x295 = 42U;
int32_t x299 = INT32_MIN;
uint64_t x300 = UINT64_MAX;
int8_t x301 = INT8_MIN;
uint8_t x305 = 38U;
int32_t x307 = INT32_MIN;
uint8_t x308 = 56U;
int64_t x312 = INT64_MIN;
static int32_t x313 = INT32_MAX;
volatile uint32_t x317 = 11U;
volatile int32_t t73 = 27;
volatile uint32_t t75 = 0U;
uint32_t x338 = 1168U;
volatile uint32_t t76 = 0U;
uint64_t x343 = 2293407LLU;
uint64_t x344 = 1LLU;
uint64_t t79 = 175466076904022718LLU;
int32_t x358 = -112;
int8_t x364 = 0;
uint64_t x365 = 480903264384LLU;
int32_t x366 = -1;
int64_t x367 = -612062059LL;
volatile int32_t t84 = 27644;
volatile int32_t t85 = 4186;
int8_t x398 = INT8_MAX;
int32_t x401 = -14916694;
uint64_t x402 = 1LLU;
int64_t x405 = INT64_MIN;
int8_t x407 = -1;
volatile int32_t t91 = -94;
int8_t x418 = 32;
volatile int8_t x419 = -1;
int32_t x426 = -3;
int8_t x428 = INT8_MIN;
volatile int32_t x429 = -8;
volatile int32_t t99 = -135427;


void f0(void) {
	static int8_t x1 = -12;
	int8_t x2 = -1;
	int16_t x4 = 7;
	int32_t t0 = -28;

	t0 = ((x1^(x2<x3))+x4);

	if (t0 != -4) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	volatile int16_t x6 = -1;
	uint16_t x7 = 1223U;
	volatile int8_t x8 = 2;
	volatile int64_t t1 = -1189626429611156067LL;

	t1 = ((x5^(x6<x7))+x8);

	if (t1 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 603911922763316307LLU;
	volatile int8_t x11 = 21;
	int16_t x12 = -15889;
	uint64_t t2 = 6LLU;

	t2 = ((x9^(x10<x11))+x12);

	if (t2 != 603911922763300417LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = UINT64_MAX;
	volatile int64_t x16 = 1617071908700LL;
	volatile int64_t t3 = -49LL;

	t3 = ((x13^(x14<x15))+x16);

	if (t3 != 1617071908572LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 23105900644630LL;
	uint64_t x20 = 538940108157225LLU;
	static uint64_t t4 = 451114838LLU;

	t4 = ((x17^(x18<x19))+x20);

	if (t4 != 562046008801855LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MAX;
	volatile int64_t x22 = -92733333LL;
	static int16_t x23 = INT16_MIN;
	volatile int16_t x24 = -256;
	int32_t t5 = 312354;

	t5 = ((x21^(x22<x23))+x24);

	if (t5 != -130) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = 1;
	int8_t x27 = INT8_MAX;
	static int8_t x28 = INT8_MIN;
	static uint32_t t6 = 6U;

	t6 = ((x25^(x26<x27))+x28);

	if (t6 != 4294967166U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x30 = -1;
	uint16_t x32 = 1U;

	t7 = ((x29^(x30<x31))+x32);

	if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int32_t x34 = 1011184894;
	int64_t x35 = INT64_MAX;
	volatile int32_t t8 = 39792303;

	t8 = ((x33^(x34<x35))+x36);

	if (t8 != 509) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int32_t x39 = -1;
	static uint8_t x40 = 50U;

	t9 = ((x37^(x38<x39))+x40);

	if (t9 != 49) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	static uint32_t x42 = UINT32_MAX;
	int32_t x43 = INT32_MAX;
	static volatile int16_t x44 = INT16_MIN;

	t10 = ((x41^(x42<x43))+x44);

	if (t10 != 2147450879) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static uint64_t x46 = UINT64_MAX;
	uint32_t x48 = 11057850U;
	static volatile int64_t t11 = -2234525619958339940LL;

	t11 = ((x45^(x46<x47))+x48);

	if (t11 != -9223372036843717958LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 1242U;
	int32_t x51 = INT32_MIN;
	volatile int8_t x52 = INT8_MIN;
	int32_t t12 = 147;

	t12 = ((x49^(x50<x51))+x52);

	if (t12 != 1114) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	uint32_t x54 = 912474866U;
	uint64_t x55 = 2487LLU;
	int8_t x56 = -40;
	static volatile int32_t t13 = 11868674;

	t13 = ((x53^(x54<x55))+x56);

	if (t13 != -168) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 29146LL;
	int64_t x59 = INT64_MIN;
	int64_t t14 = -25353LL;

	t14 = ((x57^(x58<x59))+x60);

	if (t14 != 179610082LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -175;
	uint32_t x62 = UINT32_MAX;
	volatile int16_t x63 = -466;
	int8_t x64 = 5;
	int32_t t15 = -503394;

	t15 = ((x61^(x62<x63))+x64);

	if (t15 != -170) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = -1;
	int64_t x70 = -39LL;
	int16_t x72 = INT16_MAX;
	int32_t t16 = -8331;

	t16 = ((x69^(x70<x71))+x72);

	if (t16 != 32766) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x76 = UINT64_MAX;
	uint64_t t17 = 116126LLU;

	t17 = ((x73^(x74<x75))+x76);

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	static uint8_t x78 = UINT8_MAX;
	int8_t x80 = -1;
	volatile int32_t t18 = 6435459;

	t18 = ((x77^(x78<x79))+x80);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = UINT8_MAX;
	int64_t x83 = 23348499627581256LL;
	uint8_t x84 = 0U;
	static volatile int32_t t19 = 8722450;

	t19 = ((x81^(x82<x83))+x84);

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 3518733138727487902LLU;
	volatile int8_t x86 = -59;
	volatile int8_t x87 = -1;
	int16_t x88 = INT16_MIN;

	t20 = ((x85^(x86<x87))+x88);

	if (t20 != 3518733138727455135LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 50434228438LLU;
	int64_t x90 = INT64_MAX;
	volatile int32_t x91 = -5047212;
	volatile uint32_t x92 = 1097988454U;
	static uint64_t t21 = 111219753151888LLU;

	t21 = ((x89^(x90<x91))+x92);

	if (t21 != 51532216892LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 2864551821802LL;
	uint64_t x95 = 99543LLU;
	int64_t x96 = -124630LL;
	int64_t t22 = -592144120144007LL;

	t22 = ((x93^(x94<x95))+x96);

	if (t22 != 2864551697173LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = 2;
	int16_t x99 = -1;
	int16_t x100 = INT16_MAX;
	static volatile uint32_t t23 = 935U;

	t23 = ((x97^(x98<x99))+x100);

	if (t23 != 32766U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	volatile uint8_t x103 = 10U;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t24 = -3836;

	t24 = ((x101^(x102<x103))+x104);

	if (t24 != -256) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x105 = 29U;
	int16_t x106 = -1;
	volatile int64_t t25 = -125LL;

	t25 = ((x105^(x106<x107))+x108);

	if (t25 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = -41;
	int16_t x111 = -1;
	static int8_t x112 = INT8_MIN;
	int32_t t26 = -233;

	t26 = ((x109^(x110<x111))+x112);

	if (t26 != 126) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -1;
	uint64_t x114 = UINT64_MAX;
	static int32_t x115 = INT32_MIN;
	static int16_t x116 = -151;

	t27 = ((x113^(x114<x115))+x116);

	if (t27 != -152) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x117 = UINT64_MAX;
	int8_t x118 = -12;
	volatile int32_t x119 = 2;
	int64_t x120 = -13406LL;
	uint64_t t28 = 3252512LLU;

	t28 = ((x117^(x118<x119))+x120);

	if (t28 != 18446744073709538208LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	static uint16_t x122 = 26U;
	uint8_t x124 = UINT8_MAX;
	static int32_t t29 = 942119315;

	t29 = ((x121^(x122<x123))+x124);

	if (t29 != -32512) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = INT16_MIN;
	uint8_t x126 = UINT8_MAX;
	int8_t x127 = -1;
	static int16_t x128 = -47;
	volatile int32_t t30 = -15686;

	t30 = ((x125^(x126<x127))+x128);

	if (t30 != -32815) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 161354U;
	int32_t x131 = -1;

	t31 = ((x129^(x130<x131))+x132);

	if (t31 != 128587U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x143 = 92U;
	volatile int64_t t32 = 13437011888143LL;

	t32 = ((x141^(x142<x143))+x144);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MAX;
	static uint16_t x148 = 46U;
	uint64_t t33 = 5741183093179LLU;

	t33 = ((x145^(x146<x147))+x148);

	if (t33 != 45LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x149 = 285127118432408LLU;
	volatile int16_t x151 = INT16_MAX;

	t34 = ((x149^(x150<x151))+x152);

	if (t34 != 285127118432616LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = 0;
	static uint16_t x154 = UINT16_MAX;
	int32_t t35 = 345361448;

	t35 = ((x153^(x154<x155))+x156);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x161 = -1;
	static int32_t x162 = -194;
	int16_t x163 = 10899;
	int64_t x164 = 2006767266074212LL;

	t36 = ((x161^(x162<x163))+x164);

	if (t36 != 2006767266074210LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x165 = INT16_MIN;
	static uint8_t x166 = UINT8_MAX;
	int64_t x167 = INT64_MAX;
	volatile int64_t x168 = INT64_MAX;

	t37 = ((x165^(x166<x167))+x168);

	if (t37 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x169 = -5;
	uint8_t x170 = 1U;
	static int8_t x171 = INT8_MIN;
	int32_t t38 = -75993;

	t38 = ((x169^(x170<x171))+x172);

	if (t38 != -32773) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x175 = INT16_MAX;
	int32_t x176 = INT32_MIN;

	t39 = ((x173^(x174<x175))+x176);

	if (t39 != -2147483282) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x177 = 1521616U;
	static int8_t x178 = -2;
	static uint8_t x179 = 6U;
	volatile uint32_t t40 = 114013U;

	t40 = ((x177^(x178<x179))+x180);

	if (t40 != 1521633U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x181 = UINT32_MAX;
	int16_t x182 = 721;
	volatile int16_t x183 = 0;
	uint64_t x184 = 2574LLU;
	uint64_t t41 = 29LLU;

	t41 = ((x181^(x182<x183))+x184);

	if (t41 != 4294969869LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x186 = UINT64_MAX;
	uint8_t x187 = 10U;
	int8_t x188 = INT8_MIN;
	volatile int32_t t42 = -3091518;

	t42 = ((x185^(x186<x187))+x188);

	if (t42 != -129) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x190 = 1U;
	uint64_t x191 = UINT64_MAX;
	static uint64_t x192 = 1418906LLU;

	t43 = ((x189^(x190<x191))+x192);

	if (t43 != 1420242LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x197 = 829535650057LLU;
	static uint64_t x198 = UINT64_MAX;
	uint8_t x199 = UINT8_MAX;
	uint64_t x200 = UINT64_MAX;
	uint64_t t44 = 945936LLU;

	t44 = ((x197^(x198<x199))+x200);

	if (t44 != 829535650056LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = 1336;
	int64_t x203 = 20593222326263318LL;

	t45 = ((x201^(x202<x203))+x204);

	if (t45 != -34767) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x205 = INT16_MIN;
	volatile uint8_t x206 = 1U;
	static uint16_t x208 = 23188U;
	volatile int32_t t46 = -4;

	t46 = ((x205^(x206<x207))+x208);

	if (t46 != -9579) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x210 = INT16_MIN;
	uint32_t x211 = 651959460U;
	int8_t x212 = -1;

	t47 = ((x209^(x210<x211))+x212);

	if (t47 != 18) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x213 = 25U;
	uint8_t x214 = 4U;
	static int32_t x215 = INT32_MAX;
	int64_t x216 = 137858759LL;
	int64_t t48 = -2690699LL;

	t48 = ((x213^(x214<x215))+x216);

	if (t48 != 137858783LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = 1;
	int32_t x218 = 0;
	int16_t x219 = -1;
	uint32_t x220 = 797359150U;
	volatile uint32_t t49 = 57324U;

	t49 = ((x217^(x218<x219))+x220);

	if (t49 != 797359151U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x222 = INT16_MIN;
	uint32_t x223 = 921448U;
	uint32_t x224 = 3190U;
	volatile uint32_t t50 = 3747U;

	t50 = ((x221^(x222<x223))+x224);

	if (t50 != 35957U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x226 = 3U;
	volatile uint8_t x227 = 32U;
	int8_t x228 = 52;
	uint64_t t51 = 310122LLU;

	t51 = ((x225^(x226<x227))+x228);

	if (t51 != 50LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = INT16_MAX;
	uint16_t x230 = UINT16_MAX;
	static uint16_t x231 = UINT16_MAX;
	int64_t x232 = INT64_MIN;
	static int64_t t52 = -993791LL;

	t52 = ((x229^(x230<x231))+x232);

	if (t52 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x237 = 11U;
	int64_t x238 = -617522575449LL;
	uint16_t x239 = UINT16_MAX;
	volatile int16_t x240 = 11;

	t53 = ((x237^(x238<x239))+x240);

	if (t53 != 21) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = 0;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = 80245201U;
	volatile int16_t x244 = -1;
	int32_t t54 = -601;

	t54 = ((x241^(x242<x243))+x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x245 = INT8_MAX;
	volatile int64_t x246 = 41120914LL;
	static int16_t x247 = -1;
	static uint32_t t55 = 19U;

	t55 = ((x245^(x246<x247))+x248);

	if (t55 != 126U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = -6LL;
	int64_t x250 = -1LL;
	int16_t x251 = 3012;
	volatile uint64_t x252 = UINT64_MAX;
	static volatile uint64_t t56 = 92727234LLU;

	t56 = ((x249^(x250<x251))+x252);

	if (t56 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = UINT32_MAX;
	int64_t x258 = -2959346789241300LL;
	int8_t x259 = INT8_MIN;
	int16_t x260 = -1;
	static uint32_t t57 = 174817U;

	t57 = ((x257^(x258<x259))+x260);

	if (t57 != 4294967293U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x261 = -266;
	int64_t x262 = 1118313586158LL;
	uint16_t x263 = 2U;
	volatile int32_t t58 = 3579;

	t58 = ((x261^(x262<x263))+x264);

	if (t58 != 32501) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = -1;
	static int8_t x266 = -1;
	static uint64_t x267 = 2430687665LLU;
	volatile int32_t t59 = 22099;

	t59 = ((x265^(x266<x267))+x268);

	if (t59 != 32766) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MIN;
	static volatile int16_t x271 = INT16_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t60 = 1724;

	t60 = ((x269^(x270<x271))+x272);

	if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x277 = 8535U;
	int16_t x280 = -6410;
	volatile int32_t t61 = -7;

	t61 = ((x277^(x278<x279))+x280);

	if (t61 != 2124) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = -1;
	volatile uint16_t x283 = UINT16_MAX;
	uint32_t t62 = 234307U;

	t62 = ((x281^(x282<x283))+x284);

	if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = UINT64_MAX;
	uint64_t x286 = 5536324LLU;
	static int8_t x287 = INT8_MIN;
	static uint16_t x288 = UINT16_MAX;
	volatile uint64_t t63 = 357385LLU;

	t63 = ((x285^(x286<x287))+x288);

	if (t63 != 65533LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = -1;
	int8_t x290 = INT8_MAX;
	uint8_t x292 = 3U;
	volatile int32_t t64 = 7941;

	t64 = ((x289^(x290<x291))+x292);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = 0;
	int16_t x296 = -176;
	static volatile int32_t t65 = 4598685;

	t65 = ((x293^(x294<x295))+x296);

	if (t65 != -175) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MAX;
	static uint64_t t66 = 1677539684386LLU;

	t66 = ((x297^(x298<x299))+x300);

	if (t66 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x302 = UINT16_MAX;
	uint8_t x303 = 62U;
	static uint8_t x304 = 5U;
	volatile int32_t t67 = 649615;

	t67 = ((x301^(x302<x303))+x304);

	if (t67 != -123) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x306 = -1;
	static int32_t t68 = -1;

	t68 = ((x305^(x306<x307))+x308);

	if (t68 != 94) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = UINT64_MAX;
	int8_t x310 = 1;
	int64_t x311 = 64451106153LL;
	static uint64_t t69 = 3664639403LLU;

	t69 = ((x309^(x310<x311))+x312);

	if (t69 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x314 = 47U;
	static int16_t x315 = 342;
	uint64_t x316 = 591383271LLU;
	volatile uint64_t t70 = 124508640150657LLU;

	t70 = ((x313^(x314<x315))+x316);

	if (t70 != 2738866917LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x318 = INT8_MIN;
	int8_t x319 = 5;
	int16_t x320 = -1;
	volatile uint32_t t71 = 6U;

	t71 = ((x317^(x318<x319))+x320);

	if (t71 != 9U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x321 = 1050852U;
	uint64_t x322 = UINT64_MAX;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = INT8_MAX;
	static volatile uint32_t t72 = 9157U;

	t72 = ((x321^(x322<x323))+x324);

	if (t72 != 1050979U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = 3;
	int64_t x326 = -1LL;
	volatile int16_t x327 = INT16_MIN;
	uint8_t x328 = 121U;

	t73 = ((x325^(x326<x327))+x328);

	if (t73 != 124) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	uint16_t x330 = 27U;
	static int32_t x331 = -77405;
	uint64_t x332 = UINT64_MAX;
	uint64_t t74 = 1314840LLU;

	t74 = ((x329^(x330<x331))+x332);

	if (t74 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x333 = UINT32_MAX;
	static volatile int64_t x334 = INT64_MIN;
	int8_t x335 = -1;
	static int32_t x336 = -1;

	t75 = ((x333^(x334<x335))+x336);

	if (t75 != 4294967293U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = -16;
	int64_t x339 = INT64_MAX;
	uint32_t x340 = 1054916000U;

	t76 = ((x337^(x338<x339))+x340);

	if (t76 != 1054915985U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x341 = 24853U;
	volatile int64_t x342 = INT64_MAX;
	uint64_t t77 = 82746452LLU;

	t77 = ((x341^(x342<x343))+x344);

	if (t77 != 24854LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = 0;
	uint8_t x346 = UINT8_MAX;
	int32_t x347 = -1;
	int16_t x348 = INT16_MIN;
	static int32_t t78 = 30144;

	t78 = ((x345^(x346<x347))+x348);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x349 = INT64_MIN;
	uint32_t x350 = 97975960U;
	static int16_t x351 = INT16_MAX;
	uint64_t x352 = UINT64_MAX;

	t79 = ((x349^(x350<x351))+x352);

	if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = 2215255612953109LL;
	static int32_t x359 = INT32_MIN;
	uint16_t x360 = 58U;
	volatile int64_t t80 = 67992247683LL;

	t80 = ((x357^(x358<x359))+x360);

	if (t80 != 2215255612953167LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = INT64_MIN;
	volatile int8_t x362 = INT8_MIN;
	volatile int64_t x363 = INT64_MIN;
	volatile int64_t t81 = INT64_MIN;

	t81 = ((x361^(x362<x363))+x364);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x368 = 6;
	uint64_t t82 = 300507802822928478LLU;

	t82 = ((x365^(x366<x367))+x368);

	if (t82 != 480903264390LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MAX;
	uint8_t x370 = 2U;
	int64_t x371 = INT64_MIN;
	volatile int64_t x372 = INT64_MIN;
	static volatile int64_t t83 = 2241LL;

	t83 = ((x369^(x370<x371))+x372);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x373 = INT8_MIN;
	int8_t x374 = 0;
	uint16_t x375 = 8542U;
	int16_t x376 = 3;

	t84 = ((x373^(x374<x375))+x376);

	if (t84 != -124) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x377 = 21254U;
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MIN;

	t85 = ((x377^(x378<x379))+x380);

	if (t85 != -2147462393) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x381 = 0U;
	static uint16_t x382 = UINT16_MAX;
	int64_t x383 = -857671769940661LL;
	static volatile uint8_t x384 = 17U;
	volatile int32_t t86 = -2007;

	t86 = ((x381^(x382<x383))+x384);

	if (t86 != 17) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x393 = 5118U;
	int16_t x394 = INT16_MAX;
	static volatile int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MAX;
	static volatile int32_t t87 = -291;

	t87 = ((x393^(x394<x395))+x396);

	if (t87 != 5245) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x397 = INT16_MIN;
	uint64_t x399 = UINT64_MAX;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t88 = 238824;

	t88 = ((x397^(x398<x399))+x400);

	if (t88 != -32895) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x403 = 6977778LLU;
	volatile int32_t x404 = -1;
	volatile int32_t t89 = -93382364;

	t89 = ((x401^(x402<x403))+x404);

	if (t89 != -14916694) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x406 = 112530610U;
	uint64_t x408 = 26LLU;
	static volatile uint64_t t90 = 47509868017259LLU;

	t90 = ((x405^(x406<x407))+x408);

	if (t90 != 9223372036854775835LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x409 = -9514304;
	volatile uint32_t x410 = 243888U;
	volatile int16_t x411 = -3193;
	static int16_t x412 = INT16_MIN;

	t91 = ((x409^(x410<x411))+x412);

	if (t91 != -9547071) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x417 = -1LL;
	int32_t x420 = INT32_MIN;
	int64_t t92 = -39650LL;

	t92 = ((x417^(x418<x419))+x420);

	if (t92 != -2147483649LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = 1;
	uint32_t x422 = 36U;
	volatile uint16_t x423 = 49U;
	volatile uint16_t x424 = 23U;
	int32_t t93 = -1;

	t93 = ((x421^(x422<x423))+x424);

	if (t93 != 23) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x425 = 64199270U;
	int8_t x427 = -51;
	static volatile uint32_t t94 = 31057032U;

	t94 = ((x425^(x426<x427))+x428);

	if (t94 != 64199142U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x430 = -1;
	int32_t x431 = INT32_MAX;
	uint32_t x432 = 135795U;
	uint32_t t95 = 88299093U;

	t95 = ((x429^(x430<x431))+x432);

	if (t95 != 135788U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x433 = 5321U;
	volatile uint8_t x434 = 5U;
	uint8_t x435 = 23U;
	int16_t x436 = 0;
	volatile int32_t t96 = 7919;

	t96 = ((x433^(x434<x435))+x436);

	if (t96 != 5320) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x437 = -1;
	int32_t x438 = INT32_MAX;
	int16_t x439 = INT16_MIN;
	int32_t x440 = -1;
	volatile int32_t t97 = 61482;

	t97 = ((x437^(x438<x439))+x440);

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x441 = 17;
	volatile uint32_t x442 = 25176995U;
	volatile int64_t x443 = INT64_MIN;
	volatile uint8_t x444 = UINT8_MAX;
	int32_t t98 = -417872;

	t98 = ((x441^(x442<x443))+x444);

	if (t98 != 272) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x449 = INT8_MAX;
	static volatile int32_t x450 = INT32_MIN;
	static int32_t x451 = INT32_MIN;
	volatile int16_t x452 = INT16_MIN;

	t99 = ((x449^(x450<x451))+x452);

	if (t99 != -32641) { NG(); } else { ; }
	
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

