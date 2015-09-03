#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int64_t x2 = INT64_MIN;
volatile int16_t x4 = INT16_MAX;
uint8_t x10 = 0U;
uint32_t x11 = UINT32_MAX;
volatile int16_t x18 = -1;
static int64_t x19 = INT64_MAX;
volatile int64_t t3 = 13528LL;
int16_t x28 = INT16_MIN;
volatile uint16_t x38 = 3649U;
volatile uint64_t x40 = 16LLU;
volatile int32_t t11 = 26657419;
int32_t x61 = INT32_MIN;
static volatile uint32_t x66 = 3U;
int64_t t13 = 388544LL;
uint64_t t14 = 4827LLU;
int32_t x84 = -1;
int8_t x85 = 7;
uint8_t x87 = 16U;
uint64_t x94 = 1198994544591980762LLU;
int32_t x96 = 32447;
volatile int16_t x97 = 223;
static int8_t x100 = -1;
uint64_t x105 = 270953495191LLU;
volatile int8_t x106 = INT8_MIN;
int64_t x108 = -117527638LL;
uint16_t x114 = UINT16_MAX;
uint64_t t25 = 1LLU;
int32_t x121 = -1;
volatile int32_t t29 = 107221;
uint8_t x141 = 16U;
int16_t x144 = INT16_MIN;
int64_t t30 = -791192LL;
static uint8_t x145 = 22U;
uint8_t x148 = 0U;
static volatile uint16_t x150 = 0U;
volatile int8_t x154 = INT8_MIN;
static uint8_t x158 = 6U;
static int32_t x175 = INT32_MIN;
volatile int64_t t38 = -3194031770958LL;
int32_t x188 = INT32_MIN;
volatile uint64_t t40 = 8138029983LLU;
volatile int64_t x205 = -7564895038226414LL;
volatile uint64_t t44 = 221973123LLU;
uint32_t x218 = 670246U;
static volatile int64_t x220 = INT64_MIN;
static int8_t x226 = INT8_MAX;
static int64_t x234 = INT64_MIN;
volatile uint64_t t51 = 4030220204885099904LLU;
int16_t x254 = INT16_MIN;
static uint8_t x261 = 3U;
int16_t x262 = 0;
static volatile int16_t x263 = INT16_MIN;
int32_t t55 = 1;
int64_t x266 = -6617967282115555LL;
int32_t x268 = INT32_MAX;
volatile int64_t t56 = 90368LL;
uint16_t x272 = UINT16_MAX;
volatile uint32_t t58 = 13U;
uint8_t x282 = UINT8_MAX;
int16_t x287 = INT16_MIN;
int64_t t60 = 16380LL;
int16_t x290 = -2;
volatile int64_t t61 = 2966728433953LL;
uint32_t x296 = 1729U;
volatile uint32_t t62 = 207123U;
int64_t t63 = 9317706947LL;
int16_t x301 = INT16_MIN;
volatile uint32_t x304 = 32U;
static int64_t x305 = 15073829LL;
uint64_t x306 = UINT64_MAX;
static int32_t x309 = INT32_MIN;
uint16_t x310 = 103U;
int8_t x312 = INT8_MIN;
uint32_t x313 = 0U;
int8_t x315 = -1;
uint8_t x322 = UINT8_MAX;
static int32_t x328 = -1;
int8_t x337 = INT8_MAX;
volatile int32_t x338 = INT32_MAX;
uint64_t t73 = 1087729644584LLU;
int8_t x345 = INT8_MIN;
uint64_t t74 = 1112LLU;
uint64_t x349 = 277189178500424938LLU;
uint64_t t75 = 559409LLU;
uint64_t x355 = UINT64_MAX;
int16_t x358 = INT16_MIN;
volatile int64_t t77 = -9813922LL;
volatile uint16_t x367 = 1U;
uint32_t x372 = UINT32_MAX;
int64_t x382 = -1LL;
volatile int64_t t85 = -33906LL;
uint16_t x396 = 154U;
int16_t x402 = 13231;
int32_t x422 = INT32_MAX;
static int8_t x437 = -1;
static int8_t x439 = INT8_MIN;
int64_t t96 = INT64_MAX;
static uint64_t x448 = UINT64_MAX;
int16_t x450 = 6;
uint8_t x451 = 1U;
volatile int64_t x454 = INT64_MIN;


