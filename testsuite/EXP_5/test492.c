#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x5 = UINT32_MAX;
volatile uint32_t t1 = 121323U;
int8_t x11 = INT8_MAX;
int8_t x13 = INT8_MIN;
int64_t x44 = -1LL;
int64_t t7 = 54800244886884LL;
int32_t t8 = -107;
uint16_t x65 = UINT16_MAX;
volatile uint64_t x71 = 26264623834LLU;
volatile uint32_t x73 = 259097U;
int16_t x77 = INT16_MIN;
volatile int64_t t15 = -6341538LL;
int8_t x89 = -1;
static int8_t x91 = 1;
static int8_t x93 = -1;
static int16_t x102 = INT16_MIN;
static int32_t x103 = 775;
uint32_t x111 = 2769U;
uint32_t t19 = 1U;
static int16_t x113 = -1;
volatile int64_t x117 = 2376720827LL;
static uint64_t x118 = 1555703633LLU;
volatile uint64_t t21 = 20559884LLU;
int16_t x126 = INT16_MAX;
volatile int32_t t24 = -2;
volatile int64_t t25 = -5552898697526992LL;
uint16_t x142 = 5332U;
int8_t x150 = INT8_MIN;
static volatile int16_t x151 = -1;
volatile int64_t t27 = -63LL;
uint64_t x167 = 3322317781591787LLU;
uint8_t x171 = 0U;
int16_t x172 = -1;
uint32_t x174 = UINT32_MAX;
int32_t x178 = -1;
int8_t x186 = -1;
int64_t x188 = 2247496552574133LL;
static uint64_t x196 = UINT64_MAX;
int16_t x197 = INT16_MAX;
volatile int16_t x203 = INT16_MAX;
volatile int64_t t38 = 8554789802051775LL;
int8_t x217 = INT8_MIN;
int64_t x233 = -331LL;
int32_t x238 = 1832;
static int16_t x245 = -1;
uint32_t x259 = 3U;
int64_t t47 = 22940540LL;
int64_t x261 = 95226LL;
static uint8_t x263 = UINT8_MAX;
uint8_t x264 = 68U;
int8_t x269 = INT8_MIN;
int64_t x270 = -17705579907727338LL;
int16_t x271 = -1;
uint16_t x280 = UINT16_MAX;
static volatile int32_t t52 = 6683492;
volatile int32_t x281 = -1;
static int64_t x283 = -188530LL;
volatile int16_t x285 = -1;
uint16_t x287 = 28U;
int32_t x289 = 4;
uint8_t x295 = 9U;
uint32_t x297 = UINT32_MAX;
static int32_t t59 = -17368892;
volatile int64_t x315 = -1LL;
volatile uint8_t x316 = 41U;
int64_t t61 = -1LL;
uint8_t x318 = 1U;
static int8_t x331 = INT8_MAX;
uint64_t x340 = 6860165LLU;
uint64_t x346 = UINT64_MAX;
int8_t x351 = -1;
volatile int8_t x367 = -46;
int64_t x373 = -1LL;
int8_t x375 = -1;
uint64_t t73 = 1510181LLU;
int8_t x384 = INT8_MIN;
int64_t x385 = -950466LL;
uint64_t x386 = UINT64_MAX;
int32_t x390 = 1299;
uint8_t x394 = UINT8_MAX;
volatile int8_t x405 = 14;
volatile uint8_t x413 = UINT8_MAX;
uint8_t x425 = 28U;
int64_t t83 = 1296872129341779934LL;
uint16_t x435 = UINT16_MAX;
int64_t t85 = INT64_MIN;
uint8_t x444 = 57U;
uint8_t x446 = 0U;
uint8_t x451 = 43U;
int64_t x460 = -5266517303LL;
int64_t x464 = -1LL;
volatile uint32_t x466 = UINT32_MAX;
uint32_t x467 = 3U;
uint64_t t92 = 14817043LLU;
int8_t x476 = 2;
int8_t x481 = INT8_MIN;
int32_t x487 = 6735613;
int8_t x488 = 3;
uint8_t x492 = 11U;
int32_t x504 = -31187995;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static uint8_t x2 = 36U;
	int32_t x3 = 955;
	volatile int64_t x4 = INT64_MAX;
	int64_t t0 = 9900873591960210LL;

	t0 = (x1&((x2*x3)|x4));

	if (t0 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = INT8_MAX;
	uint8_t x7 = 106U;
	static int16_t x8 = INT16_MIN;

	t1 = (x5&((x6*x7)|x8));

	if (t1 != 4294947990U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MIN;
	uint8_t x12 = 7U;
	static int32_t t2 = -7490667;

	t2 = (x9&((x10*x11)|x12));

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MAX;
	static int16_t x15 = INT16_MIN;
	int32_t x16 = -1;
	static volatile int32_t t3 = 353;

	t3 = (x13&((x14*x15)|x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x29 = 199;
	uint32_t x30 = 3595840U;
	int32_t x31 = -4;
	int16_t x32 = 5991;
	uint32_t t4 = 60111U;

	t4 = (x29&((x30*x31)|x32));

	if (t4 != 71U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = 6143;
	uint8_t x34 = 80U;
	uint64_t x35 = 12226357836509291LLU;
	uint64_t x36 = 5749LLU;
	volatile uint64_t t5 = 236655LLU;

	t5 = (x33&((x34*x35)|x36));

	if (t5 != 6005LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = -7565;
	volatile uint64_t x38 = 3376018LLU;
	int8_t x39 = INT8_MAX;
	int32_t x40 = -1;
	uint64_t t6 = 4999LLU;

	t6 = (x37&((x38*x39)|x40));

	if (t6 != 18446744073709544051LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -1;
	static int8_t x42 = 2;
	int8_t x43 = -1;

	t7 = (x41&((x42*x43)|x44));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MAX;
	static volatile int16_t x46 = 130;
	int16_t x47 = -7192;
	uint8_t x48 = UINT8_MAX;

	t8 = (x45&((x46*x47)|x48));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -1;
	int32_t x50 = INT32_MIN;
	int64_t x51 = -1LL;
	int32_t x52 = INT32_MAX;
	int64_t t9 = -3542306LL;

	t9 = (x49&((x50*x51)|x52));

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x57 = 117679837933132LLU;
	int16_t x58 = -2100;
	uint8_t x59 = 24U;
	int32_t x60 = INT32_MIN;
	uint64_t t10 = 5322124289600752LLU;

	t10 = (x57&((x58*x59)|x60));

	if (t10 != 117679837882880LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x66 = -153737LL;
	int32_t x67 = INT32_MAX;
	int16_t x68 = -1;
	volatile int64_t t11 = -2008442293623072826LL;

	t11 = (x65&((x66*x67)|x68));

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MAX;
	volatile int16_t x70 = INT16_MIN;
	int8_t x72 = INT8_MAX;
	volatile uint64_t t12 = 1301703331LLU;

	t12 = (x69&((x70*x71)|x72));

	if (t12 != 127LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x74 = 114U;
	static int64_t x75 = 0LL;
	static int16_t x76 = INT16_MAX;
	static int64_t t13 = 8798770306725475LL;

	t13 = (x73&((x74*x75)|x76));

	if (t13 != 29721LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x78 = UINT8_MAX;
	volatile uint8_t x79 = UINT8_MAX;
	static uint32_t x80 = 20U;
	uint32_t t14 = 261818268U;

	t14 = (x77&((x78*x79)|x80));

	if (t14 != 32768U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x81 = -646036390707950883LL;
	int8_t x82 = 1;
	int16_t x83 = -85;
	int32_t x84 = INT32_MIN;

	t15 = (x81&((x82*x83)|x84));

	if (t15 != -646036390707950967LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x90 = UINT64_MAX;
	int32_t x92 = -1;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x89&((x90*x91)|x92));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x94 = 6243U;
	static uint32_t x95 = 1777781U;
	int16_t x96 = -1;
	uint32_t t17 = UINT32_MAX;

	t17 = (x93&((x94*x95)|x96));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = -24806243LL;
	static uint64_t x104 = 11747855908902LLU;
	uint64_t t18 = 315779006LLU;

	t18 = (x101&((x102*x103)|x104));

	if (t18 != 18446744073684729860LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x109 = -1;
	int8_t x110 = INT8_MAX;
	static int8_t x112 = INT8_MAX;

	t19 = (x109&((x110*x111)|x112));

	if (t19 != 351743U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x114 = INT16_MIN;
	uint64_t x115 = UINT64_MAX;
	static volatile int8_t x116 = -1;
	static volatile uint64_t t20 = UINT64_MAX;

	t20 = (x113&((x114*x115)|x116));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x119 = INT32_MIN;
	volatile int32_t x120 = -3150;

	t21 = (x117&((x118*x119)|x120));

	if (t21 != 2376720818LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 19U;
	uint16_t x122 = 6U;
	volatile uint32_t x123 = 500357623U;
	uint16_t x124 = UINT16_MAX;
	uint32_t t22 = 29639U;

	t22 = (x121&((x122*x123)|x124));

	if (t22 != 19U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x125 = INT64_MAX;
	int32_t x127 = -1;
	int64_t x128 = -429206470765LL;
	volatile int64_t t23 = -268954202904LL;

	t23 = (x125&((x126*x127)|x128));

	if (t23 != 9223372036854775699LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = INT16_MIN;
	volatile int16_t x130 = INT16_MIN;
	static uint8_t x131 = 3U;
	volatile int16_t x132 = INT16_MIN;

	t24 = (x129&((x130*x131)|x132));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x133 = -236434204397LL;
	static int16_t x134 = INT16_MAX;
	int32_t x135 = -61473;
	static volatile int16_t x136 = INT16_MIN;

	t25 = (x133&((x134*x135)|x136));

	if (t25 != -236434206719LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x141 = 59U;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = 72010529U;
	uint32_t t26 = 2390U;

	t26 = (x141&((x142*x143)|x144));

	if (t26 != 41U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x149 = -4408423251387075731LL;
	int64_t x152 = INT64_MAX;

	t27 = (x149&((x150*x151)|x152));

	if (t27 != 4814948785467700077LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = -1;
	uint32_t x166 = UINT32_MAX;
	uint64_t x168 = 2682LLU;
	uint64_t t28 = 32834498244659727LLU;

	t28 = (x165&((x166*x167)|x168));

	if (t28 != 7144988612777220991LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MIN;
	volatile int32_t t29 = 26;

	t29 = (x169&((x170*x171)|x172));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x173 = INT32_MIN;
	static int32_t x175 = INT32_MAX;
	int8_t x176 = 12;
	volatile uint32_t t30 = 6308U;

	t30 = (x173&((x174*x175)|x176));

	if (t30 != 2147483648U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int64_t x179 = 4057642172234402LL;
	int8_t x180 = INT8_MAX;
	static volatile int64_t t31 = 3691396LL;

	t31 = (x177&((x178*x179)|x180));

	if (t31 != 2410857855LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x181 = 2744;
	volatile int32_t x182 = -1;
	volatile int8_t x183 = INT8_MIN;
	int16_t x184 = -1;
	int32_t t32 = 1;

	t32 = (x181&((x182*x183)|x184));

	if (t32 != 2744) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x185 = 3U;
	volatile int16_t x187 = INT16_MAX;
	volatile int64_t t33 = 4LL;

	t33 = (x185&((x186*x187)|x188));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = INT64_MAX;
	int32_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	static int64_t t34 = -3524LL;

	t34 = (x189&((x190*x191)|x192));

	if (t34 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x193 = INT16_MIN;
	static uint32_t x194 = UINT32_MAX;
	static volatile uint32_t x195 = UINT32_MAX;
	volatile uint64_t t35 = 1691779LLU;

	t35 = (x193&((x194*x195)|x196));

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x198 = INT32_MIN;
	int64_t x199 = 352LL;
	static uint8_t x200 = 10U;
	volatile int64_t t36 = -30LL;

	t36 = (x197&((x198*x199)|x200));

	if (t36 != 10LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = INT16_MIN;
	uint8_t x202 = 31U;
	uint32_t x204 = UINT32_MAX;
	static uint32_t t37 = 32422945U;

	t37 = (x201&((x202*x203)|x204));

	if (t37 != 4294934528U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x209 = -1LL;
	int32_t x210 = 199;
	int32_t x211 = 15815;
	static int8_t x212 = INT8_MAX;

	t38 = (x209&((x210*x211)|x212));

	if (t38 != 3147263LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x218 = -1;
	int8_t x219 = INT8_MIN;
	int32_t x220 = 1;
	int32_t t39 = 276103;

	t39 = (x217&((x218*x219)|x220));

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x221 = INT64_MAX;
	int16_t x222 = -48;
	int16_t x223 = INT16_MAX;
	int8_t x224 = -1;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x221&((x222*x223)|x224));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x225 = 2843U;
	static uint8_t x226 = 8U;
	volatile uint32_t x227 = 21810630U;
	int16_t x228 = INT16_MIN;
	volatile uint32_t t41 = 67U;

	t41 = (x225&((x226*x227)|x228));

	if (t41 != 2576U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x234 = 2123474864988LLU;
	volatile int8_t x235 = -1;
	uint8_t x236 = 16U;
	volatile uint64_t t42 = 582LLU;

	t42 = (x233&((x234*x235)|x236));

	if (t42 != 18446741950234686644LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x237 = INT8_MIN;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	volatile int32_t t43 = 268975090;

	t43 = (x237&((x238*x239)|x240));

	if (t43 != -5120) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x241 = 8;
	uint64_t x242 = 2788LLU;
	static uint8_t x243 = 1U;
	uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t44 = 8552163107094638884LLU;

	t44 = (x241&((x242*x243)|x244));

	if (t44 != 8LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x246 = 92926913U;
	uint32_t x247 = 699957U;
	static int32_t x248 = INT32_MIN;
	uint32_t t45 = 1U;

	t45 = (x245&((x246*x247)|x248));

	if (t45 != 4005995765U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = INT16_MIN;
	volatile int16_t x251 = -6475;
	int64_t x252 = -1LL;
	static int64_t t46 = -230296LL;

	t46 = (x249&((x250*x251)|x252));

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x257 = INT32_MIN;
	static uint8_t x258 = UINT8_MAX;
	int64_t x260 = INT64_MAX;

	t47 = (x257&((x258*x259)|x260));

	if (t47 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x262 = INT8_MIN;
	volatile int64_t t48 = 826900631LL;

	t48 = (x261&((x262*x263)|x264));

	if (t48 != 65728LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x265 = INT8_MIN;
	uint16_t x266 = 19U;
	int64_t x267 = -1LL;
	uint32_t x268 = 955U;
	volatile int64_t t49 = -4LL;

	t49 = (x265&((x266*x267)|x268));

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x272 = INT8_MIN;
	int64_t t50 = 89391201009128853LL;

	t50 = (x269&((x270*x271)|x272));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x273 = -1;
	static int64_t x274 = -1LL;
	volatile uint32_t x275 = 1034686324U;
	uint8_t x276 = 1U;
	int64_t t51 = -178133LL;

	t51 = (x273&((x274*x275)|x276));

	if (t51 != -1034686323LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = 7;
	static int8_t x278 = -1;
	volatile int8_t x279 = -1;

	t52 = (x277&((x278*x279)|x280));

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x282 = 4454U;
	int16_t x284 = -1;
	volatile int64_t t53 = -2628048599LL;

	t53 = (x281&((x282*x283)|x284));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x286 = INT16_MIN;
	static uint16_t x288 = 3U;
	volatile int32_t t54 = 0;

	t54 = (x285&((x286*x287)|x288));

	if (t54 != -917501) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x290 = -1;
	uint64_t x291 = 874112167458580849LLU;
	uint64_t x292 = 236LLU;
	uint64_t t55 = 22LLU;

	t55 = (x289&((x290*x291)|x292));

	if (t55 != 4LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	int64_t x296 = -1LL;
	volatile int64_t t56 = -1140427720282129652LL;

	t56 = (x293&((x294*x295)|x296));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x298 = 7069U;
	volatile int16_t x299 = INT16_MIN;
	static int8_t x300 = -15;
	volatile uint32_t t57 = 48U;

	t57 = (x297&((x298*x299)|x300));

	if (t57 != 4294967281U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x301 = INT64_MIN;
	int32_t x302 = -1;
	int8_t x303 = INT8_MAX;
	static uint16_t x304 = UINT16_MAX;
	int64_t t58 = INT64_MIN;

	t58 = (x301&((x302*x303)|x304));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x305 = -878;
	static int8_t x306 = INT8_MAX;
	int32_t x307 = -1;
	int8_t x308 = -1;

	t59 = (x305&((x306*x307)|x308));

	if (t59 != -878) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x309 = INT64_MIN;
	int32_t x310 = -1;
	static int16_t x311 = -1;
	volatile uint64_t x312 = 3845732796LLU;
	uint64_t t60 = 726682LLU;

	t60 = (x309&((x310*x311)|x312));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x313 = UINT8_MAX;
	uint8_t x314 = UINT8_MAX;

	t61 = (x313&((x314*x315)|x316));

	if (t61 != 41LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x317 = 126996885900178LLU;
	volatile int64_t x319 = 5610109978126LL;
	int64_t x320 = INT64_MIN;
	volatile uint64_t t62 = 10446630982133340LLU;

	t62 = (x317&((x318*x319)|x320));

	if (t62 != 1099579032066LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x325 = -1365021660LL;
	int32_t x326 = -1;
	uint32_t x327 = 31053U;
	int64_t x328 = -1050596013130LL;
	static int64_t t63 = 6LL;

	t63 = (x325&((x326*x327)|x328));

	if (t63 != -1049337066460LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x329 = INT32_MAX;
	volatile uint64_t x330 = 557805388253380542LLU;
	int64_t x332 = -21517541LL;
	static uint64_t t64 = 1582062LLU;

	t64 = (x329&((x330*x331)|x332));

	if (t64 != 2147467099LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x333 = -1LL;
	static uint16_t x334 = 2219U;
	volatile int64_t x335 = 374942127LL;
	static int16_t x336 = INT16_MIN;
	int64_t t65 = -30892866411LL;

	t65 = (x333&((x334*x335)|x336));

	if (t65 != -12315LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x337 = 159128U;
	int16_t x338 = 279;
	volatile int16_t x339 = -1;
	uint64_t t66 = 649686153489074344LLU;

	t66 = (x337&((x338*x339)|x340));

	if (t66 != 159112LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x345 = UINT32_MAX;
	uint8_t x347 = 8U;
	int32_t x348 = INT32_MIN;
	uint64_t t67 = 13632593358918417LLU;

	t67 = (x345&((x346*x347)|x348));

	if (t67 != 4294967288LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 12U;
	int32_t x352 = INT32_MIN;
	static uint32_t t68 = 20231529U;

	t68 = (x349&((x350*x351)|x352));

	if (t68 != 4294967284U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -1LL;
	uint32_t x356 = UINT32_MAX;
	int64_t t69 = 2427LL;

	t69 = (x353&((x354*x355)|x356));

	if (t69 != 4294967168LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = -2401;
	uint64_t x359 = 655072LLU;
	volatile int32_t x360 = -13690891;
	volatile uint64_t t70 = 118291LLU;

	t70 = (x357&((x358*x359)|x360));

	if (t70 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x361 = INT64_MAX;
	volatile int8_t x362 = INT8_MAX;
	int32_t x363 = -2118;
	int8_t x364 = 16;
	int64_t t71 = -827194147LL;

	t71 = (x361&((x362*x363)|x364));

	if (t71 != 9223372036854506838LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x365 = 11U;
	int8_t x366 = 1;
	uint16_t x368 = 6U;
	volatile int32_t t72 = -221428;

	t72 = (x365&((x366*x367)|x368));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x374 = INT8_MAX;
	volatile uint64_t x376 = 2032162183042730290LLU;

	t73 = (x373&((x374*x375)|x376));

	if (t73 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int8_t x378 = -2;
	volatile uint32_t x379 = 261U;
	uint8_t x380 = UINT8_MAX;
	uint64_t t74 = 1643770528787316LLU;

	t74 = (x377&((x378*x379)|x380));

	if (t74 != 4294966783LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x381 = 261152U;
	int64_t x382 = -1LL;
	int32_t x383 = INT32_MIN;
	int64_t t75 = 653742LL;

	t75 = (x381&((x382*x383)|x384));

	if (t75 != 261120LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x387 = 12U;
	int32_t x388 = INT32_MIN;
	volatile uint64_t t76 = 119LLU;

	t76 = (x385&((x386*x387)|x388));

	if (t76 != 18446744073708601140LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x389 = -21737;
	static uint8_t x391 = 3U;
	int32_t x392 = INT32_MIN;
	static int32_t t77 = 1936;

	t77 = (x389&((x390*x391)|x392));

	if (t77 != -2147480815) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x393 = INT64_MIN;
	uint32_t x395 = 105133632U;
	static uint32_t x396 = 45U;
	volatile int64_t t78 = -1809924229LL;

	t78 = (x393&((x394*x395)|x396));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x406 = -4;
	volatile uint16_t x407 = 6U;
	uint32_t x408 = 295U;
	static uint32_t t79 = 1U;

	t79 = (x405&((x406*x407)|x408));

	if (t79 != 14U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x409 = -1;
	int16_t x410 = -1;
	int16_t x411 = -1;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t80 = -188931476;

	t80 = (x409&((x410*x411)|x412));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x414 = INT16_MIN;
	uint64_t x415 = 14138LLU;
	uint64_t x416 = 3757323201406514994LLU;
	uint64_t t81 = 353325LLU;

	t81 = (x413&((x414*x415)|x416));

	if (t81 != 50LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x417 = 35U;
	static int32_t x418 = INT32_MIN;
	int64_t x419 = 6513LL;
	uint64_t x420 = 2656685051834312366LLU;
	volatile uint64_t t82 = 74055577LLU;

	t82 = (x417&((x418*x419)|x420));

	if (t82 != 34LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x426 = -181LL;
	uint8_t x427 = UINT8_MAX;
	int16_t x428 = INT16_MIN;

	t83 = (x425&((x426*x427)|x428));

	if (t83 != 20LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x429 = 467;
	static uint64_t x430 = 570918628152515775LLU;
	uint16_t x431 = 651U;
	uint32_t x432 = UINT32_MAX;
	uint64_t t84 = 183LLU;

	t84 = (x429&((x430*x431)|x432));

	if (t84 != 467LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x433 = INT64_MIN;
	static int8_t x434 = INT8_MAX;
	int16_t x436 = INT16_MIN;

	t85 = (x433&((x434*x435)|x436));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x437 = 35;
	static int64_t x438 = 1828721320423LL;
	int64_t x439 = -3896LL;
	int8_t x440 = INT8_MAX;
	int64_t t86 = -1949654141041LL;

	t86 = (x437&((x438*x439)|x440));

	if (t86 != 35LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x441 = 1638U;
	int8_t x442 = -1;
	static uint16_t x443 = 3U;
	int32_t t87 = -15;

	t87 = (x441&((x442*x443)|x444));

	if (t87 != 1636) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x445 = UINT32_MAX;
	volatile uint64_t x447 = 6LLU;
	volatile int8_t x448 = 25;
	uint64_t t88 = 34010LLU;

	t88 = (x445&((x446*x447)|x448));

	if (t88 != 25LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x449 = INT16_MIN;
	uint16_t x450 = 258U;
	uint32_t x452 = 19U;
	static volatile uint32_t t89 = 51180244U;

	t89 = (x449&((x450*x451)|x452));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x457 = 60U;
	volatile int16_t x458 = INT16_MIN;
	int8_t x459 = -3;
	volatile int64_t t90 = -1621289954751LL;

	t90 = (x457&((x458*x459)|x460));

	if (t90 != 8LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x461 = 0;
	int32_t x462 = INT32_MIN;
	volatile uint32_t x463 = 1291073414U;
	volatile int64_t t91 = -1248550LL;

	t91 = (x461&((x462*x463)|x464));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x465 = 17398278847324216LLU;
	uint8_t x468 = 34U;

	t92 = (x465&((x466*x467)|x468));

	if (t92 != 1986388024LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x473 = INT64_MIN;
	static int8_t x474 = -1;
	uint32_t x475 = 1952U;
	int64_t t93 = -232393420854740752LL;

	t93 = (x473&((x474*x475)|x476));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x477 = 60U;
	int16_t x478 = INT16_MAX;
	int8_t x479 = -1;
	int32_t x480 = INT32_MIN;
	int32_t t94 = 5025;

	t94 = (x477&((x478*x479)|x480));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x482 = INT32_MAX;
	int32_t x483 = -1;
	int32_t x484 = -1;
	int32_t t95 = -453341;

	t95 = (x481&((x482*x483)|x484));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x485 = -1;
	volatile uint8_t x486 = 11U;
	static int32_t t96 = 463896689;

	t96 = (x485&((x486*x487)|x488));

	if (t96 != 74091743) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x489 = -1;
	int32_t x490 = 1729479;
	int8_t x491 = -1;
	int32_t t97 = 20;

	t97 = (x489&((x490*x491)|x492));

	if (t97 != -1729477) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x493 = 11959452561618LL;
	uint32_t x494 = UINT32_MAX;
	int8_t x495 = INT8_MIN;
	int32_t x496 = INT32_MIN;
	volatile int64_t t98 = -6268134LL;

	t98 = (x493&((x494*x495)|x496));

	if (t98 != 2147483776LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x501 = -6965373;
	int16_t x502 = INT16_MIN;
	static int64_t x503 = -1LL;
	int64_t t99 = 4089117066294LL;

	t99 = (x501&((x502*x503)|x504));

	if (t99 != -33254527LL) { NG(); } else { ; }
	
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

