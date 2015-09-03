#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = 245663685685640LLU;
int64_t x12 = 3903429849267LL;
static int8_t x29 = INT8_MIN;
uint8_t x30 = UINT8_MAX;
uint8_t x31 = 4U;
static volatile int32_t t4 = -16;
int16_t x34 = -4;
int8_t x36 = INT8_MIN;
uint8_t x37 = UINT8_MAX;
volatile int32_t t6 = -106881039;
uint16_t x45 = UINT16_MAX;
volatile int8_t x46 = INT8_MAX;
int16_t x48 = INT16_MIN;
int32_t t7 = -121535;
int16_t x55 = 300;
int8_t x56 = -1;
int32_t t9 = -195418;
uint64_t x63 = UINT64_MAX;
volatile int16_t x78 = INT16_MAX;
uint64_t t15 = 368247919LLU;
uint8_t x90 = 6U;
int64_t x100 = -1LL;
static int16_t x105 = -3;
uint8_t x115 = UINT8_MAX;
int32_t t22 = -7335145;
int64_t x122 = INT64_MIN;
int32_t x125 = -1;
uint64_t x134 = 8118303LLU;
int64_t x135 = 189777177159LL;
uint16_t x143 = 3392U;
volatile int8_t x146 = INT8_MAX;
int16_t x151 = 495;
int32_t x153 = 1;
int32_t x164 = -1;
int32_t x175 = INT32_MIN;
int16_t x178 = INT16_MIN;
static volatile int32_t t35 = 19454;
int32_t x183 = -1;
uint32_t x184 = UINT32_MAX;
int64_t x185 = -278256856843416LL;
static int8_t x187 = INT8_MAX;
int64_t x189 = INT64_MIN;
uint64_t x195 = UINT64_MAX;
static volatile int32_t x197 = INT32_MAX;
int32_t x199 = -688108;
volatile uint16_t x200 = UINT16_MAX;
volatile uint64_t x202 = 440LLU;
uint32_t x203 = UINT32_MAX;
uint16_t x207 = 0U;
int64_t x211 = -1LL;
uint64_t x214 = 0LLU;
uint8_t x223 = 3U;
uint64_t x230 = 2733386498063LLU;
volatile uint64_t t46 = 169110621244330276LLU;
int32_t x245 = INT32_MIN;
uint32_t x248 = 76705U;
volatile uint32_t t48 = 5519090U;
int32_t x249 = INT32_MIN;
uint32_t x255 = 13298233U;
uint32_t t50 = 104878738U;
uint16_t x261 = 51U;
uint8_t x262 = 0U;
volatile uint16_t x266 = UINT16_MAX;
static int32_t t52 = 64246908;
static int32_t x278 = 109228741;
int32_t x281 = INT32_MIN;
static int64_t t56 = 888LL;
uint16_t x286 = 1671U;
volatile uint16_t x290 = 5576U;
uint32_t t58 = 209U;
int8_t x302 = 6;
uint64_t x313 = 28LLU;
uint16_t x318 = UINT16_MAX;
int32_t x319 = INT32_MAX;
int16_t x322 = -6562;
volatile int16_t x341 = INT16_MIN;
volatile uint64_t t69 = 613856592020LLU;
uint64_t x360 = UINT64_MAX;
uint32_t x363 = 264176792U;
int8_t x381 = INT8_MIN;
int32_t x386 = -8683;
uint32_t t77 = 851536518U;
volatile uint64_t x395 = 324103386155LLU;
uint32_t x396 = 39244U;
uint16_t x397 = 58U;
uint32_t x400 = UINT32_MAX;
uint32_t x401 = 7953485U;
int64_t x417 = INT64_MIN;
static volatile int32_t x418 = -1689;
static volatile int16_t x426 = 9937;
int8_t x428 = -2;
volatile uint32_t t85 = 1U;
uint16_t x433 = 63U;
static volatile uint32_t t87 = 10865744U;
static uint16_t x463 = 3299U;
int64_t x478 = -1LL;
uint64_t x479 = 11167811LLU;
static int16_t x480 = INT16_MAX;
static volatile uint8_t x485 = 51U;
int32_t x495 = INT32_MAX;
volatile int32_t t98 = -3674060;
uint8_t x501 = 69U;