void f0(void) {
	int16_t x3 = INT16_MIN;
	volatile int64_t t0 = 248965687983113448LL;

	t0 = (x1-((x2%x3)+x4));

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = INT32_MAX;
	static uint64_t x12 = 2LLU;
	uint64_t t1 = 2366553LLU;

	t1 = (x9-((x10%x11)+x12));

	if (t1 != 2147483645LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x13 = 25;
	volatile int32_t x14 = INT32_MIN;
	int64_t x15 = -1LL;
	int64_t x16 = -1LL;
	volatile int64_t t2 = -294284136516000LL;

	t2 = (x13-((x14%x15)+x16));

	if (t2 != 26LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = INT32_MIN;
	int8_t x20 = 2;

	t3 = (x17-((x18%x19)+x20));

	if (t3 != -2147483649LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = -8;
	int16_t x27 = INT16_MAX;
	volatile int32_t t4 = -18765542;

	t4 = (x25-((x26%x27)+x28));

	if (t4 != -2147450872) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	static volatile int64_t x30 = 66LL;
	volatile int64_t x31 = -1LL;
	int8_t x32 = INT8_MAX;
	static int64_t t5 = 1316289LL;

	t5 = (x29-((x30%x31)+x32));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = 7674;
	static int64_t x34 = -1LL;
	int32_t x35 = 22160;
	int16_t x36 = -2;
	volatile int64_t t6 = -54LL;

	t6 = (x33-((x34%x35)+x36));

	if (t6 != 7677LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	static uint8_t x39 = 24U;
	volatile uint64_t t7 = 858022402053075455LLU;

	t7 = (x37-((x38%x39)+x40));

	if (t7 != 18446744071562067951LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 2335U;
	int64_t x46 = INT64_MAX;
	static int32_t x47 = INT32_MIN;
	int64_t x48 = 475721164368086364LL;
	static int64_t t8 = -133722LL;

	t8 = (x45-((x46%x47)+x48));

	if (t8 != -475721166515567676LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = 1;
	int8_t x50 = INT8_MIN;
	int64_t x51 = 76845107701316586LL;
	uint8_t x52 = 1U;
	int64_t t9 = -502410412LL;

	t9 = (x49-((x50%x51)+x52));

	if (t9 != 128LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = -112;
	int64_t x54 = INT64_MIN;
	int64_t x55 = -2056114444LL;
	int64_t x56 = -5LL;
	volatile int64_t t10 = 3706093098155269LL;

	t10 = (x53-((x54%x55)+x56));

	if (t10 != 1985600677LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -2;
	uint16_t x58 = UINT16_MAX;
	int32_t x59 = INT32_MIN;
	static int32_t x60 = 29;

	t11 = (x57-((x58%x59)+x60));

	if (t11 != -65566) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = INT64_MAX;
	uint16_t x63 = 1U;
	uint16_t x64 = 9467U;
	volatile int64_t t12 = 594281061LL;

	t12 = (x61-((x62%x63)+x64));

	if (t12 != -2147493115LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x65 = -105;
	int64_t x67 = INT64_MIN;
	int32_t x68 = -484858;

	t13 = (x65-((x66%x67)+x68));

	if (t13 != 484750LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 4596724638LLU;
	volatile int64_t x70 = 4LL;
	uint16_t x71 = 133U;
	int16_t x72 = -272;

	t14 = (x69-((x70%x71)+x72));

	if (t14 != 4596724906LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 28153U;
	static uint8_t x78 = 19U;
	static int32_t x79 = 1975;
	static volatile int8_t x80 = INT8_MAX;
	int32_t t15 = -14;

	t15 = (x77-((x78%x79)+x80));

	if (t15 != 28007) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = 0U;
	int64_t x82 = INT64_MAX;
	uint16_t x83 = 1U;
	volatile int64_t t16 = 35307LL;

	t16 = (x81-((x82%x83)+x84));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x86 = 14302085618638LLU;
	volatile int32_t x88 = -1;
	volatile uint64_t t17 = 7LLU;

	t17 = (x85-((x86%x87)+x88));

	if (t17 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x89 = 0U;
	int64_t x90 = -1LL;
	uint32_t x91 = UINT32_MAX;
	uint32_t x92 = 49U;
	static int64_t t18 = -117776185530LL;

	t18 = (x89-((x90%x91)+x92));

	if (t18 != -48LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	uint64_t t19 = 18287LLU;

	t19 = (x93-((x94%x95)+x96));

	if (t19 != 8024377492262762599LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x98 = -1LL;
	static volatile int64_t x99 = -193272491879LL;
	int64_t t20 = 51440630179LL;

	t20 = (x97-((x98%x99)+x100));

	if (t20 != 225LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = 488872LLU;
	uint64_t x102 = UINT64_MAX;
	volatile uint16_t x103 = 57U;
	int32_t x104 = -33540;
	uint64_t t21 = 3363LLU;

	t21 = (x101-((x102%x103)+x104));

	if (t21 != 522358LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x107 = -1;
	uint64_t t22 = 162504728LLU;

	t22 = (x105-((x106%x107)+x108));

	if (t22 != 271071022829LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -1;
	int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t23 = -1528739;

	t23 = (x109-((x110%x111)+x112));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MIN;
	int16_t x115 = 13;
	uint32_t x116 = UINT32_MAX;
	uint32_t t24 = 126727108U;

	t24 = (x113-((x114%x115)+x116));

	if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x117 = 26076381LLU;
	int32_t x118 = 0;
	uint8_t x119 = UINT8_MAX;
	static int32_t x120 = INT32_MAX;

	t25 = (x117-((x118%x119)+x120));

	if (t25 != 18446744071588144350LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x122 = 5U;
	int16_t x123 = INT16_MAX;
	static int16_t x124 = INT16_MIN;
	volatile int32_t t26 = -15;

	t26 = (x121-((x122%x123)+x124));

	if (t26 != 32762) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x125 = 20831U;
	int16_t x126 = -1;
	static uint32_t x127 = UINT32_MAX;
	uint64_t x128 = UINT64_MAX;
	uint64_t t27 = 3798954LLU;

	t27 = (x125-((x126%x127)+x128));

	if (t27 != 20832LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = 80803LLU;
	int16_t x134 = -49;
	int64_t x135 = INT64_MIN;
	int8_t x136 = INT8_MIN;
	volatile uint64_t t28 = 137310LLU;

	t28 = (x133-((x134%x135)+x136));

	if (t28 != 80980LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = 0;
	int32_t x138 = INT32_MAX;
	uint8_t x139 = UINT8_MAX;
	static volatile int32_t x140 = -1194280;

	t29 = (x137-((x138%x139)+x140));

	if (t29 != 1194153) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x142 = 46466U;
	int64_t x143 = INT64_MIN;

	t30 = (x141-((x142%x143)+x144));

	if (t30 != -13682LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x146 = -1;
	int8_t x147 = 10;
	static int32_t t31 = 189105;

	t31 = (x145-((x146%x147)+x148));

	if (t31 != 23) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x149 = UINT64_MAX;
	uint32_t x151 = 117U;
	static int64_t x152 = 16918762508008LL;
	uint64_t t32 = 115LLU;

	t32 = (x149-((x150%x151)+x152));

	if (t32 != 18446727154947043607LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MAX;
	static uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MAX;
	uint64_t t33 = 79215LLU;

	t33 = (x153-((x154%x155)+x156));

	if (t33 != 32768LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x157 = 4685U;
	static uint16_t x159 = 14309U;
	static volatile int8_t x160 = INT8_MIN;
	static uint32_t t34 = 204244U;

	t34 = (x157-((x158%x159)+x160));

	if (t34 != 4807U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 10521U;
	int64_t x162 = -31346795LL;
	static uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 12529U;
	static int64_t t35 = -1665970606577635LL;

	t35 = (x161-((x162%x163)+x164));

	if (t35 != -1853LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = INT8_MIN;
	volatile int8_t x166 = 0;
	int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MAX;
	int32_t t36 = -5;

	t36 = (x165-((x166%x167)+x168));

	if (t36 != -32895) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = INT16_MIN;
	volatile int16_t x174 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t37 = 310291;

	t37 = (x173-((x174%x175)+x176));

	if (t37 != 32768) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = INT16_MAX;
	static int8_t x182 = INT8_MIN;
	int64_t x183 = -1LL;
	static uint32_t x184 = 15059378U;

	t38 = (x181-((x182%x183)+x184));

	if (t38 != -15026611LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = 15U;
	int16_t x186 = INT16_MAX;
	int32_t x187 = -175;
	int32_t t39 = 3;

	t39 = (x185-((x186%x187)+x188));

	if (t39 != 2147483621) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = 6LLU;
	int8_t x190 = INT8_MIN;
	int64_t x191 = INT64_MAX;
	uint64_t x192 = 372LLU;

	t40 = (x189-((x190%x191)+x192));

	if (t40 != 18446744073709551378LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x193 = -1;
	int8_t x194 = -1;
	int64_t x195 = INT64_MAX;
	uint32_t x196 = UINT32_MAX;
	int64_t t41 = -2516364218600LL;

	t41 = (x193-((x194%x195)+x196));

	if (t41 != -4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x197 = 29U;
	uint32_t x198 = 739U;
	int8_t x199 = INT8_MAX;
	uint16_t x200 = 3U;
	volatile uint32_t t42 = 319515969U;

	t42 = (x197-((x198%x199)+x200));

	if (t42 != 4294967218U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x206 = INT64_MAX;
	uint16_t x207 = 2U;
	uint16_t x208 = 31U;
	int64_t t43 = -13349663757LL;

	t43 = (x205-((x206%x207)+x208));

	if (t43 != -7564895038226446LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = 3510U;
	int64_t x210 = INT64_MAX;
	uint64_t x211 = 296451972LLU;
	volatile int32_t x212 = 1733689;

	t44 = (x209-((x210%x211)+x212));

	if (t44 != 18446744073429099674LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x213 = 59;
	int32_t x214 = -26;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = UINT8_MAX;
	static volatile int32_t t45 = -1873;

	t45 = (x213-((x214%x215)+x216));

	if (t45 != -170) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = 429LL;
	int32_t x219 = INT32_MIN;
	int64_t t46 = 17260999950592LL;

	t46 = (x217-((x218%x219)+x220));

	if (t46 != 9223372036854105991LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = -12681271;
	static int16_t x222 = -6;
	int32_t x223 = INT32_MIN;
	int64_t x224 = 453036103186898LL;
	static volatile int64_t t47 = 191919748784LL;

	t47 = (x221-((x222%x223)+x224));

	if (t47 != -453036115868163LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	int32_t x228 = -16829009;
	int32_t t48 = -5;

	t48 = (x225-((x226%x227)+x228));

	if (t48 != -2130654766) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x233 = 9740U;
	int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MAX;
	static volatile int64_t t49 = -2496555394717LL;

	t49 = (x233-((x234%x235)+x236));

	if (t49 != 9614LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x237 = INT32_MIN;
	volatile uint8_t x238 = 14U;
	static int32_t x239 = -5;
	uint64_t x240 = 0LLU;
	uint64_t t50 = 8357713LLU;

	t50 = (x237-((x238%x239)+x240));

	if (t50 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x241 = 1;
	static uint64_t x242 = 678361467747230382LLU;
	int16_t x243 = INT16_MIN;
	uint8_t x244 = UINT8_MAX;

	t51 = (x241-((x242%x243)+x244));

	if (t51 != 17768382605962320980LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x249 = 11U;
	int8_t x250 = -4;
	volatile uint16_t x251 = 42U;
	static int32_t x252 = -1;
	static int32_t t52 = 779;

	t52 = (x249-((x250%x251)+x252));

	if (t52 != 16) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x253 = -1;
	int16_t x255 = INT16_MIN;
	static uint16_t x256 = 99U;
	static volatile int32_t t53 = -215;

	t53 = (x253-((x254%x255)+x256));

	if (t53 != -100) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = 30U;
	int8_t x258 = INT8_MIN;
	uint64_t x259 = 1476LLU;
	static int64_t x260 = INT64_MAX;
	volatile uint64_t t54 = 95656LLU;

	t54 = (x257-((x258%x259)+x260));

	if (t54 != 9223372036854774475LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x264 = 53U;

	t55 = (x261-((x262%x263)+x264));

	if (t55 != -50) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x265 = INT64_MAX;
	uint8_t x267 = 3U;

	t56 = (x265-((x266%x267)+x268));

	if (t56 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x270 = 5589663389783475LL;
	int8_t x271 = INT8_MAX;
	int64_t t57 = -18601116560LL;

	t57 = (x269-((x270%x271)+x272));

	if (t57 != -25LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x273 = 6U;
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	volatile int16_t x276 = INT16_MIN;

	t58 = (x273-((x274%x275)+x276));

	if (t58 != 2147516423U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x281 = 3U;
	static int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	int32_t t59 = 253970432;

	t59 = (x281-((x282%x283)+x284));

	if (t59 != 32516) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x285 = -1LL;
	uint16_t x286 = 167U;
	volatile int16_t x288 = 96;

	t60 = (x285-((x286%x287)+x288));

	if (t60 != -264LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x289 = 10251498U;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MAX;

	t61 = (x289-((x290%x291)+x292));

	if (t61 != -2137232147LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x293 = 8401U;
	int8_t x294 = INT8_MIN;
	static volatile uint32_t x295 = 13U;

	t62 = (x293-((x294%x295)+x296));

	if (t62 != 6661U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MIN;
	uint8_t x298 = UINT8_MAX;
	static volatile int64_t x299 = INT64_MIN;
	int64_t x300 = 62442568989434935LL;

	t63 = (x297-((x298%x299)+x300));

	if (t63 != -62442568989435318LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x302 = INT8_MAX;
	int8_t x303 = 19;
	volatile uint32_t t64 = 29250U;

	t64 = (x301-((x302%x303)+x304));

	if (t64 != 4294934483U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x307 = INT32_MIN;
	uint32_t x308 = 48U;
	uint64_t t65 = 189828467916LLU;

	t65 = (x305-((x306%x307)+x308));

	if (t65 != 18446744071577141750LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x311 = 592213523LL;
	static volatile int64_t t66 = -58205LL;

	t66 = (x309-((x310%x311)+x312));

	if (t66 != -2147483623LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x314 = UINT16_MAX;
	volatile int32_t x316 = INT32_MAX;
	uint32_t t67 = 6583818U;

	t67 = (x313-((x314%x315)+x316));

	if (t67 != 2147483649U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x317 = -1;
	volatile int32_t x318 = INT32_MAX;
	int16_t x319 = INT16_MIN;
	int32_t x320 = -43;
	int32_t t68 = 929;

	t68 = (x317-((x318%x319)+x320));

	if (t68 != -32725) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x321 = 43215U;
	static uint16_t x323 = 5U;
	int64_t x324 = -120882940741441LL;
	int64_t t69 = -7612682LL;

	t69 = (x321-((x322%x323)+x324));

	if (t69 != 120882940784656LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -26;
	int32_t x326 = INT32_MAX;
	static volatile int16_t x327 = 5018;
	volatile int32_t t70 = 1734373;

	t70 = (x325-((x326%x327)+x328));

	if (t70 != -464) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MAX;
	uint64_t x332 = UINT64_MAX;
	uint64_t t71 = 139LLU;

	t71 = (x329-((x330%x331)+x332));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x333 = 204549182LLU;
	uint32_t x334 = 496830U;
	volatile uint8_t x335 = UINT8_MAX;
	uint8_t x336 = 4U;
	volatile uint64_t t72 = 3265955LLU;

	t72 = (x333-((x334%x335)+x336));

	if (t72 != 204549088LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x339 = 54378968111LLU;
	int32_t x340 = INT32_MAX;

	t73 = (x337-((x338%x339)+x340));

	if (t73 != 18446744069414584449LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x346 = INT16_MIN;
	int16_t x347 = -9238;
	uint64_t x348 = 1213670253655LLU;

	t74 = (x345-((x346%x347)+x348));

	if (t74 != 18446742860039302887LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x350 = 12;
	volatile int32_t x351 = -715631262;
	int16_t x352 = -1;

	t75 = (x349-((x350%x351)+x352));

	if (t75 != 277189178500424927LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x353 = UINT32_MAX;
	volatile uint64_t x354 = UINT64_MAX;
	static int32_t x356 = INT32_MIN;
	static volatile uint64_t t76 = 18673LLU;

	t76 = (x353-((x354%x355)+x356));

	if (t76 != 6442450943LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MAX;
	int64_t x359 = -1LL;
	int32_t x360 = -1;

	t77 = (x357-((x358%x359)+x360));

	if (t77 != 128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = -1;
	int64_t x362 = -1LL;
	int8_t x363 = INT8_MIN;
	volatile uint8_t x364 = 15U;
	int64_t t78 = -1322745816734LL;

	t78 = (x361-((x362%x363)+x364));

	if (t78 != -15LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x365 = UINT8_MAX;
	volatile int16_t x366 = -735;
	int16_t x368 = INT16_MAX;
	static int32_t t79 = -16;

	t79 = (x365-((x366%x367)+x368));

	if (t79 != -32512) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = INT64_MAX;
	int16_t x370 = INT16_MAX;
	uint8_t x371 = 4U;
	volatile int64_t t80 = -182457494064088474LL;

	t80 = (x369-((x370%x371)+x372));

	if (t80 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	volatile uint64_t x375 = 88266267119LLU;
	int32_t x376 = INT32_MAX;
	uint64_t t81 = 12LLU;

	t81 = (x373-((x374%x375)+x376));

	if (t81 != 18446744039437824822LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x377 = -1;
	static uint16_t x378 = 15U;
	static int16_t x379 = -1;
	volatile uint16_t x380 = UINT16_MAX;
	volatile int32_t t82 = 8010;

	t82 = (x377-((x378%x379)+x380));

	if (t82 != -65536) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x381 = INT64_MIN;
	volatile int16_t x383 = INT16_MAX;
	int8_t x384 = -39;
	volatile int64_t t83 = 6832165388296LL;

	t83 = (x381-((x382%x383)+x384));

	if (t83 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x385 = INT32_MAX;
	uint16_t x386 = 43U;
	volatile uint64_t x387 = UINT64_MAX;
	uint8_t x388 = 34U;
	volatile uint64_t t84 = 1331149LLU;

	t84 = (x385-((x386%x387)+x388));

	if (t84 != 2147483570LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x389 = -1;
	volatile int32_t x390 = 2194360;
	static volatile int32_t x391 = -1;
	int64_t x392 = -1LL;

	t85 = (x389-((x390%x391)+x392));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x393 = 5478U;
	int32_t x394 = INT32_MIN;
	int32_t x395 = INT32_MAX;
	volatile int32_t t86 = 35;

	t86 = (x393-((x394%x395)+x396));

	if (t86 != 5325) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x397 = 216;
	static uint64_t x398 = 2461077516490688916LLU;
	int16_t x399 = -1;
	uint8_t x400 = 7U;
	uint64_t t87 = 957120LLU;

	t87 = (x397-((x398%x399)+x400));

	if (t87 != 15985666557218862909LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = 3405U;
	static int64_t x403 = INT64_MIN;
	uint8_t x404 = 44U;
	int64_t t88 = -10305584LL;

	t88 = (x401-((x402%x403)+x404));

	if (t88 != -9870LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x405 = -1866635946109LL;
	int8_t x406 = -1;
	int64_t x407 = -13832LL;
	int16_t x408 = INT16_MIN;
	static volatile int64_t t89 = -1079065008554688LL;

	t89 = (x405-((x406%x407)+x408));

	if (t89 != -1866635913340LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = INT8_MIN;
	volatile uint16_t x410 = 5U;
	static uint32_t x411 = 12765826U;
	int16_t x412 = -12;
	static volatile uint32_t t90 = 22835U;

	t90 = (x409-((x410%x411)+x412));

	if (t90 != 4294967175U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x413 = 503U;
	int8_t x414 = 7;
	int64_t x415 = -2115747012LL;
	int16_t x416 = -3881;
	int64_t t91 = -2003382381733664LL;

	t91 = (x413-((x414%x415)+x416));

	if (t91 != 4377LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x417 = -93736245LL;
	int32_t x418 = INT32_MAX;
	int8_t x419 = INT8_MIN;
	int32_t x420 = INT32_MIN;
	int64_t t92 = -1862461LL;

	t92 = (x417-((x418%x419)+x420));

	if (t92 != 2053747276LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = INT16_MIN;
	volatile int8_t x423 = INT8_MIN;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t93 = 1157;

	t93 = (x421-((x422%x423)+x424));

	if (t93 != -33150) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x429 = -157697;
	int32_t x430 = INT32_MIN;
	int64_t x431 = -71648324767038966LL;
	uint8_t x432 = 0U;
	int64_t t94 = -2LL;

	t94 = (x429-((x430%x431)+x432));

	if (t94 != 2147325951LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = 52;
	static int64_t x434 = INT64_MIN;
	uint16_t x435 = UINT16_MAX;
	uint64_t x436 = 44094642698201127LLU;
	uint64_t t95 = 89406788245308688LLU;

	t95 = (x433-((x434%x435)+x436));

	if (t95 != 18402649431011383309LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x438 = INT32_MIN;
	int64_t x440 = INT64_MIN;

	t96 = (x437-((x438%x439)+x440));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = 472;
	uint64_t x446 = UINT64_MAX;
	volatile int8_t x447 = -1;
	volatile uint64_t t97 = 519934828LLU;

	t97 = (x445-((x446%x447)+x448));

	if (t97 != 473LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = -6;
	int8_t x452 = INT8_MIN;
	volatile int32_t t98 = 11904444;

	t98 = (x449-((x450%x451)+x452));

	if (t98 != 122) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x453 = -1;
	static int64_t x455 = 32274340318LL;
	int16_t x456 = 494;
	volatile int64_t t99 = 36LL;

	t99 = (x453-((x454%x455)+x456));

	if (t99 != 22952346557LL) { NG(); } else { ; }
	
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

