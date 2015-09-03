#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
static int64_t t4 = -130609449LL;
volatile int64_t x38 = INT64_MIN;
int32_t x40 = INT32_MIN;
volatile int8_t x45 = 18;
uint8_t x46 = 113U;
volatile int32_t x53 = INT32_MIN;
volatile int32_t x54 = INT32_MIN;
int16_t x61 = -1;
int64_t x64 = INT64_MAX;
int64_t t10 = -37668647848719380LL;
uint64_t t11 = 2082895859572584832LLU;
volatile uint8_t x70 = 25U;
uint64_t x75 = UINT64_MAX;
uint16_t x76 = 7U;
static volatile int32_t t15 = 64786;
int64_t x88 = -57567LL;
static int32_t t18 = -895;
uint64_t x104 = 767LLU;
int16_t x130 = -1;
int64_t x139 = -1LL;
static uint16_t x141 = 300U;
volatile int8_t x143 = INT8_MIN;
int8_t x156 = -13;
volatile int32_t x163 = INT32_MAX;
volatile int32_t t29 = 217;
uint32_t t30 = 11041U;
int16_t x174 = INT16_MIN;
volatile uint64_t x175 = 880LLU;
int8_t x186 = INT8_MIN;
uint8_t x189 = 52U;
uint32_t x190 = 1U;
int32_t x191 = INT32_MIN;
static int64_t x195 = 1LL;
static uint32_t x196 = 29878864U;
uint64_t t37 = 37586846549397LLU;
uint32_t x201 = 344954641U;
volatile int64_t x202 = -833LL;
static volatile int16_t x203 = -214;
int32_t x204 = -265;
static volatile uint64_t x215 = UINT64_MAX;
volatile int32_t x235 = INT32_MAX;
int64_t x249 = -1LL;
static int32_t x250 = -1;
int8_t x254 = -1;
int8_t x256 = INT8_MAX;
uint16_t x257 = 1U;
int64_t x273 = -1LL;
uint16_t x280 = 406U;
static uint64_t x287 = 1881212923963706165LLU;
uint8_t x299 = 59U;
uint8_t x300 = 4U;
int8_t x302 = INT8_MAX;
uint64_t t54 = 7390LLU;
static int64_t t55 = -14186LL;
int32_t t56 = -912;
uint32_t x324 = UINT32_MAX;
uint16_t x337 = 1U;
int64_t x353 = INT64_MAX;
volatile int32_t x355 = 38337;
uint16_t x357 = UINT16_MAX;
uint64_t x361 = 11417LLU;
static uint8_t x371 = 60U;
int32_t x373 = -2589233;
int16_t x378 = INT16_MIN;
uint64_t t68 = 1615805488LLU;
uint8_t x386 = 1U;
volatile int16_t x390 = INT16_MAX;
uint64_t x392 = 41855888LLU;
uint16_t x404 = 64U;
int64_t t73 = 174355171356LL;
int16_t x406 = 6837;
static volatile int8_t x412 = -57;
static int64_t t76 = -2612482744LL;
uint16_t x421 = 1047U;
uint16_t x427 = UINT16_MAX;
uint16_t x429 = 735U;
volatile int16_t x430 = -2;
uint8_t x432 = UINT8_MAX;
int64_t x433 = -22732LL;
uint16_t x436 = 376U;
uint16_t x441 = UINT16_MAX;
static uint32_t x447 = UINT32_MAX;
uint32_t t83 = 1424306U;
int8_t x453 = -1;
int64_t x460 = INT64_MIN;
volatile int64_t t86 = 39755347186561005LL;
volatile int64_t x466 = INT64_MIN;
uint8_t x467 = 10U;
volatile int16_t x468 = INT16_MIN;
int64_t x472 = INT64_MIN;
static int8_t x474 = 0;
uint32_t x481 = 56470366U;
volatile uint8_t x507 = UINT8_MAX;
int32_t x512 = INT32_MIN;
int64_t t96 = 146LL;
uint32_t x517 = UINT32_MAX;
uint16_t x518 = 0U;
static uint8_t x520 = 71U;
int64_t x521 = -88022385728060LL;
uint64_t x524 = UINT64_MAX;
volatile uint64_t t99 = 4120235559232996258LLU;