void f0(void) {
	uint64_t x1 = 573709425016859LLU;
	volatile uint32_t x2 = UINT32_MAX;
	int64_t x3 = 11379LL;
	int32_t x4 = INT32_MAX;
	uint64_t t0 = 33531929598LLU;

	t0 = ((x1^x2)-(x3-x4));

	if (t0 != 573714710418288LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x9 = 44U;
	uint32_t x11 = 8641U;
	uint64_t t1 = 209578987141117262LLU;

	t1 = ((x9^x10)-(x11-x12));

	if (t1 != 249567115526294LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = 11;
	int32_t x22 = -1138775;
	uint64_t x23 = 6813460260591LLU;
	static uint8_t x24 = 0U;
	volatile uint64_t t2 = 1LLU;

	t2 = ((x21^x22)-(x23-x24));

	if (t2 != 18446737260248152243LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = INT32_MIN;
	uint32_t x26 = 16229833U;
	int32_t x27 = -1;
	int16_t x28 = 0;
	volatile uint32_t t3 = 822900586U;

	t3 = ((x25^x26)-(x27-x28));

	if (t3 != 2163713482U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x32 = 14159U;

	t4 = ((x29^x30)-(x31-x32));

	if (t4 != 14026) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = -6;
	static int64_t x35 = -1LL;
	int64_t t5 = 48251031LL;

	t5 = ((x33^x34)-(x35-x36));

	if (t5 != -121LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x38 = -1;
	int8_t x39 = -1;
	volatile int16_t x40 = INT16_MAX;

	t6 = ((x37^x38)-(x39-x40));

	if (t6 != 32512) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x47 = INT16_MIN;

	t7 = ((x45^x46)-(x47-x48));

	if (t7 != 65408) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = INT64_MIN;
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = 3;
	static volatile uint64_t x52 = 154946LLU;
	volatile uint64_t t8 = 28LLU;

	t8 = ((x49^x50)-(x51-x52));

	if (t8 != 9223372036854996286LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = 39U;

	t9 = ((x53^x54)-(x55-x56));

	if (t9 != -33030) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x61 = UINT8_MAX;
	uint64_t x62 = 2780694LLU;
	int8_t x64 = -25;
	volatile uint64_t t10 = 9686063069LLU;

	t10 = ((x61^x62)-(x63-x64));

	if (t10 != 2780881LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = 1U;
	uint8_t x66 = 11U;
	static int8_t x67 = INT8_MIN;
	volatile int32_t x68 = -44908386;
	volatile int32_t t11 = -27260376;

	t11 = ((x65^x66)-(x67-x68));

	if (t11 != -44908248) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = -1;
	int8_t x70 = -30;
	int64_t x71 = INT64_MAX;
	uint8_t x72 = 0U;
	int64_t t12 = 40052179LL;

	t12 = ((x69^x70)-(x71-x72));

	if (t12 != -9223372036854775778LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = 101157013LLU;
	volatile uint16_t x74 = 82U;
	volatile uint32_t x75 = UINT32_MAX;
	int8_t x76 = 1;
	volatile uint64_t t13 = 6LLU;

	t13 = ((x73^x74)-(x75-x76));

	if (t13 != 18446744069515741385LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = -10146;
	uint16_t x79 = UINT16_MAX;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t14 = 1018;

	t14 = ((x77^x78)-(x79-x80));

	if (t14 != -88286) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x81 = 5;
	static uint64_t x82 = 237212403484737LLU;
	static uint16_t x83 = 1664U;
	int64_t x84 = -1LL;

	t15 = ((x81^x82)-(x83-x84));

	if (t15 != 237212403483075LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = 140107;
	int8_t x91 = INT8_MAX;
	static int16_t x92 = INT16_MIN;
	volatile int32_t t16 = -264064;

	t16 = ((x89^x90)-(x91-x92));

	if (t16 != 107214) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x97 = UINT8_MAX;
	int16_t x98 = 1698;
	int64_t x99 = -1LL;
	volatile int64_t t17 = -918LL;

	t17 = ((x97^x98)-(x99-x100));

	if (t17 != 1629LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = -36;
	int16_t x102 = INT16_MIN;
	static volatile int16_t x103 = -27;
	uint8_t x104 = 67U;
	int32_t t18 = 1;

	t18 = ((x101^x102)-(x103-x104));

	if (t18 != 32826) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x106 = INT32_MAX;
	int64_t x107 = INT64_MAX;
	int64_t x108 = 112508088100LL;
	int64_t t19 = 272LL;

	t19 = ((x105^x106)-(x107-x108));

	if (t19 != -9223371926494171353LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = 264838;
	static volatile int8_t x110 = INT8_MAX;
	uint8_t x111 = 3U;
	int64_t x112 = -5918129970543LL;
	volatile int64_t t20 = -9485672240759LL;

	t20 = ((x109^x110)-(x111-x112));

	if (t20 != -5918129705593LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = INT8_MIN;
	static uint16_t x114 = 6985U;
	volatile int8_t x116 = INT8_MAX;
	static volatile int32_t t21 = -277;

	t21 = ((x113^x114)-(x115-x116));

	if (t21 != -7095) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x117 = -1;
	static volatile int32_t x118 = 1281;
	int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MAX;

	t22 = ((x117^x118)-(x119-x120));

	if (t22 != 31613) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = INT32_MIN;
	int64_t x123 = -1LL;
	uint32_t x124 = 31133U;
	int64_t t23 = -6078LL;

	t23 = ((x121^x122)-(x123-x124));

	if (t23 != 9223372034707323294LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x126 = 7;
	int64_t x127 = -32911610383LL;
	int8_t x128 = INT8_MIN;
	volatile int64_t t24 = -3150443822LL;

	t24 = ((x125^x126)-(x127-x128));

	if (t24 != 32911610247LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MAX;
	volatile int16_t x131 = INT16_MAX;
	int64_t x132 = INT64_MAX;
	volatile int64_t t25 = 129661550LL;

	t25 = ((x129^x130)-(x131-x132));

	if (t25 != -32641LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = 10190739362LL;
	uint8_t x136 = 53U;
	uint64_t t26 = 38444711321624LLU;

	t26 = ((x133^x134)-(x135-x136));

	if (t26 != 18446743894117305771LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x141 = UINT16_MAX;
	volatile int16_t x142 = INT16_MAX;
	int64_t x144 = 17569LL;
	int64_t t27 = 201942858357222794LL;

	t27 = ((x141^x142)-(x143-x144));

	if (t27 != 46945LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x147 = 850893000LLU;
	uint32_t x148 = 5258225U;
	volatile uint64_t t28 = 3573LLU;

	t28 = ((x145^x146)-(x147-x148));

	if (t28 != 18446744072863916840LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x149 = INT8_MIN;
	static uint8_t x150 = 111U;
	int16_t x152 = 216;
	volatile int32_t t29 = 754040;

	t29 = ((x149^x150)-(x151-x152));

	if (t29 != -296) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x154 = -203;
	int16_t x155 = 126;
	int32_t x156 = INT32_MAX;
	volatile int32_t t30 = 103137141;

	t30 = ((x153^x154)-(x155-x156));

	if (t30 != 2147483317) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = -1LL;
	int16_t x162 = -1986;
	uint16_t x163 = 243U;
	static int64_t t31 = 41LL;

	t31 = ((x161^x162)-(x163-x164));

	if (t31 != 1741LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x165 = 239306LL;
	volatile int32_t x166 = -46148262;
	volatile int16_t x167 = INT16_MIN;
	static uint8_t x168 = 106U;
	int64_t t32 = 22284899139066LL;

	t32 = ((x165^x166)-(x167-x168));

	if (t32 != -46337030LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x169 = -1LL;
	uint16_t x170 = UINT16_MAX;
	int16_t x171 = -1317;
	int8_t x172 = 54;
	int64_t t33 = -3LL;

	t33 = ((x169^x170)-(x171-x172));

	if (t33 != -64165LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = -1LL;
	volatile int16_t x174 = INT16_MAX;
	int64_t x176 = -1LL;
	int64_t t34 = -12789460584603882LL;

	t34 = ((x173^x174)-(x175-x176));

	if (t34 != 2147450879LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x177 = 29537U;
	volatile int16_t x179 = INT16_MIN;
	volatile int16_t x180 = INT16_MIN;

	t35 = ((x177^x178)-(x179-x180));

	if (t35 != -3231) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x181 = 24;
	static volatile int16_t x182 = 30;
	uint32_t t36 = 2095U;

	t36 = ((x181^x182)-(x183-x184));

	if (t36 != 6U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x186 = INT32_MIN;
	int64_t x188 = -9554942287LL;
	int64_t t37 = 36200187LL;

	t37 = ((x185^x186)-(x187-x188));

	if (t37 != 278247533142426LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x190 = INT32_MIN;
	uint32_t x191 = UINT32_MAX;
	static int8_t x192 = 13;
	volatile int64_t t38 = 46617495LL;

	t38 = ((x189^x190)-(x191-x192));

	if (t38 != 9223372030412324878LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	int16_t x196 = INT16_MIN;
	static volatile uint64_t t39 = 28048063120LLU;

	t39 = ((x193^x194)-(x195-x196));

	if (t39 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x198 = INT64_MAX;
	volatile int64_t t40 = 895674369LL;

	t40 = ((x197^x198)-(x199-x200));

	if (t40 != 9223372034708045803LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = -1;
	int32_t x204 = -263630358;
	volatile uint64_t t41 = 8839LLU;

	t41 = ((x201^x202)-(x203-x204));

	if (t41 != 18446744073445920818LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x205 = INT32_MIN;
	static int16_t x206 = INT16_MIN;
	volatile int8_t x208 = -1;
	int32_t t42 = 88362;

	t42 = ((x205^x206)-(x207-x208));

	if (t42 != 2147450879) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x209 = 1;
	uint32_t x210 = 80172326U;
	int32_t x212 = INT32_MAX;
	volatile int64_t t43 = 2048044248051790261LL;

	t43 = ((x209^x210)-(x211-x212));

	if (t43 != 2227655975LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x213 = UINT64_MAX;
	volatile int64_t x215 = INT64_MAX;
	uint8_t x216 = 3U;
	uint64_t t44 = 1355LLU;

	t44 = ((x213^x214)-(x215-x216));

	if (t44 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x221 = INT8_MAX;
	uint8_t x222 = 8U;
	int8_t x224 = INT8_MAX;
	volatile int32_t t45 = 2;

	t45 = ((x221^x222)-(x223-x224));

	if (t45 != 243) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x229 = 50573309U;
	int32_t x231 = 2926;
	int8_t x232 = -1;

	t46 = ((x229^x230)-(x231-x232));

	if (t46 != 2733369959555LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x233 = INT64_MAX;
	int16_t x234 = INT16_MAX;
	static volatile int16_t x235 = INT16_MIN;
	int64_t x236 = -5324340646695LL;
	int64_t t47 = -2578870502519LL;

	t47 = ((x233^x234)-(x235-x236));

	if (t47 != 9223366712514129113LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;

	t48 = ((x245^x246)-(x247-x248));

	if (t48 != 2147592993U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = 271487458253032LLU;
	int8_t x252 = -3;
	uint64_t t49 = 5498372217LLU;

	t49 = ((x249^x250)-(x251-x252));

	if (t49 != 18446472588398782228LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x253 = 272U;
	int8_t x254 = INT8_MIN;
	uint32_t x256 = 343772U;

	t50 = ((x253^x254)-(x255-x256));

	if (t50 != 4282012467U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x263 = INT32_MIN;
	volatile uint64_t x264 = 2561011LLU;
	uint64_t t51 = 75021325LLU;

	t51 = ((x261^x262)-(x263-x264));

	if (t51 != 2150044710LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x265 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;

	t52 = ((x265^x266)-(x267-x268));

	if (t52 != -32769) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x269 = INT32_MIN;
	static int32_t x270 = 85651;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = 59099LL;
	volatile int64_t t53 = -252LL;

	t53 = ((x269^x270)-(x271-x272));

	if (t53 != -2147404433LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MIN;
	volatile uint8_t x275 = UINT8_MAX;
	uint16_t x276 = 15969U;
	static volatile int64_t t54 = 5429966LL;

	t54 = ((x273^x274)-(x275-x276));

	if (t54 != 9223372034707307874LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x277 = 494U;
	volatile int32_t x279 = -721;
	uint64_t x280 = UINT64_MAX;
	uint64_t t55 = 5696412574LLU;

	t55 = ((x277^x278)-(x279-x280));

	if (t55 != 109229563LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x282 = INT64_MIN;
	uint16_t x283 = 26U;
	int8_t x284 = INT8_MIN;

	t56 = ((x281^x282)-(x283-x284));

	if (t56 != 9223372034707292006LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x285 = INT8_MAX;
	int16_t x287 = INT16_MIN;
	volatile int64_t x288 = 39LL;
	int64_t t57 = -1303295871214632LL;

	t57 = ((x285^x286)-(x287-x288));

	if (t57 != 34591LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x289 = 462U;
	static uint32_t x291 = 14783U;
	int32_t x292 = INT32_MIN;

	t58 = ((x289^x290)-(x291-x292));

	if (t58 != 2147473991U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = -1;
	int32_t x294 = -1;
	int32_t x295 = INT32_MAX;
	volatile uint32_t x296 = 2887425U;
	uint32_t t59 = 51197U;

	t59 = ((x293^x294)-(x295-x296));

	if (t59 != 2150371074U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x297 = 372LLU;
	static uint32_t x298 = UINT32_MAX;
	int32_t x299 = 1;
	uint32_t x300 = 97U;
	uint64_t t60 = 96282977880034930LLU;

	t60 = ((x297^x298)-(x299-x300));

	if (t60 != 18446744073709551339LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x301 = 10399676LL;
	int64_t x303 = 3359LL;
	static int16_t x304 = -1;
	volatile int64_t t61 = -1LL;

	t61 = ((x301^x302)-(x303-x304));

	if (t61 != 10396314LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x305 = 1189596470914466LLU;
	int32_t x306 = -5997;
	volatile int8_t x307 = INT8_MAX;
	uint32_t x308 = 0U;
	uint64_t t62 = 4288388LLU;

	t62 = ((x305^x306)-(x307-x308));

	if (t62 != 18445554477238633650LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x314 = INT8_MAX;
	uint64_t x315 = 1235LLU;
	volatile int64_t x316 = -805487423556510LL;
	volatile uint64_t t63 = 78022LLU;

	t63 = ((x313^x314)-(x315-x316));

	if (t63 != 18445938586285993970LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x317 = UINT8_MAX;
	uint32_t x320 = 15355U;
	uint32_t t64 = 1915U;

	t64 = ((x317^x318)-(x319-x320));

	if (t64 != 2147564284U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x321 = -9213LL;
	uint16_t x323 = 56U;
	int16_t x324 = INT16_MIN;
	int64_t t65 = -3566787804LL;

	t65 = ((x321^x322)-(x323-x324));

	if (t65 != -17883LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = 138LL;
	int16_t x330 = INT16_MAX;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = 0U;
	volatile int64_t t66 = 3969796312LL;

	t66 = ((x329^x330)-(x331-x332));

	if (t66 != 65397LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x337 = -892373167823847LL;
	int32_t x338 = INT32_MIN;
	int64_t x339 = -1LL;
	uint64_t x340 = 1107242259671028LLU;
	uint64_t t67 = 430625LLU;

	t67 = ((x337^x338)-(x339-x340));

	if (t67 != 1999614834412558LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x342 = 38917174528976LLU;
	int32_t x343 = INT32_MIN;
	int8_t x344 = -1;
	uint64_t t68 = 6509244490619925LLU;

	t68 = ((x341^x342)-(x343-x344));

	if (t68 != 18446705158682479567LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x345 = UINT16_MAX;
	volatile int32_t x346 = 2374;
	uint64_t x347 = 2229656895288866092LLU;
	static uint32_t x348 = UINT32_MAX;

	t69 = ((x345^x346)-(x347-x348));

	if (t69 != 16217087182715715980LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x349 = 34LLU;
	volatile int8_t x350 = -1;
	uint64_t x351 = 1832974498LLU;
	static int8_t x352 = INT8_MIN;
	static uint64_t t70 = 3032LLU;

	t70 = ((x349^x350)-(x351-x352));

	if (t70 != 18446744071876576955LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x353 = -1;
	static volatile uint8_t x354 = UINT8_MAX;
	int16_t x355 = INT16_MAX;
	int32_t x356 = -118616;
	int32_t t71 = 1;

	t71 = ((x353^x354)-(x355-x356));

	if (t71 != -151639) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x357 = -1LL;
	int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MAX;
	volatile uint64_t t72 = 559570449LLU;

	t72 = ((x357^x358)-(x359-x360));

	if (t72 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x361 = 28U;
	uint8_t x362 = 70U;
	uint8_t x364 = 32U;
	uint32_t t73 = 14546527U;

	t73 = ((x361^x362)-(x363-x364));

	if (t73 != 4030790626U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x365 = 12049;
	uint8_t x366 = UINT8_MAX;
	volatile int16_t x367 = -1;
	int8_t x368 = INT8_MIN;
	static int32_t t74 = -30027;

	t74 = ((x365^x366)-(x367-x368));

	if (t74 != 12143) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x382 = INT8_MIN;
	uint64_t x383 = UINT64_MAX;
	int16_t x384 = INT16_MAX;
	uint64_t t75 = 185249LLU;

	t75 = ((x381^x382)-(x383-x384));

	if (t75 != 32768LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x385 = -1;
	int64_t x387 = INT64_MIN;
	int32_t x388 = -41845;
	volatile int64_t t76 = 4LL;

	t76 = ((x385^x386)-(x387-x388));

	if (t76 != 9223372036854742645LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x389 = -1;
	volatile uint32_t x390 = UINT32_MAX;
	int8_t x391 = INT8_MAX;
	int32_t x392 = -224255;

	t77 = ((x389^x390)-(x391-x392));

	if (t77 != 4294742914U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = -3323768087359028689LL;
	uint64_t t78 = 924208264LLU;

	t78 = ((x393^x394)-(x395-x396));

	if (t78 != 3323767763255681744LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x398 = INT8_MAX;
	static volatile int16_t x399 = -2;
	uint32_t t79 = 1U;

	t79 = ((x397^x398)-(x399-x400));

	if (t79 != 70U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x402 = 2U;
	volatile uint64_t x403 = 60623610673260949LLU;
	static int64_t x404 = -1LL;
	volatile uint64_t t80 = 35193358300134769LLU;

	t80 = ((x401^x402)-(x403-x404));

	if (t80 != 18386120463044244153LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x405 = INT8_MIN;
	uint64_t x406 = 266992027634799LLU;
	static int32_t x407 = -45;
	int8_t x408 = INT8_MIN;
	uint64_t t81 = 254251160506604540LLU;

	t81 = ((x405^x406)-(x407-x408));

	if (t81 != 18446477081681916828LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x409 = -1;
	int8_t x410 = -30;
	static volatile uint32_t x411 = 0U;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t82 = 2308941900730916LLU;

	t82 = ((x409^x410)-(x411-x412));

	if (t82 != 28LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x419 = -1;
	int16_t x420 = 8;
	volatile int64_t t83 = 834164324LL;

	t83 = ((x417^x418)-(x419-x420));

	if (t83 != 9223372036854774128LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x421 = 0U;
	int32_t x422 = INT32_MIN;
	int64_t x423 = INT64_MIN;
	uint64_t x424 = 5459222379LLU;
	volatile uint64_t t84 = 23833636452219874LLU;

	t84 = ((x421^x422)-(x423-x424));

	if (t84 != 9223372040166514539LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x425 = 23U;
	uint32_t x427 = 153U;

	t85 = ((x425^x426)-(x427-x428));

	if (t85 != 9771U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x429 = UINT8_MAX;
	int64_t x430 = -1LL;
	static int64_t x431 = INT64_MIN;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t86 = 6014310483LLU;

	t86 = ((x429^x430)-(x431-x432));

	if (t86 != 9223372036854775551LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x434 = INT32_MIN;
	uint32_t x435 = UINT32_MAX;
	int8_t x436 = INT8_MIN;

	t87 = ((x433^x434)-(x435-x436));

	if (t87 != 2147483584U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x445 = -1;
	uint8_t x446 = 107U;
	int8_t x447 = -46;
	static int16_t x448 = INT16_MIN;
	int32_t t88 = 524274184;

	t88 = ((x445^x446)-(x447-x448));

	if (t88 != -32830) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x453 = 3764LLU;
	volatile int32_t x454 = -1;
	int8_t x455 = INT8_MIN;
	int32_t x456 = 0;
	volatile uint64_t t89 = 108711LLU;

	t89 = ((x453^x454)-(x455-x456));

	if (t89 != 18446744073709547979LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x457 = INT64_MIN;
	volatile uint64_t x458 = 4823761023LLU;
	volatile int64_t x459 = INT64_MIN;
	static int32_t x460 = 0;
	uint64_t t90 = 601132LLU;

	t90 = ((x457^x458)-(x459-x460));

	if (t90 != 4823761023LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int8_t x464 = -8;
	volatile int32_t t91 = 1;

	t91 = ((x461^x462)-(x463-x464));

	if (t91 != 29460) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x465 = 230834236695LLU;
	uint8_t x466 = UINT8_MAX;
	static int16_t x467 = INT16_MIN;
	volatile int16_t x468 = 621;
	volatile uint64_t t92 = 4099849836LLU;

	t92 = ((x465^x466)-(x467-x468));

	if (t92 != 230834270293LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x473 = INT16_MIN;
	int8_t x474 = 34;
	static int8_t x475 = INT8_MAX;
	int8_t x476 = INT8_MAX;
	int32_t t93 = 81;

	t93 = ((x473^x474)-(x475-x476));

	if (t93 != -32734) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x477 = INT64_MIN;
	volatile uint64_t t94 = 6LLU;

	t94 = ((x477^x478)-(x479-x480));

	if (t94 != 9223372036843640763LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x486 = 6;
	int32_t x487 = -5719;
	static int32_t x488 = INT32_MIN;
	int32_t t95 = 54357886;

	t95 = ((x485^x486)-(x487-x488));

	if (t95 != -2147477876) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x489 = INT8_MIN;
	static uint16_t x490 = 464U;
	uint16_t x491 = UINT16_MAX;
	volatile int16_t x492 = -1;
	int32_t t96 = 7816389;

	t96 = ((x489^x490)-(x491-x492));

	if (t96 != -65968) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x493 = -1LL;
	int64_t x494 = INT64_MIN;
	int32_t x496 = INT32_MAX;
	volatile int64_t t97 = INT64_MAX;

	t97 = ((x493^x494)-(x495-x496));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x497 = -1;
	int8_t x498 = -1;
	static uint8_t x499 = 8U;
	int8_t x500 = -1;

	t98 = ((x497^x498)-(x499-x500));

	if (t98 != -9) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x502 = INT32_MIN;
	int8_t x503 = -1;
	volatile uint8_t x504 = 1U;
	int32_t t99 = 1487136;

	t99 = ((x501^x502)-(x503-x504));

	if (t99 != -2147483577) { NG(); } else { ; }
	
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

