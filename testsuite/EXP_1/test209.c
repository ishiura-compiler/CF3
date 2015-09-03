#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 3971483U;
int32_t x2 = INT32_MIN;
static uint16_t x8 = 1249U;
static int8_t x9 = INT8_MIN;
int8_t x12 = 3;
int8_t x13 = INT8_MIN;
volatile int32_t x16 = -1;
int64_t t4 = -40928239150712649LL;
uint64_t x21 = 6201038329238003193LLU;
static int8_t x24 = INT8_MAX;
int64_t x31 = -635569013694896LL;
int64_t t6 = 507852173LL;
int32_t x33 = INT32_MIN;
int32_t x36 = -1;
volatile int64_t t10 = 125550866279303LL;
int64_t x50 = -59814LL;
uint64_t t11 = 53LLU;
static int64_t x53 = INT64_MAX;
volatile int32_t x61 = -1;
uint8_t x62 = 2U;
static int16_t x73 = INT16_MAX;
uint64_t x74 = 1LLU;
int8_t x75 = INT8_MIN;
int32_t x83 = -24380202;
volatile int8_t x85 = INT8_MIN;
uint16_t x88 = UINT16_MAX;
static int64_t x92 = -1LL;
uint16_t x103 = 12U;
volatile int64_t t20 = -55176LL;
int32_t x110 = -1;
volatile int32_t t21 = 5841970;
volatile int64_t t22 = 13LL;
uint8_t x118 = 10U;
int64_t x131 = INT64_MIN;
uint32_t x139 = 7462U;
uint64_t t28 = 435921033975LLU;
volatile uint64_t t29 = 9LLU;
int8_t x151 = -1;
uint8_t x152 = 0U;
static int8_t x156 = INT8_MIN;
volatile int32_t t31 = -33;
uint8_t x161 = 0U;
int32_t x163 = -4069032;
int32_t x164 = -662;
int32_t x166 = 94;
int8_t x167 = INT8_MIN;
volatile uint32_t t33 = 1016449U;
int64_t x170 = -1LL;
static uint8_t x173 = 60U;
int16_t x174 = -1;
static int64_t x188 = INT64_MAX;
int64_t x194 = -29967LL;
int8_t x198 = INT8_MIN;
volatile uint32_t x200 = UINT32_MAX;
static uint64_t x202 = 1091484513302LLU;
int32_t x205 = INT32_MAX;
uint8_t x206 = 20U;
uint8_t x208 = 3U;
uint16_t x221 = 15419U;
uint64_t t44 = 9LLU;
uint16_t x229 = 623U;
volatile uint32_t x235 = 1946U;
uint32_t x257 = 5819U;
static int32_t x265 = -1;
volatile uint64_t x267 = UINT64_MAX;
volatile int64_t t53 = -70561224811253LL;
int64_t x277 = INT64_MAX;
volatile int8_t x279 = INT8_MIN;
volatile int16_t x281 = -1;
int16_t x284 = INT16_MIN;
int32_t x294 = INT32_MIN;
int16_t x296 = -1;
volatile int8_t x309 = -1;
int64_t x311 = INT64_MAX;
int8_t x312 = -22;
volatile int64_t t60 = 160593LL;
int32_t x330 = 17988699;
int16_t x335 = -99;
int64_t x349 = -1LL;
volatile int16_t x350 = INT16_MAX;
uint64_t x351 = UINT64_MAX;
uint16_t x359 = 1635U;
uint32_t x362 = 66897113U;
static volatile int8_t x370 = -7;
uint64_t x372 = UINT64_MAX;
static volatile int64_t t71 = -13LL;
static int64_t x379 = -1LL;
uint16_t x383 = 807U;
uint32_t x384 = 10531796U;
int8_t x386 = INT8_MIN;
volatile int32_t x390 = INT32_MIN;
int16_t x397 = INT16_MAX;
volatile int8_t x399 = INT8_MIN;
volatile int16_t x400 = -1;
uint16_t x402 = 73U;
volatile int16_t x404 = INT16_MAX;
int16_t x421 = -236;
int64_t x424 = INT64_MIN;
uint64_t x425 = 112LLU;
uint8_t x426 = 23U;
static int32_t x432 = -1;
static volatile int64_t x434 = -1584447851117481LL;
uint64_t x435 = 79LLU;
volatile int8_t x436 = -1;
int32_t t85 = -222665;
int16_t x449 = INT16_MIN;
static int32_t x452 = INT32_MAX;
int8_t x456 = INT8_MIN;
int64_t t89 = -3010LL;
int8_t x464 = INT8_MIN;
int32_t x473 = -637;
volatile uint8_t x491 = 15U;
volatile int32_t x509 = 686168357;
int16_t x518 = INT16_MIN;