void f0(void) {
	static int16_t x2 = -1;
	int16_t x3 = -7;
	static volatile uint32_t x4 = UINT32_MAX;
	static volatile int64_t t0 = 4132948782200541LL;

	t0 = (x1^(x2/(x3%x4)));

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MAX;
	volatile int32_t x6 = -677683841;
	int64_t x7 = -1LL;
	static int16_t x8 = INT16_MAX;
	int64_t t1 = 754656411LL;

	t1 = (x5^(x6/(x7%x8)));

	if (t1 != 677698942LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int64_t x10 = 0LL;
	int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MAX;
	int64_t t2 = 7624085485011LL;

	t2 = (x9^(x10/(x11%x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = 14;
	static volatile uint32_t x18 = 220510713U;
	static uint16_t x19 = 22U;
	static volatile uint16_t x20 = 13U;
	volatile uint32_t t3 = 487U;

	t3 = (x17^(x18/(x19%x20)));

	if (t3 != 24501192U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = 666;
	volatile int64_t x26 = INT64_MIN;
	uint16_t x27 = 89U;
	int8_t x28 = 13;

	t4 = (x25^(x26/(x27%x28)));

	if (t4 != -838488366986797182LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = -5677497217179288LL;
	int16_t x39 = INT16_MIN;
	int64_t t5 = 1989256392547770LL;

	t5 = (x37^(x38/(x39%x40)));

	if (t5 != -5958972193889944LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 30U;
	uint16_t x42 = 0U;
	uint16_t x43 = 1U;
	uint64_t x44 = 50513LLU;
	uint64_t t6 = 96LLU;

	t6 = (x41^(x42/(x43%x44)));

	if (t6 != 30LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t7 = 399195503;

	t7 = (x45^(x46/(x47%x48)));

	if (t7 != 18) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x55 = 54951U;
	static int8_t x56 = -11;
	uint32_t t8 = 4508U;

	t8 = (x53^(x54/(x55%x56)));

	if (t8 != 2147522727U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x57 = INT32_MIN;
	int64_t x58 = -214534802LL;
	int64_t x59 = INT64_MIN;
	volatile int16_t x60 = -14;
	int64_t t9 = 7379LL;

	t9 = (x57^(x58/(x59%x60)));

	if (t9 != -2120666798LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x62 = UINT32_MAX;
	int32_t x63 = INT32_MAX;

	t10 = (x61^(x62/(x63%x64)));

	if (t10 != -3LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x65 = UINT32_MAX;
	volatile int32_t x66 = INT32_MIN;
	uint64_t x67 = 41013316LLU;
	volatile uint32_t x68 = 21U;

	t11 = (x65^(x66/(x67%x68)));

	if (t11 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x69 = 0;
	int8_t x71 = INT8_MIN;
	volatile int32_t x72 = 228;
	static int32_t t12 = 58550683;

	t12 = (x69^(x70/(x71%x72)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x73 = 243312980454344LLU;
	volatile int16_t x74 = -1;
	volatile uint64_t t13 = 9997802175240LLU;

	t13 = (x73^(x74/(x75%x76)));

	if (t13 != 18446500760729097271LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = 2U;
	int16_t x78 = INT16_MIN;
	int8_t x79 = -31;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t14 = 0;

	t14 = (x77^(x78/(x79%x80)));

	if (t14 != 1059) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x81 = UINT8_MAX;
	uint8_t x82 = UINT8_MAX;
	uint8_t x83 = 1U;
	int32_t x84 = 4;

	t15 = (x81^(x82/(x83%x84)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x85 = INT64_MAX;
	uint64_t x86 = 6742373190LLU;
	int8_t x87 = 2;
	volatile uint64_t t16 = 6575169304981935LLU;

	t16 = (x85^(x86/(x87%x88)));

	if (t16 != 9223372033483589212LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x93 = -1;
	int64_t x94 = INT64_MIN;
	static int8_t x95 = INT8_MIN;
	static volatile int32_t x96 = INT32_MAX;
	static volatile int64_t t17 = 8339151LL;

	t17 = (x93^(x94/(x95%x96)));

	if (t17 != -72057594037927937LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MAX;
	int16_t x98 = INT16_MIN;
	static int8_t x99 = INT8_MAX;
	uint8_t x100 = UINT8_MAX;

	t18 = (x97^(x98/(x99%x100)));

	if (t18 != -32511) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = UINT32_MAX;
	volatile int16_t x102 = 1;
	int32_t x103 = INT32_MIN;
	uint64_t t19 = 19658919377930851LLU;

	t19 = (x101^(x102/(x103%x104)));

	if (t19 != 4294967295LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x117 = -1;
	int32_t x118 = -1;
	static int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MIN;
	int32_t t20 = 263835426;

	t20 = (x117^(x118/(x119%x120)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x121 = -7058181;
	static int64_t x122 = INT64_MAX;
	volatile uint8_t x123 = 48U;
	int64_t x124 = INT64_MIN;
	int64_t t21 = -6731163999609612LL;

	t21 = (x121^(x122/(x123%x124)));

	if (t21 != -192153584102611375LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = INT64_MAX;
	int8_t x126 = 55;
	volatile uint64_t x127 = UINT64_MAX;
	uint32_t x128 = 57764642U;
	volatile uint64_t t22 = 17287LLU;

	t22 = (x125^(x126/(x127%x128)));

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x129 = -1;
	int16_t x131 = -1;
	int16_t x132 = -13651;
	volatile int32_t t23 = 359;

	t23 = (x129^(x130/(x131%x132)));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x133 = 13U;
	static int16_t x134 = INT16_MAX;
	int8_t x135 = INT8_MAX;
	static int64_t x136 = INT64_MIN;
	volatile int64_t t24 = 132529800204914486LL;

	t24 = (x133^(x134/(x135%x136)));

	if (t24 != 271LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = 34;
	static uint32_t x138 = 7U;
	uint8_t x140 = 2U;
	volatile int64_t t25 = 477887170465549760LL;

	t25 = (x137^(x138/(x139%x140)));

	if (t25 != -37LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x142 = 836U;
	static int64_t x144 = 741LL;
	static volatile int64_t t26 = -19110953072LL;

	t26 = (x141^(x142/(x143%x144)));

	if (t26 != -298LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x149 = INT8_MIN;
	volatile int16_t x150 = INT16_MIN;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = -19633557;
	volatile uint64_t t27 = 125917442LLU;

	t27 = (x149^(x150/(x151%x152)));

	if (t27 != 18446743134157690805LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x153 = 112U;
	static uint64_t x154 = 29707756086966LLU;
	uint32_t x155 = UINT32_MAX;
	uint64_t t28 = 30504930LLU;

	t28 = (x153^(x154/(x155%x156)));

	if (t28 != 2475646340500LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = 3757;
	int16_t x162 = INT16_MIN;
	int16_t x164 = INT16_MIN;

	t29 = (x161^(x162/(x163%x164)));

	if (t29 != -3758) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = INT16_MIN;
	static volatile int16_t x166 = -1;
	int32_t x167 = 481321015;
	uint32_t x168 = 383U;

	t30 = (x165^(x166/(x167%x168)));

	if (t30 != 4281528615U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x169 = 3;
	volatile uint16_t x170 = UINT16_MAX;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MIN;
	volatile int64_t t31 = 0LL;

	t31 = (x169^(x170/(x171%x172)));

	if (t31 != -4LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x176 = UINT32_MAX;
	uint64_t t32 = 1556LLU;

	t32 = (x173^(x174/(x175%x176)));

	if (t32 != 9244334246029445715LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x177 = 58868441611LLU;
	volatile int32_t x178 = -1;
	static volatile uint16_t x179 = 44U;
	volatile int8_t x180 = INT8_MIN;
	volatile uint64_t t33 = 115503LLU;

	t33 = (x177^(x178/(x179%x180)));

	if (t33 != 58868441611LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x181 = INT32_MIN;
	static uint16_t x182 = UINT16_MAX;
	int8_t x183 = -2;
	static int8_t x184 = INT8_MIN;
	int32_t t34 = -7;

	t34 = (x181^(x182/(x183%x184)));

	if (t34 != 2147450881) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x185 = -420978190;
	uint8_t x187 = 2U;
	int64_t x188 = INT64_MAX;
	int64_t t35 = 51830LL;

	t35 = (x185^(x186/(x187%x188)));

	if (t35 != 420978226LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x192 = UINT64_MAX;
	uint64_t t36 = 503267630929105LLU;

	t36 = (x189^(x190/(x191%x192)));

	if (t36 != 52LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x193 = UINT64_MAX;
	volatile uint32_t x194 = 88580U;

	t37 = (x193^(x194/(x195%x196)));

	if (t37 != 18446744073709463035LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t t38 = 612489937610LL;

	t38 = (x201^(x202/(x203%x204)));

	if (t38 != 344954642LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x213 = -214LL;
	uint32_t x214 = 70U;
	int32_t x216 = -97724;
	volatile uint64_t t39 = 81273370686LLU;

	t39 = (x213^(x214/(x215%x216)));

	if (t39 != 18446744073709551402LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x217 = INT16_MIN;
	volatile int64_t x218 = 8912057448545448LL;
	static int16_t x219 = INT16_MAX;
	int16_t x220 = -5;
	volatile int64_t t40 = -6LL;

	t40 = (x217^(x218/(x219%x220)));

	if (t40 != -4456028724289964LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x221 = 29709287936LL;
	static volatile int8_t x222 = -1;
	int16_t x223 = -1;
	static volatile int64_t x224 = INT64_MAX;
	int64_t t41 = -621LL;

	t41 = (x221^(x222/(x223%x224)));

	if (t41 != 29709287937LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x225 = INT32_MAX;
	static int8_t x226 = 2;
	volatile int8_t x227 = 1;
	uint16_t x228 = 197U;
	volatile int32_t t42 = -19546;

	t42 = (x225^(x226/(x227%x228)));

	if (t42 != 2147483645) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x233 = 280553752341870LLU;
	int8_t x234 = INT8_MIN;
	volatile int32_t x236 = INT32_MIN;
	static volatile uint64_t t43 = 229LLU;

	t43 = (x233^(x234/(x235%x236)));

	if (t43 != 280553752341870LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x237 = -1513956278345LL;
	uint64_t x238 = 1833068LLU;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = 997U;
	static uint64_t t44 = 112LLU;

	t44 = (x237^(x238/(x239%x240)));

	if (t44 != 18446742559753269604LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x245 = 1041355LLU;
	int64_t x246 = 455637626493725LL;
	uint32_t x247 = 4023U;
	static int64_t x248 = INT64_MIN;
	uint64_t t45 = 676LLU;

	t45 = (x245^(x246/(x247%x248)));

	if (t45 != 113258360110LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x251 = -1;
	int64_t x252 = 319879351440LL;
	volatile int64_t t46 = -709395303LL;

	t46 = (x249^(x250/(x251%x252)));

	if (t46 != -2LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x253 = INT32_MIN;
	uint16_t x255 = UINT16_MAX;
	int32_t t47 = INT32_MIN;

	t47 = (x253^(x254/(x255%x256)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x258 = INT64_MIN;
	static uint64_t x259 = 5815986LLU;
	int8_t x260 = -7;
	static uint64_t t48 = 236000958LLU;

	t48 = (x257^(x258/(x259%x260)));

	if (t48 != 1585865584416LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x274 = INT8_MIN;
	uint32_t x275 = 59U;
	volatile uint16_t x276 = 553U;
	volatile int64_t t49 = -306114070LL;

	t49 = (x273^(x274/(x275%x276)));

	if (t49 != -72796054LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x277 = 107U;
	int16_t x278 = -1;
	volatile int32_t x279 = 180836328;
	int32_t t50 = 6;

	t50 = (x277^(x278/(x279%x280)));

	if (t50 != 107) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x285 = INT64_MIN;
	int8_t x286 = INT8_MIN;
	volatile int16_t x288 = INT16_MAX;
	volatile uint64_t t51 = 3317905LLU;

	t51 = (x285^(x286/(x287%x288)));

	if (t51 != 9224120474558095057LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x289 = UINT8_MAX;
	static int8_t x290 = 1;
	volatile uint16_t x291 = 937U;
	int64_t x292 = INT64_MIN;
	volatile int64_t t52 = 30810344085736LL;

	t52 = (x289^(x290/(x291%x292)));

	if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MIN;
	static volatile int64_t t53 = 8830LL;

	t53 = (x297^(x298/(x299%x300)));

	if (t53 != 3074457345618269526LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x301 = INT16_MAX;
	uint64_t x303 = 138596494955884447LLU;
	int64_t x304 = -848337464467527515LL;

	t54 = (x301^(x302/(x303%x304)));

	if (t54 != 32767LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x305 = INT8_MAX;
	static int64_t x306 = -1LL;
	int8_t x307 = -1;
	static int32_t x308 = -7294;

	t55 = (x305^(x306/(x307%x308)));

	if (t55 != 126LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x309 = INT32_MAX;
	int8_t x310 = 44;
	static int16_t x311 = 11;
	uint16_t x312 = 826U;

	t56 = (x309^(x310/(x311%x312)));

	if (t56 != 2147483643) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x313 = 9552LL;
	int8_t x314 = -3;
	uint16_t x315 = 136U;
	int32_t x316 = INT32_MAX;
	int64_t t57 = 671837032528LL;

	t57 = (x313^(x314/(x315%x316)));

	if (t57 != 9552LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x317 = -13794;
	uint32_t x318 = 4200458U;
	uint8_t x319 = UINT8_MAX;
	int16_t x320 = INT16_MIN;
	volatile uint32_t t58 = 311641431U;

	t58 = (x317^(x318/(x319%x320)));

	if (t58 != 4294937158U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	int32_t x323 = -298266;
	uint32_t t59 = 368334317U;

	t59 = (x321^(x322/(x323%x324)));

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x338 = 85679874LLU;
	uint8_t x339 = 13U;
	uint64_t x340 = 2427883471303LLU;
	volatile uint64_t t60 = 55829LLU;

	t60 = (x337^(x338/(x339%x340)));

	if (t60 != 6590758LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x341 = 15LLU;
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MIN;
	volatile int32_t x344 = INT32_MAX;
	static volatile uint64_t t61 = 133937826048628LLU;

	t61 = (x341^(x342/(x343%x344)));

	if (t61 != 14LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x354 = INT8_MIN;
	int32_t x356 = INT32_MAX;
	int64_t t62 = INT64_MAX;

	t62 = (x353^(x354/(x355%x356)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x358 = UINT32_MAX;
	int64_t x359 = INT64_MAX;
	volatile uint8_t x360 = 19U;
	int64_t t63 = -11986LL;

	t63 = (x357^(x358/(x359%x360)));

	if (t63 != 252702960LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x362 = 103684731287136609LLU;
	uint8_t x363 = 3U;
	volatile uint8_t x364 = UINT8_MAX;
	uint64_t t64 = 979851576806LLU;

	t64 = (x361^(x362/(x363%x364)));

	if (t64 != 34561577095717202LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x369 = 32U;
	uint64_t x370 = UINT64_MAX;
	int64_t x372 = -1579093051723480LL;
	uint64_t t65 = 16615608442432LLU;

	t65 = (x369^(x370/(x371%x372)));

	if (t65 != 307445734561825892LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x374 = -1029;
	int32_t x375 = -772;
	static uint64_t x376 = UINT64_MAX;
	volatile uint64_t t66 = 314436284545765350LLU;

	t66 = (x373^(x374/(x375%x376)));

	if (t66 != 18446744073706962383LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int64_t x379 = -1LL;
	volatile int32_t x380 = 12302267;
	uint64_t t67 = 4011010342386844016LLU;

	t67 = (x377^(x378/(x379%x380)));

	if (t67 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x381 = 291;
	int32_t x382 = -15879269;
	uint64_t x383 = 2376692264839775LLU;
	int32_t x384 = INT32_MIN;

	t68 = (x381^(x382/(x383%x384)));

	if (t68 != 8050LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x385 = 109U;
	int64_t x387 = -923386126279501LL;
	int64_t x388 = INT64_MIN;
	static int64_t t69 = -3979838674558LL;

	t69 = (x385^(x386/(x387%x388)));

	if (t69 != 109LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x389 = UINT8_MAX;
	uint64_t x391 = UINT64_MAX;
	static volatile uint64_t t70 = 5LLU;

	t70 = (x389^(x390/(x391%x392)));

	if (t70 != 255LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x393 = INT64_MIN;
	static int16_t x394 = INT16_MIN;
	int64_t x395 = -1LL;
	int32_t x396 = INT32_MIN;
	static volatile int64_t t71 = -303356661686076961LL;

	t71 = (x393^(x394/(x395%x396)));

	if (t71 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x397 = -1LL;
	uint16_t x398 = 7U;
	int64_t x399 = INT64_MIN;
	int16_t x400 = -13;
	volatile int64_t t72 = -25611785445989937LL;

	t72 = (x397^(x398/(x399%x400)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x401 = INT32_MAX;
	int16_t x402 = 640;
	static int64_t x403 = -9080365190270891LL;

	t73 = (x401^(x402/(x403%x404)));

	if (t73 != -2147483635LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x405 = INT8_MIN;
	int32_t x407 = -1;
	int16_t x408 = 3;
	volatile int32_t t74 = 1;

	t74 = (x405^(x406/(x407%x408)));

	if (t74 != 6859) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x409 = 1U;
	uint32_t x410 = UINT32_MAX;
	int64_t x411 = -39268775433206850LL;
	int64_t t75 = -71699343770183572LL;

	t75 = (x409^(x410/(x411%x412)));

	if (t75 != -119304648LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x417 = INT64_MIN;
	volatile int8_t x418 = -1;
	int8_t x419 = -1;
	static int8_t x420 = INT8_MIN;

	t76 = (x417^(x418/(x419%x420)));

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x422 = 1758LLU;
	volatile uint8_t x423 = 37U;
	uint64_t x424 = UINT64_MAX;
	uint64_t t77 = 606566984718LLU;

	t77 = (x421^(x422/(x423%x424)));

	if (t77 != 1080LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x425 = INT32_MIN;
	int16_t x426 = INT16_MAX;
	static volatile int64_t x428 = 4339009LL;
	volatile int64_t t78 = -16219586892737093LL;

	t78 = (x425^(x426/(x427%x428)));

	if (t78 != -2147483648LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x431 = 50597887LLU;
	volatile uint64_t t79 = 1755LLU;

	t79 = (x429^(x430/(x431%x432)));

	if (t79 != 838488366986797111LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x434 = INT32_MIN;
	volatile uint32_t x435 = 7814757U;
	volatile int64_t t80 = 16LL;

	t80 = (x433^(x434/(x435%x436)));

	if (t80 != -6143212LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x437 = INT8_MIN;
	uint8_t x438 = UINT8_MAX;
	uint64_t x439 = 17LLU;
	static uint64_t x440 = 20950298LLU;
	volatile uint64_t t81 = 26384000643LLU;

	t81 = (x437^(x438/(x439%x440)));

	if (t81 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x442 = INT64_MIN;
	uint8_t x443 = UINT8_MAX;
	static int32_t x444 = INT32_MIN;
	volatile int64_t t82 = 1329488978112917LL;

	t82 = (x441^(x442/(x443%x444)));

	if (t82 != -36170086419038081LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x445 = INT32_MAX;
	int16_t x446 = -240;
	static uint32_t x448 = 6689U;

	t83 = (x445^(x446/(x447%x448)));

	if (t83 != 2139364617U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x449 = 376;
	uint8_t x450 = 46U;
	static int16_t x451 = INT16_MIN;
	int64_t x452 = INT64_MIN;
	volatile int64_t t84 = 598LL;

	t84 = (x449^(x450/(x451%x452)));

	if (t84 != 376LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x454 = -1;
	volatile int16_t x455 = INT16_MAX;
	static volatile int64_t x456 = 533919335269463969LL;
	static int64_t t85 = -740919659376LL;

	t85 = (x453^(x454/(x455%x456)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x457 = 2794LL;
	int16_t x458 = -1;
	uint32_t x459 = UINT32_MAX;

	t86 = (x457^(x458/(x459%x460)));

	if (t86 != 2794LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x461 = INT64_MAX;
	static uint8_t x462 = 1U;
	int64_t x463 = 73165LL;
	int32_t x464 = INT32_MIN;
	volatile int64_t t87 = INT64_MAX;

	t87 = (x461^(x462/(x463%x464)));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x465 = 6U;
	volatile int64_t t88 = -61683196LL;

	t88 = (x465^(x466/(x467%x468)));

	if (t88 != -922337203685477582LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x469 = 1969345329LLU;
	int32_t x470 = INT32_MIN;
	volatile uint64_t x471 = UINT64_MAX;
	uint64_t t89 = 7623574031LLU;

	t89 = (x469^(x470/(x471%x472)));

	if (t89 != 1969345328LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x473 = INT16_MIN;
	volatile int32_t x475 = INT32_MIN;
	static uint8_t x476 = 3U;
	static int32_t t90 = 3396;

	t90 = (x473^(x474/(x475%x476)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x482 = 27U;
	uint8_t x483 = UINT8_MAX;
	int64_t x484 = INT64_MAX;
	static int64_t t91 = 887091738207391LL;

	t91 = (x481^(x482/(x483%x484)));

	if (t91 != 56470366LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x485 = UINT64_MAX;
	int64_t x486 = INT64_MIN;
	int16_t x487 = -17;
	int32_t x488 = INT32_MAX;
	uint64_t t92 = 3269LLU;

	t92 = (x485^(x486/(x487%x488)));

	if (t92 != 17904192777423976568LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x493 = 1785U;
	int32_t x494 = INT32_MIN;
	uint32_t x495 = UINT32_MAX;
	uint64_t x496 = 14109LLU;
	volatile uint64_t t93 = 45856152LLU;

	t93 = (x493^(x494/(x495%x496)));

	if (t93 != 4312001886758962LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x501 = UINT64_MAX;
	uint64_t x502 = 4424259559623704975LLU;
	int32_t x503 = INT32_MIN;
	int64_t x504 = INT64_MIN;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (x501^(x502/(x503%x504)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x505 = INT32_MIN;
	volatile int32_t x506 = INT32_MIN;
	volatile uint64_t x508 = 493859442139066682LLU;
	uint64_t t95 = 6LLU;

	t95 = (x505^(x506/(x507%x508)));

	if (t95 != 18374403898749255808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x509 = 0U;
	int64_t x510 = INT64_MAX;
	int64_t x511 = -5LL;

	t96 = (x509^(x510/(x511%x512)));

	if (t96 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x513 = -1;
	uint8_t x514 = 1U;
	uint32_t x515 = 219396U;
	int32_t x516 = 1668;
	static volatile uint32_t t97 = UINT32_MAX;

	t97 = (x513^(x514/(x515%x516)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x519 = INT64_MIN;
	static volatile int64_t t98 = -160LL;

	t98 = (x517^(x518/(x519%x520)));

	if (t98 != 4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x522 = 103832U;
	uint8_t x523 = UINT8_MAX;

	t99 = (x521^(x522/(x523%x524)));

	if (t99 != 18446656051323823187LLU) { NG(); } else { ; }
	
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