void f0(void) {
	volatile uint8_t x3 = UINT8_MAX;
	int8_t x4 = 39;
	uint32_t t0 = 4289120U;

	t0 = (((x1-x2)/x3)+x4);

	if (t0 != 8437117U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	uint32_t x6 = 388U;
	uint16_t x7 = 24952U;
	static volatile uint32_t t1 = 4546U;

	t1 = (((x5-x6)/x7)+x8);

	if (t1 != 173378U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	volatile int8_t x11 = -1;
	volatile int32_t t2 = 45747983;

	t2 = (((x9-x10)/x11)+x12);

	if (t2 != 386) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	uint32_t x15 = UINT32_MAX;
	uint32_t t3 = UINT32_MAX;

	t3 = (((x13-x14)/x15)+x16);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int32_t x18 = -688585;
	int64_t x19 = 59LL;
	static int32_t x20 = INT32_MAX;

	t4 = (((x17-x18)/x19)+x20);

	if (t4 != -156328337460212746LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MAX;
	int16_t x23 = -1;
	uint64_t t5 = 8950868684929510LLU;

	t5 = (((x21-x22)/x23)+x24);

	if (t5 != 127LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int8_t x30 = -26;
	int32_t x32 = INT32_MIN;

	t6 = (((x29-x30)/x31)+x32);

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MIN;
	int64_t t7 = -20001270999082LL;

	t7 = (((x33-x34)/x35)+x36);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MIN;
	volatile uint64_t x38 = 15968735LLU;
	int8_t x39 = -1;
	uint32_t x40 = UINT32_MAX;
	uint64_t t8 = 51909687076263427LLU;

	t8 = (((x37-x38)/x39)+x40);

	if (t8 != 4294967295LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	int64_t x42 = -2LL;
	static volatile uint16_t x43 = 37U;
	int16_t x44 = INT16_MIN;
	int64_t t9 = -45906277973LL;

	t9 = (((x41-x42)/x43)+x44);

	if (t9 != -33653LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -118575545;
	int32_t x46 = INT32_MIN;
	int64_t x47 = -1LL;
	int8_t x48 = INT8_MIN;

	t10 = (((x45-x46)/x47)+x48);

	if (t10 != -2028908231LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 1593677289U;
	int8_t x51 = INT8_MAX;
	volatile uint64_t x52 = 2LLU;

	t11 = (((x49-x50)/x51)+x52);

	if (t11 != 12549113LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = 30LL;
	uint16_t x55 = UINT16_MAX;
	uint32_t x56 = UINT32_MAX;
	static volatile int64_t t12 = -17994516048447674LL;

	t12 = (((x53-x54)/x55)+x56);

	if (t12 != 140743930839039LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x63 = 28;
	int32_t x64 = INT32_MAX;
	volatile int32_t t13 = INT32_MAX;

	t13 = (((x61-x62)/x63)+x64);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x65 = 1543162619U;
	int32_t x66 = -1;
	volatile int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MIN;
	static uint32_t t14 = 969003665U;

	t14 = (((x65-x66)/x67)+x68);

	if (t14 != 4294967168U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x76 = -1;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (((x73-x74)/x75)+x76);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x81 = -1225600614984LL;
	static int32_t x82 = INT32_MIN;
	static int16_t x84 = -1;
	volatile int64_t t16 = -5314042665358LL;

	t16 = (((x81-x82)/x83)+x84);

	if (t16 != 50181LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x86 = -1;
	static int8_t x87 = -1;
	int32_t t17 = -750536393;

	t17 = (((x85-x86)/x87)+x88);

	if (t17 != 65662) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MIN;
	volatile uint8_t x90 = UINT8_MAX;
	int32_t x91 = INT32_MIN;
	volatile int64_t t18 = 39527LL;

	t18 = (((x89-x90)/x91)+x92);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x101 = INT16_MIN;
	int16_t x102 = -1;
	static int8_t x104 = -1;
	int32_t t19 = 22;

	t19 = (((x101-x102)/x103)+x104);

	if (t19 != -2731) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x105 = 82U;
	static int32_t x106 = INT32_MAX;
	static int64_t x107 = INT64_MIN;
	volatile int16_t x108 = -1;

	t20 = (((x105-x106)/x107)+x108);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x109 = INT32_MIN;
	uint8_t x111 = 81U;
	int32_t x112 = 3438;

	t21 = (((x109-x110)/x111)+x112);

	if (t21 != -26508705) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	uint8_t x114 = 0U;
	volatile int64_t x115 = -1LL;
	int8_t x116 = INT8_MIN;

	t22 = (((x113-x114)/x115)+x116);

	if (t22 != 32640LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	uint32_t x120 = 3212578U;
	volatile uint32_t t23 = 171097U;

	t23 = (((x117-x118)/x119)+x120);

	if (t23 != 3212578U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = INT64_MIN;
	static int16_t x122 = -38;
	static uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MIN;
	volatile int64_t t24 = -812310LL;

	t24 = (((x121-x122)/x123)+x124);

	if (t24 != -140739635871872LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = 7282658719534791LL;
	int8_t x130 = -1;
	int16_t x132 = INT16_MIN;
	volatile int64_t t25 = 0LL;

	t25 = (((x129-x130)/x131)+x132);

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x133 = INT8_MIN;
	static int16_t x134 = -982;
	uint64_t x135 = 9807LLU;
	int8_t x136 = -1;
	uint64_t t26 = UINT64_MAX;

	t26 = (((x133-x134)/x135)+x136);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = 7U;
	uint16_t x138 = UINT16_MAX;
	int32_t x140 = INT32_MAX;
	static volatile uint32_t t27 = 198944630U;

	t27 = (((x137-x138)/x139)+x140);

	if (t27 != 2148059216U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = INT64_MAX;
	uint64_t x142 = UINT64_MAX;
	uint64_t x143 = UINT64_MAX;
	static int16_t x144 = INT16_MAX;

	t28 = (((x141-x142)/x143)+x144);

	if (t28 != 32767LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = 33327;
	static uint8_t x146 = UINT8_MAX;
	uint8_t x147 = 35U;
	static uint64_t x148 = 6704186492794LLU;

	t29 = (((x145-x146)/x147)+x148);

	if (t29 != 6704186493738LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x149 = -1;
	volatile int8_t x150 = INT8_MIN;
	int32_t t30 = -513862;

	t30 = (((x149-x150)/x151)+x152);

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 3U;
	int8_t x154 = -1;
	static int32_t x155 = 4278;

	t31 = (((x153-x154)/x155)+x156);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x162 = UINT8_MAX;
	int32_t t32 = 50149;

	t32 = (((x161-x162)/x163)+x164);

	if (t32 != -662) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x165 = -14543199;
	uint32_t x168 = 850694429U;

	t33 = (((x165-x166)/x167)+x168);

	if (t33 != 850808048U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = INT64_MIN;
	static uint64_t x171 = 454191319173243445LLU;
	static uint16_t x172 = 1229U;
	uint64_t t34 = 1171633684936390LLU;

	t34 = (((x169-x170)/x171)+x172);

	if (t34 != 1249LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 7400700LLU;
	volatile uint64_t t35 = 3268312674LLU;

	t35 = (((x173-x174)/x175)+x176);

	if (t35 != 7400700LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x177 = UINT16_MAX;
	static int32_t x178 = -1;
	int16_t x179 = 439;
	int16_t x180 = INT16_MAX;
	volatile int32_t t36 = 72;

	t36 = (((x177-x178)/x179)+x180);

	if (t36 != 32916) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = UINT64_MAX;
	int32_t x182 = 734964488;
	static volatile int16_t x183 = INT16_MIN;
	volatile uint8_t x184 = UINT8_MAX;
	volatile uint64_t t37 = 26484031345883538LLU;

	t37 = (((x181-x182)/x183)+x184);

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x185 = INT64_MAX;
	int64_t x186 = INT64_MAX;
	int64_t x187 = -1LL;
	int64_t t38 = INT64_MAX;

	t38 = (((x185-x186)/x187)+x188);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x193 = -1;
	uint64_t x195 = 273298LLU;
	int16_t x196 = -1;
	uint64_t t39 = UINT64_MAX;

	t39 = (((x193-x194)/x195)+x196);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = INT32_MIN;
	static uint8_t x199 = UINT8_MAX;
	volatile uint32_t t40 = 277193830U;

	t40 = (((x197-x198)/x199)+x200);

	if (t40 != 4286545791U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = INT64_MIN;
	int64_t x203 = 2589264870601LL;
	uint16_t x204 = 4924U;
	static volatile uint64_t t41 = 1636LLU;

	t41 = (((x201-x202)/x203)+x204);

	if (t41 != 3567082LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x207 = 28788U;
	volatile uint32_t t42 = 2U;

	t42 = (((x205-x206)/x207)+x208);

	if (t42 != 74599U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x217 = -1;
	int16_t x218 = -1;
	uint32_t x219 = UINT32_MAX;
	int8_t x220 = INT8_MAX;
	static volatile uint32_t t43 = 130836276U;

	t43 = (((x217-x218)/x219)+x220);

	if (t43 != 127U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x222 = -2;
	int8_t x223 = INT8_MAX;
	static uint64_t x224 = 1596735451216305297LLU;

	t44 = (((x221-x222)/x223)+x224);

	if (t44 != 1596735451216305418LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x230 = 50846U;
	uint32_t x231 = 454949U;
	int64_t x232 = INT64_MIN;
	int64_t t45 = -79576492520084LL;

	t45 = (((x229-x230)/x231)+x232);

	if (t45 != -9223372036854766368LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x233 = INT32_MIN;
	uint64_t x234 = 2988687848895447822LLU;
	volatile int8_t x236 = INT8_MIN;
	uint64_t t46 = 2079039341LLU;

	t46 = (((x233-x234)/x235)+x236);

	if (t46 != 7943502683795668LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x245 = UINT32_MAX;
	uint8_t x246 = UINT8_MAX;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = 621U;
	volatile uint32_t t47 = 3308U;

	t47 = (((x245-x246)/x247)+x248);

	if (t47 != 622U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x249 = UINT16_MAX;
	int16_t x250 = INT16_MIN;
	volatile int32_t x251 = INT32_MAX;
	int8_t x252 = -1;
	volatile int32_t t48 = 7172;

	t48 = (((x249-x250)/x251)+x252);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x253 = 4598984718042299LLU;
	static int32_t x254 = -14;
	int64_t x255 = INT64_MAX;
	uint32_t x256 = 88806578U;
	static uint64_t t49 = 20154246LLU;

	t49 = (((x253-x254)/x255)+x256);

	if (t49 != 88806578LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x258 = INT8_MIN;
	uint16_t x259 = 286U;
	int32_t x260 = 893206670;
	static volatile uint32_t t50 = 5U;

	t50 = (((x257-x258)/x259)+x260);

	if (t50 != 893206690U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x261 = -1;
	int64_t x262 = 1618076LL;
	int32_t x263 = INT32_MIN;
	int64_t x264 = -1LL;
	volatile int64_t t51 = -6971113275LL;

	t51 = (((x261-x262)/x263)+x264);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x266 = 745195051559LLU;
	static uint32_t x268 = 42U;
	volatile uint64_t t52 = 425276096LLU;

	t52 = (((x265-x266)/x267)+x268);

	if (t52 != 42LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = -22582;
	volatile int64_t x274 = -1LL;
	volatile uint8_t x275 = 3U;
	int8_t x276 = INT8_MIN;

	t53 = (((x273-x274)/x275)+x276);

	if (t53 != -7655LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x278 = UINT8_MAX;
	volatile int64_t x280 = 63817431607190LL;
	volatile int64_t t54 = 3LL;

	t54 = (((x277-x278)/x279)+x280);

	if (t54 != -71993776606320744LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x282 = INT64_MIN;
	static int16_t x283 = INT16_MIN;
	static int64_t t55 = -1769528112382834593LL;

	t55 = (((x281-x282)/x283)+x284);

	if (t55 != -281474976743423LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x289 = 4313000580026LLU;
	uint8_t x290 = UINT8_MAX;
	int64_t x291 = 17467867365396LL;
	int32_t x292 = 29263;
	volatile uint64_t t56 = 390534LLU;

	t56 = (((x289-x290)/x291)+x292);

	if (t56 != 29263LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x293 = 44541LL;
	volatile uint16_t x295 = UINT16_MAX;
	volatile int64_t t57 = 4053311680137LL;

	t57 = (((x293-x294)/x295)+x296);

	if (t57 != 32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x297 = INT32_MAX;
	uint32_t x298 = 51216031U;
	static uint8_t x299 = UINT8_MAX;
	volatile int8_t x300 = 3;
	uint32_t t58 = 94093U;

	t58 = (((x297-x298)/x299)+x300);

	if (t58 != 8220660U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x301 = 39893062023995620LL;
	static volatile int64_t x302 = -1LL;
	uint64_t x303 = 67494793LLU;
	volatile int16_t x304 = INT16_MAX;
	volatile uint64_t t59 = 21LLU;

	t59 = (((x301-x302)/x303)+x304);

	if (t59 != 591086687LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x310 = INT16_MAX;

	t60 = (((x309-x310)/x311)+x312);

	if (t60 != -22LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x313 = 62712898LLU;
	static int16_t x314 = INT16_MIN;
	static int16_t x315 = -1;
	int16_t x316 = INT16_MIN;
	static uint64_t t61 = 3955714852LLU;

	t61 = (((x313-x314)/x315)+x316);

	if (t61 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x317 = 1208012U;
	int16_t x318 = -1;
	int32_t x319 = -361;
	int8_t x320 = -5;
	uint32_t t62 = 7671660U;

	t62 = (((x317-x318)/x319)+x320);

	if (t62 != 4294967291U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x325 = 55U;
	int8_t x326 = 12;
	int16_t x327 = INT16_MIN;
	static int64_t x328 = -195341431792LL;
	volatile int64_t t63 = 68128515661429LL;

	t63 = (((x325-x326)/x327)+x328);

	if (t63 != -195341431792LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x329 = -278227281218733LL;
	uint64_t x331 = 1893361359LLU;
	uint64_t x332 = UINT64_MAX;
	uint64_t t64 = 106220583880025LLU;

	t64 = (((x329-x330)/x331)+x332);

	if (t64 != 9742707464LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x333 = INT16_MAX;
	uint64_t x334 = UINT64_MAX;
	int8_t x336 = INT8_MAX;
	volatile uint64_t t65 = 33172828434LLU;

	t65 = (((x333-x334)/x335)+x336);

	if (t65 != 127LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x352 = INT16_MIN;
	uint64_t t66 = 12282497128854894LLU;

	t66 = (((x349-x350)/x351)+x352);

	if (t66 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MAX;
	volatile uint32_t x356 = 31U;
	int64_t t67 = 12062355891LL;

	t67 = (((x353-x354)/x355)+x356);

	if (t67 != 31LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x357 = INT16_MAX;
	uint32_t x358 = UINT32_MAX;
	int64_t x360 = -1LL;
	volatile int64_t t68 = 5540407LL;

	t68 = (((x357-x358)/x359)+x360);

	if (t68 != 19LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x361 = -1;
	static uint64_t x363 = UINT64_MAX;
	uint8_t x364 = 0U;
	volatile uint64_t t69 = 114LLU;

	t69 = (((x361-x362)/x363)+x364);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x369 = INT8_MIN;
	int16_t x371 = INT16_MAX;
	uint64_t t70 = UINT64_MAX;

	t70 = (((x369-x370)/x371)+x372);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x373 = INT32_MIN;
	int16_t x374 = -1;
	int16_t x375 = -898;
	static int64_t x376 = INT64_MIN;

	t71 = (((x373-x374)/x375)+x376);

	if (t71 != -9223372036852384401LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x377 = INT8_MIN;
	volatile int8_t x378 = -1;
	int16_t x380 = 33;
	volatile int64_t t72 = -947874210463LL;

	t72 = (((x377-x378)/x379)+x380);

	if (t72 != 160LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x381 = INT64_MIN;
	static int64_t x382 = -1LL;
	static int64_t t73 = 108584081868090343LL;

	t73 = (((x381-x382)/x383)+x384);

	if (t73 != -11429209452733105LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x385 = INT8_MIN;
	int32_t x387 = INT32_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t74 = 415144917;

	t74 = (((x385-x386)/x387)+x388);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x389 = INT8_MIN;
	int16_t x391 = INT16_MAX;
	static volatile uint8_t x392 = 3U;
	volatile int32_t t75 = 229441;

	t75 = (((x389-x390)/x391)+x392);

	if (t75 != 65540) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x393 = 681285963U;
	uint8_t x394 = 17U;
	volatile int64_t x395 = -1LL;
	volatile int32_t x396 = INT32_MIN;
	volatile int64_t t76 = -138LL;

	t76 = (((x393-x394)/x395)+x396);

	if (t76 != -2828769594LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x398 = 1U;
	volatile int32_t t77 = 258108;

	t77 = (((x397-x398)/x399)+x400);

	if (t77 != -256) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x401 = 47440U;
	int16_t x403 = INT16_MAX;
	volatile uint32_t t78 = 753U;

	t78 = (((x401-x402)/x403)+x404);

	if (t78 != 32768U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x409 = UINT16_MAX;
	int32_t x410 = 21036;
	volatile uint16_t x411 = UINT16_MAX;
	static int64_t x412 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = (((x409-x410)/x411)+x412);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x417 = -1;
	volatile int64_t x418 = -694LL;
	int8_t x419 = INT8_MIN;
	int32_t x420 = 1821576;
	volatile int64_t t80 = -892782335227659LL;

	t80 = (((x417-x418)/x419)+x420);

	if (t80 != 1821571LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x422 = -1;
	static int8_t x423 = INT8_MIN;
	volatile int64_t t81 = -1965LL;

	t81 = (((x421-x422)/x423)+x424);

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x427 = UINT16_MAX;
	int32_t x428 = INT32_MIN;
	uint64_t t82 = 13255168964LLU;

	t82 = (((x425-x426)/x427)+x428);

	if (t82 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x429 = 1;
	uint64_t x430 = 6433569LLU;
	static uint8_t x431 = 2U;
	volatile uint64_t t83 = 2759458983995797935LLU;

	t83 = (((x429-x430)/x431)+x432);

	if (t83 != 9223372036851559023LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x433 = INT8_MAX;
	uint64_t t84 = 78LLU;

	t84 = (((x433-x434)/x435)+x436);

	if (t84 != 20056301912880LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x437 = INT8_MIN;
	uint16_t x438 = 1U;
	volatile int16_t x439 = -675;
	uint16_t x440 = 196U;

	t85 = (((x437-x438)/x439)+x440);

	if (t85 != 196) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x441 = INT32_MIN;
	int16_t x442 = INT16_MIN;
	uint64_t x443 = 14773062727LLU;
	int8_t x444 = INT8_MIN;
	uint64_t t86 = 5617523192418LLU;

	t86 = (((x441-x442)/x443)+x444);

	if (t86 != 1248674193LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x445 = -1;
	int32_t x446 = INT32_MIN;
	static int16_t x447 = INT16_MAX;
	static volatile uint64_t x448 = 4815266206LLU;
	volatile uint64_t t87 = 47LLU;

	t87 = (((x445-x446)/x447)+x448);

	if (t87 != 4815331744LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x450 = -1;
	int64_t x451 = INT64_MAX;
	volatile int64_t t88 = 61442015LL;

	t88 = (((x449-x450)/x451)+x452);

	if (t88 != 2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x453 = 8305586LL;
	volatile int32_t x454 = INT32_MAX;
	volatile uint16_t x455 = UINT16_MAX;

	t89 = (((x453-x454)/x455)+x456);

	if (t89 != -32769LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x461 = INT32_MAX;
	uint8_t x462 = 0U;
	static int32_t x463 = INT32_MAX;
	int32_t t90 = 2331;

	t90 = (((x461-x462)/x463)+x464);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x469 = INT16_MIN;
	int64_t x470 = 85627LL;
	static int64_t x471 = INT64_MIN;
	static int16_t x472 = INT16_MIN;
	volatile int64_t t91 = 32296043799169521LL;

	t91 = (((x469-x470)/x471)+x472);

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x474 = 444530531LLU;
	static uint32_t x475 = UINT32_MAX;
	volatile uint32_t x476 = UINT32_MAX;
	volatile uint64_t t92 = 1510131628343LLU;

	t92 = (((x473-x474)/x475)+x476);

	if (t92 != 8589934591LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x481 = 233U;
	int32_t x482 = -1;
	int64_t x483 = 129495326382LL;
	int16_t x484 = -1;
	int64_t t93 = 227813166789680705LL;

	t93 = (((x481-x482)/x483)+x484);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x485 = -1;
	uint8_t x486 = 30U;
	volatile uint32_t x487 = 1510710038U;
	int16_t x488 = INT16_MIN;
	volatile uint32_t t94 = 36U;

	t94 = (((x485-x486)/x487)+x488);

	if (t94 != 4294934530U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x489 = 406;
	int64_t x490 = 16670014036LL;
	int32_t x492 = -481238;
	static volatile int64_t t95 = -5440973373007LL;

	t95 = (((x489-x490)/x491)+x492);

	if (t95 != -1111815480LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x497 = 0;
	uint8_t x498 = UINT8_MAX;
	int64_t x499 = -1LL;
	static int32_t x500 = INT32_MIN;
	volatile int64_t t96 = -508016LL;

	t96 = (((x497-x498)/x499)+x500);

	if (t96 != -2147483393LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = INT8_MAX;
	uint64_t x502 = 269693196480LLU;
	int32_t x503 = -301;
	volatile int8_t x504 = INT8_MIN;
	uint64_t t97 = 230771093478361673LLU;

	t97 = (((x501-x502)/x503)+x504);

	if (t97 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x510 = 2156;
	uint8_t x511 = 8U;
	uint64_t x512 = 81297186LLU;
	static uint64_t t98 = 2093828960841LLU;

	t98 = (((x509-x510)/x511)+x512);

	if (t98 != 167067961LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x517 = -1;
	uint16_t x519 = 6U;
	uint8_t x520 = 5U;
	volatile int32_t t99 = 1;

	t99 = (((x517-x518)/x519)+x520);

	if (t99 != 5466) { NG(); } else { ; }
	
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

